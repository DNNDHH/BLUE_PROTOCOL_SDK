#pragma once

 

// Package: StepListItem_Timer

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StepListItem_Timer.StepListItem_Timer_C
// 0x0000 (0x0290 - 0x0290)
class UStepListItem_Timer_C final : public USBStepListQuestItemTimer
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StepListItem_Timer_C">();
	}
	static class UStepListItem_Timer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStepListItem_Timer_C>();
	}
};
static_assert(alignof(UStepListItem_Timer_C) == 0x000008, "Wrong alignment on UStepListItem_Timer_C");
static_assert(sizeof(UStepListItem_Timer_C) == 0x000290, "Wrong size on UStepListItem_Timer_C");

}

