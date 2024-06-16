#pragma once

 

// Package: StepList_AdventureBoard

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StepList_AdventureBoard.StepList_AdventureBoard_C
// 0x0000 (0x0280 - 0x0280)
class UStepList_AdventureBoard_C final : public USBStepListAdventureBoard
{
public:
	struct FSBAdventureBoardCondition CreateAdventureBoardCondition() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StepList_AdventureBoard_C">();
	}
	static class UStepList_AdventureBoard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStepList_AdventureBoard_C>();
	}
};
static_assert(alignof(UStepList_AdventureBoard_C) == 0x000008, "Wrong alignment on UStepList_AdventureBoard_C");
static_assert(sizeof(UStepList_AdventureBoard_C) == 0x000280, "Wrong size on UStepList_AdventureBoard_C");

}

