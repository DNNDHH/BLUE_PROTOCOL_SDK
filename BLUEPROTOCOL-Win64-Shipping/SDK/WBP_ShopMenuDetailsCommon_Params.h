#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function WBP_ShopMenuDetailsCommon.WBP_ShopMenuDetailsCommon_C.SetLotteryGroupsId
	 */
	struct UWBP_ShopMenuDetailsCommon_C_SetLotteryGroupsId_Params
	{
	public:
		int32_t                                                    LotteryGroupsId;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ShopMenuDetailsCommon.WBP_ShopMenuDetailsCommon_C.SetLotteryAbility
	 */
	struct UWBP_ShopMenuDetailsCommon_C_SetLotteryAbility_Params
	{
	public:
		bool                                                       bLotteryAbility;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ShopMenuDetailsCommon.WBP_ShopMenuDetailsCommon_C.SetBppExchange
	 */
	struct UWBP_ShopMenuDetailsCommon_C_SetBppExchange_Params
	{
	public:
		bool                                                       bCanBppExchange;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ShopMenuDetailsCommon.WBP_ShopMenuDetailsCommon_C.SetBonus
	 */
	struct UWBP_ShopMenuDetailsCommon_C_SetBonus_Params
	{
	public:
		bool                                                       bBonus;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
