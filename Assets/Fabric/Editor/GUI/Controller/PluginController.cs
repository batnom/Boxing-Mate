namespace Fabric.Internal.Editor.Controller
{
	using UnityEngine;
	using UnityEditor;
	using System;
	using System.Net;
	using System.Collections;
	using System.Collections.Generic;
	using System.IO;
	using System.Timers;
	using Fabric.Internal.Editor.Model;
	using Fabric.Internal.Editor.View;
	using Fabric.Internal.Editor.Net.OAuth;
	using Fabric.Internal.Editor.Update;
	using KitsList = System.Collections.Generic.List<Update.Dependency.DependencyGraphObject.DependenciesObject.KitsObject>;
	using KitsObject = Update.Dependency.DependencyGraphObject.DependenciesObject.KitsObject;
	using PluginObject = Update.Dependency.DependencyGraphObject.PluginObject;

	internal class PluginController
	{
		private static Client client = new Client (Net.Constants.URI);

		private static Update.FabricInstaller.Config defaultConfig = new FabricInstaller.Config (
			"https://s3.amazonaws.com/ssl-download-crashlytics-com/unity-fabric/Fabric.unitypackage",
			"Fabric.unitypackage",
			""
		);
		private static Update.FabricInstaller.Config LatestPluginConfig
		{
			get {
				PluginObject latest = Update.PeriodicUpdateManager.PluginDescriptor ();
				return latest == null ? defaultConfig : new FabricInstaller.Config (
					latest.PackageUrl,
					latest.PackageName,
					latest.ReleaseNotesUrl
				);
			}
		}
		private Update.FabricInstaller fabricInstaller = new FabricInstaller (LatestPluginConfig);

		private string password;
		
		private Page login;
		private Page orgs;
		
		private Page validation;
		private Page kitSelection;
		private Page updatePage;
		
		public enum LoginStatus { Unknown, Success, Unauthorized, Other };
		public delegate void LoginAction<T, U>(T password, out U status);
		
		public enum ActivationStatus { Activated, Checking, TimedOut, RefreshRequired, Unknown };
		private volatile ActivationStatus activationStatus = ActivationStatus.Unknown;
		
		private ImportedKit kit;

		private string iconUrl;
		private string dashboardUrl;

		private API.V1 Api
		{
			get {
				return new API.V1 (client.URI, client, Settings.Instance.Token);
			}
		}

		private Detail.AsyncTaskRunnerBuilder<Client.Token> asyncLogin = null;
		private Detail.AsyncTaskRunnerBuilder<Client.Token> AsyncLogin
		{
			get {
				if (asyncLogin == null)
					asyncLogin = new Detail.AsyncTaskRunnerBuilder<Client.Token> ();
				return asyncLogin;
			}
		}
		
		public static PluginController instance;
		public static PluginController Instance
		{
			get {
				if (instance == null)
					instance = new PluginController ();
				return instance;
			}
		}

		public PluginController()
		{
			login = new LoginPage (Login ());
			orgs = new OrganizationsPage (SelectOrganization (), FetchOrganizationsAsync);
			validation = new ValidationPage (QueryForActivation (), ResetActivationStatus ());
			kitSelection = new KitSelectionPage (
				ListAvailableKits,
				KitUtils.ListImportedKits (Api),
				DisplayedKitStatusAndVersion,
				SelectKit (),
				BackToOrganizations (),
				Update.PeriodicUpdateManager.IsPluginUpdateAvailable,
				ShowUpdatePage (() => { return LatestPluginConfig; }, UpdateFlow.Plugin)
			);
			updatePage = new UpdatePage (InitiateUpdate, BackToKitSelection, 
				delegate() {
					return String.IsNullOrEmpty (Settings.Instance.Kit) ? "Fabric Plugin" : Settings.Instance.Kit;
				},
				delegate () {
					return fabricInstaller.FetchReleaseNotes ();
				}
			);
		}

		#region Update
		internal enum UpdateFlow
		{
			Plugin = 100,
			Kit = 200
		}

		private Action ShowUpdatePage(Func<Update.FabricInstaller.Config> config, UpdateFlow updateFlow)
		{
			return delegate() {
				if (!Update.PeriodicUpdateManager.Suspend ()) {
					// As an end-user, the probability of seeing this message is low.
					Utils.Log ("Dependency graph refresh is in progress...");
					return;
				}

				fabricInstaller.SwapConfig (config ());
				switch (updateFlow) {
				case UpdateFlow.Plugin:
					Settings.Instance.FlowSequence = (int)UpdateFlow.Plugin;
					break;
				case UpdateFlow.Kit:
					Settings.Instance.FlowSequence = (int)UpdateFlow.Kit;
					break;
				}
			};
		}

		private void BackToKitSelection()
		{
			Settings.Instance.FlowSequence = 0;
			Settings.Instance.Kit = null;
		}

		private void InitiateUpdate(
			Action<float> reportProgress,
			Action<string> downloadComplete,
			Action<System.Exception> downloadError,
			Func<bool> isCancelled
		)
		{
			fabricInstaller.DownloadAndInstallPackage (
				new FabricInstaller.ReportInstallProgress (reportProgress),
				new FabricInstaller.DownloadComplete (downloadComplete),
				new FabricInstaller.DownloadError(downloadError),
				new FabricInstaller.IsCancelled(isCancelled)
			);
		}
		#endregion

		private void FetchOrganizationsAsync(Action<List<Organization>> onSuccess, Action<string> onFailure)
		{
			API.AsyncV1.Fetch<List<Organization>> (onSuccess, onFailure, (API.V1 api) => {
				return api.Organizations ();
			});
		}
		
		#region ResetActivationStatus
		public Action ResetActivationStatus()
		{
			return delegate() {
				activationStatus = ActivationStatus.Unknown;
			};
		}
		#endregion
		
		#region QueryForActivation

		private void ActivationSuccessful(App activatedApp)
		{
			iconUrl = activatedApp.IconUrl;
			dashboardUrl = activatedApp.DashboardUrl;
			activationStatus = ActivationStatus.Activated;
		}

		private void ActivationTimedOut(string message)
		{
			activationStatus = ActivationStatus.TimedOut;
		}

		public Func<ActivationStatus> QueryForActivation()
		{
			return delegate() {
				if (activationStatus == ActivationStatus.Unknown) {
					activationStatus = ActivationStatus.Checking;

					string bundleIdentifier = PlayerSettings.bundleIdentifier;
					string organization = Settings.Instance.Organization.Name;
					BuildTarget buildTarget = EditorUserBuildSettings.activeBuildTarget;

					API.AsyncV1.Fetch<App> (600, new TimeSpan (0, 0, 10), ActivationSuccessful, ActivationTimedOut, (API.V1 api) => {
						foreach (App app in api.ApplicationsFor (organization, api.Organizations ())) {
							bool matchesBundleId = app.BundleIdentifier.Equals (bundleIdentifier, StringComparison.OrdinalIgnoreCase);
							bool matchesSdk = app.SdkKits.Exists (k => k.Name.Equals (kit.Name, StringComparison.OrdinalIgnoreCase));
							bool matchesPlatform = app.Platform == buildTarget;

							if (matchesBundleId && matchesSdk && matchesPlatform) {
								return app;
							}
						}

						throw new API.V1.ApiException ("");
					});
				}

				return activationStatus;
			};
		}

		#endregion
		
		#region PageFromState

		private static bool NoAuthToken()
		{
			return Settings.Instance.Token == null;
		}

		private static bool NoOrganizationSelected()
		{
			return Settings.Instance.Organization == null || String.IsNullOrEmpty (Settings.Instance.Organization.Name);
		}

		private bool KitIsActivated()
		{
			return activationStatus == ActivationStatus.Activated;
		}

		private void MarkKitAsInstalled()
		{
			Settings.Instance.Kit = null;
			Settings.InstalledKit installed = Settings.Instance.InstalledKits.Find (k => k.Name.Equals (kit.Name));
			installed.Installed = true;
			installed.Enabled = true;
			
			Settings.Instance.IconUrl = iconUrl;
			Settings.Instance.DashboardUrl = dashboardUrl;
			Settings.Instance.FlowSequence = 0;
			
			activationStatus = ActivationStatus.Unknown;
		}

		private bool NoKitSelected()
		{
			return String.IsNullOrEmpty (Settings.Instance.Kit) || kit == null || kit.Instance == null;
		}

		private static bool PluginUpdateInProgress()
		{
			return Settings.Instance.FlowSequence == (int)UpdateFlow.Plugin;
		}

		private static bool KitUpdateInProgress()
		{
			return Settings.Instance.FlowSequence == (int)UpdateFlow.Kit;
		}

		private void RecreateKitInstance()
		{
			if (kit == null) {
				if (!String.IsNullOrEmpty (Settings.Instance.Kit)) {
					kit = KitUtils.ListImportedKits (Api)().Find (k => k.Name.Equals (Settings.Instance.Kit));
				}
			}
		}

		private static void CleanKitUpgrade(string name)
		{
			Update.PeriodicUpdateManager.Continue ();

			KitsObject kitsObject = Update.PeriodicUpdateManager.LatestAvailableKitsVersions ().Find (
				k => k.Name.Equals (name, StringComparison.OrdinalIgnoreCase)
			);

			if (kitsObject != null) {
				Detail.Runner.StartCoroutine (new Custodian (kitsObject.Manifest).Clean ());
			}
		}

		private static void CleanPluginUpgrade()
		{
			Update.PeriodicUpdateManager.Continue ();

			PluginObject pluginObject = Update.PeriodicUpdateManager.PluginDescriptor ();

			if (pluginObject != null) {
				Detail.Runner.StartCoroutine (new Custodian (pluginObject.Manifest).Clean ());
			}
		}

		public static bool LegacyUpdateFlow()
		{
			return Settings.Instance.FlowSequence == 1;
		}

		public Page PageFromState()
		{
			if (NoAuthToken ()) {
				return login;
			}
			
			if (NoOrganizationSelected ()) {
				return orgs;
			}

			if (KitIsActivated ()) {
				MarkKitAsInstalled ();
			}

			RecreateKitInstance ();

			if (PluginUpdateInProgress () && Update.PeriodicUpdateManager.IsPluginUpdateAvailable () && NoKitSelected ()) {
				return updatePage;
			}

			if (KitUpdateInProgress ()) {
				if (KitUtils.IsKitInstalled (Settings.Instance.Kit)) {
					if (!Update.PeriodicUpdateManager.IsKitUpdateAvailable (kit.Name, kit.Instance.Version ())) {
						// At this point, the upgrade is done for the given kit. Since this kit was previously
						// installed, we do not need to go through the flow.

						CleanKitUpgrade (kit.Name);
						BackToKitSelection ();
						return kitSelection;
					}

					// Waiting for the import to finish.
					return updatePage;
				}
				
				if (kit != null && Update.PeriodicUpdateManager.IsKitUpdateAvailable (kit.Name, kit.Instance.Version ()) || kit == null) {
					return updatePage;
				} else {
					CleanKitUpgrade (kit.Name);

					// Trigger the kit flow.
					Settings.Instance.FlowSequence = 0;
				}
			}

			if (NoKitSelected ()) {
				if (Settings.Instance.FlowSequence == (int)UpdateFlow.Plugin || LegacyUpdateFlow ()) {
					CleanPluginUpgrade ();
				}

				Settings.Instance.FlowSequence = 0;
				return kitSelection;
			}
			
			Page page = null;
			KitControllerStatus status = kit.Instance.PageFromState (out page);
			
			switch (status) {
			case KitControllerStatus.NextPage:
				return page;
			case KitControllerStatus.LastPage:
				return validation;
			case KitControllerStatus.CurrentPage:
				Settings.Instance.Kit = "";
				break;
			}

			return kitSelection;
		}

		#endregion

		#region Login
		private static Detail.AsyncTaskRunner<Client.Token>.ErrorRecovery OnLoginError(System.Exception e, Action<string> messageOnError)
		{
			if (Net.Utils.IsNetworkUnavailableFrom (e)) {
				messageOnError ("Network connection is not available.");
				return Detail.AsyncTaskRunner<Client.Token>.ErrorRecovery.Nothing;
			}

			Utils.Warn ("An exception has occured; {0}", e.Message);

			if (!(e is WebException)) {
				messageOnError ("Please contact support@fabric.io");
				return Detail.AsyncTaskRunner<Client.Token>.ErrorRecovery.Nothing;
			}
			
			WebException webException = e as WebException;
			HttpWebResponse response = webException.Response as HttpWebResponse;
			
			if (response != null && response.StatusCode == HttpStatusCode.Unauthorized) {
				messageOnError ("Invalid Credentials");
				return Detail.AsyncTaskRunner<Client.Token>.ErrorRecovery.Nothing;
			}
			
			messageOnError ("Network Error!");
			return Detail.AsyncTaskRunner<Client.Token>.ErrorRecovery.Nothing;
		}

		private Action<string, Action<string>> Login()
		{
			return delegate(string password, Action<string> messageOnError) {
				AsyncLogin.Do (delegate (object[] args) {
					return Net.Validator.MakeRequest (
						() => { return client.Get (args[0] as string, args[1] as string); }
					);
				}).OnError ((System.Exception e) => {
					return OnLoginError (e, messageOnError);
				}).OnCompletion ((Client.Token token) => {
					Settings.Instance.Token = token;
				}).Run (Settings.Instance.Email, password);
			};
		}
		#endregion
		
		#region SelectOrganization
		private static Action<Organization> SelectOrganization()
		{
			return delegate(Organization organization) {
				Settings.Instance.FlowSequence = 0;
				Settings.Instance.Organization = organization;
			};
		}
		#endregion

		#region BackToOrganizations
		private static Action BackToOrganizations()
		{
			return delegate() {
				Settings.Instance.FlowSequence = 0;
				Settings.Instance.Organization = null;
			};
		}
		#endregion
		
		#region SelecKit
		private Action<KitsObject, ImportedKit, DisplayedKitStatus> SelectKit()
		{
			return delegate(KitsObject availableKit, ImportedKit importedKit, DisplayedKitStatus status) {
				string kitName = importedKit != null ? importedKit.Name : availableKit.Name;

				if (Update.PeriodicUpdateManager.IsPluginUpdateRequired (kitName)) {
					EditorUtility.DisplayDialog (
						"A plugin update is required",
						kitName + " requires a newer version of the Fabric Plugin, please update by clicking 'View Update'.",
						"OK"
					);
					return;
				}

				if (importedKit != null) {
					// If the latest version of a kit is installed, or the latest version is imported into the project,
					// start the normal kit flow.
					if (status == DisplayedKitStatus.Installed || importedKit.Instance.Version () == new System.Version (availableKit.Version)) {
						Settings.Instance.FlowSequence = 0;
						Settings.Instance.Kit = importedKit.Name;
						this.kit = importedKit;
						return;
					}
				}

				// Kit is imported, but not at the latest version, or the kit is not imported. This means
				// we need to download the newest version.
				FabricInstaller.Config config = new FabricInstaller.Config (
					availableKit.PackageUrl,
					availableKit.PackageName,
					availableKit.ReleaseNotesUrl
				);

				kit = null;

				Settings.Instance.FlowSequence = (int)UpdateFlow.Kit;
				Settings.Instance.Kit = kitName;

				List<string> kitsToUpdateDueToDependencies = Update.PeriodicUpdateManager.Resolve (Settings.Instance.Kit);

				if (kitsToUpdateDueToDependencies.Count == 0) {
					ShowUpdatePage (() => { return config; }, UpdateFlow.Kit)();
					return;
				}

				//TODO: implement dependency resolution
				Utils.Log ("There is a dependency issue that needs resolution");
			};
		}
		#endregion

		#region DisplayedKitStatusAndVersion
		private static KeyValuePair<DisplayedKitStatus, Version> DisplayedKitStatusAndVersion(KitsObject kit, ImportedKit imported)
		{
			DisplayedKitStatus kitStatus = DisplayedKitStatus.NotInstalled;
			System.Version kitVersion = new System.Version (kit.Version);
			
			if (imported != null && imported.Status == ImportedKit.InstallationStatus.Installed) {
				kitVersion = imported.Instance.Version ();
				kitStatus = kitVersion < new System.Version (kit.Version) ? DisplayedKitStatus.UpgradeAvailable : DisplayedKitStatus.Installed;
			}

			return new KeyValuePair<DisplayedKitStatus, Version> (kitStatus, kitVersion);
		}
		#endregion

		#region ListAvailableKits
		public KitsList ListAvailableKits()
		{
			return Update.PeriodicUpdateManager.LatestAvailableKitsVersions ();
		}
		#endregion
	}
}
