#pragma once

 

// Package: WBP_ShopMenuDetailsCommon

#include "Basic.hpp"

#include "WBP_ShopMenuDetailsCommon_classes.hpp"
#include "WBP_ShopMenuDetailsCommon_parameters.hpp"


namespace SDK
{

// Function WBP_ShopMenuDetailsCommon.WBP_ShopMenuDetailsCommon_C.SetBonus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bBonus                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ShopMenuDetailsCommon_C::SetBonus(bool bBonus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShopMenuDetailsCommon_C", "SetBonus");

	Params::WBP_ShopMenuDetailsCommon_C_SetBonus Parms{};

	Parms.bBonus = bBonus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ShopMenuDetailsCommon.WBP_ShopMenuDetailsCommon_C.SetBppExchange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bCanBppExchange                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ShopMenuDetailsCommon_C::SetBppExchange(bool bCanBppExchange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShopMenuDetailsCommon_C", "SetBppExchange");

	Params::WBP_ShopMenuDetailsCommon_C_SetBppExchange Parms{};

	Parms.bCanBppExchange = bCanBppExchange;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ShopMenuDetailsCommon.WBP_ShopMenuDetailsCommon_C.SetLotteryAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bLotteryAbility                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ShopMenuDetailsCommon_C::SetLotteryAbility(bool bLotteryAbility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShopMenuDetailsCommon_C", "SetLotteryAbility");

	Params::WBP_ShopMenuDetailsCommon_C_SetLotteryAbility Parms{};

	Parms.bLotteryAbility = bLotteryAbility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ShopMenuDetailsCommon.WBP_ShopMenuDetailsCommon_C.SetLotteryGroupsId
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   LotteryGroupsId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopMenuDetailsCommon_C::SetLotteryGroupsId(int32 LotteryGroupsId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShopMenuDetailsCommon_C", "SetLotteryGroupsId");

	Params::WBP_ShopMenuDetailsCommon_C_SetLotteryGroupsId Parms{};

	Parms.LotteryGroupsId = LotteryGroupsId;

	UObject::ProcessEvent(Func, &Parms);
}

}

