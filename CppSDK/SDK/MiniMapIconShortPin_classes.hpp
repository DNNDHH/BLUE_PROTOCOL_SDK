#pragma once

 

// Package: MiniMapIconShortPin

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MiniMapIconShortPin.MiniMapIconShortPin_C
// 0x0000 (0x0290 - 0x0290)
class UMiniMapIconShortPin_C final : public USBMiniMapIconShortPin
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MiniMapIconShortPin_C">();
	}
	static class UMiniMapIconShortPin_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMiniMapIconShortPin_C>();
	}
};
static_assert(alignof(UMiniMapIconShortPin_C) == 0x000008, "Wrong alignment on UMiniMapIconShortPin_C");
static_assert(sizeof(UMiniMapIconShortPin_C) == 0x000290, "Wrong size on UMiniMapIconShortPin_C");

}

