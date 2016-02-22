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

// Mono.Security.Protocol.Tls.TlsStream
struct TlsStream_t_1403108319_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_SeekOrigin568296617.h"

// System.Void Mono.Security.Protocol.Tls.TlsStream::.ctor()
extern "C"  void TlsStream__ctor_m_177023693_0 (TlsStream_t_1403108319_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::.ctor(System.Byte[])
extern "C"  void TlsStream__ctor_m_1312935736_0 (TlsStream_t_1403108319_0 * __this, ByteU5BU5D_t1362406281_0* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsStream::get_EOF()
extern "C"  bool TlsStream_get_EOF_m1728604576_0 (TlsStream_t_1403108319_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsStream::get_CanWrite()
extern "C"  bool TlsStream_get_CanWrite_m79048455_0 (TlsStream_t_1403108319_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsStream::get_CanRead()
extern "C"  bool TlsStream_get_CanRead_m1860811404_0 (TlsStream_t_1403108319_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsStream::get_CanSeek()
extern "C"  bool TlsStream_get_CanSeek_m_686769320_0 (TlsStream_t_1403108319_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Security.Protocol.Tls.TlsStream::get_Position()
extern "C"  int64_t TlsStream_get_Position_m_743794062_0 (TlsStream_t_1403108319_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::set_Position(System.Int64)
extern "C"  void TlsStream_set_Position_m378064217_0 (TlsStream_t_1403108319_0 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Security.Protocol.Tls.TlsStream::get_Length()
extern "C"  int64_t TlsStream_get_Length_m1562309511_0 (TlsStream_t_1403108319_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.TlsStream::ReadSmallValue(System.Int32)
extern "C"  ByteU5BU5D_t1362406281_0* TlsStream_ReadSmallValue_m1760325248_0 (TlsStream_t_1403108319_0 * __this, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.Protocol.Tls.TlsStream::ReadByte()
extern "C"  uint8_t TlsStream_ReadByte_m1935235961_0 (TlsStream_t_1403108319_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Mono.Security.Protocol.Tls.TlsStream::ReadInt16()
extern "C"  int16_t TlsStream_ReadInt16_m1855118433_0 (TlsStream_t_1403108319_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.TlsStream::ReadInt24()
extern "C"  int32_t TlsStream_ReadInt24_m1268450166_0 (TlsStream_t_1403108319_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.TlsStream::ReadBytes(System.Int32)
extern "C"  ByteU5BU5D_t1362406281_0* TlsStream_ReadBytes_m_993445199_0 (TlsStream_t_1403108319_0 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Byte)
extern "C"  void TlsStream_Write_m_2023421161_0 (TlsStream_t_1403108319_0 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Int16)
extern "C"  void TlsStream_Write_m2055734301_0 (TlsStream_t_1403108319_0 * __this, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::WriteInt24(System.Int32)
extern "C"  void TlsStream_WriteInt24_m1660453494_0 (TlsStream_t_1403108319_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Int32)
extern "C"  void TlsStream_Write_m_269864593_0 (TlsStream_t_1403108319_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Byte[])
extern "C"  void TlsStream_Write_m_869506763_0 (TlsStream_t_1403108319_0 * __this, ByteU5BU5D_t1362406281_0* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Reset()
extern "C"  void TlsStream_Reset_m1504601050_0 (TlsStream_t_1403108319_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.TlsStream::ToArray()
extern "C"  ByteU5BU5D_t1362406281_0* TlsStream_ToArray_m_563187979_0 (TlsStream_t_1403108319_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Flush()
extern "C"  void TlsStream_Flush_m_1691085937_0 (TlsStream_t_1403108319_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::SetLength(System.Int64)
extern "C"  void TlsStream_SetLength_m1460039587_0 (TlsStream_t_1403108319_0 * __this, int64_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Security.Protocol.Tls.TlsStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t TlsStream_Seek_m_396347933_0 (TlsStream_t_1403108319_0 * __this, int64_t ___offset, int32_t ___loc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.TlsStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t TlsStream_Read_m_1744939698_0 (TlsStream_t_1403108319_0 * __this, ByteU5BU5D_t1362406281_0* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void TlsStream_Write_m418642281_0 (TlsStream_t_1403108319_0 * __this, ByteU5BU5D_t1362406281_0* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
