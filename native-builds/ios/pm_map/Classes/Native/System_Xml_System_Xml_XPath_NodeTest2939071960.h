﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XPath.AxisSpecifier
struct AxisSpecifier_t3783148883;

#include "System_Xml_System_Xml_XPath_NodeSet2875795446.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.NodeTest
struct  NodeTest_t2939071960  : public NodeSet_t2875795446
{
public:
	// System.Xml.XPath.AxisSpecifier System.Xml.XPath.NodeTest::_axis
	AxisSpecifier_t3783148883 * ____axis_0;

public:
	inline static int32_t get_offset_of__axis_0() { return static_cast<int32_t>(offsetof(NodeTest_t2939071960, ____axis_0)); }
	inline AxisSpecifier_t3783148883 * get__axis_0() const { return ____axis_0; }
	inline AxisSpecifier_t3783148883 ** get_address_of__axis_0() { return &____axis_0; }
	inline void set__axis_0(AxisSpecifier_t3783148883 * value)
	{
		____axis_0 = value;
		Il2CppCodeGenWriteBarrier(&____axis_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif