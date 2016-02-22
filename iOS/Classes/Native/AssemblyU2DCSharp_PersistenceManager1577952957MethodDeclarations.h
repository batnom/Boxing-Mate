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

// PersistenceManager
struct PersistenceManager_t1577952957_0;
// UnityEngine.UI.Toggle
struct Toggle_t_1959514907_0;

#include "codegen/il2cpp-codegen.h"

// System.Void PersistenceManager::.ctor()
extern "C"  void PersistenceManager__ctor_m_1282920941_0 (PersistenceManager_t1577952957_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PersistenceManager::Awake()
extern "C"  void PersistenceManager_Awake_m605184990_0 (PersistenceManager_t1577952957_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PersistenceManager::SaveLevel(System.Int32)
extern "C"  void PersistenceManager_SaveLevel_m46997265_0 (PersistenceManager_t1577952957_0 * __this, int32_t ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PersistenceManager::LoadLevel()
extern "C"  int32_t PersistenceManager_LoadLevel_m792253197_0 (PersistenceManager_t1577952957_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PersistenceManager::SaveCustomSettings()
extern "C"  void PersistenceManager_SaveCustomSettings_m707502422_0 (PersistenceManager_t1577952957_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PersistenceManager::LoadCustomSettings()
extern "C"  void PersistenceManager_LoadCustomSettings_m_1308060449_0 (PersistenceManager_t1577952957_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PersistenceManager::GetToggleValue(UnityEngine.UI.Toggle)
extern "C"  int32_t PersistenceManager_GetToggleValue_m_896855299_0 (PersistenceManager_t1577952957_0 * __this, Toggle_t_1959514907_0 * ___thisToggle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PersistenceManager::AssignToggleValue(System.Int32,UnityEngine.UI.Toggle)
extern "C"  void PersistenceManager_AssignToggleValue_m427939605_0 (PersistenceManager_t1577952957_0 * __this, int32_t ___isOn, Toggle_t_1959514907_0 * ___thisToggle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
