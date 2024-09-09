/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ShopMenuDetailsCommon.WBP_ShopMenuDetailsCommon_C.SetLotteryGroupsId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LotteryGroupsId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ShopMenuDetailsCommon_C::SetLotteryGroupsId(int32_t LotteryGroupsId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ShopMenuDetailsCommon.WBP_ShopMenuDetailsCommon_C.SetLotteryGroupsId");
		
		UWBP_ShopMenuDetailsCommon_C_SetLotteryGroupsId_Params params {};
		params.LotteryGroupsId = LotteryGroupsId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ShopMenuDetailsCommon.WBP_ShopMenuDetailsCommon_C.SetLotteryAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bLotteryAbility                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ShopMenuDetailsCommon_C::SetLotteryAbility(bool bLotteryAbility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ShopMenuDetailsCommon.WBP_ShopMenuDetailsCommon_C.SetLotteryAbility");
		
		UWBP_ShopMenuDetailsCommon_C_SetLotteryAbility_Params params {};
		params.bLotteryAbility = bLotteryAbility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ShopMenuDetailsCommon.WBP_ShopMenuDetailsCommon_C.SetBppExchange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bCanBppExchange                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ShopMenuDetailsCommon_C::SetBppExchange(bool bCanBppExchange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ShopMenuDetailsCommon.WBP_ShopMenuDetailsCommon_C.SetBppExchange");
		
		UWBP_ShopMenuDetailsCommon_C_SetBppExchange_Params params {};
		params.bCanBppExchange = bCanBppExchange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ShopMenuDetailsCommon.WBP_ShopMenuDetailsCommon_C.SetBonus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bBonus                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ShopMenuDetailsCommon_C::SetBonus(bool bBonus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ShopMenuDetailsCommon.WBP_ShopMenuDetailsCommon_C.SetBonus");
		
		UWBP_ShopMenuDetailsCommon_C_SetBonus_Params params {};
		params.bBonus = bBonus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ShopMenuDetailsCommon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ShopMenuDetailsCommon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ShopMenuDetailsCommon.WBP_ShopMenuDetailsCommon_C");
		return ptr;
	}

}


