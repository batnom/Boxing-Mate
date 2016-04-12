namespace Fabric.Internal.Editor.View
{
	using UnityEngine;
	using UnityEditor;
	using System.Collections;
	using System.Collections.Generic;
	using System;
	using Fabric.Internal.Editor.Controller;
	using Fabric.Internal.Editor.Model;
	using KitsList = System.Collections.Generic.List<Update.Dependency.DependencyGraphObject.DependenciesObject.KitsObject>;
	using KitsObject = Update.Dependency.DependencyGraphObject.DependenciesObject.KitsObject;
	
	internal class KitSelectionPage : Page
	{
		public delegate bool CheckUpdateAvailable ();

		private readonly CheckUpdateAvailable isUpdateAvailable;

		private Func<List<ImportedKit>> listImportedKits;
		private Func<KitsList> listAvailableKits;
		private Func<KitsObject, ImportedKit, KeyValuePair<DisplayedKitStatus, Version>> displayedKitStatusAndVersion;

		private Action<KitsObject, ImportedKit, DisplayedKitStatus> onKitSelected;
		private KeyValuePair<string, Action> back;
		private KeyValuePair<string, Action> viewUpdateClickHandler;
		
		private KitsList availableKits;
		private List<ImportedKit> importedKits;

		public KitSelectionPage(
			Func<KitsList> listAvailableKits,
			Func<List<ImportedKit>> listImportedKits,
			Func<KitsObject, ImportedKit, KeyValuePair<DisplayedKitStatus, Version>> displayedKitStatusAndVersion,
			Action<KitsObject, ImportedKit, DisplayedKitStatus> onKitSelected,
			Action onBackClicked,
			CheckUpdateAvailable isUpdateAvailable,
			Action showUpdatePage
		)
		{
			this.listImportedKits = listImportedKits;
			this.listAvailableKits = listAvailableKits;
			this.displayedKitStatusAndVersion = displayedKitStatusAndVersion;
			this.onKitSelected = onKitSelected;
			this.back = new KeyValuePair<string, Action> ("Back", onBackClicked);
			this.viewUpdateClickHandler = new KeyValuePair<string, Action> ("View Update", showUpdatePage);
			this.isUpdateAvailable = isUpdateAvailable;

			Update.PeriodicPinger.Enqueue (new Analytics.Events.PageViewEvent {
				ScreenName = "KitSelectionPage",
			});
		}
		
		#region Components
		private static class Components
		{
			private static readonly GUIStyle RowStyle;
			private static readonly GUIStyle ScrollStyle;
			
			private static readonly Color32 SelectedColor = View.Render.LBlue;
			private static readonly Color32 RowColor = View.Render.FromHex (0x2B6591);
			
			private static Vector2 scroll;
			
			private static readonly int padding = 16;
			
			static Components()
			{
				RowStyle = new GUIStyle (GUI.skin.button);
				ScrollStyle = new GUIStyle (GUI.skin.scrollView);

				RowStyle.padding = new RectOffset (padding, padding, padding, padding);
				RowStyle.alignment = TextAnchor.MiddleLeft;
				RowStyle.fontSize = 14;
				RowStyle.normal.textColor = Color.white;
				RowStyle.richText = true;
				
				int rowHeight = RowStyle.normal.background.height;
				int rowWidth = RowStyle.normal.background.width;
				
				RowStyle.normal.background = View.Render.MakeBackground (rowWidth, rowHeight, RowColor);
				RowStyle.hover.background = View.Render.MakeBackground (rowWidth, rowHeight, SelectedColor);
				
				ScrollStyle.margin.top = 18;
				ScrollStyle.margin.bottom = 18 + 75;
				ScrollStyle.margin.left = 18;
				ScrollStyle.margin.right = 16;
			}

			private static string Stylize(string raw, string color = "silver")
			{
				string prefix = "<size=10><color=" + color + ">";
				string suffix = "</color></size>";

				return prefix + raw + suffix;
			}

			private static string Separate(string name, string status)
			{
				return name + " " + status;
			}

			private static string MakeRowCaption(string name, string installedVersion, string availableVersion, DisplayedKitStatus status)
			{
				switch (status) {
				case DisplayedKitStatus.Installed:
					return Separate (name, Stylize ("Installed (v. " + installedVersion + ")"));
				case DisplayedKitStatus.NotInstalled:
					return Separate (name, Stylize ("Available (v. " + availableVersion + ")"));
				case DisplayedKitStatus.UpgradeAvailable:
					//This is not used at the moment
					return Separate (name, Stylize ("Update Available (v. " + availableVersion + ")", "orange"));
				default:
					return Separate (name, Stylize ("Unknown"));
				}
			}
			
			public static void RenderKitList(
				ref KitsList availableKits,
				ref List<ImportedKit> importedKits,
				Action<KitsObject, ImportedKit, DisplayedKitStatus> onSelected,
				Func<KitsObject, ImportedKit, KeyValuePair<DisplayedKitStatus, Version>> displayedKitStatusAndVersion,
				bool disabled
			)
			{
				if (availableKits == null)
					return;
				
				scroll = GUILayout.BeginScrollView (scroll, ScrollStyle);

				GUI.enabled = !disabled;
				foreach (var kit in availableKits) {
					ImportedKit imported = null;
					
					if (importedKits != null) {
						imported = importedKits.Find ((ImportedKit k) => {
							return k.Name.ToLower ().Equals (kit.Name.ToLower ());
						});
					}

					KeyValuePair<DisplayedKitStatus, Version> status = displayedKitStatusAndVersion (kit, imported);

					if (GUILayout.Button (MakeRowCaption(
						kit.Name,
						status.Value.ToString (),
						kit.Version.ToString (),
						status.Key
					), RowStyle)) {
						onSelected (kit, imported, status.Key);

						importedKits = null;
						availableKits = null;
					}
				}
				GUI.enabled = true;
				
				GUILayout.EndScrollView ();
			}
		}
		#endregion
		
		public override void RenderImpl(Rect position)
		{
			if (isUpdateAvailable ()) {
				RenderBanner ("Fabric plugin update available", viewUpdateClickHandler);
			}

			RenderHeader ("Please select a kit to install");

			bool hasInstalledKits = Settings.Instance.InstalledKits.FindAll (k => k.Installed).Count > 0;

			if (EditorApplication.isCompiling || hasInstalledKits) {
				RenderFooter (null, null);
			} else {
				RenderFooter (back, null);
			}

			importedKits = importedKits == null ? listImportedKits () : importedKits;
			availableKits = listAvailableKits ();
			
			Components.RenderKitList (
				ref availableKits,
				ref importedKits,
				onKitSelected,
				displayedKitStatusAndVersion,
				EditorApplication.isCompiling
			);
		}
	}
}