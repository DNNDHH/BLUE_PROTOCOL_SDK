#pragma once

 

// Package: MiniMapIconCarryBase

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MiniMapIconCarryBase.MiniMapIconCarryBase_C
// 0x0000 (0x0290 - 0x0290)
class UMiniMapIconCarryBase_C final : public USBMiniMapIconCarryBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MiniMapIconCarryBase_C">();
	}
	static class UMiniMapIconCarryBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMiniMapIconCarryBase_C>();
	}
};
static_assert(alignof(UMiniMapIconCarryBase_C) == 0x000008, "Wrong alignment on UMiniMapIconCarryBase_C");
static_assert(sizeof(UMiniMapIconCarryBase_C) == 0x000290, "Wrong size on UMiniMapIconCarryBase_C");

}

