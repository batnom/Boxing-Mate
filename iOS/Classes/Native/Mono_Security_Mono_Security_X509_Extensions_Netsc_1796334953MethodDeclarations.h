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

// Mono.Security.X509.Extensions.NetscapeCertTypeExtension
struct NetscapeCertTypeExtension_t_1796334953_0;
// Mono.Security.X509.X509Extension
struct X509Extension_t_1087971856_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_X509_Extensions_Netsca2071009899.h"

// System.Void Mono.Security.X509.Extensions.NetscapeCertTypeExtension::.ctor(Mono.Security.X509.X509Extension)
extern "C"  void NetscapeCertTypeExtension__ctor_m_409212681_0 (NetscapeCertTypeExtension_t_1796334953_0 * __this, X509Extension_t_1087971856_0 * ___extension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.NetscapeCertTypeExtension::Decode()
extern "C"  void NetscapeCertTypeExtension_Decode_m_2084942291_0 (NetscapeCertTypeExtension_t_1796334953_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.Extensions.NetscapeCertTypeExtension::Support(Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes)
extern "C"  bool NetscapeCertTypeExtension_Support_m_340767633_0 (NetscapeCertTypeExtension_t_1796334953_0 * __this, int32_t ___usage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.NetscapeCertTypeExtension::ToString()
extern "C"  String_t* NetscapeCertTypeExtension_ToString_m834335182_0 (NetscapeCertTypeExtension_t_1796334953_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
