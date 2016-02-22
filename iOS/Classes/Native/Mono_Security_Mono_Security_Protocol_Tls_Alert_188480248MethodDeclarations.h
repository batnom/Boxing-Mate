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

// Mono.Security.Protocol.Tls.Alert
struct Alert_t_188480248_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertDes_1431919490.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertLeve_323270146.h"

// System.Void Mono.Security.Protocol.Tls.Alert::.ctor(Mono.Security.Protocol.Tls.AlertDescription)
extern "C"  void Alert__ctor_m264447866_0 (Alert_t_188480248_0 * __this, uint8_t ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Alert::.ctor(Mono.Security.Protocol.Tls.AlertLevel,Mono.Security.Protocol.Tls.AlertDescription)
extern "C"  void Alert__ctor_m287829582_0 (Alert_t_188480248_0 * __this, uint8_t ___level, uint8_t ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.AlertLevel Mono.Security.Protocol.Tls.Alert::get_Level()
extern "C"  uint8_t Alert_get_Level_m_1381604354_0 (Alert_t_188480248_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.AlertDescription Mono.Security.Protocol.Tls.Alert::get_Description()
extern "C"  uint8_t Alert_get_Description_m_438265250_0 (Alert_t_188480248_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Alert::get_IsWarning()
extern "C"  bool Alert_get_IsWarning_m427004807_0 (Alert_t_188480248_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Alert::get_IsCloseNotify()
extern "C"  bool Alert_get_IsCloseNotify_m577852330_0 (Alert_t_188480248_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Alert::inferAlertLevel()
extern "C"  void Alert_inferAlertLevel_m1194123772_0 (Alert_t_188480248_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Protocol.Tls.Alert::GetAlertMessage(Mono.Security.Protocol.Tls.AlertDescription)
extern "C"  String_t* Alert_GetAlertMessage_m325996256_0 (Object_t * __this /* static, unused */, uint8_t ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
