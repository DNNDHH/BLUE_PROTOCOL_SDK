#pragma once

 

// Package: BP_GimmickBase

#include "Basic.hpp"

#include "BP_GimmickBase_classes.hpp"
#include "BP_GimmickBase_parameters.hpp"


namespace SDK
{

// Function BP_GimmickBase.BP_GimmickBase_C.Interaction__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         ViewRotation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GimmickBase_C::Interaction__DelegateSignature(class AActor* OtherActor, const struct FRotator& ViewRotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GimmickBase_C", "Interaction__DelegateSignature");

	Params::BP_GimmickBase_C_Interaction__DelegateSignature Parms{};

	Parms.OtherActor = OtherActor;
	Parms.ViewRotation = std::move(ViewRotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GimmickBase.BP_GimmickBase_C.ExecuteUbergraph_BP_GimmickBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GimmickBase_C::ExecuteUbergraph_BP_GimmickBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GimmickBase_C", "ExecuteUbergraph_BP_GimmickBase");

	Params::BP_GimmickBase_C_ExecuteUbergraph_BP_GimmickBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GimmickBase.BP_GimmickBase_C.OnInteraction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           InOtherActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         ViewRotation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GimmickBase_C::OnInteraction(class AActor* InOtherActor, const struct FRotator& ViewRotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GimmickBase_C", "OnInteraction");

	Params::BP_GimmickBase_C_OnInteraction Parms{};

	Parms.InOtherActor = InOtherActor;
	Parms.ViewRotation = std::move(ViewRotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GimmickBase.BP_GimmickBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_GimmickBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GimmickBase_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GimmickBase.BP_GimmickBase_C.EV_InteractionActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Active                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GimmickBase_C::EV_InteractionActive(bool Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GimmickBase_C", "EV_InteractionActive");

	Params::BP_GimmickBase_C_EV_InteractionActive Parms{};

	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GimmickBase.BP_GimmickBase_C.RecycleSw
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_GimmickBase_C::RecycleSw()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GimmickBase_C", "RecycleSw");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GimmickBase.BP_GimmickBase_C.CleanupBlocker
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFieldStatus                            NewStatus                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GimmickBase_C::CleanupBlocker(EFieldStatus NewStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GimmickBase_C", "CleanupBlocker");

	Params::BP_GimmickBase_C_CleanupBlocker Parms{};

	Parms.NewStatus = NewStatus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GimmickBase.BP_GimmickBase_C.OnInteractionSw
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Rotator                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GimmickBase_C::OnInteractionSw(class AActor* OtherActor, const struct FRotator& Rotator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GimmickBase_C", "OnInteractionSw");

	Params::BP_GimmickBase_C_OnInteractionSw Parms{};

	Parms.OtherActor = OtherActor;
	Parms.Rotator = std::move(Rotator);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GimmickBase.BP_GimmickBase_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           InOtherActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         ViewRotation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GimmickBase_C::CustomEvent(class AActor* InOtherActor, const struct FRotator& ViewRotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GimmickBase_C", "CustomEvent");

	Params::BP_GimmickBase_C_CustomEvent Parms{};

	Parms.InOtherActor = InOtherActor;
	Parms.ViewRotation = std::move(ViewRotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GimmickBase.BP_GimmickBase_C.IsInteractionDisable
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                           InOtherActor                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_GimmickBase_C::IsInteractionDisable(const class AActor* InOtherActor) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GimmickBase_C", "IsInteractionDisable");

	Params::BP_GimmickBase_C_IsInteractionDisable Parms{};

	Parms.InOtherActor = InOtherActor;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

