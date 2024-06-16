#pragma once

 

// Package: MiniMapIconCarry

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MiniMapIconCarry.MiniMapIconCarry_C
// 0x0000 (0x0298 - 0x0298)
class UMiniMapIconCarry_C final : public USBMiniMapIconCarry
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MiniMapIconCarry_C">();
	}
	static class UMiniMapIconCarry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMiniMapIconCarry_C>();
	}
};
static_assert(alignof(UMiniMapIconCarry_C) == 0x000008, "Wrong alignment on UMiniMapIconCarry_C");
static_assert(sizeof(UMiniMapIconCarry_C) == 0x000298, "Wrong size on UMiniMapIconCarry_C");

}

