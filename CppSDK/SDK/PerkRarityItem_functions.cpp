#pragma once

 

// Package: PerkRarityItem

#include "Basic.hpp"

#include "PerkRarityItem_classes.hpp"
#include "PerkRarityItem_parameters.hpp"


namespace SDK
{

// Function PerkRarityItem.PerkRarityItem_C.ExecuteUbergraph_PerkRarityItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkRarityItem_C::ExecuteUbergraph_PerkRarityItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkRarityItem_C", "ExecuteUbergraph_PerkRarityItem");

	Params::PerkRarityItem_C_ExecuteUbergraph_PerkRarityItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkRarityItem.PerkRarityItem_C.Show Question
// (BlueprintCallable, BlueprintEvent)

void UPerkRarityItem_C::Show_Question()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkRarityItem_C", "Show Question");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PerkRarityItem.PerkRarityItem_C.Show Filled
// (BlueprintCallable, BlueprintEvent)

void UPerkRarityItem_C::Show_Filled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkRarityItem_C", "Show Filled");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PerkRarityItem.PerkRarityItem_C.Show Empty
// (BlueprintCallable, BlueprintEvent)

void UPerkRarityItem_C::Show_Empty()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkRarityItem_C", "Show Empty");

	UObject::ProcessEvent(Func, nullptr);
}

}

