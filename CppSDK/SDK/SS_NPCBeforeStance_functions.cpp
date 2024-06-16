#pragma once

 

// Package: SS_NPCBeforeStance

#include "Basic.hpp"

#include "SS_NPCBeforeStance_classes.hpp"
#include "SS_NPCBeforeStance_parameters.hpp"


namespace SDK
{

// Function SS_NPCBeforeStance.SS_NPCBeforeStance_C.ExecuteUbergraph_SS_NPCBeforeStance
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USS_NPCBeforeStance_C::ExecuteUbergraph_SS_NPCBeforeStance(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SS_NPCBeforeStance_C", "ExecuteUbergraph_SS_NPCBeforeStance");

	Params::SS_NPCBeforeStance_C_ExecuteUbergraph_SS_NPCBeforeStance Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SS_NPCBeforeStance.SS_NPCBeforeStance_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// class UAnimInstance*                    AnimInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UASAnimationSet*                  AnimationSet                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USS_NPCBeforeStance_C::ReceiveBeginPlay(class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SS_NPCBeforeStance_C", "ReceiveBeginPlay");

	Params::SS_NPCBeforeStance_C_ReceiveBeginPlay Parms{};

	Parms.AnimInstance = AnimInstance;
	Parms.AnimationSet = AnimationSet;

	UObject::ProcessEvent(Func, &Parms);
}

}

