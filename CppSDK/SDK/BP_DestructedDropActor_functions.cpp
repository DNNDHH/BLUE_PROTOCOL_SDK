#pragma once

 

// Package: BP_DestructedDropActor

#include "Basic.hpp"

#include "BP_DestructedDropActor_classes.hpp"
#include "BP_DestructedDropActor_parameters.hpp"


namespace SDK
{

// Function BP_DestructedDropActor.BP_DestructedDropActor_C.ExecuteUbergraph_BP_DestructedDropActor
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DestructedDropActor_C::ExecuteUbergraph_BP_DestructedDropActor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DestructedDropActor_C", "ExecuteUbergraph_BP_DestructedDropActor");

	Params::BP_DestructedDropActor_C_ExecuteUbergraph_BP_DestructedDropActor Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DestructedDropActor.BP_DestructedDropActor_C.PostBuffActivate
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           InOtherActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DestructedDropActor_C::PostBuffActivate(class AActor* InOtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DestructedDropActor_C", "PostBuffActivate");

	Params::BP_DestructedDropActor_C_PostBuffActivate Parms{};

	Parms.InOtherActor = InOtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DestructedDropActor.BP_DestructedDropActor_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DestructedDropActor_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DestructedDropActor_C", "ReceiveActorBeginOverlap");

	Params::BP_DestructedDropActor_C_ReceiveActorBeginOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DestructedDropActor.BP_DestructedDropActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DestructedDropActor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DestructedDropActor_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

