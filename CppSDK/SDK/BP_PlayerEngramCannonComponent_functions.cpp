#pragma once

 

// Package: BP_PlayerEngramCannonComponent

#include "Basic.hpp"

#include "BP_PlayerEngramCannonComponent_classes.hpp"
#include "BP_PlayerEngramCannonComponent_parameters.hpp"


namespace SDK
{

// Function BP_PlayerEngramCannonComponent.BP_PlayerEngramCannonComponent_C.ExecuteUbergraph_BP_PlayerEngramCannonComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerEngramCannonComponent_C::ExecuteUbergraph_BP_PlayerEngramCannonComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerEngramCannonComponent_C", "ExecuteUbergraph_BP_PlayerEngramCannonComponent");

	Params::BP_PlayerEngramCannonComponent_C_ExecuteUbergraph_BP_PlayerEngramCannonComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerEngramCannonComponent.BP_PlayerEngramCannonComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerEngramCannonComponent_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerEngramCannonComponent_C", "ReceiveEndPlay");

	Params::BP_PlayerEngramCannonComponent_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerEngramCannonComponent.BP_PlayerEngramCannonComponent_C.InitOnBoard_BP
// (Event, Protected, BlueprintEvent)

void UBP_PlayerEngramCannonComponent_C::InitOnBoard_BP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerEngramCannonComponent_C", "InitOnBoard_BP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerEngramCannonComponent.BP_PlayerEngramCannonComponent_C.InitGetOff_BP
// (Event, Protected, BlueprintEvent)

void UBP_PlayerEngramCannonComponent_C::InitGetOff_BP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerEngramCannonComponent_C", "InitGetOff_BP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerEngramCannonComponent.BP_PlayerEngramCannonComponent_C.SetUI
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PlayerEngramCannonComponent_C::SetUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerEngramCannonComponent_C", "SetUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerEngramCannonComponent.BP_PlayerEngramCannonComponent_C.ResetUI
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PlayerEngramCannonComponent_C::ResetUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerEngramCannonComponent_C", "ResetUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerEngramCannonComponent.BP_PlayerEngramCannonComponent_C.PostAkEvent_RideOn
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PlayerEngramCannonComponent_C::PostAkEvent_RideOn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerEngramCannonComponent_C", "PostAkEvent_RideOn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerEngramCannonComponent.BP_PlayerEngramCannonComponent_C.PostAkEvent_RideOff
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PlayerEngramCannonComponent_C::PostAkEvent_RideOff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerEngramCannonComponent_C", "PostAkEvent_RideOff");

	UObject::ProcessEvent(Func, nullptr);
}

}

