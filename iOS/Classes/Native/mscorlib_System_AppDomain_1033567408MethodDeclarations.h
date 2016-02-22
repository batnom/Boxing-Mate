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

// System.AppDomain
struct AppDomain_t_1033567408_0;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t1044351355_0;
// System.String
struct String_t;
// System.Reflection.Assembly
struct Assembly_t_808956426_0;
// System.Security.Policy.Evidence
struct Evidence_t1919687788_0;
// System.Runtime.Remoting.Contexts.Context
struct Context_t1915744201_0;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.AppDomain::add_UnhandledException(System.UnhandledExceptionEventHandler)
extern "C"  void AppDomain_add_UnhandledException_m_808919121_0 (AppDomain_t_1033567408_0 * __this, UnhandledExceptionEventHandler_t1044351355_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AppDomain::remove_UnhandledException(System.UnhandledExceptionEventHandler)
extern "C"  void AppDomain_remove_UnhandledException_m_1211019726_0 (AppDomain_t_1033567408_0 * __this, UnhandledExceptionEventHandler_t1044351355_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::getFriendlyName()
extern "C"  String_t* AppDomain_getFriendlyName_m_1030948943_0 (AppDomain_t_1033567408_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::getCurDomain()
extern "C"  AppDomain_t_1033567408_0 * AppDomain_getCurDomain_m591611373_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::get_CurrentDomain()
extern "C"  AppDomain_t_1033567408_0 * AppDomain_get_CurrentDomain_m_862199893_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::LoadAssembly(System.String,System.Security.Policy.Evidence,System.Boolean)
extern "C"  Assembly_t_808956426_0 * AppDomain_LoadAssembly_m1537679648_0 (AppDomain_t_1033567408_0 * __this, String_t* ___assemblyRef, Evidence_t1919687788_0 * ___securityEvidence, bool ___refOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String)
extern "C"  Assembly_t_808956426_0 * AppDomain_Load_m_1018826835_0 (AppDomain_t_1033567408_0 * __this, String_t* ___assemblyString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String,System.Security.Policy.Evidence,System.Boolean)
extern "C"  Assembly_t_808956426_0 * AppDomain_Load_m119378364_0 (AppDomain_t_1033567408_0 * __this, String_t* ___assemblyString, Evidence_t1919687788_0 * ___assemblySecurity, bool ___refonly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalSetContext(System.Runtime.Remoting.Contexts.Context)
extern "C"  Context_t1915744201_0 * AppDomain_InternalSetContext_m1264487503_0 (Object_t * __this /* static, unused */, Context_t1915744201_0 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetContext()
extern "C"  Context_t1915744201_0 * AppDomain_InternalGetContext_m_1663776350_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetDefaultContext()
extern "C"  Context_t1915744201_0 * AppDomain_InternalGetDefaultContext_m978759799_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::InternalGetProcessGuid(System.String)
extern "C"  String_t* AppDomain_InternalGetProcessGuid_m1278588156_0 (Object_t * __this /* static, unused */, String_t* ___newguid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::GetProcessGuid()
extern "C"  String_t* AppDomain_GetProcessGuid_m_1325960907_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::ToString()
extern "C"  String_t* AppDomain_ToString_m_771379103_0 (AppDomain_t_1033567408_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::DoTypeResolve(System.Object)
extern "C"  Assembly_t_808956426_0 * AppDomain_DoTypeResolve_m381738210_0 (AppDomain_t_1033567408_0 * __this, Object_t * ___name_or_tb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
