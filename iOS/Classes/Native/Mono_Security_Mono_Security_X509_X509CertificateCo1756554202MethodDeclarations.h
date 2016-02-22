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

// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1756554202_0;
// System.Collections.IEnumerator
struct IEnumerator_t435631375_0;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1541895718_0;
// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_t_1064830872_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.X509.X509CertificateCollection::.ctor()
extern "C"  void X509CertificateCollection__ctor_m858704242_0 (X509CertificateCollection_t1756554202_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509CertificateCollection::.ctor(Mono.Security.X509.X509CertificateCollection)
extern "C"  void X509CertificateCollection__ctor_m583031014_0 (X509CertificateCollection_t1756554202_0 * __this, X509CertificateCollection_t1756554202_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Mono.Security.X509.X509CertificateCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * X509CertificateCollection_System_Collections_IEnumerable_GetEnumerator_m977294505_0 (X509CertificateCollection_t1756554202_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509CertificateCollection::get_Item(System.Int32)
extern "C"  X509Certificate_t1541895718_0 * X509CertificateCollection_get_Item_m123527754_0 (X509CertificateCollection_t1756554202_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509CertificateCollection::Add(Mono.Security.X509.X509Certificate)
extern "C"  int32_t X509CertificateCollection_Add_m_286262139_0 (X509CertificateCollection_t1756554202_0 * __this, X509Certificate_t1541895718_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509CertificateCollection::AddRange(Mono.Security.X509.X509CertificateCollection)
extern "C"  void X509CertificateCollection_AddRange_m_650228692_0 (X509CertificateCollection_t1756554202_0 * __this, X509CertificateCollection_t1756554202_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509CertificateCollection::Contains(Mono.Security.X509.X509Certificate)
extern "C"  bool X509CertificateCollection_Contains_m_1921153067_0 (X509CertificateCollection_t1756554202_0 * __this, X509Certificate_t1541895718_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator Mono.Security.X509.X509CertificateCollection::GetEnumerator()
extern "C"  X509CertificateEnumerator_t_1064830872_0 * X509CertificateCollection_GetEnumerator_m1235754237_0 (X509CertificateCollection_t1756554202_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509CertificateCollection::GetHashCode()
extern "C"  int32_t X509CertificateCollection_GetHashCode_m1043795447_0 (X509CertificateCollection_t1756554202_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509CertificateCollection::IndexOf(Mono.Security.X509.X509Certificate)
extern "C"  int32_t X509CertificateCollection_IndexOf_m_2119308873_0 (X509CertificateCollection_t1756554202_0 * __this, X509Certificate_t1541895718_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509CertificateCollection::Remove(Mono.Security.X509.X509Certificate)
extern "C"  void X509CertificateCollection_Remove_m_1572708104_0 (X509CertificateCollection_t1756554202_0 * __this, X509Certificate_t1541895718_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509CertificateCollection::Compare(System.Byte[],System.Byte[])
extern "C"  bool X509CertificateCollection_Compare_m1014334435_0 (X509CertificateCollection_t1756554202_0 * __this, ByteU5BU5D_t1362406281_0* ___array1, ByteU5BU5D_t1362406281_0* ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
