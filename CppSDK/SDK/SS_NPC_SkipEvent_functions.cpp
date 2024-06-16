#pragma once

 

// Package: SS_NPC_SkipEvent

#include "Basic.hpp"

#include "SS_NPC_SkipEvent_classes.hpp"
#include "SS_NPC_SkipEvent_parameters.hpp"


namespace SDK
{

// Function SS_NPC_SkipEvent.SS_NPC_SkipEvent_C.ExecuteUbergraph_SS_NPC_SkipEvent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USS_NPC_SkipEvent_C::ExecuteUbergraph_SS_NPC_SkipEvent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SS_NPC_SkipEvent_C", "ExecuteUbergraph_SS_NPC_SkipEvent");

	Params::SS_NPC_SkipEvent_C_ExecuteUbergraph_SS_NPC_SkipEvent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SS_NPC_SkipEvent.SS_NPC_SkipEvent_C.ReceiveTick
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*                    AnimInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UASAnimationSet*                  AnimationSet                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USS_NPC_SkipEvent_C::ReceiveTick(float DeltaTime, class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SS_NPC_SkipEvent_C", "ReceiveTick");

	Params::SS_NPC_SkipEvent_C_ReceiveTick Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.AnimInstance = AnimInstance;
	Parms.AnimationSet = AnimationSet;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SS_NPC_SkipEvent.SS_NPC_SkipEvent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// class UAnimInstance*                    AnimInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UASAnimationSet*                  AnimationSet                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USS_NPC_SkipEvent_C::ReceiveBeginPlay(class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SS_NPC_SkipEvent_C", "ReceiveBeginPlay");

	Params::SS_NPC_SkipEvent_C_ReceiveBeginPlay Parms{};

	Parms.AnimInstance = AnimInstance;
	Parms.AnimationSet = AnimationSet;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SS_NPC_SkipEvent.SS_NPC_SkipEvent_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// class UAnimInstance*                    AnimInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USS_NPC_SkipEvent_C::ReceiveEndPlay(class UAnimInstance* AnimInstance) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SS_NPC_SkipEvent_C", "ReceiveEndPlay");

	Params::SS_NPC_SkipEvent_C_ReceiveEndPlay Parms{};

	Parms.AnimInstance = AnimInstance;

	UObject::ProcessEvent(Func, &Parms);
}

}

