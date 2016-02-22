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

// Mono.Security.Protocol.Tls.CipherSuiteCollection
struct CipherSuiteCollection_t233867723_0;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t435631375_0;
// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t_41731615_0;
// System.String
struct String_t;
// System.Array
struct Array_t;
// Mono.Security.Protocol.Tls.TlsCipherSuite
struct TlsCipherSuite_t1788838780_0;
// Mono.Security.Protocol.Tls.SslCipherSuite
struct SslCipherSuite_t761269357_0;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Security_1315242508.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherAl_1106906522.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_HashAlgo_2116660341.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Exchange_1332920080.h"

// System.Void Mono.Security.Protocol.Tls.CipherSuiteCollection::.ctor(Mono.Security.Protocol.Tls.SecurityProtocolType)
extern "C"  void CipherSuiteCollection__ctor_m_2140740835_0 (CipherSuiteCollection_t233867723_0 * __this, int32_t ___protocol, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IList.get_Item(System.Int32)
extern "C"  Object_t * CipherSuiteCollection_System_Collections_IList_get_Item_m218755780_0 (CipherSuiteCollection_t233867723_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C"  void CipherSuiteCollection_System_Collections_IList_set_Item_m750275607_0 (CipherSuiteCollection_t233867723_0 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool CipherSuiteCollection_System_Collections_ICollection_get_IsSynchronized_m36679989_0 (CipherSuiteCollection_t233867723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.ICollection.get_SyncRoot()
extern "C"  Object_t * CipherSuiteCollection_System_Collections_ICollection_get_SyncRoot_m_1476853247_0 (CipherSuiteCollection_t233867723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * CipherSuiteCollection_System_Collections_IEnumerable_GetEnumerator_m1600967134_0 (CipherSuiteCollection_t233867723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IList.Contains(System.Object)
extern "C"  bool CipherSuiteCollection_System_Collections_IList_Contains_m_1055803695_0 (CipherSuiteCollection_t233867723_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IList.IndexOf(System.Object)
extern "C"  int32_t CipherSuiteCollection_System_Collections_IList_IndexOf_m540536407_0 (CipherSuiteCollection_t233867723_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C"  void CipherSuiteCollection_System_Collections_IList_Insert_m_371162248_0 (CipherSuiteCollection_t233867723_0 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IList.Remove(System.Object)
extern "C"  void CipherSuiteCollection_System_Collections_IList_Remove_m_272882118_0 (CipherSuiteCollection_t233867723_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IList.RemoveAt(System.Int32)
extern "C"  void CipherSuiteCollection_System_Collections_IList_RemoveAt_m143866082_0 (CipherSuiteCollection_t233867723_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IList.Add(System.Object)
extern "C"  int32_t CipherSuiteCollection_System_Collections_IList_Add_m_1650524435_0 (CipherSuiteCollection_t233867723_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.CipherSuiteCollection::get_Item(System.String)
extern "C"  CipherSuite_t_41731615_0 * CipherSuiteCollection_get_Item_m_627896449_0 (CipherSuiteCollection_t233867723_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.CipherSuiteCollection::get_Item(System.Int32)
extern "C"  CipherSuite_t_41731615_0 * CipherSuiteCollection_get_Item_m280627160_0 (CipherSuiteCollection_t233867723_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuiteCollection::set_Item(System.Int32,Mono.Security.Protocol.Tls.CipherSuite)
extern "C"  void CipherSuiteCollection_set_Item_m1064755671_0 (CipherSuiteCollection_t233867723_0 * __this, int32_t ___index, CipherSuite_t_41731615_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.CipherSuiteCollection::get_Item(System.Int16)
extern "C"  CipherSuite_t_41731615_0 * CipherSuiteCollection_get_Item_m_1688741374_0 (CipherSuiteCollection_t233867723_0 * __this, int16_t ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.CipherSuiteCollection::get_Count()
extern "C"  int32_t CipherSuiteCollection_get_Count_m1700100413_0 (CipherSuiteCollection_t233867723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CipherSuiteCollection::get_IsFixedSize()
extern "C"  bool CipherSuiteCollection_get_IsFixedSize_m_1445686847_0 (CipherSuiteCollection_t233867723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CipherSuiteCollection::get_IsReadOnly()
extern "C"  bool CipherSuiteCollection_get_IsReadOnly_m_2061634498_0 (CipherSuiteCollection_t233867723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuiteCollection::CopyTo(System.Array,System.Int32)
extern "C"  void CipherSuiteCollection_CopyTo_m869893074_0 (CipherSuiteCollection_t233867723_0 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuiteCollection::Clear()
extern "C"  void CipherSuiteCollection_Clear_m533808424_0 (CipherSuiteCollection_t233867723_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.CipherSuiteCollection::IndexOf(System.String)
extern "C"  int32_t CipherSuiteCollection_IndexOf_m204129362_0 (CipherSuiteCollection_t233867723_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.CipherSuiteCollection::IndexOf(System.Int16)
extern "C"  int32_t CipherSuiteCollection_IndexOf_m_205748517_0 (CipherSuiteCollection_t233867723_0 * __this, int16_t ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.CipherSuiteCollection::Add(System.Int16,System.String,Mono.Security.Protocol.Tls.CipherAlgorithmType,Mono.Security.Protocol.Tls.HashAlgorithmType,Mono.Security.Protocol.Tls.ExchangeAlgorithmType,System.Boolean,System.Boolean,System.Byte,System.Byte,System.Int16,System.Byte,System.Byte)
extern "C"  CipherSuite_t_41731615_0 * CipherSuiteCollection_Add_m_1180257835_0 (CipherSuiteCollection_t233867723_0 * __this, int16_t ___code, String_t* ___name, int32_t ___cipherType, int32_t ___hashType, int32_t ___exchangeType, bool ___exportable, bool ___blockMode, uint8_t ___keyMaterialSize, uint8_t ___expandedKeyMaterialSize, int16_t ___effectiveKeyBytes, uint8_t ___ivSize, uint8_t ___blockSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.TlsCipherSuite Mono.Security.Protocol.Tls.CipherSuiteCollection::add(Mono.Security.Protocol.Tls.TlsCipherSuite)
extern "C"  TlsCipherSuite_t1788838780_0 * CipherSuiteCollection_add_m_1829569393_0 (CipherSuiteCollection_t233867723_0 * __this, TlsCipherSuite_t1788838780_0 * ___cipherSuite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SslCipherSuite Mono.Security.Protocol.Tls.CipherSuiteCollection::add(Mono.Security.Protocol.Tls.SslCipherSuite)
extern "C"  SslCipherSuite_t761269357_0 * CipherSuiteCollection_add_m513562767_0 (CipherSuiteCollection_t233867723_0 * __this, SslCipherSuite_t761269357_0 * ___cipherSuite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CipherSuiteCollection::cultureAwareCompare(System.String,System.String)
extern "C"  bool CipherSuiteCollection_cultureAwareCompare_m1825407448_0 (CipherSuiteCollection_t233867723_0 * __this, String_t* ___strA, String_t* ___strB, const MethodInfo* method) IL2CPP_METHOD_ATTR;
