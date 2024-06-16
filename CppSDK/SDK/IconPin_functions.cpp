#pragma once

 

// Package: IconPin

#include "Basic.hpp"

#include "IconPin_classes.hpp"
#include "IconPin_parameters.hpp"


namespace SDK
{

// Function IconPin.IconPin_C.OnSetup
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UIconPin_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconPin_C", "OnSetup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function IconPin.IconPin_C.OnSetInside
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsInSide                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UIconPin_C::OnSetInside(bool IsInSide)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconPin_C", "OnSetInside");

	Params::IconPin_C_OnSetInside Parms{};

	Parms.IsInSide = IsInSide;

	UObject::ProcessEvent(Func, &Parms);
}

}

