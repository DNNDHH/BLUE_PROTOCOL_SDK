#pragma once

 

// Package: StepListItem_AdventureBoard

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StepListItem_AdventureBoard.StepListItem_AdventureBoard_C
// 0x0000 (0x0288 - 0x0288)
class UStepListItem_AdventureBoard_C final : public USBStepListAdventureBoardItem
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StepListItem_AdventureBoard_C">();
	}
	static class UStepListItem_AdventureBoard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStepListItem_AdventureBoard_C>();
	}
};
static_assert(alignof(UStepListItem_AdventureBoard_C) == 0x000008, "Wrong alignment on UStepListItem_AdventureBoard_C");
static_assert(sizeof(UStepListItem_AdventureBoard_C) == 0x000288, "Wrong size on UStepListItem_AdventureBoard_C");

}

