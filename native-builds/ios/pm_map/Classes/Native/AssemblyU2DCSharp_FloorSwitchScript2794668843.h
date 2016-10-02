﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// AppScript
struct AppScript_t3488119340;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FloorSwitchScript
struct  FloorSwitchScript_t2794668843  : public MonoBehaviour_t667441552
{
public:
	// AppScript FloorSwitchScript::app
	AppScript_t3488119340 * ___app_2;
	// System.Single FloorSwitchScript::imageAlpha
	float ___imageAlpha_3;
	// System.Single FloorSwitchScript::textAlpha
	float ___textAlpha_4;

public:
	inline static int32_t get_offset_of_app_2() { return static_cast<int32_t>(offsetof(FloorSwitchScript_t2794668843, ___app_2)); }
	inline AppScript_t3488119340 * get_app_2() const { return ___app_2; }
	inline AppScript_t3488119340 ** get_address_of_app_2() { return &___app_2; }
	inline void set_app_2(AppScript_t3488119340 * value)
	{
		___app_2 = value;
		Il2CppCodeGenWriteBarrier(&___app_2, value);
	}

	inline static int32_t get_offset_of_imageAlpha_3() { return static_cast<int32_t>(offsetof(FloorSwitchScript_t2794668843, ___imageAlpha_3)); }
	inline float get_imageAlpha_3() const { return ___imageAlpha_3; }
	inline float* get_address_of_imageAlpha_3() { return &___imageAlpha_3; }
	inline void set_imageAlpha_3(float value)
	{
		___imageAlpha_3 = value;
	}

	inline static int32_t get_offset_of_textAlpha_4() { return static_cast<int32_t>(offsetof(FloorSwitchScript_t2794668843, ___textAlpha_4)); }
	inline float get_textAlpha_4() const { return ___textAlpha_4; }
	inline float* get_address_of_textAlpha_4() { return &___textAlpha_4; }
	inline void set_textAlpha_4(float value)
	{
		___textAlpha_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif