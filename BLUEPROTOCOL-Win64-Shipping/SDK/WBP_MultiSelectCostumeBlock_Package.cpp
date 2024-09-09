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
	 * 		Name   -> Function WBP_MultiSelectCostumeBlock.WBP_MultiSelectCostumeBlock_C.SetCostumeColor
	 * 		Flags  -> ()
	 */
	void UWBP_MultiSelectCostumeBlock_C::SetCostumeColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiSelectCostumeBlock.WBP_MultiSelectCostumeBlock_C.SetCostumeColor");
		
		UWBP_MultiSelectCostumeBlock_C_SetCostumeColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiSelectCostumeBlock.WBP_MultiSelectCostumeBlock_C.GetPrice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Price                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MultiSelectCostumeBlock_C::GetPrice(int32_t* Price)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiSelectCostumeBlock.WBP_MultiSelectCostumeBlock_C.GetPrice");
		
		UWBP_MultiSelectCostumeBlock_C_GetPrice_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Price != nullptr)
			*Price = params.Price;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiSelectCostumeBlock.WBP_MultiSelectCostumeBlock_C.BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_MultiSelectCostumeBlock_C::BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiSelectCostumeBlock.WBP_MultiSelectCostumeBlock_C.BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_MultiSelectCostumeBlock_C_BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiSelectCostumeBlock.WBP_MultiSelectCostumeBlock_C.SetOneItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryItemData                          InventoryItemData                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UWBP_MultiSelectCostumeBlock_C::SetOneItem(const struct FInventoryItemData& InventoryItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiSelectCostumeBlock.WBP_MultiSelectCostumeBlock_C.SetOneItem");
		
		UWBP_MultiSelectCostumeBlock_C_SetOneItem_Params params {};
		params.InventoryItemData = InventoryItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiSelectCostumeBlock.WBP_MultiSelectCostumeBlock_C.ExecuteUbergraph_WBP_MultiSelectCostumeBlock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MultiSelectCostumeBlock_C::ExecuteUbergraph_WBP_MultiSelectCostumeBlock(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiSelectCostumeBlock.WBP_MultiSelectCostumeBlock_C.ExecuteUbergraph_WBP_MultiSelectCostumeBlock");
		
		UWBP_MultiSelectCostumeBlock_C_ExecuteUbergraph_WBP_MultiSelectCostumeBlock_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiSelectCostumeBlock.WBP_MultiSelectCostumeBlock_C.OnClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryItemData                          InventoryData                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_MultiSelectCostumeBlock_C::OnClick__DelegateSignature(const struct FInventoryItemData& InventoryData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiSelectCostumeBlock.WBP_MultiSelectCostumeBlock_C.OnClick__DelegateSignature");
		
		UWBP_MultiSelectCostumeBlock_C_OnClick__DelegateSignature_Params params {};
		params.InventoryData = InventoryData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiSelectCostumeBlock.WBP_MultiSelectCostumeBlock_C.OnUpdatePrice__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_MultiSelectCostumeBlock_C::OnUpdatePrice__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiSelectCostumeBlock.WBP_MultiSelectCostumeBlock_C.OnUpdatePrice__DelegateSignature");
		
		UWBP_MultiSelectCostumeBlock_C_OnUpdatePrice__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_MultiSelectCostumeBlock_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_MultiSelectCostumeBlock_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MultiSelectCostumeBlock.WBP_MultiSelectCostumeBlock_C");
		return ptr;
	}

}


