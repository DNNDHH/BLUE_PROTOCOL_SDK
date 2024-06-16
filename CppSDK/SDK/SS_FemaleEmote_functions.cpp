#pragma once

 

// Package: SS_FemaleEmote

#include "Basic.hpp"

#include "SS_FemaleEmote_classes.hpp"
#include "SS_FemaleEmote_parameters.hpp"


namespace SDK
{

// Function SS_FemaleEmote.SS_FemaleEmote_C.ReceiveBeginPlay
// (Event, Protected, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAnimInstance*                    AnimInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UASAnimationSet*                  AnimationSet                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USS_FemaleEmote_C::ReceiveBeginPlay(class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SS_FemaleEmote_C", "ReceiveBeginPlay");

	Params::SS_FemaleEmote_C_ReceiveBeginPlay Parms{};

	Parms.AnimInstance = AnimInstance;
	Parms.AnimationSet = AnimationSet;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SS_FemaleEmote.SS_FemaleEmote_C.ReceiveTick
// (Event, Protected, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*                    AnimInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UASAnimationSet*                  AnimationSet                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USS_FemaleEmote_C::ReceiveTick(float DeltaTime, class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SS_FemaleEmote_C", "ReceiveTick");

	Params::SS_FemaleEmote_C_ReceiveTick Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.AnimInstance = AnimInstance;
	Parms.AnimationSet = AnimationSet;

	UObject::ProcessEvent(Func, &Parms);
}

}

