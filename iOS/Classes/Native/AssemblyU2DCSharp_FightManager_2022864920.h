#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t_1195247930_0;
// GameWorld
struct GameWorld_t1892421329_0;
// UIScript
struct UIScript_t493160764_0;
// System.Collections.ArrayList
struct ArrayList_t2138871437_0;
// System.String
struct String_t;
// UnityEngine.UI.Slider
struct Slider_t1845998118_0;
// UnityEngine.UI.Text
struct Text_t221418124_0;
// UnityEngine.Animation
struct Animation_t2038318153_0;

#include "UnityEngine_UnityEngine_MonoBehaviour1852343413.h"

// FightManager
struct  FightManager_t_2022864920_0  : public MonoBehaviour_t1852343413_0
{
	// UnityEngine.GameObject FightManager::fighter
	GameObject_t_1195247930_0 * ___fighter_2;
	// GameWorld FightManager::game
	GameWorld_t1892421329_0 * ___game_3;
	// UIScript FightManager::ui
	UIScript_t493160764_0 * ___ui_4;
	// System.Single FightManager::fightTime
	float ___fightTime_5;
	// System.Int32 FightManager::attackMoves
	int32_t ___attackMoves_6;
	// System.Collections.ArrayList FightManager::attackMoveArray
	ArrayList_t2138871437_0 * ___attackMoveArray_7;
	// System.Single FightManager::delayMin
	float ___delayMin_8;
	// System.Single FightManager::delayMax
	float ___delayMax_9;
	// System.Single FightManager::attackSpeed
	float ___attackSpeed_10;
	// System.Single FightManager::guardSpeed
	float ___guardSpeed_11;
	// System.Boolean FightManager::isCoroutineExecuting
	bool ___isCoroutineExecuting_12;
	// System.Single FightManager::finishedTimer
	float ___finishedTimer_13;
	// System.Single FightManager::finishedDelay
	float ___finishedDelay_14;
	// System.String FightManager::idlename
	String_t* ___idlename_15;
	// System.String FightManager::guardname
	String_t* ___guardname_16;
	// UnityEngine.UI.Slider FightManager::timeSlider
	Slider_t1845998118_0 * ___timeSlider_17;
	// UnityEngine.UI.Text FightManager::levelText
	Text_t221418124_0 * ___levelText_18;
	// UnityEngine.Animation FightManager::anim
	Animation_t2038318153_0 * ___anim_19;
	// System.Single FightManager::timer
	float ___timer_20;
	// System.Int32 FightManager::count
	int32_t ___count_21;
	// System.Int32 FightManager::fighting
	int32_t ___fighting_22;
};
