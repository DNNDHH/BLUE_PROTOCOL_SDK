#pragma once

 

// Package: MiniMapIconNamedEnemy

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MiniMapIconNamedEnemy.MiniMapIconNamedEnemy_C
// 0x0000 (0x02A0 - 0x02A0)
class UMiniMapIconNamedEnemy_C final : public USBMiniMapIconNamedEnemy
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MiniMapIconNamedEnemy_C">();
	}
	static class UMiniMapIconNamedEnemy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMiniMapIconNamedEnemy_C>();
	}
};
static_assert(alignof(UMiniMapIconNamedEnemy_C) == 0x000008, "Wrong alignment on UMiniMapIconNamedEnemy_C");
static_assert(sizeof(UMiniMapIconNamedEnemy_C) == 0x0002A0, "Wrong size on UMiniMapIconNamedEnemy_C");

}

