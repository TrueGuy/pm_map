﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XPath.Expression
struct Expression_t2556460284;
// System.Xml.XPath.NodeSet
struct NodeSet_t2875795446;

#include "System_Xml_System_Xml_XPath_NodeSet2875795446.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprSLASH
struct  ExprSLASH_t628862782  : public NodeSet_t2875795446
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.ExprSLASH::left
	Expression_t2556460284 * ___left_0;
	// System.Xml.XPath.NodeSet System.Xml.XPath.ExprSLASH::right
	NodeSet_t2875795446 * ___right_1;

public:
	inline static int32_t get_offset_of_left_0() { return static_cast<int32_t>(offsetof(ExprSLASH_t628862782, ___left_0)); }
	inline Expression_t2556460284 * get_left_0() const { return ___left_0; }
	inline Expression_t2556460284 ** get_address_of_left_0() { return &___left_0; }
	inline void set_left_0(Expression_t2556460284 * value)
	{
		___left_0 = value;
		Il2CppCodeGenWriteBarrier(&___left_0, value);
	}

	inline static int32_t get_offset_of_right_1() { return static_cast<int32_t>(offsetof(ExprSLASH_t628862782, ___right_1)); }
	inline NodeSet_t2875795446 * get_right_1() const { return ___right_1; }
	inline NodeSet_t2875795446 ** get_address_of_right_1() { return &___right_1; }
	inline void set_right_1(NodeSet_t2875795446 * value)
	{
		___right_1 = value;
		Il2CppCodeGenWriteBarrier(&___right_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif