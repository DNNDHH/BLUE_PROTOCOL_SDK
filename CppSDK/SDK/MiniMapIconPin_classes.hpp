#pragma once

 

// Package: MiniMapIconPin

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MiniMapIconPin.MiniMapIconPin_C
// 0x0000 (0x0290 - 0x0290)
class UMiniMapIconPin_C final : public USBMiniMapIconPin
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MiniMapIconPin_C">();
	}
	static class UMiniMapIconPin_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMiniMapIconPin_C>();
	}
};
static_assert(alignof(UMiniMapIconPin_C) == 0x000008, "Wrong alignment on UMiniMapIconPin_C");
static_assert(sizeof(UMiniMapIconPin_C) == 0x000290, "Wrong size on UMiniMapIconPin_C");

}

