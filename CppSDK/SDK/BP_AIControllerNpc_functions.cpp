#pragma once

 

// Package: BP_AIControllerNpc

#include "Basic.hpp"

#include "BP_AIControllerNpc_classes.hpp"
#include "BP_AIControllerNpc_parameters.hpp"


namespace SDK
{

// Function BP_AIControllerNpc.BP_AIControllerNpc_C.ExecuteUbergraph_BP_AIControllerNpc
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AIControllerNpc_C::ExecuteUbergraph_BP_AIControllerNpc(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIControllerNpc_C", "ExecuteUbergraph_BP_AIControllerNpc");

	Params::BP_AIControllerNpc_C_ExecuteUbergraph_BP_AIControllerNpc Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIControllerNpc.BP_AIControllerNpc_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                            PossessedPawn                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AIControllerNpc_C::ReceivePossess(class APawn* PossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIControllerNpc_C", "ReceivePossess");

	Params::BP_AIControllerNpc_C_ReceivePossess Parms{};

	Parms.PossessedPawn = PossessedPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIControllerNpc.BP_AIControllerNpc_C.OnOwnerActivate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBMobCharacter*                  InMobCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AIControllerNpc_C::OnOwnerActivate(class ASBMobCharacter* InMobCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIControllerNpc_C", "OnOwnerActivate");

	Params::BP_AIControllerNpc_C_OnOwnerActivate Parms{};

	Parms.InMobCharacter = InMobCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIControllerNpc.BP_AIControllerNpc_C.OnOwnerDeactivate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBMobCharacter*                  InMobCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AIControllerNpc_C::OnOwnerDeactivate(class ASBMobCharacter* InMobCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIControllerNpc_C", "OnOwnerDeactivate");

	Params::BP_AIControllerNpc_C_OnOwnerDeactivate Parms{};

	Parms.InMobCharacter = InMobCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIControllerNpc.BP_AIControllerNpc_C.ReceiveUnPossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                            UnpossessedPawn                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AIControllerNpc_C::ReceiveUnPossess(class APawn* UnpossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIControllerNpc_C", "ReceiveUnPossess");

	Params::BP_AIControllerNpc_C_ReceiveUnPossess Parms{};

	Parms.UnpossessedPawn = UnpossessedPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIControllerNpc.BP_AIControllerNpc_C.OnInteraction
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           InOtherActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         ViewRotation                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)

void ABP_AIControllerNpc_C::OnInteraction(class AActor* InOtherActor, const struct FRotator& ViewRotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIControllerNpc_C", "OnInteraction");

	Params::BP_AIControllerNpc_C_OnInteraction Parms{};

	Parms.InOtherActor = InOtherActor;
	Parms.ViewRotation = std::move(ViewRotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIControllerNpc.BP_AIControllerNpc_C.RegisterUtilityOption
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AIControllerNpc_C::RegisterUtilityOption()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIControllerNpc_C", "RegisterUtilityOption");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIControllerNpc.BP_AIControllerNpc_C.StartTalk
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           TalkTarget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AIControllerNpc_C::StartTalk(class AActor* TalkTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIControllerNpc_C", "StartTalk");

	Params::BP_AIControllerNpc_C_StartTalk Parms{};

	Parms.TalkTarget = TalkTarget;

	UObject::ProcessEvent(Func, &Parms);
}

}

