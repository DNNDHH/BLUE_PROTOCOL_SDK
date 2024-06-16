#pragma once

 

// Package: MiniMapIconFishing

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MiniMapIconFishing.MiniMapIconFishing_C
// 0x0000 (0x0290 - 0x0290)
class UMiniMapIconFishing_C final : public USBMiniMapIconFishing
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MiniMapIconFishing_C">();
	}
	static class UMiniMapIconFishing_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMiniMapIconFishing_C>();
	}
};
static_assert(alignof(UMiniMapIconFishing_C) == 0x000008, "Wrong alignment on UMiniMapIconFishing_C");
static_assert(sizeof(UMiniMapIconFishing_C) == 0x000290, "Wrong size on UMiniMapIconFishing_C");

}

