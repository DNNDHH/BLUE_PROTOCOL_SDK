#pragma once

 

// Package: IconBuddy

#include "Basic.hpp"

#include "IconBuddy_classes.hpp"
#include "IconBuddy_parameters.hpp"


namespace SDK
{

// Function IconBuddy.IconBuddy_C.OnSetInside
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsInSide                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UIconBuddy_C::OnSetInside(bool IsInSide)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconBuddy_C", "OnSetInside");

	Params::IconBuddy_C_OnSetInside Parms{};

	Parms.IsInSide = IsInSide;

	UObject::ProcessEvent(Func, &Parms);
}

}

