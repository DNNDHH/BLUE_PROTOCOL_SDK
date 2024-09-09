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
	 * 		Name   -> Function Craft_StorageSelector.Craft_StorageSelector_C.GetSelectStorageNo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            StorageNo                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCraft_StorageSelector_C::GetSelectStorageNo(int32_t* StorageNo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Craft_StorageSelector.Craft_StorageSelector_C.GetSelectStorageNo");
		
		UCraft_StorageSelector_C_GetSelectStorageNo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StorageNo != nullptr)
			*StorageNo = params.StorageNo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Craft_StorageSelector.Craft_StorageSelector_C.IsStorage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CurrentIsStorage                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCraft_StorageSelector_C::IsStorage(bool* CurrentIsStorage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Craft_StorageSelector.Craft_StorageSelector_C.IsStorage");
		
		UCraft_StorageSelector_C_IsStorage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentIsStorage != nullptr)
			*CurrentIsStorage = params.CurrentIsStorage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Craft_StorageSelector.Craft_StorageSelector_C.UpdateStorageView
	 * 		Flags  -> ()
	 */
	void UCraft_StorageSelector_C::UpdateStorageView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Craft_StorageSelector.Craft_StorageSelector_C.UpdateStorageView");
		
		UCraft_StorageSelector_C_UpdateStorageView_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Craft_StorageSelector.Craft_StorageSelector_C.Construct
	 * 		Flags  -> ()
	 */
	void UCraft_StorageSelector_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Craft_StorageSelector.Craft_StorageSelector_C.Construct");
		
		UCraft_StorageSelector_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Craft_StorageSelector.Craft_StorageSelector_C.BndEvt__Craft_StorageSelector_Btn_Change_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCraft_StorageSelector_C::BndEvt__Craft_StorageSelector_Btn_Change_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Craft_StorageSelector.Craft_StorageSelector_C.BndEvt__Craft_StorageSelector_Btn_Change_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UCraft_StorageSelector_C_BndEvt__Craft_StorageSelector_Btn_Change_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Craft_StorageSelector.Craft_StorageSelector_C.Set RecepiData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCharacterCraftRecepi                       RecepiData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UCraft_StorageSelector_C::SetRecepiData(const struct FCharacterCraftRecepi& RecepiData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Craft_StorageSelector.Craft_StorageSelector_C.Set RecepiData");
		
		UCraft_StorageSelector_C_SetRecepiData_Params params {};
		params.RecepiData = RecepiData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Craft_StorageSelector.Craft_StorageSelector_C.Set CraftCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CraftCount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCraft_StorageSelector_C::SetCraftCount(int32_t CraftCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Craft_StorageSelector.Craft_StorageSelector_C.Set CraftCount");
		
		UCraft_StorageSelector_C_SetCraftCount_Params params {};
		params.CraftCount = CraftCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Craft_StorageSelector.Craft_StorageSelector_C.BndEvt__Craft_StorageSelector_Btn_Change_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCraft_StorageSelector_C::BndEvt__Craft_StorageSelector_Btn_Change_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Craft_StorageSelector.Craft_StorageSelector_C.BndEvt__Craft_StorageSelector_Btn_Change_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UCraft_StorageSelector_C_BndEvt__Craft_StorageSelector_Btn_Change_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Craft_StorageSelector.Craft_StorageSelector_C.BndEvt__Craft_StorageSelector_Btn_Change_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCraft_StorageSelector_C::BndEvt__Craft_StorageSelector_Btn_Change_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Craft_StorageSelector.Craft_StorageSelector_C.BndEvt__Craft_StorageSelector_Btn_Change_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UCraft_StorageSelector_C_BndEvt__Craft_StorageSelector_Btn_Change_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Craft_StorageSelector.Craft_StorageSelector_C.ExecuteUbergraph_Craft_StorageSelector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCraft_StorageSelector_C::ExecuteUbergraph_Craft_StorageSelector(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Craft_StorageSelector.Craft_StorageSelector_C.ExecuteUbergraph_Craft_StorageSelector");
		
		UCraft_StorageSelector_C_ExecuteUbergraph_Craft_StorageSelector_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCraft_StorageSelector_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCraft_StorageSelector_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Craft_StorageSelector.Craft_StorageSelector_C");
		return ptr;
	}

}


