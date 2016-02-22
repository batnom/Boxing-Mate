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

// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t_2131653600_0;
// Mono.Security.ASN1
struct ASN1_t_79756206_0;
// System.Collections.IEnumerator
struct IEnumerator_t435631375_0;
// System.String
struct String_t;
// Mono.Security.X509.X509Extension
struct X509Extension_t_1087971856_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.X509.X509ExtensionCollection::.ctor()
extern "C"  void X509ExtensionCollection__ctor_m1119345384_0 (X509ExtensionCollection_t_2131653600_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509ExtensionCollection::.ctor(Mono.Security.ASN1)
extern "C"  void X509ExtensionCollection__ctor_m_1622644708_0 (X509ExtensionCollection_t_2131653600_0 * __this, ASN1_t_79756206_0 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Mono.Security.X509.X509ExtensionCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * X509ExtensionCollection_System_Collections_IEnumerable_GetEnumerator_m_1694064895_0 (X509ExtensionCollection_t_2131653600_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509ExtensionCollection::IndexOf(System.String)
extern "C"  int32_t X509ExtensionCollection_IndexOf_m_322866645_0 (X509ExtensionCollection_t_2131653600_0 * __this, String_t* ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Extension Mono.Security.X509.X509ExtensionCollection::get_Item(System.String)
extern "C"  X509Extension_t_1087971856_0 * X509ExtensionCollection_get_Item_m1497604741_0 (X509ExtensionCollection_t_2131653600_0 * __this, String_t* ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
