#pragma once

 

// Package: StepListCheckIcon

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StepListCheckIcon.StepListCheckIcon_C
// 0x0000 (0x0288 - 0x0288)
class UStepListCheckIcon_C final : public USBStepListCheckIcon
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StepListCheckIcon_C">();
	}
	static class UStepListCheckIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStepListCheckIcon_C>();
	}
};
static_assert(alignof(UStepListCheckIcon_C) == 0x000008, "Wrong alignment on UStepListCheckIcon_C");
static_assert(sizeof(UStepListCheckIcon_C) == 0x000288, "Wrong size on UStepListCheckIcon_C");

}

