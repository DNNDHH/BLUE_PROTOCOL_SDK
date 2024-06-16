#pragma once

 

// Package: MiniMapIconWarpPoint

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MiniMapIconWarpPoint.MiniMapIconWarpPoint_C
// 0x0000 (0x0290 - 0x0290)
class UMiniMapIconWarpPoint_C final : public USBMiniMapIconWarp
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MiniMapIconWarpPoint_C">();
	}
	static class UMiniMapIconWarpPoint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMiniMapIconWarpPoint_C>();
	}
};
static_assert(alignof(UMiniMapIconWarpPoint_C) == 0x000008, "Wrong alignment on UMiniMapIconWarpPoint_C");
static_assert(sizeof(UMiniMapIconWarpPoint_C) == 0x000290, "Wrong size on UMiniMapIconWarpPoint_C");

}

