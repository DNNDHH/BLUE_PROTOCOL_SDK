#pragma once

 

// Package: StepList_AdventureBoard

#include "Basic.hpp"

#include "StepList_AdventureBoard_classes.hpp"
#include "StepList_AdventureBoard_parameters.hpp"


namespace SDK
{

// Function StepList_AdventureBoard.StepList_AdventureBoard_C.CreateAdventureBoardCondition
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FSBAdventureBoardCondition       ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FSBAdventureBoardCondition UStepList_AdventureBoard_C::CreateAdventureBoardCondition() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepList_AdventureBoard_C", "CreateAdventureBoardCondition");

	Params::StepList_AdventureBoard_C_CreateAdventureBoardCondition Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

