#pragma once

 

// Package: MiniMapName

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MiniMapName.MiniMapName_C
// 0x0000 (0x0280 - 0x0280)
class UMiniMapName_C final : public USBMiniMapName
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MiniMapName_C">();
	}
	static class UMiniMapName_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMiniMapName_C>();
	}
};
static_assert(alignof(UMiniMapName_C) == 0x000008, "Wrong alignment on UMiniMapName_C");
static_assert(sizeof(UMiniMapName_C) == 0x000280, "Wrong size on UMiniMapName_C");

}

