#pragma once

 

// Package: BP_InteractionSwBase

#include "Basic.hpp"

#include "BP_InteractionSwBase_classes.hpp"
#include "BP_InteractionSwBase_parameters.hpp"


namespace SDK
{

// Function BP_InteractionSwBase.BP_InteractionSwBase_C.Interaction__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Other_Actor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         View_Rotation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_InteractionSwBase_C::Interaction__DelegateSignature(class AActor* Other_Actor, const struct FRotator& View_Rotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractionSwBase_C", "Interaction__DelegateSignature");

	Params::BP_InteractionSwBase_C_Interaction__DelegateSignature Parms{};

	Parms.Other_Actor = Other_Actor;
	Parms.View_Rotation = std::move(View_Rotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_InteractionSwBase.BP_InteractionSwBase_C.ExecuteUbergraph_BP_InteractionSwBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_InteractionSwBase_C::ExecuteUbergraph_BP_InteractionSwBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractionSwBase_C", "ExecuteUbergraph_BP_InteractionSwBase");

	Params::BP_InteractionSwBase_C_ExecuteUbergraph_BP_InteractionSwBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_InteractionSwBase.BP_InteractionSwBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_InteractionSwBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractionSwBase_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_InteractionSwBase.BP_InteractionSwBase_C.OnInteractionSw
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Rotator                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_InteractionSwBase_C::OnInteractionSw(class AActor* OtherActor, const struct FRotator& Rotator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractionSwBase_C", "OnInteractionSw");

	Params::BP_InteractionSwBase_C_OnInteractionSw Parms{};

	Parms.OtherActor = OtherActor;
	Parms.Rotator = std::move(Rotator);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_InteractionSwBase.BP_InteractionSwBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_InteractionSwBase_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractionSwBase_C", "ReceiveTick");

	Params::BP_InteractionSwBase_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_InteractionSwBase.BP_InteractionSwBase_C.OnInteraction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           InOtherActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         ViewRotation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_InteractionSwBase_C::OnInteraction(class AActor* InOtherActor, const struct FRotator& ViewRotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractionSwBase_C", "OnInteraction");

	Params::BP_InteractionSwBase_C_OnInteraction Parms{};

	Parms.InOtherActor = InOtherActor;
	Parms.ViewRotation = std::move(ViewRotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_InteractionSwBase.BP_InteractionSwBase_C.CleanupBlocker
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFieldStatus                            NewStatus                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_InteractionSwBase_C::CleanupBlocker(EFieldStatus NewStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractionSwBase_C", "CleanupBlocker");

	Params::BP_InteractionSwBase_C_CleanupBlocker Parms{};

	Parms.NewStatus = NewStatus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_InteractionSwBase.BP_InteractionSwBase_C.RecycleSw
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_InteractionSwBase_C::RecycleSw()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractionSwBase_C", "RecycleSw");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_InteractionSwBase.BP_InteractionSwBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_InteractionSwBase_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractionSwBase_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_InteractionSwBase.BP_InteractionSwBase_C.OnRep_status
// (BlueprintCallable, BlueprintEvent)

void ABP_InteractionSwBase_C::OnRep_status()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractionSwBase_C", "OnRep_status");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_InteractionSwBase.BP_InteractionSwBase_C.OnRep_DoorStatus
// (BlueprintCallable, BlueprintEvent)

void ABP_InteractionSwBase_C::OnRep_DoorStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractionSwBase_C", "OnRep_DoorStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_InteractionSwBase.BP_InteractionSwBase_C.OnRep_NewDoorStatus
// (BlueprintCallable, BlueprintEvent)

void ABP_InteractionSwBase_C::OnRep_NewDoorStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractionSwBase_C", "OnRep_NewDoorStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_InteractionSwBase.BP_InteractionSwBase_C.IsInteractionDisable
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                           InOtherActor                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_InteractionSwBase_C::IsInteractionDisable(const class AActor* InOtherActor) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractionSwBase_C", "IsInteractionDisable");

	Params::BP_InteractionSwBase_C_IsInteractionDisable Parms{};

	Parms.InOtherActor = InOtherActor;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

