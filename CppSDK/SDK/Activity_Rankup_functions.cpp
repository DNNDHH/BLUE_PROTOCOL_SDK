#pragma once

 

// Package: Activity_Rankup

#include "Basic.hpp"

#include "Activity_Rankup_classes.hpp"
#include "Activity_Rankup_parameters.hpp"


namespace SDK
{

// Function Activity_Rankup.Activity_Rankup_C.ExecuteUbergraph_Activity_Rankup
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActivity_Rankup_C::ExecuteUbergraph_Activity_Rankup(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Activity_Rankup_C", "ExecuteUbergraph_Activity_Rankup");

	Params::Activity_Rankup_C_ExecuteUbergraph_Activity_Rankup Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Activity_Rankup.Activity_Rankup_C.SetActivity_Internal
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGuildActivity                   Other                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UActivity_Rankup_C::SetActivity_Internal(const struct FGuildActivity& Other)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Activity_Rankup_C", "SetActivity_Internal");

	Params::Activity_Rankup_C_SetActivity_Internal Parms{};

	Parms.Other = std::move(Other);

	UObject::ProcessEvent(Func, &Parms);
}

}

