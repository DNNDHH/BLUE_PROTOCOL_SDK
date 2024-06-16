#pragma once

 

// Package: WBP_ItemResultItemGroup

#include "Basic.hpp"

#include "WBP_ItemResultItemGroup_classes.hpp"
#include "WBP_ItemResultItemGroup_parameters.hpp"


namespace SDK
{

// Function WBP_ItemResultItemGroup.WBP_ItemResultItemGroup_C.ExecuteUbergraph_WBP_ItemResultItemGroup
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemResultItemGroup_C::ExecuteUbergraph_WBP_ItemResultItemGroup(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemResultItemGroup_C", "ExecuteUbergraph_WBP_ItemResultItemGroup");

	Params::WBP_ItemResultItemGroup_C_ExecuteUbergraph_WBP_ItemResultItemGroup Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemResultItemGroup.WBP_ItemResultItemGroup_C.SetItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBItemBoxResultItemData> ItemList                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ItemResultItemGroup_C::SetItem(TArray<struct FSBItemBoxResultItemData>& ItemList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemResultItemGroup_C", "SetItem");

	Params::WBP_ItemResultItemGroup_C_SetItem Parms{};

	Parms.ItemList = std::move(ItemList);

	UObject::ProcessEvent(Func, &Parms);

	ItemList = std::move(Parms.ItemList);
}

}

