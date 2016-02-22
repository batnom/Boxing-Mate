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

// Mono.Security.X509.PKCS12/DeriveBytes
struct DeriveBytes_t_1661363026_0;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.X509.PKCS12/DeriveBytes::.ctor()
extern "C"  void DeriveBytes__ctor_m649232120_0 (DeriveBytes_t_1661363026_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::.cctor()
extern "C"  void DeriveBytes__cctor_m_904086669_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::set_HashName(System.String)
extern "C"  void DeriveBytes_set_HashName_m_1764705978_0 (DeriveBytes_t_1661363026_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::set_IterationCount(System.Int32)
extern "C"  void DeriveBytes_set_IterationCount_m1653995136_0 (DeriveBytes_t_1661363026_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::set_Password(System.Byte[])
extern "C"  void DeriveBytes_set_Password_m1444282377_0 (DeriveBytes_t_1661363026_0 * __this, ByteU5BU5D_t1362406281_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::set_Salt(System.Byte[])
extern "C"  void DeriveBytes_set_Salt_m973628730_0 (DeriveBytes_t_1661363026_0 * __this, ByteU5BU5D_t1362406281_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::Adjust(System.Byte[],System.Int32,System.Byte[])
extern "C"  void DeriveBytes_Adjust_m_899178770_0 (DeriveBytes_t_1661363026_0 * __this, ByteU5BU5D_t1362406281_0* ___a, int32_t ___aOff, ByteU5BU5D_t1362406281_0* ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::Derive(System.Byte[],System.Int32)
extern "C"  ByteU5BU5D_t1362406281_0* DeriveBytes_Derive_m1435464935_0 (DeriveBytes_t_1661363026_0 * __this, ByteU5BU5D_t1362406281_0* ___diversifier, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::DeriveKey(System.Int32)
extern "C"  ByteU5BU5D_t1362406281_0* DeriveBytes_DeriveKey_m_640013449_0 (DeriveBytes_t_1661363026_0 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::DeriveIV(System.Int32)
extern "C"  ByteU5BU5D_t1362406281_0* DeriveBytes_DeriveIV_m_951592101_0 (DeriveBytes_t_1661363026_0 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::DeriveMAC(System.Int32)
extern "C"  ByteU5BU5D_t1362406281_0* DeriveBytes_DeriveMAC_m436209295_0 (DeriveBytes_t_1661363026_0 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
