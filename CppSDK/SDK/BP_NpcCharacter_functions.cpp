#pragma once

 

// Package: BP_NpcCharacter

#include "Basic.hpp"

#include "BP_NpcCharacter_classes.hpp"
#include "BP_NpcCharacter_parameters.hpp"


namespace SDK
{

// Function BP_NpcCharacter.BP_NpcCharacter_C.ExecuteUbergraph_BP_NpcCharacter
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NpcCharacter_C::ExecuteUbergraph_BP_NpcCharacter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NpcCharacter_C", "ExecuteUbergraph_BP_NpcCharacter");

	Params::BP_NpcCharacter_C_ExecuteUbergraph_BP_NpcCharacter Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NpcCharacter.BP_NpcCharacter_C.OnInteraction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           InOtherActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         ViewRotation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_NpcCharacter_C::OnInteraction(class AActor* InOtherActor, const struct FRotator& ViewRotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NpcCharacter_C", "OnInteraction");

	Params::BP_NpcCharacter_C_OnInteraction Parms{};

	Parms.InOtherActor = InOtherActor;
	Parms.ViewRotation = std::move(ViewRotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NpcCharacter.BP_NpcCharacter_C.ReceivePostSpawnBySpawner
// (Event, Public, BlueprintEvent)

void ABP_NpcCharacter_C::ReceivePostSpawnBySpawner()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NpcCharacter_C", "ReceivePostSpawnBySpawner");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_NpcCharacter.BP_NpcCharacter_C.NotifyDeactivated
// (Event, Public, BlueprintEvent)

void ABP_NpcCharacter_C::NotifyDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NpcCharacter_C", "NotifyDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_NpcCharacter.BP_NpcCharacter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NpcCharacter_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NpcCharacter_C", "ReceiveTick");

	Params::BP_NpcCharacter_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NpcCharacter.BP_NpcCharacter_C.IsInteractionDisable
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                           InOtherActor                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_NpcCharacter_C::IsInteractionDisable(const class AActor* InOtherActor) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NpcCharacter_C", "IsInteractionDisable");

	Params::BP_NpcCharacter_C_IsInteractionDisable Parms{};

	Parms.InOtherActor = InOtherActor;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

