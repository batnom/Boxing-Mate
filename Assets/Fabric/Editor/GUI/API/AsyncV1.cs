namespace Fabric.Internal.Editor.API
{
	using Fabric.Internal.Editor.Net.OAuth;
	using Fabric.Internal.Editor.Model;
	using System;
	using System.Collections.Generic;

	internal class AsyncV1
	{
		private static Client client = new Client (Net.Constants.URI);

		public static void Fetch<T>(Action<T> onSuccess, Action<string> onFailure, Func<API.V1, T> fetch)
		{
			Fetch<T> (1, new TimeSpan (0), onSuccess, onFailure, fetch);
		}

		public static void Fetch<T>(uint retryCount, TimeSpan retryDelay, Action<T> onSuccess, Action<string> onFailure, Func<API.V1, T> fetch)
		{
			Client.Token token = Settings.Instance.Token;

			new Detail.AsyncTaskRunnerBuilder<T> ().Do ((object[] args) => {
				return Net.Validator.MakeRequest (() => {
					return fetch (new API.V1 (
						client.URI,
						client,
						token
					));
				});
			}).OnError ((System.Exception e) => {
				string error = e.Message;

				if (Net.Utils.IsNetworkUnavailableFrom (e)) {
					onFailure ("Network is not available.");
					return Detail.AsyncTaskRunner<T>.ErrorRecovery.Nothing;
				}

				if (e is API.V1.UnauthorizedException) {
					try {
						token = RefreshToken ();
						return Detail.AsyncTaskRunner<T>.ErrorRecovery.Retry;
					} catch (System.Exception refreshException) {
						error = refreshException.Message;
					}
				} else if (e is API.V1.ApiException) {
					return Detail.AsyncTaskRunner<T>.ErrorRecovery.Retry;
				}
				
				onFailure ("Request failed, " + error);
				return Detail.AsyncTaskRunner<T>.ErrorRecovery.Nothing;
			}).OnCompletion ((T result) => {
				onSuccess (result);
			}).Retry (retryCount, retryDelay).Run ();
		}

		private static Client.Token RefreshToken()
		{
			Settings.Instance.Token = client.Refresh (Settings.Instance.Token);
			return Settings.Instance.Token;
		}
	}
}
