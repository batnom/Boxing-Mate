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

// Mono.Security.Cryptography.MD2Managed
struct MD2Managed_t_616788215_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Cryptography.MD2Managed::.ctor()
extern "C"  void MD2Managed__ctor_m1696123663_0 (MD2Managed_t_616788215_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD2Managed::.cctor()
extern "C"  void MD2Managed__cctor_m_719022310_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MD2Managed::Padding(System.Int32)
extern "C"  ByteU5BU5D_t1362406281_0* MD2Managed_Padding_m410163267_0 (MD2Managed_t_616788215_0 * __this, int32_t ___nLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD2Managed::Initialize()
extern "C"  void MD2Managed_Initialize_m1330748427_0 (MD2Managed_t_616788215_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD2Managed::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C"  void MD2Managed_HashCore_m248147901_0 (MD2Managed_t_616788215_0 * __this, ByteU5BU5D_t1362406281_0* ___array, int32_t ___ibStart, int32_t ___cbSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MD2Managed::HashFinal()
extern "C"  ByteU5BU5D_t1362406281_0* MD2Managed_HashFinal_m_143752635_0 (MD2Managed_t_616788215_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD2Managed::MD2Transform(System.Byte[],System.Byte[],System.Byte[],System.Int32)
extern "C"  void MD2Managed_MD2Transform_m_469765938_0 (MD2Managed_t_616788215_0 * __this, ByteU5BU5D_t1362406281_0* ___state, ByteU5BU5D_t1362406281_0* ___checksum, ByteU5BU5D_t1362406281_0* ___block, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
