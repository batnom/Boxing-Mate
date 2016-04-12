namespace Fabric.Internal.Editor.Update.Dependency
{
	using System.IO;
	using System.Collections.Generic;
	using KitsList = System.Collections.Generic.List<DependencyGraphObject.DependenciesObject.KitsObject>;
	using KitsObject = DependencyGraphObject.DependenciesObject.KitsObject;

	internal class DependencyGraphManager
	{
		private static readonly System.TimeSpan SuspendTimeout = new System.TimeSpan (0, 10, 0); // 10 minutes
		private static readonly System.TimeSpan ManageTimeout = new System.TimeSpan (1, 0, 0); // 1 hour

		private static readonly string persistencePath = Path.Combine (
			FileUtils.Root,
			FileUtils.NormalizePathForPlatform ("Fabric/DependencyGraph.json")
		);
		private DependencyGraphObject current = null;
		private object monitorObj = new object ();

		public DependencyGraphManager()
		{
			if (!File.Exists (persistencePath)) {
				// Although a missing dependency graph is unusual, we hope that it
				// will be renewed next time we check for updates.
				Utils.Warn ("Couldn't load dependency graph ({0})", persistencePath);
				return;
			}

			current = DependencyGraphObject.FromJson (File.ReadAllText (persistencePath));
		}

		public bool Suspend()
		{
			return System.Threading.Monitor.TryEnter (monitorObj, SuspendTimeout);
		}

		public void Continue()
		{
			System.Threading.Monitor.Exit (monitorObj);
		}

		public bool Manage(string json)
		{
			if (!System.Threading.Monitor.TryEnter (monitorObj, ManageTimeout)) {
				Utils.Log ("Plugin or kit update is in progress, delaying managing new dependency graph");
				return false;
			}

			try {
				DependencyGraphObject latest = DependencyGraphObject.FromJson (json);

				if (current == null || IsNewer (current.Version, latest.Version)) {
					File.WriteAllText (persistencePath, json);
					current = latest;
					Utils.Log ("Updated dependency graph to {0}", latest.Version);
				}
			} finally {
				System.Threading.Monitor.Exit (monitorObj);
			}

			return true;
		}

		public List<string> Resolve(string name)
		{
			// To be implemented. An empty list means that no kits need upgrading given the intent to install 'name'.
			return new List<string> ();
		}

		private static bool IsNewer(string current, string recent)
		{
			return new System.Version (recent) > new System.Version (current);
		}

		public DependencyGraphObject.PluginObject PluginDescriptor()
		{
			return current != null ? current.Plugin : null;
		}

		public System.Version LatestAvailablePluginVersion()
		{
			return current != null ? new System.Version (current.Plugin.Version) : Fabric.Internal.Editor.Info.Version;
		}

		public KitsList LatestAvailableKitVersions()
		{
			return current != null ? current.Dependencies.Kits : new KitsList ();
		}
	}
}