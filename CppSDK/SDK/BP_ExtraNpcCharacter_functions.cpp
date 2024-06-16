#pragma once

 

// Package: BP_ExtraNpcCharacter

#include "Basic.hpp"

#include "BP_ExtraNpcCharacter_classes.hpp"
#include "BP_ExtraNpcCharacter_parameters.hpp"


namespace SDK
{

// Function BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C.ExecuteUbergraph_BP_ExtraNpcCharacter
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExtraNpcCharacter_C::ExecuteUbergraph_BP_ExtraNpcCharacter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExtraNpcCharacter_C", "ExecuteUbergraph_BP_ExtraNpcCharacter");

	Params::BP_ExtraNpcCharacter_C_ExecuteUbergraph_BP_ExtraNpcCharacter Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExtraNpcCharacter_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExtraNpcCharacter_C", "ReceiveTick");

	Params::BP_ExtraNpcCharacter_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C.ReceivePostSpawnBySpawner
// (Event, Public, BlueprintEvent)

void ABP_ExtraNpcCharacter_C::ReceivePostSpawnBySpawner()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExtraNpcCharacter_C", "ReceivePostSpawnBySpawner");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C.NotifyDeactivated
// (Event, Public, BlueprintEvent)

void ABP_ExtraNpcCharacter_C::NotifyDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExtraNpcCharacter_C", "NotifyDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C.OnInteraction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           InOtherActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         ViewRotation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ExtraNpcCharacter_C::OnInteraction(class AActor* InOtherActor, const struct FRotator& ViewRotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExtraNpcCharacter_C", "OnInteraction");

	Params::BP_ExtraNpcCharacter_C_OnInteraction Parms{};

	Parms.InOtherActor = InOtherActor;
	Parms.ViewRotation = std::move(ViewRotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C.UnregisterFromManager
// (Public, BlueprintCallable, BlueprintEvent, Const)

void ABP_ExtraNpcCharacter_C::UnregisterFromManager() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExtraNpcCharacter_C", "UnregisterFromManager");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C.RegisterWithManager
// (Public, BlueprintCallable, BlueprintEvent, Const)

void ABP_ExtraNpcCharacter_C::RegisterWithManager() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExtraNpcCharacter_C", "RegisterWithManager");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C.IsValidTargetFor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                           TargetingActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ExtraNpcCharacter_C::IsValidTargetFor(class AActor* TargetingActor) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExtraNpcCharacter_C", "IsValidTargetFor");

	Params::BP_ExtraNpcCharacter_C_IsValidTargetFor Parms{};

	Parms.TargetingActor = TargetingActor;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C.GetTargetLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector ABP_ExtraNpcCharacter_C::GetTargetLocation() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExtraNpcCharacter_C", "GetTargetLocation");

	Params::BP_ExtraNpcCharacter_C_GetTargetLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C.CanBeTargetedNow
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ExtraNpcCharacter_C::CanBeTargetedNow() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExtraNpcCharacter_C", "CanBeTargetedNow");

	Params::BP_ExtraNpcCharacter_C_CanBeTargetedNow Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C.IsInteractionDisable
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                           InOtherActor                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_ExtraNpcCharacter_C::IsInteractionDisable(const class AActor* InOtherActor) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExtraNpcCharacter_C", "IsInteractionDisable");

	Params::BP_ExtraNpcCharacter_C_IsInteractionDisable Parms{};

	Parms.InOtherActor = InOtherActor;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

