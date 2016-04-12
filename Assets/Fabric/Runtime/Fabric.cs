namespace Fabric.Internal {
	using System.Runtime.InteropServices;

	public class FabricSymbolLinker {
		// Referencing this noop function here is required in order for our Fabric 
		// Objective-C lib to be linked. Without it the lib won't get linked (the linker
		// will ignore the lib since none of its symbols are referenced by the app) and hence 
		// the initialization hooks won't get triggered.
#if UNITY_IOS && !UNITY_EDITOR
		[DllImport("__Internal")]
		private static extern void fabric_symbol_for_linker();
#endif
	}

}
