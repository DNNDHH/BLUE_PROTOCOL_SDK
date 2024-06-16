#pragma once

 

// Package: WBP_ShopMenuDetailsCommon

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_ShopMenuDetailsCommon.WBP_ShopMenuDetailsCommon_C.SetBonus
// 0x0002 (0x0002 - 0x0000)
struct WBP_ShopMenuDetailsCommon_C_SetBonus final
{
public:
	bool                                          bBonus;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ShopMenuDetailsCommon_C_SetBonus) == 0x000001, "Wrong alignment on WBP_ShopMenuDetailsCommon_C_SetBonus");
static_assert(sizeof(WBP_ShopMenuDetailsCommon_C_SetBonus) == 0x000002, "Wrong size on WBP_ShopMenuDetailsCommon_C_SetBonus");
static_assert(offsetof(WBP_ShopMenuDetailsCommon_C_SetBonus, bBonus) == 0x000000, "Member 'WBP_ShopMenuDetailsCommon_C_SetBonus::bBonus' has a wrong offset!");
static_assert(offsetof(WBP_ShopMenuDetailsCommon_C_SetBonus, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'WBP_ShopMenuDetailsCommon_C_SetBonus::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_ShopMenuDetailsCommon.WBP_ShopMenuDetailsCommon_C.SetBppExchange
// 0x0002 (0x0002 - 0x0000)
struct WBP_ShopMenuDetailsCommon_C_SetBppExchange final
{
public:
	bool                                          bCanBppExchange;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ShopMenuDetailsCommon_C_SetBppExchange) == 0x000001, "Wrong alignment on WBP_ShopMenuDetailsCommon_C_SetBppExchange");
static_assert(sizeof(WBP_ShopMenuDetailsCommon_C_SetBppExchange) == 0x000002, "Wrong size on WBP_ShopMenuDetailsCommon_C_SetBppExchange");
static_assert(offsetof(WBP_ShopMenuDetailsCommon_C_SetBppExchange, bCanBppExchange) == 0x000000, "Member 'WBP_ShopMenuDetailsCommon_C_SetBppExchange::bCanBppExchange' has a wrong offset!");
static_assert(offsetof(WBP_ShopMenuDetailsCommon_C_SetBppExchange, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'WBP_ShopMenuDetailsCommon_C_SetBppExchange::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_ShopMenuDetailsCommon.WBP_ShopMenuDetailsCommon_C.SetLotteryAbility
// 0x0001 (0x0001 - 0x0000)
struct WBP_ShopMenuDetailsCommon_C_SetLotteryAbility final
{
public:
	bool                                          bLotteryAbility;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ShopMenuDetailsCommon_C_SetLotteryAbility) == 0x000001, "Wrong alignment on WBP_ShopMenuDetailsCommon_C_SetLotteryAbility");
static_assert(sizeof(WBP_ShopMenuDetailsCommon_C_SetLotteryAbility) == 0x000001, "Wrong size on WBP_ShopMenuDetailsCommon_C_SetLotteryAbility");
static_assert(offsetof(WBP_ShopMenuDetailsCommon_C_SetLotteryAbility, bLotteryAbility) == 0x000000, "Member 'WBP_ShopMenuDetailsCommon_C_SetLotteryAbility::bLotteryAbility' has a wrong offset!");

// Function WBP_ShopMenuDetailsCommon.WBP_ShopMenuDetailsCommon_C.SetLotteryGroupsId
// 0x0004 (0x0004 - 0x0000)
struct WBP_ShopMenuDetailsCommon_C_SetLotteryGroupsId final
{
public:
	int32                                         LotteryGroupsId;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ShopMenuDetailsCommon_C_SetLotteryGroupsId) == 0x000004, "Wrong alignment on WBP_ShopMenuDetailsCommon_C_SetLotteryGroupsId");
static_assert(sizeof(WBP_ShopMenuDetailsCommon_C_SetLotteryGroupsId) == 0x000004, "Wrong size on WBP_ShopMenuDetailsCommon_C_SetLotteryGroupsId");
static_assert(offsetof(WBP_ShopMenuDetailsCommon_C_SetLotteryGroupsId, LotteryGroupsId) == 0x000000, "Member 'WBP_ShopMenuDetailsCommon_C_SetLotteryGroupsId::LotteryGroupsId' has a wrong offset!");

}

