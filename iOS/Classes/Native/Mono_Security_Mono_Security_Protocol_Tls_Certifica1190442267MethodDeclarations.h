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

// Mono.Security.Protocol.Tls.CertificateValidationCallback2
struct CertificateValidationCallback2_t1190442267_0;
// System.Object
struct Object_t;
// Mono.Security.Protocol.Tls.ValidationResult
struct ValidationResult_t_913155068_0;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1756554202_0;
// System.IAsyncResult
struct IAsyncResult_t_87838773_0;
// System.AsyncCallback
struct AsyncCallback_t2110631700_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr117299260.h"

// System.Void Mono.Security.Protocol.Tls.CertificateValidationCallback2::.ctor(System.Object,System.IntPtr)
extern "C"  void CertificateValidationCallback2__ctor_m1915259009_0 (CertificateValidationCallback2_t1190442267_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::Invoke(Mono.Security.X509.X509CertificateCollection)
extern "C"  ValidationResult_t_913155068_0 * CertificateValidationCallback2_Invoke_m436894540_0 (CertificateValidationCallback2_t1190442267_0 * __this, X509CertificateCollection_t1756554202_0 * ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" ValidationResult_t_913155068_0 * pinvoke_delegate_wrapper_CertificateValidationCallback2_t1190442267_0(Il2CppObject* delegate, X509CertificateCollection_t1756554202_0 * ___collection);
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::BeginInvoke(Mono.Security.X509.X509CertificateCollection,System.AsyncCallback,System.Object)
extern "C"  Object_t * CertificateValidationCallback2_BeginInvoke_m_298685094_0 (CertificateValidationCallback2_t1190442267_0 * __this, X509CertificateCollection_t1756554202_0 * ___collection, AsyncCallback_t2110631700_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::EndInvoke(System.IAsyncResult)
extern "C"  ValidationResult_t_913155068_0 * CertificateValidationCallback2_EndInvoke_m1734587200_0 (CertificateValidationCallback2_t1190442267_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
