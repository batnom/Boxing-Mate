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

// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t_591698798_0;
// System.Reflection.Binder
struct Binder_t1888259846_0;
// System.Globalization.CultureInfo
struct CultureInfo_t1283181710_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_BindingFlags_1383767410.h"

// System.Object System.Activator::CreateInstance(System.Type)
extern "C"  Object_t * Activator_CreateInstance_m383294261_0 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Activator::CreateInstance(System.Type,System.Object[])
extern "C"  Object_t * Activator_CreateInstance_m1465989661_0 (Object_t * __this /* static, unused */, Type_t * ___type, ObjectU5BU5D_t_591698798_0* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Activator::CreateInstance(System.Type,System.Object[],System.Object[])
extern "C"  Object_t * Activator_CreateInstance_m_1515547467_0 (Object_t * __this /* static, unused */, Type_t * ___type, ObjectU5BU5D_t_591698798_0* ___args, ObjectU5BU5D_t_591698798_0* ___activationAttributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Activator::CreateInstance(System.Type,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo,System.Object[])
extern "C"  Object_t * Activator_CreateInstance_m_198066737_0 (Object_t * __this /* static, unused */, Type_t * ___type, int32_t ___bindingAttr, Binder_t1888259846_0 * ___binder, ObjectU5BU5D_t_591698798_0* ___args, CultureInfo_t1283181710_0 * ___culture, ObjectU5BU5D_t_591698798_0* ___activationAttributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Activator::CreateInstance(System.Type,System.Boolean)
extern "C"  Object_t * Activator_CreateInstance_m_171396710_0 (Object_t * __this /* static, unused */, Type_t * ___type, bool ___nonPublic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Activator::CheckType(System.Type)
extern "C"  void Activator_CheckType_m_389889277_0 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Activator::CheckAbstractType(System.Type)
extern "C"  void Activator_CheckAbstractType_m_1457230225_0 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Activator::CreateInstanceInternal(System.Type)
extern "C"  Object_t * Activator_CreateInstanceInternal_m1397579852_0 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
