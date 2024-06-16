#pragma once

 

// Package: MiniMapIconClimb

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MiniMapIconClimb.MiniMapIconClimb_C
// 0x0000 (0x0290 - 0x0290)
class UMiniMapIconClimb_C final : public USBMiniMapIconClimb
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MiniMapIconClimb_C">();
	}
	static class UMiniMapIconClimb_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMiniMapIconClimb_C>();
	}
};
static_assert(alignof(UMiniMapIconClimb_C) == 0x000008, "Wrong alignment on UMiniMapIconClimb_C");
static_assert(sizeof(UMiniMapIconClimb_C) == 0x000290, "Wrong size on UMiniMapIconClimb_C");

}

