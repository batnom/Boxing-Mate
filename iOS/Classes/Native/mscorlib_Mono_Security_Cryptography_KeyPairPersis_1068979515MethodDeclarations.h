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

// Mono.Security.Cryptography.KeyPairPersistence
struct KeyPairPersistence_t_1068979515_0;
// System.Security.Cryptography.CspParameters
struct CspParameters_t_1419105373_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Cryptography.KeyPairPersistence::.ctor(System.Security.Cryptography.CspParameters)
extern "C"  void KeyPairPersistence__ctor_m_1632509042_0 (KeyPairPersistence_t_1068979515_0 * __this, CspParameters_t_1419105373_0 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::.ctor(System.Security.Cryptography.CspParameters,System.String)
extern "C"  void KeyPairPersistence__ctor_m1817312194_0 (KeyPairPersistence_t_1068979515_0 * __this, CspParameters_t_1419105373_0 * ___parameters, String_t* ___keyPair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::.cctor()
extern "C"  void KeyPairPersistence__cctor_m_338192840_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_Filename()
extern "C"  String_t* KeyPairPersistence_get_Filename_m152060602_0 (KeyPairPersistence_t_1068979515_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_KeyValue()
extern "C"  String_t* KeyPairPersistence_get_KeyValue_m140512119_0 (KeyPairPersistence_t_1068979515_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::set_KeyValue(System.String)
extern "C"  void KeyPairPersistence_set_KeyValue_m243780262_0 (KeyPairPersistence_t_1068979515_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::Load()
extern "C"  bool KeyPairPersistence_Load_m1355205585_0 (KeyPairPersistence_t_1068979515_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::Save()
extern "C"  void KeyPairPersistence_Save_m471726936_0 (KeyPairPersistence_t_1068979515_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::Remove()
extern "C"  void KeyPairPersistence_Remove_m_1106292307_0 (KeyPairPersistence_t_1068979515_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_UserPath()
extern "C"  String_t* KeyPairPersistence_get_UserPath_m_861914513_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_MachinePath()
extern "C"  String_t* KeyPairPersistence_get_MachinePath_m552408523_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_CanSecure(System.String)
extern "C"  bool KeyPairPersistence__CanSecure_m1449153133_0 (Object_t * __this /* static, unused */, String_t* ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_ProtectUser(System.String)
extern "C"  bool KeyPairPersistence__ProtectUser_m1131717336_0 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_ProtectMachine(System.String)
extern "C"  bool KeyPairPersistence__ProtectMachine_m318782442_0 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_IsUserProtected(System.String)
extern "C"  bool KeyPairPersistence__IsUserProtected_m_877202393_0 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_IsMachineProtected(System.String)
extern "C"  bool KeyPairPersistence__IsMachineProtected_m_1708932881_0 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::CanSecure(System.String)
extern "C"  bool KeyPairPersistence_CanSecure_m_2043957596_0 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::ProtectUser(System.String)
extern "C"  bool KeyPairPersistence_ProtectUser_m_191427657_0 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::ProtectMachine(System.String)
extern "C"  bool KeyPairPersistence_ProtectMachine_m_2079823537_0 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::IsUserProtected(System.String)
extern "C"  bool KeyPairPersistence_IsUserProtected_m37342608_0 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::IsMachineProtected(System.String)
extern "C"  bool KeyPairPersistence_IsMachineProtected_m_199250994_0 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::get_CanChange()
extern "C"  bool KeyPairPersistence_get_CanChange_m471859120_0 (KeyPairPersistence_t_1068979515_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::get_UseDefaultKeyContainer()
extern "C"  bool KeyPairPersistence_get_UseDefaultKeyContainer_m1428226410_0 (KeyPairPersistence_t_1068979515_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::get_UseMachineKeyStore()
extern "C"  bool KeyPairPersistence_get_UseMachineKeyStore_m560802076_0 (KeyPairPersistence_t_1068979515_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_ContainerName()
extern "C"  String_t* KeyPairPersistence_get_ContainerName_m_792665993_0 (KeyPairPersistence_t_1068979515_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.CspParameters Mono.Security.Cryptography.KeyPairPersistence::Copy(System.Security.Cryptography.CspParameters)
extern "C"  CspParameters_t_1419105373_0 * KeyPairPersistence_Copy_m_1685232703_0 (KeyPairPersistence_t_1068979515_0 * __this, CspParameters_t_1419105373_0 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::FromXml(System.String)
extern "C"  void KeyPairPersistence_FromXml_m_1984816094_0 (KeyPairPersistence_t_1068979515_0 * __this, String_t* ___xml, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::ToXml()
extern "C"  String_t* KeyPairPersistence_ToXml_m207061510_0 (KeyPairPersistence_t_1068979515_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
