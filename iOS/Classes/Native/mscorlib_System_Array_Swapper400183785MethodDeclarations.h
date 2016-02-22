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

// System.Array/Swapper
struct Swapper_t400183785_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_87838773_0;
// System.AsyncCallback
struct AsyncCallback_t2110631700_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr117299260.h"

// System.Void System.Array/Swapper::.ctor(System.Object,System.IntPtr)
extern "C"  void Swapper__ctor_m1954582975_0 (Swapper_t400183785_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array/Swapper::Invoke(System.Int32,System.Int32)
extern "C"  void Swapper_Invoke_m_149631377_0 (Swapper_t400183785_0 * __this, int32_t ___i, int32_t ___j, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_Swapper_t400183785_0(Il2CppObject* delegate, int32_t ___i, int32_t ___j);
// System.IAsyncResult System.Array/Swapper::BeginInvoke(System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Object_t * Swapper_BeginInvoke_m_1642456274_0 (Swapper_t400183785_0 * __this, int32_t ___i, int32_t ___j, AsyncCallback_t2110631700_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array/Swapper::EndInvoke(System.IAsyncResult)
extern "C"  void Swapper_EndInvoke_m677693941_0 (Swapper_t400183785_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
