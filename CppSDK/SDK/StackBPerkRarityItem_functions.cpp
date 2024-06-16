#pragma once

 

// Package: StackBPerkRarityItem

#include "Basic.hpp"

#include "StackBPerkRarityItem_classes.hpp"
#include "StackBPerkRarityItem_parameters.hpp"


namespace SDK
{

// Function StackBPerkRarityItem.StackBPerkRarityItem_C.ExecuteUbergraph_StackBPerkRarityItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStackBPerkRarityItem_C::ExecuteUbergraph_StackBPerkRarityItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackBPerkRarityItem_C", "ExecuteUbergraph_StackBPerkRarityItem");

	Params::StackBPerkRarityItem_C_ExecuteUbergraph_StackBPerkRarityItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StackBPerkRarityItem.StackBPerkRarityItem_C.Show Filled
// (BlueprintCallable, BlueprintEvent)

void UStackBPerkRarityItem_C::Show_Filled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackBPerkRarityItem_C", "Show Filled");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StackBPerkRarityItem.StackBPerkRarityItem_C.Show Empty
// (BlueprintCallable, BlueprintEvent)

void UStackBPerkRarityItem_C::Show_Empty()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackBPerkRarityItem_C", "Show Empty");

	UObject::ProcessEvent(Func, nullptr);
}

}

