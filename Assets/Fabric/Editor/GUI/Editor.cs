namespace Fabric.Internal.Editor
{
	using UnityEngine;
	using UnityEditor;
	using System;
	using Fabric.Internal.Editor.View;

	public class Editor : EditorWindow
	{
		#region Instance
		private static Editor instance;
		private static Editor Instance
		{
			get {
				if (instance == null)
					instance = GetFabricEditorWindow () as Editor;
				return instance;
			}
		}
		#endregion

		[MenuItem("Fabric/Prepare Fabric", false, 0)]
		public static void Init ()
		{
			instance = GetFabricEditorWindow () as Editor;
		}

		public void OnGUI ()
		{
			Controller.PluginController.Instance.PageFromState ().Render (Instance.position);
			Repaint ();
		}

		private static EditorWindow GetFabricEditorWindow ()
		{
			return EditorWindow.GetWindowWithRect(
				typeof (Editor),
				new Rect(100, 100, View.Render.InitialWindowWidth, View.Render.InitialWindowHeight),
				false,
				"Fabric"
			);
		}
	}
}
