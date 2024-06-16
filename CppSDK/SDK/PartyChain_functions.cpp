#pragma once

 

// Package: PartyChain

#include "Basic.hpp"

#include "PartyChain_classes.hpp"
#include "PartyChain_parameters.hpp"


namespace SDK
{

// Function PartyChain.PartyChain_C.ExecuteUbergraph_PartyChain
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyChain_C::ExecuteUbergraph_PartyChain(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyChain_C", "ExecuteUbergraph_PartyChain");

	Params::PartyChain_C_ExecuteUbergraph_PartyChain Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyChain.PartyChain_C.OnPlayBonusEffect
// (Event, Public, BlueprintEvent)

void UPartyChain_C::OnPlayBonusEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyChain_C", "OnPlayBonusEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyChain.PartyChain_C.SetEditMode
// (BlueprintCallable, BlueprintEvent)

void UPartyChain_C::SetEditMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyChain_C", "SetEditMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyChain.PartyChain_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPartyChain_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyChain_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

