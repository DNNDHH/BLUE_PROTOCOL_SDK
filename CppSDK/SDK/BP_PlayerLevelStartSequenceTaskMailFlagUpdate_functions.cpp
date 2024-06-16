#pragma once

 

// Package: BP_PlayerLevelStartSequenceTaskMailFlagUpdate

#include "Basic.hpp"

#include "BP_PlayerLevelStartSequenceTaskMailFlagUpdate_classes.hpp"
#include "BP_PlayerLevelStartSequenceTaskMailFlagUpdate_parameters.hpp"


namespace SDK
{

// Function BP_PlayerLevelStartSequenceTaskMailFlagUpdate.BP_PlayerLevelStartSequenceTaskMailFlagUpdate_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskMailFlagUpdate
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerLevelStartSequenceTaskMailFlagUpdate_C::ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskMailFlagUpdate(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskMailFlagUpdate_C", "ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskMailFlagUpdate");

	Params::BP_PlayerLevelStartSequenceTaskMailFlagUpdate_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskMailFlagUpdate Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLevelStartSequenceTaskMailFlagUpdate.BP_PlayerLevelStartSequenceTaskMailFlagUpdate_C.Start
// (Event, Public, BlueprintEvent)

void UBP_PlayerLevelStartSequenceTaskMailFlagUpdate_C::Start()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskMailFlagUpdate_C", "Start");

	UObject::ProcessEvent(Func, nullptr);
}

}

