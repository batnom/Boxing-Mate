#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.AsyncCallback
struct AsyncCallback_t2110631700_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_87838773_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr117299260.h"

// System.Void System.AsyncCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void AsyncCallback__ctor_m_1223277364_0 (AsyncCallback_t2110631700_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AsyncCallback::Invoke(System.IAsyncResult)
extern "C"  void AsyncCallback_Invoke_m1217672441_0 (AsyncCallback_t2110631700_0 * __this, Object_t * ___ar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_AsyncCallback_t2110631700_0(Il2CppObject* delegate, Object_t * ___ar);
// System.IAsyncResult System.AsyncCallback::BeginInvoke(System.IAsyncResult,System.AsyncCallback,System.Object)
extern "C"  Object_t * AsyncCallback_BeginInvoke_m_990266688_0 (AsyncCallback_t2110631700_0 * __this, Object_t * ___ar, AsyncCallback_t2110631700_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AsyncCallback::EndInvoke(System.IAsyncResult)
extern "C"  void AsyncCallback_EndInvoke_m_1772491470_0 (AsyncCallback_t2110631700_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
