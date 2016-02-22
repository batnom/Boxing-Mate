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

// Mono.Security.StrongName
struct StrongName_t_592291133_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.StrongName::.cctor()
extern "C"  void StrongName__cctor_m1670108714_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.StrongName::get_PublicKey()
extern "C"  ByteU5BU5D_t1362406281_0* StrongName_get_PublicKey_m_517389976_0 (StrongName_t_592291133_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.StrongName::get_PublicKeyToken()
extern "C"  ByteU5BU5D_t1362406281_0* StrongName_get_PublicKeyToken_m1968460885_0 (StrongName_t_592291133_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.StrongName::get_TokenAlgorithm()
extern "C"  String_t* StrongName_get_TokenAlgorithm_m_539391491_0 (StrongName_t_592291133_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
