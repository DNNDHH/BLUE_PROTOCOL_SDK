#pragma once

 

// Package: SS_TrainAnimationSetup

#include "Basic.hpp"

#include "SS_TrainAnimationSetup_classes.hpp"
#include "SS_TrainAnimationSetup_parameters.hpp"


namespace SDK
{

// Function SS_TrainAnimationSetup.SS_TrainAnimationSetup_C.ExecuteUbergraph_SS_TrainAnimationSetup
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USS_TrainAnimationSetup_C::ExecuteUbergraph_SS_TrainAnimationSetup(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SS_TrainAnimationSetup_C", "ExecuteUbergraph_SS_TrainAnimationSetup");

	Params::SS_TrainAnimationSetup_C_ExecuteUbergraph_SS_TrainAnimationSetup Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SS_TrainAnimationSetup.SS_TrainAnimationSetup_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// class UAnimInstance*                    AnimInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UASAnimationSet*                  AnimationSet                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USS_TrainAnimationSetup_C::ReceiveBeginPlay(class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SS_TrainAnimationSetup_C", "ReceiveBeginPlay");

	Params::SS_TrainAnimationSetup_C_ReceiveBeginPlay Parms{};

	Parms.AnimInstance = AnimInstance;
	Parms.AnimationSet = AnimationSet;

	UObject::ProcessEvent(Func, &Parms);
}

}

