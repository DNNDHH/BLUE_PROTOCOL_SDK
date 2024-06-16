#pragma once

 

// Package: US_ToggleSenseMode

#include "Basic.hpp"

#include "US_ToggleSenseMode_classes.hpp"
#include "US_ToggleSenseMode_parameters.hpp"


namespace SDK
{

// Function US_ToggleSenseMode.US_ToggleSenseMode_C.ExecuteUbergraph_US_ToggleSenseMode
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUS_ToggleSenseMode_C::ExecuteUbergraph_US_ToggleSenseMode(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("US_ToggleSenseMode_C", "ExecuteUbergraph_US_ToggleSenseMode");

	Params::US_ToggleSenseMode_C_ExecuteUbergraph_US_ToggleSenseMode Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function US_ToggleSenseMode.US_ToggleSenseMode_C.ReceiveOnDeactivate
// (Event, Protected, BlueprintEvent)

void UUS_ToggleSenseMode_C::ReceiveOnDeactivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("US_ToggleSenseMode_C", "ReceiveOnDeactivate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function US_ToggleSenseMode.US_ToggleSenseMode_C.ReceiveOnActivate
// (Event, Protected, BlueprintEvent)

void UUS_ToggleSenseMode_C::ReceiveOnActivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("US_ToggleSenseMode_C", "ReceiveOnActivate");

	UObject::ProcessEvent(Func, nullptr);
}

}

