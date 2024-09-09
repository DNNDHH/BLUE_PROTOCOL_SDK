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
	 * 		Name   -> Function WBP_MultiSelectBattleImagineBlock.WBP_MultiSelectBattleImagineBlock_C.GetPrice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Price                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MultiSelectBattleImagineBlock_C::GetPrice(int32_t* Price)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiSelectBattleImagineBlock.WBP_MultiSelectBattleImagineBlock_C.GetPrice");
		
		UWBP_MultiSelectBattleImagineBlock_C_GetPrice_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Price != nullptr)
			*Price = params.Price;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiSelectBattleImagineBlock.WBP_MultiSelectBattleImagineBlock_C.SetImagineParameter
	 * 		Flags  -> ()
	 */
	void UWBP_MultiSelectBattleImagineBlock_C::SetImagineParameter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiSelectBattleImagineBlock.WBP_MultiSelectBattleImagineBlock_C.SetImagineParameter");
		
		UWBP_MultiSelectBattleImagineBlock_C_SetImagineParameter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiSelectBattleImagineBlock.WBP_MultiSelectBattleImagineBlock_C.SetLeveldata
	 * 		Flags  -> ()
	 */
	void UWBP_MultiSelectBattleImagineBlock_C::SetLeveldata()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiSelectBattleImagineBlock.WBP_MultiSelectBattleImagineBlock_C.SetLeveldata");
		
		UWBP_MultiSelectBattleImagineBlock_C_SetLeveldata_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiSelectBattleImagineBlock.WBP_MultiSelectBattleImagineBlock_C.BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_MultiSelectBattleImagineBlock_C::BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiSelectBattleImagineBlock.WBP_MultiSelectBattleImagineBlock_C.BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_MultiSelectBattleImagineBlock_C_BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiSelectBattleImagineBlock.WBP_MultiSelectBattleImagineBlock_C.SetOneItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryItemData                          InventoryItemData                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UWBP_MultiSelectBattleImagineBlock_C::SetOneItem(const struct FInventoryItemData& InventoryItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiSelectBattleImagineBlock.WBP_MultiSelectBattleImagineBlock_C.SetOneItem");
		
		UWBP_MultiSelectBattleImagineBlock_C_SetOneItem_Params params {};
		params.InventoryItemData = InventoryItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiSelectBattleImagineBlock.WBP_MultiSelectBattleImagineBlock_C.Set Perk Data
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EffectId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MultiSelectBattleImagineBlock_C::SetPerkData(int32_t EffectId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiSelectBattleImagineBlock.WBP_MultiSelectBattleImagineBlock_C.Set Perk Data");
		
		UWBP_MultiSelectBattleImagineBlock_C_SetPerkData_Params params {};
		params.EffectId = EffectId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiSelectBattleImagineBlock.WBP_MultiSelectBattleImagineBlock_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_MultiSelectBattleImagineBlock_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiSelectBattleImagineBlock.WBP_MultiSelectBattleImagineBlock_C.PreConstruct");
		
		UWBP_MultiSelectBattleImagineBlock_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiSelectBattleImagineBlock.WBP_MultiSelectBattleImagineBlock_C.ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MultiSelectBattleImagineBlock_C::ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiSelectBattleImagineBlock.WBP_MultiSelectBattleImagineBlock_C.ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock");
		
		UWBP_MultiSelectBattleImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiSelectBattleImagineBlock.WBP_MultiSelectBattleImagineBlock_C.OnClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryItemData                          InventoryData                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_MultiSelectBattleImagineBlock_C::OnClick__DelegateSignature(const struct FInventoryItemData& InventoryData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiSelectBattleImagineBlock.WBP_MultiSelectBattleImagineBlock_C.OnClick__DelegateSignature");
		
		UWBP_MultiSelectBattleImagineBlock_C_OnClick__DelegateSignature_Params params {};
		params.InventoryData = InventoryData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiSelectBattleImagineBlock.WBP_MultiSelectBattleImagineBlock_C.OnUpdatePrice__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_MultiSelectBattleImagineBlock_C::OnUpdatePrice__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiSelectBattleImagineBlock.WBP_MultiSelectBattleImagineBlock_C.OnUpdatePrice__DelegateSignature");
		
		UWBP_MultiSelectBattleImagineBlock_C_OnUpdatePrice__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_MultiSelectBattleImagineBlock_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_MultiSelectBattleImagineBlock_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MultiSelectBattleImagineBlock.WBP_MultiSelectBattleImagineBlock_C");
		return ptr;
	}

}


