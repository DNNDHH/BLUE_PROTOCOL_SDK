#pragma once

 

// Package: MiniMapBG

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MiniMapBG.MiniMapBG_C
// 0x0000 (0x0298 - 0x0298)
class UMiniMapBG_C final : public USBMiniMapBG
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MiniMapBG_C">();
	}
	static class UMiniMapBG_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMiniMapBG_C>();
	}
};
static_assert(alignof(UMiniMapBG_C) == 0x000008, "Wrong alignment on UMiniMapBG_C");
static_assert(sizeof(UMiniMapBG_C) == 0x000298, "Wrong size on UMiniMapBG_C");

}

