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
	 * 		Name   -> Function CmnIcon_KeyItem.CmnIcon_KeyItem_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBDungeonEntryConditionItemType                   ItemType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCmnIcon_KeyItem_C::SetData(ESBDungeonEntryConditionItemType ItemType, int32_t ItemIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnIcon_KeyItem.CmnIcon_KeyItem_C.SetData");
		
		UCmnIcon_KeyItem_C_SetData_Params params {};
		params.ItemType = ItemType;
		params.ItemIndex = ItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnIcon_KeyItem.CmnIcon_KeyItem_C.SetDataByRewardType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardItemType                                  RewardType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCmnIcon_KeyItem_C::SetDataByRewardType(ESBRewardItemType RewardType, int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnIcon_KeyItem.CmnIcon_KeyItem_C.SetDataByRewardType");
		
		UCmnIcon_KeyItem_C_SetDataByRewardType_Params params {};
		params.RewardType = RewardType;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnIcon_KeyItem.CmnIcon_KeyItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UCmnIcon_KeyItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnIcon_KeyItem.CmnIcon_KeyItem_C.Construct");
		
		UCmnIcon_KeyItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnIcon_KeyItem.CmnIcon_KeyItem_C.ExecuteUbergraph_CmnIcon_KeyItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCmnIcon_KeyItem_C::ExecuteUbergraph_CmnIcon_KeyItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnIcon_KeyItem.CmnIcon_KeyItem_C.ExecuteUbergraph_CmnIcon_KeyItem");
		
		UCmnIcon_KeyItem_C_ExecuteUbergraph_CmnIcon_KeyItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCmnIcon_KeyItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCmnIcon_KeyItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CmnIcon_KeyItem.CmnIcon_KeyItem_C");
		return ptr;
	}

}


