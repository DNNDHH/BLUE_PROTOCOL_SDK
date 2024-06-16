#pragma once

 

// Package: SS_SyncAnimation

#include "Basic.hpp"

#include "SS_SyncAnimation_classes.hpp"
#include "SS_SyncAnimation_parameters.hpp"


namespace SDK
{

// Function SS_SyncAnimation.SS_SyncAnimation_C.ExecuteUbergraph_SS_SyncAnimation
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USS_SyncAnimation_C::ExecuteUbergraph_SS_SyncAnimation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SS_SyncAnimation_C", "ExecuteUbergraph_SS_SyncAnimation");

	Params::SS_SyncAnimation_C_ExecuteUbergraph_SS_SyncAnimation Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SS_SyncAnimation.SS_SyncAnimation_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// class UAnimInstance*                    AnimInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UASAnimationSet*                  AnimationSet                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USS_SyncAnimation_C::ReceiveBeginPlay(class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SS_SyncAnimation_C", "ReceiveBeginPlay");

	Params::SS_SyncAnimation_C_ReceiveBeginPlay Parms{};

	Parms.AnimInstance = AnimInstance;
	Parms.AnimationSet = AnimationSet;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SS_SyncAnimation.SS_SyncAnimation_C.ReceiveTick
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*                    AnimInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UASAnimationSet*                  AnimationSet                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USS_SyncAnimation_C::ReceiveTick(float DeltaTime, class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SS_SyncAnimation_C", "ReceiveTick");

	Params::SS_SyncAnimation_C_ReceiveTick Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.AnimInstance = AnimInstance;
	Parms.AnimationSet = AnimationSet;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SS_SyncAnimation.SS_SyncAnimation_C.ReceiveEndPlay
// (Event, Protected, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAnimInstance*                    AnimInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USS_SyncAnimation_C::ReceiveEndPlay(class UAnimInstance* AnimInstance) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SS_SyncAnimation_C", "ReceiveEndPlay");

	Params::SS_SyncAnimation_C_ReceiveEndPlay Parms{};

	Parms.AnimInstance = AnimInstance;

	UObject::ProcessEvent(Func, &Parms);
}

}

