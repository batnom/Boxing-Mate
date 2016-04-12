namespace Fabric.Internal.Editor.View
{
	using UnityEngine;
	using UnityEditor;
	using System.Collections.Generic;
	using System.Collections;
	using System;
	using Fabric.Internal.Editor.Controller;
	
	internal class ValidationPage : Page
	{
		private static readonly Texture2D Rocket = Images.Loader.Load ("image.rocket.png");
		private static readonly Texture2D[] Spinner = {
			Images.Loader.Load ("spinner_0.gif"),
			Images.Loader.Load ("spinner_1.gif"),
			Images.Loader.Load ("spinner_2.gif"),
			Images.Loader.Load ("spinner_3.gif"),
			Images.Loader.Load ("spinner_4.gif"),
			Images.Loader.Load ("spinner_5.gif"),
			Images.Loader.Load ("spinner_6.gif"),
			Images.Loader.Load ("spinner_7.gif"),
			Images.Loader.Load ("spinner_8.gif"),
			Images.Loader.Load ("spinner_9.gif"),
			Images.Loader.Load ("spinner_10.gif"),
			Images.Loader.Load ("spinner_11.gif")
		};

		private static readonly View.Animation.Driver Driver = new View.Animation.Driver ((uint)Spinner.Length);

		private KeyValuePair<string, Action> retry;

		private Func<PluginController.ActivationStatus> Validate;

		public ValidationPage(Func<PluginController.ActivationStatus> validate, Action reset)
		{
			this.Validate = validate;

			retry = new KeyValuePair<string, Action> ("Retry!", delegate() {
				reset ();
			});
		}

		#region Components
		private static class Components
		{
			private static readonly GUIStyle MessageStyle;
			private static readonly GUIStyle TextStyle;
			private static readonly GUIStyle ErrorTextStyle;

			private static readonly GUIStyle RocketStyle;
			private static readonly GUIStyle SpinnerStyle;

			private static readonly Color ErrorColor;
			
			static Components()
			{
				ErrorColor = View.Render.FromHex (0xF39C12);

				MessageStyle = new GUIStyle ();
				MessageStyle.margin = new RectOffset (20, 20, 10, 0);

				TextStyle = new GUIStyle (GUI.skin.label);
				TextStyle.normal.textColor = Color.white;
				TextStyle.fontSize = 14;
				TextStyle.wordWrap = true;
				TextStyle.padding = new RectOffset (0, 0, 0, 0);

				ErrorTextStyle = new GUIStyle (TextStyle);
				ErrorTextStyle.normal.textColor = ErrorColor;

				RocketStyle = new GUIStyle ();
				RocketStyle.fixedWidth = 277;
				RocketStyle.margin = new RectOffset (0, 0, 50, 0);

				SpinnerStyle = new GUIStyle ();
				SpinnerStyle.stretchWidth = false;
				SpinnerStyle.margin = new RectOffset (0, 10, 0, 0);
			}

			public static void RenderMessage(string message)
			{
				GUILayout.BeginHorizontal (MessageStyle);
				GUILayout.Label (message, TextStyle);
				GUILayout.EndHorizontal ();
			}

			public static void RenderRocket()
			{
				GUILayout.BeginHorizontal ();
				GUILayout.FlexibleSpace ();
				GUILayout.Label (Rocket, RocketStyle);
				GUILayout.FlexibleSpace ();
				GUILayout.EndHorizontal ();
			}

			public static void RenderWaitingMessage(string message)
			{
				GUILayout.BeginHorizontal (MessageStyle);
				GUILayout.FlexibleSpace ();
				Texture2D frame = Spinner [Driver.Frame];
				GUILayout.Label (frame, SpinnerStyle);
				GUILayout.Label (message, TextStyle);
				GUILayout.FlexibleSpace ();
				GUILayout.EndHorizontal ();
			}

			public static void RenderError(string message, string linkText)
			{
				GUILayout.BeginVertical (MessageStyle);
				RenderErrorMessage (message);
				RenderSupportLink (linkText);
				GUILayout.EndVertical ();
			}

			private static void RenderErrorMessage(string message)
			{
				GUILayout.BeginHorizontal ();
				GUILayout.FlexibleSpace ();
				GUILayout.Label (message, ErrorTextStyle);
				GUILayout.FlexibleSpace ();
				GUILayout.EndHorizontal ();
			}

			private static void RenderSupportLink(string linkText)
			{
				GUILayout.BeginHorizontal ();
				GUILayout.FlexibleSpace ();

				if (GUILayout.Button (linkText, ErrorTextStyle)) {
					Application.OpenURL ("mailto:support@fabric.io");
				}
				EditorGUIUtility.AddCursorRect (GUILayoutUtility.GetLastRect (), MouseCursor.Link);

				GUILayout.FlexibleSpace ();
				GUILayout.EndHorizontal ();
			}
		}
		#endregion

		public override void RenderImpl(Rect position)
		{
			RenderHeader ("Verifying Installation...");
			Components.RenderMessage ("Your setup is complete!");
			Components.RenderMessage ("To finish onboarding, build and launch your app on a physical device.");
			Components.RenderRocket ();

			bool isError = false;

			switch (Validate ()) {
			case PluginController.ActivationStatus.Checking:
				Components.RenderWaitingMessage ("Waiting for an app launch...");
				break;
			case PluginController.ActivationStatus.TimedOut:
				isError = true;
				Components.RenderError ("It's been a while. Need some help?", "support@fabric.io");
				break;
			}

			KeyValuePair<string, Action>? retryButtonDisabled = null;
			RenderFooter (null, isError ? retry : retryButtonDisabled);
		}
	}
}
