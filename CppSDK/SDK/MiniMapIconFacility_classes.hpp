#pragma once

 

// Package: MiniMapIconFacility

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MiniMapIconFacility.MiniMapIconFacility_C
// 0x0000 (0x0290 - 0x0290)
class UMiniMapIconFacility_C final : public USBMiniMapIconFacility
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MiniMapIconFacility_C">();
	}
	static class UMiniMapIconFacility_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMiniMapIconFacility_C>();
	}
};
static_assert(alignof(UMiniMapIconFacility_C) == 0x000008, "Wrong alignment on UMiniMapIconFacility_C");
static_assert(sizeof(UMiniMapIconFacility_C) == 0x000290, "Wrong size on UMiniMapIconFacility_C");

}

