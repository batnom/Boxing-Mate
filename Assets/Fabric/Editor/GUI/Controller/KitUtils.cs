namespace Fabric.Internal.Editor.Controller
{
	using System;
	using System.Collections.Generic;
	using System.IO;
	using Fabric.Internal.Editor.Model;
	using Fabric.Internal.Editor.Update;

	internal class KitUtils
	{
		public static bool IsKitInstalled(string name)
		{
			var found = Settings.Instance.InstalledKits.Find (k => k.Name.ToLower ().Equals (name.ToLower ()));
			return found != null && found.Installed;
		}

		private static ImportedKit.InstallationStatus ImportedKitInstallationStatus(string name)
		{
			Settings.InstalledKit installedKit = Settings.Instance.InstalledKits.Find (kit => kit.Name.Equals (name));
			return installedKit != null && installedKit.Installed ? ImportedKit.InstallationStatus.Installed : ImportedKit.InstallationStatus.NotInstalled;
		}

		public static Func<List<ImportedKit>> ListImportedKits(API.V1 api)
		{
			return delegate() {
				string root = FileUtils.Root + FileUtils.NormalizePathForPlatform ("/Fabric/Kits/");

				List<ImportedKit> kits = new List<ImportedKit> ();

				if (!Directory.Exists (root)) {
					return kits;
				}

				foreach (string kit in Directory.GetDirectories (root)) {
					string unqualified = kit.Substring (kit.LastIndexOf (Path.DirectorySeparatorChar) + 1);
					string qualified = String.Format ("Fabric.Internal.{0}.Editor.Controller.Controller", unqualified);

					Type type = Type.GetType (qualified);

					// Those kits without a controller will not be displayed in the KitSelector
					// as they do not have a GUI component to them.
					if (type == null) {
						continue;
					}
					object instance = Activator.CreateInstance (type, api);
					ImportedKit.InstallationStatus status = ImportedKitInstallationStatus (unqualified);

					kits.Add (new ImportedKit (unqualified, instance, status));
				}

				return kits;
			};
		}
	}
}
