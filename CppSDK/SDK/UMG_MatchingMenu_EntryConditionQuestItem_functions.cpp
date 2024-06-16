#pragma once

 

// Package: UMG_MatchingMenu_EntryConditionQuestItem

#include "Basic.hpp"

#include "UMG_MatchingMenu_EntryConditionQuestItem_classes.hpp"
#include "UMG_MatchingMenu_EntryConditionQuestItem_parameters.hpp"


namespace SDK
{

// Function UMG_MatchingMenu_EntryConditionQuestItem.UMG_MatchingMenu_EntryConditionQuestItem_C.ExecuteUbergraph_UMG_MatchingMenu_EntryConditionQuestItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_EntryConditionQuestItem_C::ExecuteUbergraph_UMG_MatchingMenu_EntryConditionQuestItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_EntryConditionQuestItem_C", "ExecuteUbergraph_UMG_MatchingMenu_EntryConditionQuestItem");

	Params::UMG_MatchingMenu_EntryConditionQuestItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionQuestItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_EntryConditionQuestItem.UMG_MatchingMenu_EntryConditionQuestItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_MatchingMenu_EntryConditionQuestItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_EntryConditionQuestItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

