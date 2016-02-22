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

// Mono.Security.Protocol.Tls.SecurityParameters
struct SecurityParameters_t_2005050320_0;
// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t_41731615_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.SecurityParameters::.ctor()
extern "C"  void SecurityParameters__ctor_m_1158173406_0 (SecurityParameters_t_2005050320_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.SecurityParameters::get_Cipher()
extern "C"  CipherSuite_t_41731615_0 * SecurityParameters_get_Cipher_m_1902055664_0 (SecurityParameters_t_2005050320_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SecurityParameters::set_Cipher(Mono.Security.Protocol.Tls.CipherSuite)
extern "C"  void SecurityParameters_set_Cipher_m_406834961_0 (SecurityParameters_t_2005050320_0 * __this, CipherSuite_t_41731615_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SecurityParameters::get_ClientWriteMAC()
extern "C"  ByteU5BU5D_t1362406281_0* SecurityParameters_get_ClientWriteMAC_m_1538659324_0 (SecurityParameters_t_2005050320_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SecurityParameters::set_ClientWriteMAC(System.Byte[])
extern "C"  void SecurityParameters_set_ClientWriteMAC_m1970377285_0 (SecurityParameters_t_2005050320_0 * __this, ByteU5BU5D_t1362406281_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SecurityParameters::get_ServerWriteMAC()
extern "C"  ByteU5BU5D_t1362406281_0* SecurityParameters_get_ServerWriteMAC_m244028400_0 (SecurityParameters_t_2005050320_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SecurityParameters::set_ServerWriteMAC(System.Byte[])
extern "C"  void SecurityParameters_set_ServerWriteMAC_m_525887103_0 (SecurityParameters_t_2005050320_0 * __this, ByteU5BU5D_t1362406281_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SecurityParameters::Clear()
extern "C"  void SecurityParameters_Clear_m_885747539_0 (SecurityParameters_t_2005050320_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
