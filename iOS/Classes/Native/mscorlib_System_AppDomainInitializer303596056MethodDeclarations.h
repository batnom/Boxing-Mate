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

// System.AppDomainInitializer
struct AppDomainInitializer_t303596056_0;
// System.Object
struct Object_t;
// System.String[]
struct StringU5BU5D_t_1137506664_0;
// System.IAsyncResult
struct IAsyncResult_t_87838773_0;
// System.AsyncCallback
struct AsyncCallback_t2110631700_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr117299260.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_String_2050071032.h"

// System.Void System.AppDomainInitializer::.ctor(System.Object,System.IntPtr)
extern "C"  void AppDomainInitializer__ctor_m1669835818_0 (AppDomainInitializer_t303596056_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AppDomainInitializer::Invoke(System.String[])
extern "C"  void AppDomainInitializer_Invoke_m_845755850_0 (AppDomainInitializer_t303596056_0 * __this, StringU5BU5D_t_1137506664_0* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_AppDomainInitializer_t303596056_0(Il2CppObject* delegate, StringU5BU5D_t_1137506664_0* ___args);
// System.IAsyncResult System.AppDomainInitializer::BeginInvoke(System.String[],System.AsyncCallback,System.Object)
extern "C"  Object_t * AppDomainInitializer_BeginInvoke_m_1848511897_0 (AppDomainInitializer_t303596056_0 * __this, StringU5BU5D_t_1137506664_0* ___args, AsyncCallback_t2110631700_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AppDomainInitializer::EndInvoke(System.IAsyncResult)
extern "C"  void AppDomainInitializer_EndInvoke_m_291166124_0 (AppDomainInitializer_t303596056_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
