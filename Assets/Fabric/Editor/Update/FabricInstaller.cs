namespace Fabric.Internal.Editor.Update
{
	using UnityEngine;
	using UnityEditor;
	using System.Collections;
	using System.Collections.Generic;
	using System.IO;
	using System;

	internal class FabricInstaller
	{
		internal class Config
		{
			public readonly string PackageUrl;
			public readonly string Filename;
			public readonly string ReleaseNotesUrl;

			public Config(
				string packageUrl,
				string filename,
				string releaseNotesUrl
			)
			{
				PackageUrl = packageUrl;
				Filename = filename;
				ReleaseNotesUrl = releaseNotesUrl;
			}
		}

		public delegate void ReportInstallProgress (float progress);
		public delegate void DownloadComplete (string downloadPath);
		public delegate void DownloadError (System.Exception exception);
		public delegate bool IsCancelled ();

		private Config config;
		private TimeoutWebClient webClient = new TimeoutWebClient (1000 * 30);
		private string releaseNotes = null;

		public FabricInstaller(Config config)
		{
			SwapConfig (config);
		}

		public void SwapConfig(Config config)
		{
			this.config = config;
			this.releaseNotes = null;
		}

		public string FetchReleaseNotes()
		{
			if (releaseNotes != null) {
				return releaseNotes;
			}

			try {
				if (config.ReleaseNotesUrl != null) {
					releaseNotes = webClient.DownloadString (config.ReleaseNotesUrl);
					return releaseNotes;
				}
			} catch (System.Exception e) {
				if (Net.Utils.IsNetworkUnavailableFrom (e)) {
					Utils.Log ("No valid network connection available.");
				} else {
					Utils.Warn ("Couldn't fetch release notes from {0}; {1}", config.ReleaseNotesUrl, e.ToString ());
				}
			}

			releaseNotes = "No release notes available!";
			return releaseNotes;
		}

		public void DownloadAndInstallPackage(
			ReportInstallProgress reportProgress,
			DownloadComplete downloadComplete,
			DownloadError downloadError,
			IsCancelled isCancelled
		)
		{
			string downloadPath = PrepareDownloadFilePath (FileUtil.GetUniqueTempPathInProject (), config.Filename);
			new Detail.AsyncTaskRunnerBuilder<byte[]> ().Do ((object[] args) => {
				return Net.Validator.MakeRequest (() => {
					return API.V1.DownloadFile (config.PackageUrl, (progress) => reportProgress(progress), () => { return isCancelled (); });
				});
			}).OnError ((System.Exception e) => {
				downloadError(e);
				return Detail.AsyncTaskRunner<byte[]>.ErrorRecovery.Nothing;
			}).OnCompletion ((byte[] downloadedBytes) => {
				if (downloadedBytes.Length == 0) {
					return;
				}
				try {
					System.IO.File.WriteAllBytes (downloadPath, downloadedBytes);
					downloadComplete (downloadPath);
					InstallPackage (downloadPath);
				} catch (IOException e) {
					downloadError (e as Exception);
				}
			}).Run ();
		}
		
		private static void InstallPackage(string downloadPath)
		{
			AssetDatabase.ImportPackage (downloadPath, true);
		}

		private static string PrepareDownloadFilePath(string downloadDirPath, string downloadedFileName)
		{
			DirectoryInfo downloadDirectory = new DirectoryInfo (downloadDirPath);
			if (!downloadDirectory.Exists) {
				downloadDirectory.Create ();
			}

			return Path.Combine (downloadDirectory.FullName, downloadedFileName);
		}
	}
}
