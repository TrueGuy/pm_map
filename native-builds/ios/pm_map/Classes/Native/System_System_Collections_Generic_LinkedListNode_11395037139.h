﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`2<System.Boolean,TMPro.TextMeshProUGUI>
struct Action_2_t1778302432;
// System.Collections.Generic.LinkedList`1<System.Action`2<System.Boolean,TMPro.TextMeshProUGUI>>
struct LinkedList_1_t3947904897;
// System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Boolean,TMPro.TextMeshProUGUI>>
struct LinkedListNode_1_t1395037139;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.LinkedListNode`1<System.Action`2<System.Boolean,TMPro.TextMeshProUGUI>>
struct  LinkedListNode_1_t1395037139  : public Il2CppObject
{
public:
	// T System.Collections.Generic.LinkedListNode`1::item
	Action_2_t1778302432 * ___item_0;
	// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1::container
	LinkedList_1_t3947904897 * ___container_1;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1::forward
	LinkedListNode_1_t1395037139 * ___forward_2;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1::back
	LinkedListNode_1_t1395037139 * ___back_3;

public:
	inline static int32_t get_offset_of_item_0() { return static_cast<int32_t>(offsetof(LinkedListNode_1_t1395037139, ___item_0)); }
	inline Action_2_t1778302432 * get_item_0() const { return ___item_0; }
	inline Action_2_t1778302432 ** get_address_of_item_0() { return &___item_0; }
	inline void set_item_0(Action_2_t1778302432 * value)
	{
		___item_0 = value;
		Il2CppCodeGenWriteBarrier(&___item_0, value);
	}

	inline static int32_t get_offset_of_container_1() { return static_cast<int32_t>(offsetof(LinkedListNode_1_t1395037139, ___container_1)); }
	inline LinkedList_1_t3947904897 * get_container_1() const { return ___container_1; }
	inline LinkedList_1_t3947904897 ** get_address_of_container_1() { return &___container_1; }
	inline void set_container_1(LinkedList_1_t3947904897 * value)
	{
		___container_1 = value;
		Il2CppCodeGenWriteBarrier(&___container_1, value);
	}

	inline static int32_t get_offset_of_forward_2() { return static_cast<int32_t>(offsetof(LinkedListNode_1_t1395037139, ___forward_2)); }
	inline LinkedListNode_1_t1395037139 * get_forward_2() const { return ___forward_2; }
	inline LinkedListNode_1_t1395037139 ** get_address_of_forward_2() { return &___forward_2; }
	inline void set_forward_2(LinkedListNode_1_t1395037139 * value)
	{
		___forward_2 = value;
		Il2CppCodeGenWriteBarrier(&___forward_2, value);
	}

	inline static int32_t get_offset_of_back_3() { return static_cast<int32_t>(offsetof(LinkedListNode_1_t1395037139, ___back_3)); }
	inline LinkedListNode_1_t1395037139 * get_back_3() const { return ___back_3; }
	inline LinkedListNode_1_t1395037139 ** get_address_of_back_3() { return &___back_3; }
	inline void set_back_3(LinkedListNode_1_t1395037139 * value)
	{
		___back_3 = value;
		Il2CppCodeGenWriteBarrier(&___back_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif