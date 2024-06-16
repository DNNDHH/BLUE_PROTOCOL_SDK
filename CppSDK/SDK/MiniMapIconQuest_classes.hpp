#pragma once

 

// Package: MiniMapIconQuest

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MiniMapIconQuest.MiniMapIconQuest_C
// 0x0000 (0x0290 - 0x0290)
class UMiniMapIconQuest_C final : public USBMiniMapIconQuest
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MiniMapIconQuest_C">();
	}
	static class UMiniMapIconQuest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMiniMapIconQuest_C>();
	}
};
static_assert(alignof(UMiniMapIconQuest_C) == 0x000008, "Wrong alignment on UMiniMapIconQuest_C");
static_assert(sizeof(UMiniMapIconQuest_C) == 0x000290, "Wrong size on UMiniMapIconQuest_C");

}

