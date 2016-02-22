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

// Mono.Security.Protocol.Tls.TlsException
struct TlsException_t1160376544_0;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t_2018490193_0;
// Mono.Security.Protocol.Tls.Alert
struct Alert_t_188480248_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2060733842.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertLeve_323270146.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertDes_1431919490.h"

// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(System.String)
extern "C"  void TlsException__ctor_m_409247276_0 (TlsException_t1160376544_0 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void TlsException__ctor_m1249020603_0 (TlsException_t1160376544_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(Mono.Security.Protocol.Tls.AlertLevel,Mono.Security.Protocol.Tls.AlertDescription)
extern "C"  void TlsException__ctor_m_2089454884_0 (TlsException_t1160376544_0 * __this, uint8_t ___level, uint8_t ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(Mono.Security.Protocol.Tls.AlertLevel,Mono.Security.Protocol.Tls.AlertDescription,System.String)
extern "C"  void TlsException__ctor_m_547779276_0 (TlsException_t1160376544_0 * __this, uint8_t ___level, uint8_t ___description, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(Mono.Security.Protocol.Tls.AlertDescription)
extern "C"  void TlsException__ctor_m_1858547260_0 (TlsException_t1160376544_0 * __this, uint8_t ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(Mono.Security.Protocol.Tls.AlertDescription,System.String)
extern "C"  void TlsException__ctor_m1988757560_0 (TlsException_t1160376544_0 * __this, uint8_t ___description, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Alert Mono.Security.Protocol.Tls.TlsException::get_Alert()
extern "C"  Alert_t_188480248_0 * TlsException_get_Alert_m_272201544_0 (TlsException_t1160376544_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
