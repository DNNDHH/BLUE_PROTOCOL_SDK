#pragma once

 

// Package: CmnExpOverflowLevelMark

#include "Basic.hpp"

#include "CmnExpOverflowLevelMark_classes.hpp"
#include "CmnExpOverflowLevelMark_parameters.hpp"


namespace SDK
{

// Function CmnExpOverflowLevelMark.CmnExpOverflowLevelMark_C.SetAsLevelCounterStop
// (Public, BlueprintCallable, BlueprintEvent)

void UCmnExpOverflowLevelMark_C::SetAsLevelCounterStop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnExpOverflowLevelMark_C", "SetAsLevelCounterStop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnExpOverflowLevelMark.CmnExpOverflowLevelMark_C.SetAsLevelLimit
// (Public, BlueprintCallable, BlueprintEvent)

void UCmnExpOverflowLevelMark_C::SetAsLevelLimit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnExpOverflowLevelMark_C", "SetAsLevelLimit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnExpOverflowLevelMark.CmnExpOverflowLevelMark_C.SwitchImage
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InActiveIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnExpOverflowLevelMark_C::SwitchImage(int32 InActiveIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnExpOverflowLevelMark_C", "SwitchImage");

	Params::CmnExpOverflowLevelMark_C_SwitchImage Parms{};

	Parms.InActiveIndex = InActiveIndex;

	UObject::ProcessEvent(Func, &Parms);
}

}

