#pragma once

 

// Package: BP_PlayerLevelStartSequenceTaskDemoWaiting

#include "Basic.hpp"

#include "BP_PlayerLevelStartSequenceTaskDemoWaiting_classes.hpp"
#include "BP_PlayerLevelStartSequenceTaskDemoWaiting_parameters.hpp"


namespace SDK
{

// Function BP_PlayerLevelStartSequenceTaskDemoWaiting.BP_PlayerLevelStartSequenceTaskDemoWaiting_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskDemoWaiting
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerLevelStartSequenceTaskDemoWaiting_C::ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskDemoWaiting(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskDemoWaiting_C", "ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskDemoWaiting");

	Params::BP_PlayerLevelStartSequenceTaskDemoWaiting_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskDemoWaiting Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLevelStartSequenceTaskDemoWaiting.BP_PlayerLevelStartSequenceTaskDemoWaiting_C.Start
// (Event, Public, BlueprintEvent)

void UBP_PlayerLevelStartSequenceTaskDemoWaiting_C::Start()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskDemoWaiting_C", "Start");

	UObject::ProcessEvent(Func, nullptr);
}

}

