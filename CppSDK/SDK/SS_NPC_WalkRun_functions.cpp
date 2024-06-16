#pragma once

 

// Package: SS_NPC_WalkRun

#include "Basic.hpp"

#include "SS_NPC_WalkRun_classes.hpp"
#include "SS_NPC_WalkRun_parameters.hpp"


namespace SDK
{

// Function SS_NPC_WalkRun.SS_NPC_WalkRun_C.ExecuteUbergraph_SS_NPC_WalkRun
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USS_NPC_WalkRun_C::ExecuteUbergraph_SS_NPC_WalkRun(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SS_NPC_WalkRun_C", "ExecuteUbergraph_SS_NPC_WalkRun");

	Params::SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SS_NPC_WalkRun.SS_NPC_WalkRun_C.FNC_GetBSFront
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USBCharacterAnimInstance*         NpcAnim                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   FrontVelocity                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaSec                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   BS_Front                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USS_NPC_WalkRun_C::FNC_GetBSFront(class USBCharacterAnimInstance* NpcAnim, float FrontVelocity, float DeltaSec, float* BS_Front)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SS_NPC_WalkRun_C", "FNC_GetBSFront");

	Params::SS_NPC_WalkRun_C_FNC_GetBSFront Parms{};

	Parms.NpcAnim = NpcAnim;
	Parms.FrontVelocity = FrontVelocity;
	Parms.DeltaSec = DeltaSec;

	UObject::ProcessEvent(Func, &Parms);

	if (BS_Front != nullptr)
		*BS_Front = Parms.BS_Front;
}


// Function SS_NPC_WalkRun.SS_NPC_WalkRun_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// class UAnimInstance*                    AnimInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UASAnimationSet*                  AnimationSet                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USS_NPC_WalkRun_C::ReceiveBeginPlay(class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SS_NPC_WalkRun_C", "ReceiveBeginPlay");

	Params::SS_NPC_WalkRun_C_ReceiveBeginPlay Parms{};

	Parms.AnimInstance = AnimInstance;
	Parms.AnimationSet = AnimationSet;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SS_NPC_WalkRun.SS_NPC_WalkRun_C.ReceiveTick
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*                    AnimInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UASAnimationSet*                  AnimationSet                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USS_NPC_WalkRun_C::ReceiveTick(float DeltaTime, class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SS_NPC_WalkRun_C", "ReceiveTick");

	Params::SS_NPC_WalkRun_C_ReceiveTick Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.AnimInstance = AnimInstance;
	Parms.AnimationSet = AnimationSet;

	UObject::ProcessEvent(Func, &Parms);
}

}

