﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.ComponentModel.IComponent
struct IComponent_t813276512;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t3344846062;

#include "System_System_ComponentModel_Info3741775290.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentInfo
struct  ComponentInfo_t809310961  : public Info_t3741775290
{
public:
	// System.ComponentModel.IComponent System.ComponentModel.ComponentInfo::_component
	Il2CppObject * ____component_2;
	// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.ComponentInfo::_properties
	PropertyDescriptorCollection_t3344846062 * ____properties_3;

public:
	inline static int32_t get_offset_of__component_2() { return static_cast<int32_t>(offsetof(ComponentInfo_t809310961, ____component_2)); }
	inline Il2CppObject * get__component_2() const { return ____component_2; }
	inline Il2CppObject ** get_address_of__component_2() { return &____component_2; }
	inline void set__component_2(Il2CppObject * value)
	{
		____component_2 = value;
		Il2CppCodeGenWriteBarrier(&____component_2, value);
	}

	inline static int32_t get_offset_of__properties_3() { return static_cast<int32_t>(offsetof(ComponentInfo_t809310961, ____properties_3)); }
	inline PropertyDescriptorCollection_t3344846062 * get__properties_3() const { return ____properties_3; }
	inline PropertyDescriptorCollection_t3344846062 ** get_address_of__properties_3() { return &____properties_3; }
	inline void set__properties_3(PropertyDescriptorCollection_t3344846062 * value)
	{
		____properties_3 = value;
		Il2CppCodeGenWriteBarrier(&____properties_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif