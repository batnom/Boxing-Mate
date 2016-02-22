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

// System.Collections.CollectionBase
struct CollectionBase_t_779267451_0;
// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t435631375_0;
// System.Collections.ArrayList
struct ArrayList_t2138871437_0;
// System.Collections.IList
struct IList_t1369951781_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.CollectionBase::.ctor()
extern "C"  void CollectionBase__ctor_m_1769082005_0 (CollectionBase_t_779267451_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void CollectionBase_System_Collections_ICollection_CopyTo_m92374031_0 (CollectionBase_t_779267451_0 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.CollectionBase::System.Collections.ICollection.get_SyncRoot()
extern "C"  Object_t * CollectionBase_System_Collections_ICollection_get_SyncRoot_m_436139437_0 (CollectionBase_t_779267451_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CollectionBase::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool CollectionBase_System_Collections_ICollection_get_IsSynchronized_m1494316047_0 (CollectionBase_t_779267451_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CollectionBase::System.Collections.IList.Add(System.Object)
extern "C"  int32_t CollectionBase_System_Collections_IList_Add_m_1967498025_0 (CollectionBase_t_779267451_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CollectionBase::System.Collections.IList.Contains(System.Object)
extern "C"  bool CollectionBase_System_Collections_IList_Contains_m1719143127_0 (CollectionBase_t_779267451_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CollectionBase::System.Collections.IList.IndexOf(System.Object)
extern "C"  int32_t CollectionBase_System_Collections_IList_IndexOf_m641329609_0 (CollectionBase_t_779267451_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C"  void CollectionBase_System_Collections_IList_Insert_m_1833361204_0 (CollectionBase_t_779267451_0 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::System.Collections.IList.Remove(System.Object)
extern "C"  void CollectionBase_System_Collections_IList_Remove_m_1363888358_0 (CollectionBase_t_779267451_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CollectionBase::System.Collections.IList.get_IsFixedSize()
extern "C"  bool CollectionBase_System_Collections_IList_get_IsFixedSize_m499578880_0 (CollectionBase_t_779267451_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CollectionBase::System.Collections.IList.get_IsReadOnly()
extern "C"  bool CollectionBase_System_Collections_IList_get_IsReadOnly_m_1411179813_0 (CollectionBase_t_779267451_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.CollectionBase::System.Collections.IList.get_Item(System.Int32)
extern "C"  Object_t * CollectionBase_System_Collections_IList_get_Item_m_1924579786_0 (CollectionBase_t_779267451_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C"  void CollectionBase_System_Collections_IList_set_Item_m1798990861_0 (CollectionBase_t_779267451_0 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CollectionBase::get_Count()
extern "C"  int32_t CollectionBase_get_Count_m740218359_0 (CollectionBase_t_779267451_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.CollectionBase::GetEnumerator()
extern "C"  Object_t * CollectionBase_GetEnumerator_m1161625307_0 (CollectionBase_t_779267451_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::Clear()
extern "C"  void CollectionBase_Clear_m_71104612_0 (CollectionBase_t_779267451_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::RemoveAt(System.Int32)
extern "C"  void CollectionBase_RemoveAt_m421234629_0 (CollectionBase_t_779267451_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Collections.CollectionBase::get_InnerList()
extern "C"  ArrayList_t2138871437_0 * CollectionBase_get_InnerList_m44314156_0 (CollectionBase_t_779267451_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList System.Collections.CollectionBase::get_List()
extern "C"  Object_t * CollectionBase_get_List_m303528484_0 (CollectionBase_t_779267451_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnClear()
extern "C"  void CollectionBase_OnClear_m522194371_0 (CollectionBase_t_779267451_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnClearComplete()
extern "C"  void CollectionBase_OnClearComplete_m892802372_0 (CollectionBase_t_779267451_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnInsert(System.Int32,System.Object)
extern "C"  void CollectionBase_OnInsert_m_1767539214_0 (CollectionBase_t_779267451_0 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnInsertComplete(System.Int32,System.Object)
extern "C"  void CollectionBase_OnInsertComplete_m659231903_0 (CollectionBase_t_779267451_0 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnRemove(System.Int32,System.Object)
extern "C"  void CollectionBase_OnRemove_m1947193027_0 (CollectionBase_t_779267451_0 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnRemoveComplete(System.Int32,System.Object)
extern "C"  void CollectionBase_OnRemoveComplete_m_1730228528_0 (CollectionBase_t_779267451_0 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnSet(System.Int32,System.Object,System.Object)
extern "C"  void CollectionBase_OnSet_m_524706427_0 (CollectionBase_t_779267451_0 * __this, int32_t ___index, Object_t * ___oldValue, Object_t * ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnSetComplete(System.Int32,System.Object,System.Object)
extern "C"  void CollectionBase_OnSetComplete_m562909496_0 (CollectionBase_t_779267451_0 * __this, int32_t ___index, Object_t * ___oldValue, Object_t * ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnValidate(System.Object)
extern "C"  void CollectionBase_OnValidate_m1837009054_0 (CollectionBase_t_779267451_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
