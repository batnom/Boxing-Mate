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

// Mono.Security.X509.Extensions.ExtendedKeyUsageExtension
struct ExtendedKeyUsageExtension_t1685177969_0;
// Mono.Security.X509.X509Extension
struct X509Extension_t_1087971856_0;
// System.Collections.ArrayList
struct ArrayList_t2138871437_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.X509.Extensions.ExtendedKeyUsageExtension::.ctor(Mono.Security.X509.X509Extension)
extern "C"  void ExtendedKeyUsageExtension__ctor_m_984706011_0 (ExtendedKeyUsageExtension_t1685177969_0 * __this, X509Extension_t_1087971856_0 * ___extension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.ExtendedKeyUsageExtension::Decode()
extern "C"  void ExtendedKeyUsageExtension_Decode_m901297139_0 (ExtendedKeyUsageExtension_t1685177969_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.ExtendedKeyUsageExtension::Encode()
extern "C"  void ExtendedKeyUsageExtension_Encode_m_865215647_0 (ExtendedKeyUsageExtension_t1685177969_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.Extensions.ExtendedKeyUsageExtension::get_KeyPurpose()
extern "C"  ArrayList_t2138871437_0 * ExtendedKeyUsageExtension_get_KeyPurpose_m1625001387_0 (ExtendedKeyUsageExtension_t1685177969_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.ExtendedKeyUsageExtension::ToString()
extern "C"  String_t* ExtendedKeyUsageExtension_ToString_m1081992020_0 (ExtendedKeyUsageExtension_t1685177969_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
