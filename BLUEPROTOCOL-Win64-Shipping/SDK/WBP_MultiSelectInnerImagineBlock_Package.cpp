﻿/**
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
	 * 		Name   -> Function WBP_MultiSelectInnerImagineBlock.WBP_MultiSelectInnerImagineBlock_C.SetEquipmentIcon
	 * 		Flags  -> ()
	 */
	void UWBP_MultiSelectInnerImagineBlock_C::SetEquipmentIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiSelectInnerImagineBlock.WBP_MultiSelectInnerImagineBlock_C.SetEquipmentIcon");
		
		UWBP_MultiSelectInnerImagineBlock_C_SetEquipmentIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiSelectInnerImagineBlock.WBP_MultiSelectInnerImagineBlock_C.SetImagineParam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FImagineParameter                           ImagineParameter                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UWBP_MultiSelectInnerImagineBlock_C::SetImagineParam(const struct FImagineParameter& ImagineParameter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiSelectInnerImagineBlock.WBP_MultiSelectInnerImagineBlock_C.SetImagineParam");
		
		UWBP_MultiSelectInnerImagineBlock_C_SetImagineParam_Params params {};
		params.ImagineParameter = ImagineParameter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiSelectInnerImagineBlock.WBP_MultiSelectInnerImagineBlock_C.GetPrice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Price                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MultiSelectInnerImagineBlock_C::GetPrice(int32_t* Price)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiSelectInnerImagineBlock.WBP_MultiSelectInnerImagineBlock_C.GetPrice");
		
		UWBP_MultiSelectInnerImagineBlock_C_GetPrice_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Price != nullptr)
			*Price = params.Price;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiSelectInnerImagineBlock.WBP_MultiSelectInnerImagineBlock_C.BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_MultiSelectInnerImagineBlock_C::BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiSelectInnerImagineBlock.WBP_MultiSelectInnerImagineBlock_C.BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_MultiSelectInnerImagineBlock_C_BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiSelectInnerImagineBlock.WBP_MultiSelectInnerImagineBlock_C.SetOneItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryItemData                          InventoryItemData                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UWBP_MultiSelectInnerImagineBlock_C::SetOneItem(const struct FInventoryItemData& InventoryItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiSelectInnerImagineBlock.WBP_MultiSelectInnerImagineBlock_C.SetOneItem");
		
		UWBP_MultiSelectInnerImagineBlock_C_SetOneItem_Params params {};
		params.InventoryItemData = InventoryItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiSelectInnerImagineBlock.WBP_MultiSelectInnerImagineBlock_C.ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MultiSelectInnerImagineBlock_C::ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiSelectInnerImagineBlock.WBP_MultiSelectInnerImagineBlock_C.ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock");
		
		UWBP_MultiSelectInnerImagineBlock_C_ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiSelectInnerImagineBlock.WBP_MultiSelectInnerImagineBlock_C.OnClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryItemData                          InventoryData                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_MultiSelectInnerImagineBlock_C::OnClick__DelegateSignature(const struct FInventoryItemData& InventoryData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiSelectInnerImagineBlock.WBP_MultiSelectInnerImagineBlock_C.OnClick__DelegateSignature");
		
		UWBP_MultiSelectInnerImagineBlock_C_OnClick__DelegateSignature_Params params {};
		params.InventoryData = InventoryData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiSelectInnerImagineBlock.WBP_MultiSelectInnerImagineBlock_C.OnUpdatePrice__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_MultiSelectInnerImagineBlock_C::OnUpdatePrice__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiSelectInnerImagineBlock.WBP_MultiSelectInnerImagineBlock_C.OnUpdatePrice__DelegateSignature");
		
		UWBP_MultiSelectInnerImagineBlock_C_OnUpdatePrice__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_MultiSelectInnerImagineBlock_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_MultiSelectInnerImagineBlock_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MultiSelectInnerImagineBlock.WBP_MultiSelectInnerImagineBlock_C");
		return ptr;
	}

}

