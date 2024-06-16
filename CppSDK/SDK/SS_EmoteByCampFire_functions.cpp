#pragma once

 

// Package: SS_EmoteByCampFire

#include "Basic.hpp"

#include "SS_EmoteByCampFire_classes.hpp"
#include "SS_EmoteByCampFire_parameters.hpp"


namespace SDK
{

// Function SS_EmoteByCampFire.SS_EmoteByCampFire_C.ExecuteUbergraph_SS_EmoteByCampFire
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USS_EmoteByCampFire_C::ExecuteUbergraph_SS_EmoteByCampFire(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SS_EmoteByCampFire_C", "ExecuteUbergraph_SS_EmoteByCampFire");

	Params::SS_EmoteByCampFire_C_ExecuteUbergraph_SS_EmoteByCampFire Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SS_EmoteByCampFire.SS_EmoteByCampFire_C.CheckCampFireUsed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Flag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CheckResult                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USS_EmoteByCampFire_C::CheckCampFireUsed(bool Flag, bool* CheckResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SS_EmoteByCampFire_C", "CheckCampFireUsed");

	Params::SS_EmoteByCampFire_C_CheckCampFireUsed Parms{};

	Parms.Flag = Flag;

	UObject::ProcessEvent(Func, &Parms);

	if (CheckResult != nullptr)
		*CheckResult = Parms.CheckResult;
}


// Function SS_EmoteByCampFire.SS_EmoteByCampFire_C.ReceiveTick
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*                    AnimInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UASAnimationSet*                  AnimationSet                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USS_EmoteByCampFire_C::ReceiveTick(float DeltaTime, class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SS_EmoteByCampFire_C", "ReceiveTick");

	Params::SS_EmoteByCampFire_C_ReceiveTick Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.AnimInstance = AnimInstance;
	Parms.AnimationSet = AnimationSet;

	UObject::ProcessEvent(Func, &Parms);
}

}

