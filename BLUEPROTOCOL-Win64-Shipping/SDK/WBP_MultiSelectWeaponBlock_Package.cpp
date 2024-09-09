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
	 * 		Name   -> Function WBP_MultiSelectWeaponBlock.WBP_MultiSelectWeaponBlock_C.GetPrice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Price                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MultiSelectWeaponBlock_C::GetPrice(int32_t* Price)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiSelectWeaponBlock.WBP_MultiSelectWeaponBlock_C.GetPrice");
		
		UWBP_MultiSelectWeaponBlock_C_GetPrice_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Price != nullptr)
			*Price = params.Price;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiSelectWeaponBlock.WBP_MultiSelectWeaponBlock_C.BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_MultiSelectWeaponBlock_C::BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiSelectWeaponBlock.WBP_MultiSelectWeaponBlock_C.BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_MultiSelectWeaponBlock_C_BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiSelectWeaponBlock.WBP_MultiSelectWeaponBlock_C.SetOneItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryItemData                          InventoryItemData                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UWBP_MultiSelectWeaponBlock_C::SetOneItem(const struct FInventoryItemData& InventoryItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiSelectWeaponBlock.WBP_MultiSelectWeaponBlock_C.SetOneItem");
		
		UWBP_MultiSelectWeaponBlock_C_SetOneItem_Params params {};
		params.InventoryItemData = InventoryItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiSelectWeaponBlock.WBP_MultiSelectWeaponBlock_C.ExecuteUbergraph_WBP_MultiSelectWeaponBlock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MultiSelectWeaponBlock_C::ExecuteUbergraph_WBP_MultiSelectWeaponBlock(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiSelectWeaponBlock.WBP_MultiSelectWeaponBlock_C.ExecuteUbergraph_WBP_MultiSelectWeaponBlock");
		
		UWBP_MultiSelectWeaponBlock_C_ExecuteUbergraph_WBP_MultiSelectWeaponBlock_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiSelectWeaponBlock.WBP_MultiSelectWeaponBlock_C.OnClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryItemData                          InventoryData                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_MultiSelectWeaponBlock_C::OnClick__DelegateSignature(const struct FInventoryItemData& InventoryData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiSelectWeaponBlock.WBP_MultiSelectWeaponBlock_C.OnClick__DelegateSignature");
		
		UWBP_MultiSelectWeaponBlock_C_OnClick__DelegateSignature_Params params {};
		params.InventoryData = InventoryData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MultiSelectWeaponBlock.WBP_MultiSelectWeaponBlock_C.OnUpdatePrice__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_MultiSelectWeaponBlock_C::OnUpdatePrice__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MultiSelectWeaponBlock.WBP_MultiSelectWeaponBlock_C.OnUpdatePrice__DelegateSignature");
		
		UWBP_MultiSelectWeaponBlock_C_OnUpdatePrice__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_MultiSelectWeaponBlock_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_MultiSelectWeaponBlock_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MultiSelectWeaponBlock.WBP_MultiSelectWeaponBlock_C");
		return ptr;
	}

}


