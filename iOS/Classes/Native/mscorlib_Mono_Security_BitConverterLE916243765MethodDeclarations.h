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

// System.Byte[]
struct ByteU5BU5D_t1362406281_0;

#include "codegen/il2cpp-codegen.h"

// System.Byte[] Mono.Security.BitConverterLE::GetUIntBytes(System.Byte*)
extern "C"  ByteU5BU5D_t1362406281_0* BitConverterLE_GetUIntBytes_m_520275435_0 (Object_t * __this /* static, unused */, uint8_t* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.BitConverterLE::GetBytes(System.Int32)
extern "C"  ByteU5BU5D_t1362406281_0* BitConverterLE_GetBytes_m10699861_0 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.BitConverterLE::UShortFromBytes(System.Byte*,System.Byte[],System.Int32)
extern "C"  void BitConverterLE_UShortFromBytes_m_1499889238_0 (Object_t * __this /* static, unused */, uint8_t* ___dst, ByteU5BU5D_t1362406281_0* ___src, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.BitConverterLE::UIntFromBytes(System.Byte*,System.Byte[],System.Int32)
extern "C"  void BitConverterLE_UIntFromBytes_m1379314819_0 (Object_t * __this /* static, unused */, uint8_t* ___dst, ByteU5BU5D_t1362406281_0* ___src, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.BitConverterLE::ULongFromBytes(System.Byte*,System.Byte[],System.Int32)
extern "C"  void BitConverterLE_ULongFromBytes_m_1711861896_0 (Object_t * __this /* static, unused */, uint8_t* ___dst, ByteU5BU5D_t1362406281_0* ___src, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Mono.Security.BitConverterLE::ToInt16(System.Byte[],System.Int32)
extern "C"  int16_t BitConverterLE_ToInt16_m1072210656_0 (Object_t * __this /* static, unused */, ByteU5BU5D_t1362406281_0* ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.BitConverterLE::ToInt32(System.Byte[],System.Int32)
extern "C"  int32_t BitConverterLE_ToInt32_m_1398866656_0 (Object_t * __this /* static, unused */, ByteU5BU5D_t1362406281_0* ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Mono.Security.BitConverterLE::ToSingle(System.Byte[],System.Int32)
extern "C"  float BitConverterLE_ToSingle_m1734213640_0 (Object_t * __this /* static, unused */, ByteU5BU5D_t1362406281_0* ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Mono.Security.BitConverterLE::ToDouble(System.Byte[],System.Int32)
extern "C"  double BitConverterLE_ToDouble_m516016818_0 (Object_t * __this /* static, unused */, ByteU5BU5D_t1362406281_0* ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
