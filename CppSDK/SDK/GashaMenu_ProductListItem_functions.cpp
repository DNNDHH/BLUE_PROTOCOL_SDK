#pragma once

 

// Package: GashaMenu_ProductListItem

#include "Basic.hpp"

#include "GashaMenu_ProductListItem_classes.hpp"
#include "GashaMenu_ProductListItem_parameters.hpp"


namespace SDK
{

// Function GashaMenu_ProductListItem.GashaMenu_ProductListItem_C.SetInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBRewardItemType                       RewardItemType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Rate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGashaMenu_ProductListItem_C::SetInfo(int32 ItemId, ESBRewardItemType RewardItemType, int32 Amount, float Rate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GashaMenu_ProductListItem_C", "SetInfo");

	Params::GashaMenu_ProductListItem_C_SetInfo Parms{};

	Parms.ItemId = ItemId;
	Parms.RewardItemType = RewardItemType;
	Parms.Amount = Amount;
	Parms.Rate = Rate;

	UObject::ProcessEvent(Func, &Parms);
}

}

