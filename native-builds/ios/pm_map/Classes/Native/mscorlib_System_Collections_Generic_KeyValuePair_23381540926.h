﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t3870600107;
// System.Collections.Generic.List`1<ProBuilder2.Common.pb_Face>
struct List_1_t2250520728;

#include "mscorlib_System_ValueType1744280289.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<UnityEngine.Material,System.Collections.Generic.List`1<ProBuilder2.Common.pb_Face>>
struct  KeyValuePair_2_t3381540926 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Material_t3870600107 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	List_1_t2250520728 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3381540926, ___key_0)); }
	inline Material_t3870600107 * get_key_0() const { return ___key_0; }
	inline Material_t3870600107 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Material_t3870600107 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3381540926, ___value_1)); }
	inline List_1_t2250520728 * get_value_1() const { return ___value_1; }
	inline List_1_t2250520728 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(List_1_t2250520728 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif