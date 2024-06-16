#pragma once

 

// Package: MiniMapIconQuestArea

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MiniMapIconQuestArea.MiniMapIconQuestArea_C
// 0x0000 (0x0290 - 0x0290)
class UMiniMapIconQuestArea_C final : public USBMiniMapIconArea
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MiniMapIconQuestArea_C">();
	}
	static class UMiniMapIconQuestArea_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMiniMapIconQuestArea_C>();
	}
};
static_assert(alignof(UMiniMapIconQuestArea_C) == 0x000008, "Wrong alignment on UMiniMapIconQuestArea_C");
static_assert(sizeof(UMiniMapIconQuestArea_C) == 0x000290, "Wrong size on UMiniMapIconQuestArea_C");

}

