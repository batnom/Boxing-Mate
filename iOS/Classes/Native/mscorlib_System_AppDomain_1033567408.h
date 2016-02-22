#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t630665860_0;
// System.Security.Policy.Evidence
struct Evidence_t1919687788_0;
// System.Security.PermissionSet
struct PermissionSet_t_1274095008_0;
// System.Security.Principal.IPrincipal
struct IPrincipal_t_62191564_0;
// System.AppDomain
struct AppDomain_t_1033567408_0;
// System.AppDomainManager
struct AppDomainManager_t1313003763_0;
// System.ActivationContext
struct ActivationContext_t_1540220016_0;
// System.ApplicationIdentity
struct ApplicationIdentity_t1153670901_0;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t1474240417_0;
// System.ResolveEventHandler
struct ResolveEventHandler_t_662443151_0;
// System.EventHandler
struct EventHandler_t897152573_0;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t1044351355_0;

#include "mscorlib_System_MarshalByRefObject_1586954378.h"
#include "mscorlib_System_IntPtr117299260.h"
#include "mscorlib_System_Security_Principal_PrincipalPolic_1304560037.h"

// System.AppDomain
struct  AppDomain_t_1033567408_0  : public MarshalByRefObject_t_1586954378_0
{
	// System.IntPtr System.AppDomain::_mono_app_domain
	IntPtr_t ____mono_app_domain_1;
	// System.Security.Policy.Evidence System.AppDomain::_evidence
	Evidence_t1919687788_0 * ____evidence_6;
	// System.Security.PermissionSet System.AppDomain::_granted
	PermissionSet_t_1274095008_0 * ____granted_7;
	// System.Security.Principal.PrincipalPolicy System.AppDomain::_principalPolicy
	int32_t ____principalPolicy_8;
	// System.AppDomainManager System.AppDomain::_domain_manager
	AppDomainManager_t1313003763_0 * ____domain_manager_11;
	// System.ActivationContext System.AppDomain::_activation
	ActivationContext_t_1540220016_0 * ____activation_12;
	// System.ApplicationIdentity System.AppDomain::_applicationIdentity
	ApplicationIdentity_t1153670901_0 * ____applicationIdentity_13;
	// System.AssemblyLoadEventHandler System.AppDomain::AssemblyLoad
	AssemblyLoadEventHandler_t1474240417_0 * ___AssemblyLoad_14;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_t_662443151_0 * ___AssemblyResolve_15;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_t897152573_0 * ___DomainUnload_16;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_t897152573_0 * ___ProcessExit_17;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_t_662443151_0 * ___ResourceResolve_18;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_t_662443151_0 * ___TypeResolve_19;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_t1044351355_0 * ___UnhandledException_20;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_t_662443151_0 * ___ReflectionOnlyAssemblyResolve_21;
};
struct AppDomain_t_1033567408_0_StaticFields{
	// System.String System.AppDomain::_process_guid
	String_t* ____process_guid_2;
	// System.AppDomain System.AppDomain::default_domain
	AppDomain_t_1033567408_0 * ___default_domain_10;
};
struct AppDomain_t_1033567408_0_ThreadStaticFields{
	// System.Collections.Hashtable System.AppDomain::type_resolve_in_progress
	Hashtable_t630665860_0 * ___type_resolve_in_progress_3;
	// System.Collections.Hashtable System.AppDomain::assembly_resolve_in_progress
	Hashtable_t630665860_0 * ___assembly_resolve_in_progress_4;
	// System.Collections.Hashtable System.AppDomain::assembly_resolve_in_progress_refonly
	Hashtable_t630665860_0 * ___assembly_resolve_in_progress_refonly_5;
	// System.Security.Principal.IPrincipal System.AppDomain::_principal
	Object_t * ____principal_9;
};
