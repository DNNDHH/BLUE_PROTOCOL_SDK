#pragma once

 

// Package: IconShortPin

#include "Basic.hpp"

#include "IconShortPin_classes.hpp"
#include "IconShortPin_parameters.hpp"


namespace SDK
{

// Function IconShortPin.IconShortPin_C.OnSetInside
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsInSide                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UIconShortPin_C::OnSetInside(bool IsInSide)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconShortPin_C", "OnSetInside");

	Params::IconShortPin_C_OnSetInside Parms{};

	Parms.IsInSide = IsInSide;

	UObject::ProcessEvent(Func, &Parms);
}

}

