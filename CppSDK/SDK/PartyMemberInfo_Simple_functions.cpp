#pragma once

 

// Package: PartyMemberInfo_Simple

#include "Basic.hpp"

#include "PartyMemberInfo_Simple_classes.hpp"
#include "PartyMemberInfo_Simple_parameters.hpp"


namespace SDK
{

// Function PartyMemberInfo_Simple.PartyMemberInfo_Simple_C.ExecuteUbergraph_PartyMemberInfo_Simple
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyMemberInfo_Simple_C::ExecuteUbergraph_PartyMemberInfo_Simple(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberInfo_Simple_C", "ExecuteUbergraph_PartyMemberInfo_Simple");

	Params::PartyMemberInfo_Simple_C_ExecuteUbergraph_PartyMemberInfo_Simple Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyMemberInfo_Simple.PartyMemberInfo_Simple_C.UpdateDisplayInfo
// (Event, Public, BlueprintEvent)

void UPartyMemberInfo_Simple_C::UpdateDisplayInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberInfo_Simple_C", "UpdateDisplayInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyMemberInfo_Simple.PartyMemberInfo_Simple_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPartyMemberInfo_Simple_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberInfo_Simple_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyMemberInfo_Simple.PartyMemberInfo_Simple_C.SetHpMpGauge
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBPartyMemberState*              InPartyMemberState                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyMemberInfo_Simple_C::SetHpMpGauge(class USBPartyMemberState* InPartyMemberState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberInfo_Simple_C", "SetHpMpGauge");

	Params::PartyMemberInfo_Simple_C_SetHpMpGauge Parms{};

	Parms.InPartyMemberState = InPartyMemberState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyMemberInfo_Simple.PartyMemberInfo_Simple_C.SetHPMPGaugeVisibility
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartyMemberInfo_Simple_C::SetHPMPGaugeVisibility(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberInfo_Simple_C", "SetHPMPGaugeVisibility");

	Params::PartyMemberInfo_Simple_C_SetHPMPGaugeVisibility Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyMemberInfo_Simple.PartyMemberInfo_Simple_C.UpdateDisplayInfo_Internal
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPartyMemberInfo_Simple_C::UpdateDisplayInfo_Internal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberInfo_Simple_C", "UpdateDisplayInfo_Internal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyMemberInfo_Simple.PartyMemberInfo_Simple_C.SetCurrentMapMode
// (Private, BlueprintCallable, BlueprintEvent)

void UPartyMemberInfo_Simple_C::SetCurrentMapMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberInfo_Simple_C", "SetCurrentMapMode");

	UObject::ProcessEvent(Func, nullptr);
}

}

