#pragma once

 

// Package: SS_ChangeAnimSpeedPassageTime

#include "Basic.hpp"

#include "SS_ChangeAnimSpeedPassageTime_classes.hpp"
#include "SS_ChangeAnimSpeedPassageTime_parameters.hpp"


namespace SDK
{

// Function SS_ChangeAnimSpeedPassageTime.SS_ChangeAnimSpeedPassageTime_C.ExecuteUbergraph_SS_ChangeAnimSpeedPassageTime
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USS_ChangeAnimSpeedPassageTime_C::ExecuteUbergraph_SS_ChangeAnimSpeedPassageTime(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SS_ChangeAnimSpeedPassageTime_C", "ExecuteUbergraph_SS_ChangeAnimSpeedPassageTime");

	Params::SS_ChangeAnimSpeedPassageTime_C_ExecuteUbergraph_SS_ChangeAnimSpeedPassageTime Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SS_ChangeAnimSpeedPassageTime.SS_ChangeAnimSpeedPassageTime_C.ReceiveTick
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*                    AnimInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UASAnimationSet*                  AnimationSet                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USS_ChangeAnimSpeedPassageTime_C::ReceiveTick(float DeltaTime, class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SS_ChangeAnimSpeedPassageTime_C", "ReceiveTick");

	Params::SS_ChangeAnimSpeedPassageTime_C_ReceiveTick Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.AnimInstance = AnimInstance;
	Parms.AnimationSet = AnimationSet;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SS_ChangeAnimSpeedPassageTime.SS_ChangeAnimSpeedPassageTime_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// class UAnimInstance*                    AnimInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UASAnimationSet*                  AnimationSet                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USS_ChangeAnimSpeedPassageTime_C::ReceiveBeginPlay(class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SS_ChangeAnimSpeedPassageTime_C", "ReceiveBeginPlay");

	Params::SS_ChangeAnimSpeedPassageTime_C_ReceiveBeginPlay Parms{};

	Parms.AnimInstance = AnimInstance;
	Parms.AnimationSet = AnimationSet;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SS_ChangeAnimSpeedPassageTime.SS_ChangeAnimSpeedPassageTime_C.ReceiveEndPlay
// (Event, Protected, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAnimInstance*                    AnimInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USS_ChangeAnimSpeedPassageTime_C::ReceiveEndPlay(class UAnimInstance* AnimInstance) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SS_ChangeAnimSpeedPassageTime_C", "ReceiveEndPlay");

	Params::SS_ChangeAnimSpeedPassageTime_C_ReceiveEndPlay Parms{};

	Parms.AnimInstance = AnimInstance;

	UObject::ProcessEvent(Func, &Parms);
}

}

