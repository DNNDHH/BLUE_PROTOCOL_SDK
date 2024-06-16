#pragma once

 

// Package: US_SetPartyStrategy

#include "Basic.hpp"

#include "US_SetPartyStrategy_classes.hpp"
#include "US_SetPartyStrategy_parameters.hpp"


namespace SDK
{

// Function US_SetPartyStrategy.US_SetPartyStrategy_C.ExecuteUbergraph_US_SetPartyStrategy
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUS_SetPartyStrategy_C::ExecuteUbergraph_US_SetPartyStrategy(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("US_SetPartyStrategy_C", "ExecuteUbergraph_US_SetPartyStrategy");

	Params::US_SetPartyStrategy_C_ExecuteUbergraph_US_SetPartyStrategy Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function US_SetPartyStrategy.US_SetPartyStrategy_C.ReceiveOnDeactivate
// (Event, Protected, BlueprintEvent)

void UUS_SetPartyStrategy_C::ReceiveOnDeactivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("US_SetPartyStrategy_C", "ReceiveOnDeactivate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function US_SetPartyStrategy.US_SetPartyStrategy_C.ReceiveOnActivate
// (Event, Protected, BlueprintEvent)

void UUS_SetPartyStrategy_C::ReceiveOnActivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("US_SetPartyStrategy_C", "ReceiveOnActivate");

	UObject::ProcessEvent(Func, nullptr);
}

}

