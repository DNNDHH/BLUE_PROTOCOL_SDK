#pragma once

 

// Package: StackBPerkRarityView

#include "Basic.hpp"

#include "StackBPerkRarityView_classes.hpp"
#include "StackBPerkRarityView_parameters.hpp"


namespace SDK
{

// Function StackBPerkRarityView.StackBPerkRarityView_C.ExecuteUbergraph_StackBPerkRarityView
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStackBPerkRarityView_C::ExecuteUbergraph_StackBPerkRarityView(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackBPerkRarityView_C", "ExecuteUbergraph_StackBPerkRarityView");

	Params::StackBPerkRarityView_C_ExecuteUbergraph_StackBPerkRarityView Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StackBPerkRarityView.StackBPerkRarityView_C.SetRarity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRarity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStackBPerkRarityView_C::SetRarity(int32 InRarity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackBPerkRarityView_C", "SetRarity");

	Params::StackBPerkRarityView_C_SetRarity Parms{};

	Parms.InRarity = InRarity;

	UObject::ProcessEvent(Func, &Parms);
}

}

