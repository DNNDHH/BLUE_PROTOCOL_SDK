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
	 * 		Name   -> Function WBP_BaseMultiSelectBlock.WBP_BaseMultiSelectBlock_C.Get Price
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               LockExcluded                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Price                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_BaseMultiSelectBlock_C::GetPrice(bool LockExcluded, int32_t* Price)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BaseMultiSelectBlock.WBP_BaseMultiSelectBlock_C.Get Price");
		
		UWBP_BaseMultiSelectBlock_C_GetPrice_Params params {};
		params.LockExcluded = LockExcluded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Price != nullptr)
			*Price = params.Price;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_BaseMultiSelectBlock.WBP_BaseMultiSelectBlock_C.SetOneItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryItemData                          InventoryItemData                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UWBP_BaseMultiSelectBlock_C::SetOneItem(const struct FInventoryItemData& InventoryItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BaseMultiSelectBlock.WBP_BaseMultiSelectBlock_C.SetOneItem");
		
		UWBP_BaseMultiSelectBlock_C_SetOneItem_Params params {};
		params.InventoryItemData = InventoryItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_BaseMultiSelectBlock.WBP_BaseMultiSelectBlock_C.SetStorageItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_StorageRowListItem_C*                   InStorageListItem                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_BaseMultiSelectBlock_C::SetStorageItem(class UWBP_StorageRowListItem_C* InStorageListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BaseMultiSelectBlock.WBP_BaseMultiSelectBlock_C.SetStorageItem");
		
		UWBP_BaseMultiSelectBlock_C_SetStorageItem_Params params {};
		params.InStorageListItem = InStorageListItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_BaseMultiSelectBlock.WBP_BaseMultiSelectBlock_C.AllCollapsed
	 * 		Flags  -> ()
	 */
	void UWBP_BaseMultiSelectBlock_C::AllCollapsed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BaseMultiSelectBlock.WBP_BaseMultiSelectBlock_C.AllCollapsed");
		
		UWBP_BaseMultiSelectBlock_C_AllCollapsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_BaseMultiSelectBlock.WBP_BaseMultiSelectBlock_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_BaseMultiSelectBlock_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BaseMultiSelectBlock.WBP_BaseMultiSelectBlock_C.Construct");
		
		UWBP_BaseMultiSelectBlock_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_BaseMultiSelectBlock.WBP_BaseMultiSelectBlock_C.CustomEvent_1
	 * 		Flags  -> ()
	 */
	void UWBP_BaseMultiSelectBlock_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BaseMultiSelectBlock.WBP_BaseMultiSelectBlock_C.CustomEvent_1");
		
		UWBP_BaseMultiSelectBlock_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_BaseMultiSelectBlock.WBP_BaseMultiSelectBlock_C.CustomEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryItemData                          InventoryData                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_BaseMultiSelectBlock_C::CustomEvent_2(const struct FInventoryItemData& InventoryData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BaseMultiSelectBlock.WBP_BaseMultiSelectBlock_C.CustomEvent_2");
		
		UWBP_BaseMultiSelectBlock_C_CustomEvent_2_Params params {};
		params.InventoryData = InventoryData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_BaseMultiSelectBlock.WBP_BaseMultiSelectBlock_C.ExecuteUbergraph_WBP_BaseMultiSelectBlock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_BaseMultiSelectBlock_C::ExecuteUbergraph_WBP_BaseMultiSelectBlock(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BaseMultiSelectBlock.WBP_BaseMultiSelectBlock_C.ExecuteUbergraph_WBP_BaseMultiSelectBlock");
		
		UWBP_BaseMultiSelectBlock_C_ExecuteUbergraph_WBP_BaseMultiSelectBlock_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_BaseMultiSelectBlock.WBP_BaseMultiSelectBlock_C.OnClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryItemData                          NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_BaseMultiSelectBlock_C::OnClick__DelegateSignature(const struct FInventoryItemData& NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BaseMultiSelectBlock.WBP_BaseMultiSelectBlock_C.OnClick__DelegateSignature");
		
		UWBP_BaseMultiSelectBlock_C_OnClick__DelegateSignature_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_BaseMultiSelectBlock.WBP_BaseMultiSelectBlock_C.OnUpdatePrice__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_BaseMultiSelectBlock_C::OnUpdatePrice__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_BaseMultiSelectBlock.WBP_BaseMultiSelectBlock_C.OnUpdatePrice__DelegateSignature");
		
		UWBP_BaseMultiSelectBlock_C_OnUpdatePrice__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_BaseMultiSelectBlock_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_BaseMultiSelectBlock_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_BaseMultiSelectBlock.WBP_BaseMultiSelectBlock_C");
		return ptr;
	}

}


