#pragma once

 

// Package: BP_EF_Set

#include "Basic.hpp"

#include "BP_EF_Set_classes.hpp"
#include "BP_EF_Set_parameters.hpp"


namespace SDK
{

// Function BP_EF_Set.BP_EF_Set_C.ExecuteUbergraph_BP_EF_Set
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EF_Set_C::ExecuteUbergraph_BP_EF_Set(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EF_Set_C", "ExecuteUbergraph_BP_EF_Set");

	Params::BP_EF_Set_C_ExecuteUbergraph_BP_EF_Set Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EF_Set.BP_EF_Set_C.ReceiveNotifyPrepareDestroy
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bForce                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EF_Set_C::ReceiveNotifyPrepareDestroy(bool bForce)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EF_Set_C", "ReceiveNotifyPrepareDestroy");

	Params::BP_EF_Set_C_ReceiveNotifyPrepareDestroy Parms{};

	Parms.bForce = bForce;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EF_Set.BP_EF_Set_C.ReceiveNotifyUpdateAttackCollisionScale
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FVector                          Scale                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EF_Set_C::ReceiveNotifyUpdateAttackCollisionScale(const struct FVector& Scale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EF_Set_C", "ReceiveNotifyUpdateAttackCollisionScale");

	Params::BP_EF_Set_C_ReceiveNotifyUpdateAttackCollisionScale Parms{};

	Parms.Scale = std::move(Scale);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EF_Set.BP_EF_Set_C.EffectCheck
// (BlueprintCallable, BlueprintEvent)

void ABP_EF_Set_C::EffectCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EF_Set_C", "EffectCheck");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EF_Set.BP_EF_Set_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EF_Set_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EF_Set_C", "ReceiveTick");

	Params::BP_EF_Set_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EF_Set.BP_EF_Set_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_EF_Set_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EF_Set_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

