#pragma once

 

// Package: MiniMapIconID

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MiniMapIconID.MiniMapIconID_C
// 0x0000 (0x0290 - 0x0290)
class UMiniMapIconID_C final : public USBMiniMapIconID
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MiniMapIconID_C">();
	}
	static class UMiniMapIconID_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMiniMapIconID_C>();
	}
};
static_assert(alignof(UMiniMapIconID_C) == 0x000008, "Wrong alignment on UMiniMapIconID_C");
static_assert(sizeof(UMiniMapIconID_C) == 0x000290, "Wrong size on UMiniMapIconID_C");

}

