#pragma once

 

// Package: MiniMapIconBuddy

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MiniMapIconBuddy.MiniMapIconBuddy_C
// 0x0000 (0x0298 - 0x0298)
class UMiniMapIconBuddy_C final : public USBMiniMapIconBuddy
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MiniMapIconBuddy_C">();
	}
	static class UMiniMapIconBuddy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMiniMapIconBuddy_C>();
	}
};
static_assert(alignof(UMiniMapIconBuddy_C) == 0x000008, "Wrong alignment on UMiniMapIconBuddy_C");
static_assert(sizeof(UMiniMapIconBuddy_C) == 0x000298, "Wrong size on UMiniMapIconBuddy_C");

}

