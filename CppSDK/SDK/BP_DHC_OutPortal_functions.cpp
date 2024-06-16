#pragma once

 

// Package: BP_DHC_OutPortal

#include "Basic.hpp"

#include "BP_DHC_OutPortal_classes.hpp"
#include "BP_DHC_OutPortal_parameters.hpp"


namespace SDK
{

// Function BP_DHC_OutPortal.BP_DHC_OutPortal_C.ExecuteUbergraph_BP_DHC_OutPortal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DHC_OutPortal_C::ExecuteUbergraph_BP_DHC_OutPortal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DHC_OutPortal_C", "ExecuteUbergraph_BP_DHC_OutPortal");

	Params::BP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DHC_OutPortal.BP_DHC_OutPortal_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_DHC_OutPortal_C::CustomEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DHC_OutPortal_C", "CustomEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DHC_OutPortal.BP_DHC_OutPortal_C.TeleportOut
// (Net, NetReliable, NetMulticast, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class APlayerController*>        Param_PlayerMembers                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_DHC_OutPortal_C::TeleportOut(const TArray<class APlayerController*>& Param_PlayerMembers)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DHC_OutPortal_C", "TeleportOut");

	Params::BP_DHC_OutPortal_C_TeleportOut Parms{};

	Parms.Param_PlayerMembers = std::move(Param_PlayerMembers);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DHC_OutPortal.BP_DHC_OutPortal_C.Interacted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Other_Actor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         View_Rotation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DHC_OutPortal_C::Interacted(class AActor* Other_Actor, const struct FRotator& View_Rotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DHC_OutPortal_C", "Interacted");

	Params::BP_DHC_OutPortal_C_Interacted Parms{};

	Parms.Other_Actor = Other_Actor;
	Parms.View_Rotation = std::move(View_Rotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DHC_OutPortal.BP_DHC_OutPortal_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DHC_OutPortal_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DHC_OutPortal_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

