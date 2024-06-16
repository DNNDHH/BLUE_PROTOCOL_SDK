#pragma once

 

// Package: IconCarry

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass IconCarry.IconCarry_C
// 0x0000 (0x0298 - 0x0298)
class UIconCarry_C final : public USBMapIcon
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IconCarry_C">();
	}
	static class UIconCarry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIconCarry_C>();
	}
};
static_assert(alignof(UIconCarry_C) == 0x000008, "Wrong alignment on UIconCarry_C");
static_assert(sizeof(UIconCarry_C) == 0x000298, "Wrong size on UIconCarry_C");

}

