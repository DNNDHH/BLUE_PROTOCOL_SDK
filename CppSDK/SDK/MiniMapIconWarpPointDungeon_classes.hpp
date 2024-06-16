#pragma once

 

// Package: MiniMapIconWarpPointDungeon

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MiniMapIconWarpPointDungeon.MiniMapIconWarpPointDungeon_C
// 0x0000 (0x0290 - 0x0290)
class UMiniMapIconWarpPointDungeon_C final : public USBMiniMapIconWarpDungeon
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MiniMapIconWarpPointDungeon_C">();
	}
	static class UMiniMapIconWarpPointDungeon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMiniMapIconWarpPointDungeon_C>();
	}
};
static_assert(alignof(UMiniMapIconWarpPointDungeon_C) == 0x000008, "Wrong alignment on UMiniMapIconWarpPointDungeon_C");
static_assert(sizeof(UMiniMapIconWarpPointDungeon_C) == 0x000290, "Wrong size on UMiniMapIconWarpPointDungeon_C");

}

