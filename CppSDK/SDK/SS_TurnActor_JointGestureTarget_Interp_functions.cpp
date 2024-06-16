#pragma once

 

// Package: SS_TurnActor_JointGestureTarget_Interp

#include "Basic.hpp"

#include "SS_TurnActor_JointGestureTarget_Interp_classes.hpp"
#include "SS_TurnActor_JointGestureTarget_Interp_parameters.hpp"


namespace SDK
{

// Function SS_TurnActor_JointGestureTarget_Interp.SS_TurnActor_JointGestureTarget_Interp_C.ReceiveGetInterpSpeed
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float USS_TurnActor_JointGestureTarget_Interp_C::ReceiveGetInterpSpeed() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SS_TurnActor_JointGestureTarget_Interp_C", "ReceiveGetInterpSpeed");

	Params::SS_TurnActor_JointGestureTarget_Interp_C_ReceiveGetInterpSpeed Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

