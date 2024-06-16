#pragma once

 

// Package: CommonIconToolTipContent_DateTime

#include "Basic.hpp"

#include "CommonIconToolTipContent_DateTime_classes.hpp"
#include "CommonIconToolTipContent_DateTime_parameters.hpp"


namespace SDK
{

// Function CommonIconToolTipContent_DateTime.CommonIconToolTipContent_DateTime_C.SetDateTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDateTime                        InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UCommonIconToolTipContent_DateTime_C::SetDateTime(const struct FDateTime& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContent_DateTime_C", "SetDateTime");

	Params::CommonIconToolTipContent_DateTime_C_SetDateTime Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}

}

