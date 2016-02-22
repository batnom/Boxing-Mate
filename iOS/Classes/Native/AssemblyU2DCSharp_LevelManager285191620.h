#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameWorld
struct GameWorld_t1892421329_0;
// FightManager
struct FightManager_t_2022864920_0;
// UIScript
struct UIScript_t493160764_0;
// PersistenceManager
struct PersistenceManager_t1577952957_0;

#include "UnityEngine_UnityEngine_MonoBehaviour1852343413.h"

// LevelManager
struct  LevelManager_t285191620_0  : public MonoBehaviour_t1852343413_0
{
	// GameWorld LevelManager::game
	GameWorld_t1892421329_0 * ___game_2;
	// FightManager LevelManager::fight
	FightManager_t_2022864920_0 * ___fight_3;
	// UIScript LevelManager::ui
	UIScript_t493160764_0 * ___ui_4;
	// PersistenceManager LevelManager::persistence
	PersistenceManager_t1577952957_0 * ___persistence_5;
};
