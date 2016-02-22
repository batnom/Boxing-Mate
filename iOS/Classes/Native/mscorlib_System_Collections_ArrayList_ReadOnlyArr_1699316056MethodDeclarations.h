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

// System.Collections.ArrayList/ReadOnlyArrayListWrapper
struct ReadOnlyArrayListWrapper_t_1699316056_0;
// System.Collections.ArrayList
struct ArrayList_t2138871437_0;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.IComparer
struct IComparer_t_1964796564_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.ArrayList/ReadOnlyArrayListWrapper::.ctor(System.Collections.ArrayList)
extern "C"  void ReadOnlyArrayListWrapper__ctor_m_192212071_0 (ReadOnlyArrayListWrapper_t_1699316056_0 * __this, ArrayList_t2138871437_0 * ___innerArrayList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.ArrayList/ReadOnlyArrayListWrapper::get_ErrorMessage()
extern "C"  String_t* ReadOnlyArrayListWrapper_get_ErrorMessage_m_606361651_0 (ReadOnlyArrayListWrapper_t_1699316056_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ReadOnlyArrayListWrapper::get_IsReadOnly()
extern "C"  bool ReadOnlyArrayListWrapper_get_IsReadOnly_m1840081327_0 (ReadOnlyArrayListWrapper_t_1699316056_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/ReadOnlyArrayListWrapper::get_Item(System.Int32)
extern "C"  Object_t * ReadOnlyArrayListWrapper_get_Item_m_156553662_0 (ReadOnlyArrayListWrapper_t_1699316056_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ReadOnlyArrayListWrapper::set_Item(System.Int32,System.Object)
extern "C"  void ReadOnlyArrayListWrapper_set_Item_m_2095950155_0 (ReadOnlyArrayListWrapper_t_1699316056_0 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ReadOnlyArrayListWrapper::Sort()
extern "C"  void ReadOnlyArrayListWrapper_Sort_m2056228524_0 (ReadOnlyArrayListWrapper_t_1699316056_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ReadOnlyArrayListWrapper::Sort(System.Collections.IComparer)
extern "C"  void ReadOnlyArrayListWrapper_Sort_m_1239464080_0 (ReadOnlyArrayListWrapper_t_1699316056_0 * __this, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
