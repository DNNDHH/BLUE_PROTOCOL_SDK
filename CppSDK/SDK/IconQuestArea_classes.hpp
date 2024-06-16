#pragma once

 

// Package: IconQuestArea

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass IconQuestArea.IconQuestArea_C
// 0x0000 (0x02C8 - 0x02C8)
class UIconQuestArea_C final : public USBMapAreaIcon
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IconQuestArea_C">();
	}
	static class UIconQuestArea_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIconQuestArea_C>();
	}
};
static_assert(alignof(UIconQuestArea_C) == 0x000008, "Wrong alignment on UIconQuestArea_C");
static_assert(sizeof(UIconQuestArea_C) == 0x0002C8, "Wrong size on UIconQuestArea_C");

}

