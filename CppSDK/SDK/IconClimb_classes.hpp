#pragma once

 

// Package: IconClimb

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass IconClimb.IconClimb_C
// 0x0000 (0x0298 - 0x0298)
class UIconClimb_C final : public USBMapClimbIcon
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IconClimb_C">();
	}
	static class UIconClimb_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIconClimb_C>();
	}
};
static_assert(alignof(UIconClimb_C) == 0x000008, "Wrong alignment on UIconClimb_C");
static_assert(sizeof(UIconClimb_C) == 0x000298, "Wrong size on UIconClimb_C");

}

