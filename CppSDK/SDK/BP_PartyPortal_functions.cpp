#pragma once

 

// Package: BP_PartyPortal

#include "Basic.hpp"

#include "BP_PartyPortal_classes.hpp"
#include "BP_PartyPortal_parameters.hpp"


namespace SDK
{

// Function BP_PartyPortal.BP_PartyPortal_C.PartyWarpEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_PartyPortal_C::PartyWarpEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyPortal_C", "PartyWarpEnd__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PartyPortal.BP_PartyPortal_C.PartyWarpStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBPlayerCharacter*               WarpTarget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PartyPortal_C::PartyWarpStart__DelegateSignature(class ASBPlayerCharacter* WarpTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyPortal_C", "PartyWarpStart__DelegateSignature");

	Params::BP_PartyPortal_C_PartyWarpStart__DelegateSignature Parms{};

	Parms.WarpTarget = WarpTarget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PartyPortal.BP_PartyPortal_C.ExecuteUbergraph_BP_PartyPortal
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PartyPortal_C::ExecuteUbergraph_BP_PartyPortal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyPortal_C", "ExecuteUbergraph_BP_PartyPortal");

	Params::BP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PartyPortal.BP_PartyPortal_C.LocalWarpEnd
// (BlueprintCallable, BlueprintEvent)

void ABP_PartyPortal_C::LocalWarpEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyPortal_C", "LocalWarpEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PartyPortal.BP_PartyPortal_C.Interacted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Other_Actor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         View_Rotation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PartyPortal_C::Interacted(class AActor* Other_Actor, const struct FRotator& View_Rotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyPortal_C", "Interacted");

	Params::BP_PartyPortal_C_Interacted Parms{};

	Parms.Other_Actor = Other_Actor;
	Parms.View_Rotation = std::move(View_Rotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PartyPortal.BP_PartyPortal_C.Teleport_FadeIn
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_InteractionWarpGoal_C*        WarpGoal                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASBPlayerCharacter*               AccessPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PartyPortal_C::Teleport_FadeIn(class ABP_InteractionWarpGoal_C* WarpGoal, class ASBPlayerCharacter* AccessPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyPortal_C", "Teleport_FadeIn");

	Params::BP_PartyPortal_C_Teleport_FadeIn Parms{};

	Parms.WarpGoal = WarpGoal;
	Parms.AccessPlayer = AccessPlayer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PartyPortal.BP_PartyPortal_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PartyPortal_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyPortal_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PartyPortal.BP_PartyPortal_C.DebugPrint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InString                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_PartyPortal_C::DebugPrint(const class FString& InString)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyPortal_C", "DebugPrint");

	Params::BP_PartyPortal_C_DebugPrint Parms{};

	Parms.InString = std::move(InString);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PartyPortal.BP_PartyPortal_C.SetGoalActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_InteractionWarpGoal_C*        GoalTargetActor                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PartyPortal_C::SetGoalActor(class ABP_InteractionWarpGoal_C* GoalTargetActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyPortal_C", "SetGoalActor");

	Params::BP_PartyPortal_C_SetGoalActor Parms{};

	Parms.GoalTargetActor = GoalTargetActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PartyPortal.BP_PartyPortal_C.ClearGoalActor
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PartyPortal_C::ClearGoalActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyPortal_C", "ClearGoalActor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PartyPortal.BP_PartyPortal_C.GetWarpPlayers
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBPlayerCharacter*               Param_Owner                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ASBPlayerCharacter*>       WarpPlayers                                            (Parm, OutParm)

void ABP_PartyPortal_C::GetWarpPlayers(const class ASBPlayerCharacter* Param_Owner, TArray<class ASBPlayerCharacter*>* WarpPlayers)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PartyPortal_C", "GetWarpPlayers");

	Params::BP_PartyPortal_C_GetWarpPlayers Parms{};

	Parms.Param_Owner = Param_Owner;

	UObject::ProcessEvent(Func, &Parms);

	if (WarpPlayers != nullptr)
		*WarpPlayers = std::move(Parms.WarpPlayers);
}

}

