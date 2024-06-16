#pragma once

 

// Package: PerkRarityView

#include "Basic.hpp"

#include "PerkRarityView_classes.hpp"
#include "PerkRarityView_parameters.hpp"


namespace SDK
{

// Function PerkRarityView.PerkRarityView_C.ExecuteUbergraph_PerkRarityView
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkRarityView_C::ExecuteUbergraph_PerkRarityView(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkRarityView_C", "ExecuteUbergraph_PerkRarityView");

	Params::PerkRarityView_C_ExecuteUbergraph_PerkRarityView Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkRarityView.PerkRarityView_C.SetRarity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRarity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkRarityView_C::SetRarity(int32 InRarity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkRarityView_C", "SetRarity");

	Params::PerkRarityView_C_SetRarity Parms{};

	Parms.InRarity = InRarity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkRarityView.PerkRarityView_C.Set AllQuestion
// (BlueprintCallable, BlueprintEvent)

void UPerkRarityView_C::Set_AllQuestion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkRarityView_C", "Set AllQuestion");

	UObject::ProcessEvent(Func, nullptr);
}

}

