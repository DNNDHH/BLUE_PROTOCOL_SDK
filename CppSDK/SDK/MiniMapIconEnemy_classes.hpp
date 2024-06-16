#pragma once

 

// Package: MiniMapIconEnemy

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MiniMapIconEnemy.MiniMapIconEnemy_C
// 0x0000 (0x02A0 - 0x02A0)
class UMiniMapIconEnemy_C final : public USBMiniMapIconEnemy
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MiniMapIconEnemy_C">();
	}
	static class UMiniMapIconEnemy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMiniMapIconEnemy_C>();
	}
};
static_assert(alignof(UMiniMapIconEnemy_C) == 0x000008, "Wrong alignment on UMiniMapIconEnemy_C");
static_assert(sizeof(UMiniMapIconEnemy_C) == 0x0002A0, "Wrong size on UMiniMapIconEnemy_C");

}

