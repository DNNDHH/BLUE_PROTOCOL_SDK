#pragma once

 

// Package: IconCamp

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass IconCamp.IconCamp_C
// 0x0000 (0x0298 - 0x0298)
class UIconCamp_C final : public USBMapCampIcon
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IconCamp_C">();
	}
	static class UIconCamp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIconCamp_C>();
	}
};
static_assert(alignof(UIconCamp_C) == 0x000008, "Wrong alignment on UIconCamp_C");
static_assert(sizeof(UIconCamp_C) == 0x000298, "Wrong size on UIconCamp_C");

}

