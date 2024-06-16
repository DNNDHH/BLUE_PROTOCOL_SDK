#pragma once

 

// Package: BP_PlayerLevelStartSequenceComponent

#include "Basic.hpp"

#include "BP_PlayerLevelStartSequenceComponent_classes.hpp"
#include "BP_PlayerLevelStartSequenceComponent_parameters.hpp"


namespace SDK
{

// Function BP_PlayerLevelStartSequenceComponent.BP_PlayerLevelStartSequenceComponent_C.CreateTaskList
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_PlayerLevelStartSequenceComponent_C::CreateTaskList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceComponent_C", "CreateTaskList");

	Params::BP_PlayerLevelStartSequenceComponent_C_CreateTaskList Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

