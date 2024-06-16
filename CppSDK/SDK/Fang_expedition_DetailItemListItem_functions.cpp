#pragma once

 

// Package: Fang_expedition_DetailItemListItem

#include "Basic.hpp"

#include "Fang_expedition_DetailItemListItem_classes.hpp"
#include "Fang_expedition_DetailItemListItem_parameters.hpp"


namespace SDK
{

// Function Fang_expedition_DetailItemListItem.Fang_expedition_DetailItemListItem_C.SetData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRewardItemType                       RewardType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DetailItemListItem_C::SetData(ESBRewardItemType RewardType, int32 Param_Index, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailItemListItem_C", "SetData");

	Params::Fang_expedition_DetailItemListItem_C_SetData Parms{};

	Parms.RewardType = RewardType;
	Parms.Param_Index = Param_Index;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DetailItemListItem.Fang_expedition_DetailItemListItem_C.SetNum
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Num                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DetailItemListItem_C::SetNum(int32 Num)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailItemListItem_C", "SetNum");

	Params::Fang_expedition_DetailItemListItem_C_SetNum Parms{};

	Parms.Num = Num;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DetailItemListItem.Fang_expedition_DetailItemListItem_C.SetRandomReward
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBFang_expeditionRandomRewardDataData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// int32                                   FangValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DetailItemListItem_C::SetRandomReward(const struct FSBFang_expeditionRandomRewardData& Data, int32 FangValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailItemListItem_C", "SetRandomReward");

	Params::Fang_expedition_DetailItemListItem_C_SetRandomReward Parms{};

	Parms.Data = std::move(Data);
	Parms.FangValue = FangValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

