#pragma once

 

// Package: MiniMapIconCamp

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MiniMapIconCamp.MiniMapIconCamp_C
// 0x0000 (0x0290 - 0x0290)
class UMiniMapIconCamp_C final : public USBMiniMapIconCamp
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MiniMapIconCamp_C">();
	}
	static class UMiniMapIconCamp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMiniMapIconCamp_C>();
	}
};
static_assert(alignof(UMiniMapIconCamp_C) == 0x000008, "Wrong alignment on UMiniMapIconCamp_C");
static_assert(sizeof(UMiniMapIconCamp_C) == 0x000290, "Wrong size on UMiniMapIconCamp_C");

}

