namespace Fabric.Internal.Editor.Model
{
	using Fabric.Internal.Editor.Controller;

	// This class is a reification of a kit's Controller. In other words, this
	// is the result of the reflection that takes place in parts of the plugin.
	internal class ImportedKit
	{
		public enum InstallationStatus {
			Installed, 						// The latest version of the kit is installed
			NotInstalled					// The kit is not imported, nor installed
		};

		public readonly string Name;
		public readonly KitController Instance;
		public readonly InstallationStatus Status;

		public ImportedKit(string name, object instance, InstallationStatus status)
		{
			Name = name;
			Instance = (KitController)instance;
			Status = status;
		}
	}
}
