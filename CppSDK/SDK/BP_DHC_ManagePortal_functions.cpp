#pragma once

 

// Package: BP_DHC_ManagePortal

#include "Basic.hpp"

#include "BP_DHC_ManagePortal_classes.hpp"
#include "BP_DHC_ManagePortal_parameters.hpp"


namespace SDK
{

// Function BP_DHC_ManagePortal.BP_DHC_ManagePortal_C.DHC_Interacted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBPlayerCharacter*               InteractedPlayer                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EN_DHC_InteractResult                   Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DHC_ManagePortal_C::DHC_Interacted__DelegateSignature(class ASBPlayerCharacter* InteractedPlayer, EN_DHC_InteractResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DHC_ManagePortal_C", "DHC_Interacted__DelegateSignature");

	Params::BP_DHC_ManagePortal_C_DHC_Interacted__DelegateSignature Parms{};

	Parms.InteractedPlayer = InteractedPlayer;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DHC_ManagePortal.BP_DHC_ManagePortal_C.ExecuteUbergraph_BP_DHC_ManagePortal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DHC_ManagePortal_C::ExecuteUbergraph_BP_DHC_ManagePortal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DHC_ManagePortal_C", "ExecuteUbergraph_BP_DHC_ManagePortal");

	Params::BP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DHC_ManagePortal.BP_DHC_ManagePortal_C.DHCInteractionResult
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBPlayerCharacter*               InteractedPlayer                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EN_DHC_InteractResult                   Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DHC_ManagePortal_C::DHCInteractionResult(class ASBPlayerCharacter* InteractedPlayer, EN_DHC_InteractResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DHC_ManagePortal_C", "DHCInteractionResult");

	Params::BP_DHC_ManagePortal_C_DHCInteractionResult Parms{};

	Parms.InteractedPlayer = InteractedPlayer;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DHC_ManagePortal.BP_DHC_ManagePortal_C.GetFreeDHCMesasurer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_DHCMeasurer_C*                VacantArea                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DHC_ManagePortal_C::GetFreeDHCMesasurer(class ABP_DHCMeasurer_C** VacantArea)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DHC_ManagePortal_C", "GetFreeDHCMesasurer");

	Params::BP_DHC_ManagePortal_C_GetFreeDHCMesasurer Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (VacantArea != nullptr)
		*VacantArea = Parms.VacantArea;
}


// Function BP_DHC_ManagePortal.BP_DHC_ManagePortal_C.GetPlayerNowDHC
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*                Controller                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_DHCMeasurer_C*                NowDHC                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DHC_ManagePortal_C::GetPlayerNowDHC(class APlayerController* Controller, class ABP_DHCMeasurer_C** NowDHC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DHC_ManagePortal_C", "GetPlayerNowDHC");

	Params::BP_DHC_ManagePortal_C_GetPlayerNowDHC Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

	if (NowDHC != nullptr)
		*NowDHC = Parms.NowDHC;
}


// Function BP_DHC_ManagePortal.BP_DHC_ManagePortal_C.CheckPartyId
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBPlayerCharacter*               PlayerCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DHC_ManagePortal_C::CheckPartyId(class ASBPlayerCharacter* PlayerCharacter, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DHC_ManagePortal_C", "CheckPartyId");

	Params::BP_DHC_ManagePortal_C_CheckPartyId Parms{};

	Parms.PlayerCharacter = PlayerCharacter;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;
}


// Function BP_DHC_ManagePortal.BP_DHC_ManagePortal_C.CheckPartyMemberMenu
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBPlayerCharacter*               PlayerCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CanStart                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DHC_ManagePortal_C::CheckPartyMemberMenu(class ASBPlayerCharacter* PlayerCharacter, bool* CanStart)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DHC_ManagePortal_C", "CheckPartyMemberMenu");

	Params::BP_DHC_ManagePortal_C_CheckPartyMemberMenu Parms{};

	Parms.PlayerCharacter = PlayerCharacter;

	UObject::ProcessEvent(Func, &Parms);

	if (CanStart != nullptr)
		*CanStart = Parms.CanStart;
}


// Function BP_DHC_ManagePortal.BP_DHC_ManagePortal_C.Interacted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Other_Actor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         View_Rotation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DHC_ManagePortal_C::Interacted(class AActor* Other_Actor, const struct FRotator& View_Rotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DHC_ManagePortal_C", "Interacted");

	Params::BP_DHC_ManagePortal_C_Interacted Parms{};

	Parms.Other_Actor = Other_Actor;
	Parms.View_Rotation = std::move(View_Rotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DHC_ManagePortal.BP_DHC_ManagePortal_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DHC_ManagePortal_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DHC_ManagePortal_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

