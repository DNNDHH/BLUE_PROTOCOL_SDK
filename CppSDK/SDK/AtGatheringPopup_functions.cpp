#pragma once

 

// Package: AtGatheringPopup

#include "Basic.hpp"

#include "AtGatheringPopup_classes.hpp"
#include "AtGatheringPopup_parameters.hpp"


namespace SDK
{

// Function AtGatheringPopup.AtGatheringPopup_C.ExecuteUbergraph_AtGatheringPopup
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAtGatheringPopup_C::ExecuteUbergraph_AtGatheringPopup(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AtGatheringPopup_C", "ExecuteUbergraph_AtGatheringPopup");

	Params::AtGatheringPopup_C_ExecuteUbergraph_AtGatheringPopup Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AtGatheringPopup.AtGatheringPopup_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAtGatheringPopup_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AtGatheringPopup_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

