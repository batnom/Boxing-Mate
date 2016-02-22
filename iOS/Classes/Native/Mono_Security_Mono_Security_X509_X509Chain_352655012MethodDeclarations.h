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

// Mono.Security.X509.X509Chain
struct X509Chain_t_352655012_0;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1756554202_0;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1541895718_0;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_X509_X509ChainStatusFl1790911987.h"

// System.Void Mono.Security.X509.X509Chain::.ctor()
extern "C"  void X509Chain__ctor_m_772170152_0 (X509Chain_t_352655012_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Chain::.ctor(Mono.Security.X509.X509CertificateCollection)
extern "C"  void X509Chain__ctor_m1113875360_0 (X509Chain_t_352655012_0 * __this, X509CertificateCollection_t1756554202_0 * ___chain, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ChainStatusFlags Mono.Security.X509.X509Chain::get_Status()
extern "C"  int32_t X509Chain_get_Status_m_1568216687_0 (X509Chain_t_352655012_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::get_TrustAnchors()
extern "C"  X509CertificateCollection_t1756554202_0 * X509Chain_get_TrustAnchors_m930867182_0 (X509Chain_t_352655012_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::Build(Mono.Security.X509.X509Certificate)
extern "C"  bool X509Chain_Build_m175470596_0 (X509Chain_t_352655012_0 * __this, X509Certificate_t1541895718_0 * ___leaf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::IsValid(Mono.Security.X509.X509Certificate)
extern "C"  bool X509Chain_IsValid_m_109972134_0 (X509Chain_t_352655012_0 * __this, X509Certificate_t1541895718_0 * ___cert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::FindCertificateParent(Mono.Security.X509.X509Certificate)
extern "C"  X509Certificate_t1541895718_0 * X509Chain_FindCertificateParent_m_1172743067_0 (X509Chain_t_352655012_0 * __this, X509Certificate_t1541895718_0 * ___child, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::FindCertificateRoot(Mono.Security.X509.X509Certificate)
extern "C"  X509Certificate_t1541895718_0 * X509Chain_FindCertificateRoot_m589250107_0 (X509Chain_t_352655012_0 * __this, X509Certificate_t1541895718_0 * ___potentialRoot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::IsTrusted(Mono.Security.X509.X509Certificate)
extern "C"  bool X509Chain_IsTrusted_m_1460628577_0 (X509Chain_t_352655012_0 * __this, X509Certificate_t1541895718_0 * ___potentialTrusted, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Chain::IsParent(Mono.Security.X509.X509Certificate,Mono.Security.X509.X509Certificate)
extern "C"  bool X509Chain_IsParent_m_1716650664_0 (X509Chain_t_352655012_0 * __this, X509Certificate_t1541895718_0 * ___child, X509Certificate_t1541895718_0 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
