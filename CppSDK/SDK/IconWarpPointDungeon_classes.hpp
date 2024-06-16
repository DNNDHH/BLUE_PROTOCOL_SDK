#pragma once

 

// Package: IconWarpPointDungeon

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass IconWarpPointDungeon.IconWarpPointDungeon_C
// 0x0000 (0x02C0 - 0x02C0)
class UIconWarpPointDungeon_C final : public USBMapWarpIconDungeon
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IconWarpPointDungeon_C">();
	}
	static class UIconWarpPointDungeon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIconWarpPointDungeon_C>();
	}
};
static_assert(alignof(UIconWarpPointDungeon_C) == 0x000008, "Wrong alignment on UIconWarpPointDungeon_C");
static_assert(sizeof(UIconWarpPointDungeon_C) == 0x0002C0, "Wrong size on UIconWarpPointDungeon_C");

}

