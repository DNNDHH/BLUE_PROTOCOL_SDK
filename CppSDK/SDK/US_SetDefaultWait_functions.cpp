#pragma once

 

// Package: US_SetDefaultWait

#include "Basic.hpp"

#include "US_SetDefaultWait_classes.hpp"
#include "US_SetDefaultWait_parameters.hpp"


namespace SDK
{

// Function US_SetDefaultWait.US_SetDefaultWait_C.ExecuteUbergraph_US_SetDefaultWait
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUS_SetDefaultWait_C::ExecuteUbergraph_US_SetDefaultWait(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("US_SetDefaultWait_C", "ExecuteUbergraph_US_SetDefaultWait");

	Params::US_SetDefaultWait_C_ExecuteUbergraph_US_SetDefaultWait Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function US_SetDefaultWait.US_SetDefaultWait_C.ReceiveOnDeactivate
// (Event, Protected, BlueprintEvent)

void UUS_SetDefaultWait_C::ReceiveOnDeactivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("US_SetDefaultWait_C", "ReceiveOnDeactivate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function US_SetDefaultWait.US_SetDefaultWait_C.ReceiveOnActivate
// (Event, Protected, BlueprintEvent)

void UUS_SetDefaultWait_C::ReceiveOnActivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("US_SetDefaultWait_C", "ReceiveOnActivate");

	UObject::ProcessEvent(Func, nullptr);
}

}

