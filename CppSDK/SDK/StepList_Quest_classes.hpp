#pragma once

 

// Package: StepList_Quest

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StepList_Quest.StepList_Quest_C
// 0x0000 (0x0290 - 0x0290)
class UStepList_Quest_C final : public USBStepListQuest
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StepList_Quest_C">();
	}
	static class UStepList_Quest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStepList_Quest_C>();
	}
};
static_assert(alignof(UStepList_Quest_C) == 0x000008, "Wrong alignment on UStepList_Quest_C");
static_assert(sizeof(UStepList_Quest_C) == 0x000290, "Wrong size on UStepList_Quest_C");

}

