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

// Mono.Security.Cryptography.HMAC
struct HMAC_t_2428326_0;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Cryptography.HMAC::.ctor(System.String,System.Byte[])
extern "C"  void HMAC__ctor_m_1689036465_0 (HMAC_t_2428326_0 * __this, String_t* ___hashName, ByteU5BU5D_t1362406281_0* ___rgbKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.HMAC::get_Key()
extern "C"  ByteU5BU5D_t1362406281_0* HMAC_get_Key_m_1766103656_0 (HMAC_t_2428326_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.HMAC::set_Key(System.Byte[])
extern "C"  void HMAC_set_Key_m_549401469_0 (HMAC_t_2428326_0 * __this, ByteU5BU5D_t1362406281_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.HMAC::Initialize()
extern "C"  void HMAC_Initialize_m_1242318192_0 (HMAC_t_2428326_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.HMAC::HashFinal()
extern "C"  ByteU5BU5D_t1362406281_0* HMAC_HashFinal_m1045191164_0 (HMAC_t_2428326_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.HMAC::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C"  void HMAC_HashCore_m_900648154_0 (HMAC_t_2428326_0 * __this, ByteU5BU5D_t1362406281_0* ___array, int32_t ___ibStart, int32_t ___cbSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.HMAC::initializePad()
extern "C"  void HMAC_initializePad_m_466356625_0 (HMAC_t_2428326_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
