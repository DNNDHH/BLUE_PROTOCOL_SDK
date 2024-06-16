#pragma once

 

// Package: UMG_MatchingMenu_EntryConditionClassItem

#include "Basic.hpp"

#include "UMG_MatchingMenu_EntryConditionClassItem_classes.hpp"
#include "UMG_MatchingMenu_EntryConditionClassItem_parameters.hpp"


namespace SDK
{

// Function UMG_MatchingMenu_EntryConditionClassItem.UMG_MatchingMenu_EntryConditionClassItem_C.ExecuteUbergraph_UMG_MatchingMenu_EntryConditionClassItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_EntryConditionClassItem_C::ExecuteUbergraph_UMG_MatchingMenu_EntryConditionClassItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_EntryConditionClassItem_C", "ExecuteUbergraph_UMG_MatchingMenu_EntryConditionClassItem");

	Params::UMG_MatchingMenu_EntryConditionClassItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionClassItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_EntryConditionClassItem.UMG_MatchingMenu_EntryConditionClassItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_MatchingMenu_EntryConditionClassItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_EntryConditionClassItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

