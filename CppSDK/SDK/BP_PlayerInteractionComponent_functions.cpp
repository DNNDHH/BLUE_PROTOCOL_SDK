#pragma once

 

// Package: BP_PlayerInteractionComponent

#include "Basic.hpp"

#include "BP_PlayerInteractionComponent_classes.hpp"
#include "BP_PlayerInteractionComponent_parameters.hpp"


namespace SDK
{

// Function BP_PlayerInteractionComponent.BP_PlayerInteractionComponent_C.ExecuteUbergraph_BP_PlayerInteractionComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerInteractionComponent_C::ExecuteUbergraph_BP_PlayerInteractionComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerInteractionComponent_C", "ExecuteUbergraph_BP_PlayerInteractionComponent");

	Params::BP_PlayerInteractionComponent_C_ExecuteUbergraph_BP_PlayerInteractionComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerInteractionComponent.BP_PlayerInteractionComponent_C.OnChangeInteractionUI
// (Event, Protected, BlueprintEvent)

void UBP_PlayerInteractionComponent_C::OnChangeInteractionUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerInteractionComponent_C", "OnChangeInteractionUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerInteractionComponent.BP_PlayerInteractionComponent_C.TutorialHelp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_PlayerInteractionComponent_C::TutorialHelp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerInteractionComponent_C", "TutorialHelp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerInteractionComponent.BP_PlayerInteractionComponent_C.UpdateInteractionInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_PlayerInteractionComponent_C::UpdateInteractionInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerInteractionComponent_C", "UpdateInteractionInfo");

	UObject::ProcessEvent(Func, nullptr);
}

}

