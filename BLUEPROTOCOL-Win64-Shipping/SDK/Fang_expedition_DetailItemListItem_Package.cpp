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
	 * 		Name   -> Function Fang_expedition_DetailItemListItem.Fang_expedition_DetailItemListItem_C.SetRandomReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBFang_expeditionRandomRewardData          Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		int32_t                                            FangValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_DetailItemListItem_C::SetRandomReward(const struct FSBFang_expeditionRandomRewardData& Data, int32_t FangValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailItemListItem.Fang_expedition_DetailItemListItem_C.SetRandomReward");
		
		UFang_expedition_DetailItemListItem_C_SetRandomReward_Params params {};
		params.Data = Data;
		params.FangValue = FangValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailItemListItem.Fang_expedition_DetailItemListItem_C.SetNum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Num                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_DetailItemListItem_C::SetNum(int32_t Num)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailItemListItem.Fang_expedition_DetailItemListItem_C.SetNum");
		
		UFang_expedition_DetailItemListItem_C_SetNum_Params params {};
		params.Num = Num;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailItemListItem.Fang_expedition_DetailItemListItem_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardItemType                                  RewardType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_DetailItemListItem_C::SetData(ESBRewardItemType RewardType, int32_t Index, int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailItemListItem.Fang_expedition_DetailItemListItem_C.SetData");
		
		UFang_expedition_DetailItemListItem_C_SetData_Params params {};
		params.RewardType = RewardType;
		params.Index = Index;
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFang_expedition_DetailItemListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFang_expedition_DetailItemListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Fang_expedition_DetailItemListItem.Fang_expedition_DetailItemListItem_C");
		return ptr;
	}

}


