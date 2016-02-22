#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// FightManager
struct FightManager_t_2022864920_0;
// UIScript
struct UIScript_t493160764_0;
// LevelManager
struct LevelManager_t285191620_0;
// PersistenceManager
struct PersistenceManager_t1577952957_0;
// UnityEngine.GameObject
struct GameObject_t_1195247930_0;

#include "UnityEngine_UnityEngine_MonoBehaviour1852343413.h"

// GameWorld
struct  GameWorld_t1892421329_0  : public MonoBehaviour_t1852343413_0
{
	// FightManager GameWorld::fight
	FightManager_t_2022864920_0 * ___fight_2;
	// UIScript GameWorld::ui
	UIScript_t493160764_0 * ___ui_3;
	// LevelManager GameWorld::levels
	LevelManager_t285191620_0 * ___levels_4;
	// PersistenceManager GameWorld::persistence
	PersistenceManager_t1577952957_0 * ___persistence_5;
	// UnityEngine.GameObject GameWorld::HUDCanvas
	GameObject_t_1195247930_0 * ___HUDCanvas_6;
	// UnityEngine.GameObject GameWorld::MenuCanvas
	GameObject_t_1195247930_0 * ___MenuCanvas_7;
	// UnityEngine.GameObject GameWorld::SettingsCanvas
	GameObject_t_1195247930_0 * ___SettingsCanvas_8;
	// UnityEngine.GameObject GameWorld::LevelDoneCanvas
	GameObject_t_1195247930_0 * ___LevelDoneCanvas_9;
	// System.Int32 GameWorld::levelNumber
	int32_t ___levelNumber_10;
};
