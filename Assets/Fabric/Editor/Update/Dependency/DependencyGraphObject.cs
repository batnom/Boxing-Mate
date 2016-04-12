namespace Fabric.Internal.Editor.Update.Dependency
{
	using System.Collections.Generic;
	using Fabric.Internal.ThirdParty.MiniJSON;

	internal class DependencyGraphObject
	{
		#region PluginObject
		internal class PluginObject
		{
			public readonly string Version;
			public readonly string Manifest;
			public readonly string PackageUrl;
			public readonly string PackageName;
			public readonly string ReleaseNotesUrl;

			private PluginObject(string version, string manifest, string packageUrl, string packageName, string releaseNotesUrl)
			{
				Version = version;
				Manifest = manifest;
				PackageUrl = packageUrl;
				PackageName = packageName;
				ReleaseNotesUrl = releaseNotesUrl;
			}

			public static PluginObject From(Dictionary<string, object> untyped)
			{
				return new PluginObject (
					untyped ["version"] as string,
					untyped ["manifest"] as string,
					untyped ["packageUrl"] as string,
					untyped ["packageName"] as string,
					untyped ["releaseNotesUrl"] as string
				);
			}
		}
		#endregion

		#region DependenciesObject
		internal class DependenciesObject
		{
			#region KitsObject
			internal class KitsObject
			{
				public readonly string Name;
				public readonly string Version;
				public readonly string PackageUrl;
				public readonly string PackageName;
				public readonly string Manifest;
				public readonly string ReleaseNotesUrl;
				public readonly List<string> DependsOn;
				public readonly string MinimumPluginVersion;

				private KitsObject(
					string name,
					string version,
					string packageUrl,
					string packageName,
					string manifest,
					string releaseNotesUrl,
					List<string> dependsOn,
					string minimumPluginVersion
				)
				{
					Name = name;
					Version = version;
					PackageUrl = packageUrl;
					PackageName = packageName;
					Manifest = manifest;
					ReleaseNotesUrl = releaseNotesUrl;
					DependsOn = dependsOn;
					MinimumPluginVersion = minimumPluginVersion;
				}

				public static List<KitsObject> From(List<object> untyped)
				{
					List<KitsObject> deserialized = new List<KitsObject> ();

					foreach (object o in untyped) {
						Dictionary<string, object> typed = o as Dictionary<string, object>;

						deserialized.Add (new KitsObject (
							typed ["name"] as string,
							typed ["version"] as string,
							typed ["packageUrl"] as string,
							typed ["packageName"] as string,
							typed ["manifest"] as string,
							typed ["releaseNotesUrl"] as string,
							typed ["dependsOn"] as List<string>,
							typed ["minimumPluginVersion"] as string
						));
					}

					return deserialized;
				}
			}
			#endregion

			public readonly List<KitsObject> Kits;
			public readonly List<string> Incompatibilities;
			public readonly List<string> Onboardable;

			private DependenciesObject(List<KitsObject> kits, List<string> incompatibilities, List<string> onboardable)
			{
				Kits = kits;
				Incompatibilities = incompatibilities;
				Onboardable = onboardable;
			}

			public static DependenciesObject From(Dictionary<string, object> untyped)
			{
				return new DependenciesObject (
					KitsObject.From (untyped ["kits"] as List<object>),
					untyped ["incompatibility"] as List<string>,
					untyped ["onboardable"] as List<string>
				);
			}
		}
		#endregion

		public readonly string Version;
		public readonly PluginObject Plugin;
		public readonly DependenciesObject Dependencies;

		private DependencyGraphObject(string version, PluginObject pluginObject, DependenciesObject dependenciesObject)
		{
			Version = version;
			Plugin = pluginObject;
			Dependencies = dependenciesObject;
		}

		private static DependencyGraphObject V1(Dictionary<string, object> deserialized)
		{
			// This is a naive implementation. Once a V2 is necessary, we can revisit this.
			return new DependencyGraphObject (
				deserialized ["version"] as string,
				PluginObject.From (deserialized ["plugin"] as Dictionary<string, object>),
				DependenciesObject.From (deserialized ["dependencies"] as Dictionary<string, object>)
			);
		}

		private static DependencyGraphObject FromVersion(Dictionary<string, object> deserialized, System.Version schemaVersion)
		{
			switch (schemaVersion.Major) {
			case 0:
				return V1 (deserialized);
			default:
				throw new System.Exception ("Unsupported dependency graph version, please upgrade the plugin!");
			}
		}

		public static DependencyGraphObject FromJson(string raw)
		{
			try {
				Dictionary<string, object> deserialized = Json.Deserialize (raw) as Dictionary<string, object>;
				return FromVersion (deserialized, new System.Version (deserialized ["version"] as string));
			} catch (System.Exception e) {
				Utils.Error ("Couldn't deserialize dependency graph; {0}", e.ToString ());
				return null;
			}
		}
	}
}
