#pragma once

 

// Package: CmnIcon_KeyItem

#include "Basic.hpp"

#include "CmnIcon_KeyItem_classes.hpp"
#include "CmnIcon_KeyItem_parameters.hpp"


namespace SDK
{

// Function CmnIcon_KeyItem.CmnIcon_KeyItem_C.ExecuteUbergraph_CmnIcon_KeyItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnIcon_KeyItem_C::ExecuteUbergraph_CmnIcon_KeyItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnIcon_KeyItem_C", "ExecuteUbergraph_CmnIcon_KeyItem");

	Params::CmnIcon_KeyItem_C_ExecuteUbergraph_CmnIcon_KeyItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnIcon_KeyItem.CmnIcon_KeyItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCmnIcon_KeyItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnIcon_KeyItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnIcon_KeyItem.CmnIcon_KeyItem_C.SetDataByRewardType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRewardItemType                       RewardType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnIcon_KeyItem_C::SetDataByRewardType(ESBRewardItemType RewardType, int32 ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnIcon_KeyItem_C", "SetDataByRewardType");

	Params::CmnIcon_KeyItem_C_SetDataByRewardType Parms{};

	Parms.RewardType = RewardType;
	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnIcon_KeyItem.CmnIcon_KeyItem_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBDungeonEntryConditionItemType        ItemType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ItemIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnIcon_KeyItem_C::SetData(ESBDungeonEntryConditionItemType ItemType, int32 ItemIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnIcon_KeyItem_C", "SetData");

	Params::CmnIcon_KeyItem_C_SetData Parms{};

	Parms.ItemType = ItemType;
	Parms.ItemIndex = ItemIndex;

	UObject::ProcessEvent(Func, &Parms);
}

}

