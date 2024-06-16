#pragma once

 

// Package: StepListHR

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StepListHR.StepListHR_C
// 0x0000 (0x0278 - 0x0278)
class UStepListHR_C final : public UUserWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StepListHR_C">();
	}
	static class UStepListHR_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStepListHR_C>();
	}
};
static_assert(alignof(UStepListHR_C) == 0x000008, "Wrong alignment on UStepListHR_C");
static_assert(sizeof(UStepListHR_C) == 0x000278, "Wrong size on UStepListHR_C");

}

