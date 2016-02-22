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

// FightManager
struct FightManager_t_2022864920_0;
// System.Collections.IEnumerator
struct IEnumerator_t435631375_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void FightManager::.ctor()
extern "C"  void FightManager__ctor_m_1174941252_0 (FightManager_t_2022864920_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FightManager::Awake()
extern "C"  void FightManager_Awake_m715394889_0 (FightManager_t_2022864920_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FightManager::Start()
extern "C"  void FightManager_Start_m_1429679580_0 (FightManager_t_2022864920_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FightManager::StartFight()
extern "C"  void FightManager_StartFight_m_2018076184_0 (FightManager_t_2022864920_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FightManager::EndFight()
extern "C"  void FightManager_EndFight_m_1563726961_0 (FightManager_t_2022864920_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FightManager::NextAttack()
extern "C"  void FightManager_NextAttack_m1884638443_0 (FightManager_t_2022864920_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FightManager::AttackOnce()
extern "C"  void FightManager_AttackOnce_m1305602451_0 (FightManager_t_2022864920_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator FightManager::AttackNumberAfterTime(System.Int32,System.Single)
extern "C"  Object_t * FightManager_AttackNumberAfterTime_m_623976910_0 (FightManager_t_2022864920_0 * __this, int32_t ___attackNumber, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FightManager::QueueGuard()
extern "C"  void FightManager_QueueGuard_m_1962786258_0 (FightManager_t_2022864920_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FightManager::Update()
extern "C"  void FightManager_Update_m271363269_0 (FightManager_t_2022864920_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FightManager::SetAnimationSpeed(System.Single)
extern "C"  void FightManager_SetAnimationSpeed_m1825736422_0 (FightManager_t_2022864920_0 * __this, float ___speed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FightManager::SetGuardSpeed(System.Single)
extern "C"  void FightManager_SetGuardSpeed_m_118931563_0 (FightManager_t_2022864920_0 * __this, float ___speed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FightManager::AddAttack(System.String)
extern "C"  void FightManager_AddAttack_m_681385637_0 (FightManager_t_2022864920_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FightManager::RemoveAttack(System.String)
extern "C"  void FightManager_RemoveAttack_m_1188347904_0 (FightManager_t_2022864920_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FightManager::RemoveAllAttacks()
extern "C"  void FightManager_RemoveAllAttacks_m_855787906_0 (FightManager_t_2022864920_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 FightManager::IsAttackPresent(System.String)
extern "C"  int32_t FightManager_IsAttackPresent_m_345895787_0 (FightManager_t_2022864920_0 * __this, String_t* ___thisname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
