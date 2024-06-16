#pragma once

 

// Package: SS_EnemyChangeFallGravity

#include "Basic.hpp"

#include "SS_EnemyChangeFallGravity_classes.hpp"
#include "SS_EnemyChangeFallGravity_parameters.hpp"


namespace SDK
{

// Function SS_EnemyChangeFallGravity.SS_EnemyChangeFallGravity_C.ExecuteUbergraph_SS_EnemyChangeFallGravity
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USS_EnemyChangeFallGravity_C::ExecuteUbergraph_SS_EnemyChangeFallGravity(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SS_EnemyChangeFallGravity_C", "ExecuteUbergraph_SS_EnemyChangeFallGravity");

	Params::SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SS_EnemyChangeFallGravity.SS_EnemyChangeFallGravity_C.ReceiveTick
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*                    AnimInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UASAnimationSet*                  AnimationSet                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USS_EnemyChangeFallGravity_C::ReceiveTick(float DeltaTime, class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SS_EnemyChangeFallGravity_C", "ReceiveTick");

	Params::SS_EnemyChangeFallGravity_C_ReceiveTick Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.AnimInstance = AnimInstance;
	Parms.AnimationSet = AnimationSet;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SS_EnemyChangeFallGravity.SS_EnemyChangeFallGravity_C.ReceiveEndPlay
// (Event, Protected, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAnimInstance*                    AnimInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USS_EnemyChangeFallGravity_C::ReceiveEndPlay(class UAnimInstance* AnimInstance) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SS_EnemyChangeFallGravity_C", "ReceiveEndPlay");

	Params::SS_EnemyChangeFallGravity_C_ReceiveEndPlay Parms{};

	Parms.AnimInstance = AnimInstance;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SS_EnemyChangeFallGravity.SS_EnemyChangeFallGravity_C.ReceiveBeginPlay
// (Event, Protected, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAnimInstance*                    AnimInstance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UASAnimationSet*                  AnimationSet                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USS_EnemyChangeFallGravity_C::ReceiveBeginPlay(class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SS_EnemyChangeFallGravity_C", "ReceiveBeginPlay");

	Params::SS_EnemyChangeFallGravity_C_ReceiveBeginPlay Parms{};

	Parms.AnimInstance = AnimInstance;
	Parms.AnimationSet = AnimationSet;

	UObject::ProcessEvent(Func, &Parms);
}

}

