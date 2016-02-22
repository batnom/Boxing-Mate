#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t462292938_0;
// UnityEngine.Rigidbody
struct Rigidbody_t841305018_0;

#include "UnityEngine_UnityEngine_MonoBehaviour1852343413.h"
#include "UnityEngine_UnityEngine_Vector341806861.h"

// Fighting
struct  Fighting_t711682585_0  : public MonoBehaviour_t1852343413_0
{
	// System.Single Fighting::speed
	float ___speed_2;
	// UnityEngine.Vector3 Fighting::movement
	Vector3_t41806861_0  ___movement_3;
	// UnityEngine.Animator Fighting::anim
	Animator_t462292938_0 * ___anim_4;
	// UnityEngine.Rigidbody Fighting::fighterRigidBody
	Rigidbody_t841305018_0 * ___fighterRigidBody_5;
	// System.Int32 Fighting::floorMask
	int32_t ___floorMask_6;
	// System.Single Fighting::camRayLength
	float ___camRayLength_7;
};
