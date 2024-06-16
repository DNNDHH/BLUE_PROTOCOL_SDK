#pragma once

 

// Package: SS_PlayerTransform_WalkRun

#include "Basic.hpp"

#include "SS_PlayerTransform_WalkRun_classes.hpp"
#include "SS_PlayerTransform_WalkRun_parameters.hpp"


namespace SDK
{

// Function SS_PlayerTransform_WalkRun.SS_PlayerTransform_WalkRun_C.ExecuteUbergraph_SS_PlayerTransform_WalkRun
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USS_PlayerTransform_WalkRun_C::ExecuteUbergraph_SS_PlayerTransform_WalkRun(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SS_PlayerTransform_WalkRun_C", "ExecuteUbergraph_SS_PlayerTransform_WalkRun");

	Params::SS_PlayerTransform_WalkRun_C_ExecuteUbergraph_SS_PlayerTransform_WalkRun Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SS_PlayerTransform_WalkRun.SS_PlayerTransform_WalkRun_C.ReceiveTick
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*                    AnimInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UASAnimationSet*                  AnimationSet                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USS_PlayerTransform_WalkRun_C::ReceiveTick(float DeltaTime, class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SS_PlayerTransform_WalkRun_C", "ReceiveTick");

	Params::SS_PlayerTransform_WalkRun_C_ReceiveTick Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.AnimInstance = AnimInstance;
	Parms.AnimationSet = AnimationSet;

	UObject::ProcessEvent(Func, &Parms);
}

}

