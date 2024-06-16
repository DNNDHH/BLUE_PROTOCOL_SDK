#pragma once

 

// Package: MiniMapIconWarpPointEx

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MiniMapIconWarpPointEx.MiniMapIconWarpPointEx_C
// 0x0000 (0x0290 - 0x0290)
class UMiniMapIconWarpPointEx_C final : public USBMiniMapIconWarpEx
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MiniMapIconWarpPointEx_C">();
	}
	static class UMiniMapIconWarpPointEx_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMiniMapIconWarpPointEx_C>();
	}
};
static_assert(alignof(UMiniMapIconWarpPointEx_C) == 0x000008, "Wrong alignment on UMiniMapIconWarpPointEx_C");
static_assert(sizeof(UMiniMapIconWarpPointEx_C) == 0x000290, "Wrong size on UMiniMapIconWarpPointEx_C");

}

