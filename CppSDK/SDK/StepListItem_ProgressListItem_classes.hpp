#pragma once

 

// Package: StepListItem_ProgressListItem

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StepListItem_ProgressListItem.StepListItem_ProgressListItem_C
// 0x0000 (0x02E0 - 0x02E0)
class UStepListItem_ProgressListItem_C final : public USBStepListProgressListItem
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StepListItem_ProgressListItem_C">();
	}
	static class UStepListItem_ProgressListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStepListItem_ProgressListItem_C>();
	}
};
static_assert(alignof(UStepListItem_ProgressListItem_C) == 0x000008, "Wrong alignment on UStepListItem_ProgressListItem_C");
static_assert(sizeof(UStepListItem_ProgressListItem_C) == 0x0002E0, "Wrong size on UStepListItem_ProgressListItem_C");

}

