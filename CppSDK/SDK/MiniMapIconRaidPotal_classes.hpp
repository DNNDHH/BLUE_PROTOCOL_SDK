#pragma once

 

// Package: MiniMapIconRaidPotal

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MiniMapIconRaidPotal.MiniMapIconRaidPotal_C
// 0x0000 (0x0290 - 0x0290)
class UMiniMapIconRaidPotal_C final : public USBMiniMapIconID
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MiniMapIconRaidPotal_C">();
	}
	static class UMiniMapIconRaidPotal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMiniMapIconRaidPotal_C>();
	}
};
static_assert(alignof(UMiniMapIconRaidPotal_C) == 0x000008, "Wrong alignment on UMiniMapIconRaidPotal_C");
static_assert(sizeof(UMiniMapIconRaidPotal_C) == 0x000290, "Wrong size on UMiniMapIconRaidPotal_C");

}

