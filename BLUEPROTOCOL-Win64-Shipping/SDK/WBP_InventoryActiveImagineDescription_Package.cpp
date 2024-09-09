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
	 * 		Name   -> Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.Refresh
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryActiveImagineDescription_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.Refresh");
		
		UWBP_InventoryActiveImagineDescription_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.GetAbilityDescToolTipWidget
	 * 		Flags  -> ()
	 */
	class UWidget* UWBP_InventoryActiveImagineDescription_C::GetAbilityDescToolTipWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.GetAbilityDescToolTipWidget");
		
		UWBP_InventoryActiveImagineDescription_C_GetAbilityDescToolTipWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.SetSwitcher
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InventoryActiveImagineDescription_C::SetSwitcher(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.SetSwitcher");
		
		UWBP_InventoryActiveImagineDescription_C_SetSwitcher_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.Set Perk Data
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryActiveImagineDescription_C::SetPerkData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.Set Perk Data");
		
		UWBP_InventoryActiveImagineDescription_C_SetPerkData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.SetLeveldata
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterImagine                            MasterData                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_InventoryActiveImagineDescription_C::SetLeveldata(const struct FSBMasterImagine& MasterData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.SetLeveldata");
		
		UWBP_InventoryActiveImagineDescription_C_SetLeveldata_Params params {};
		params.MasterData = MasterData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.SetImagineParam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InUniqueId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_InventoryActiveImagineDescription_C::SetImagineParam(const class FString& InUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.SetImagineParam");
		
		UWBP_InventoryActiveImagineDescription_C_SetImagineParam_Params params {};
		params.InUniqueId = InUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.SetItemData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryData                              InventoryItemData                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		bool                                               bStorageMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBagStorageViewMode                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_InventoryActiveImagineDescription_C::SetItemData(const struct FInventoryData& InventoryItemData, bool bStorageMode, bool bBagStorageViewMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.SetItemData");
		
		UWBP_InventoryActiveImagineDescription_C_SetItemData_Params params {};
		params.InventoryItemData = InventoryItemData;
		params.bStorageMode = bStorageMode;
		params.bBagStorageViewMode = bBagStorageViewMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.UpdateButton
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryActiveImagineDescription_C::UpdateButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.UpdateButton");
		
		UWBP_InventoryActiveImagineDescription_C_UpdateButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.BndEvt__BtnLock_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryActiveImagineDescription_C::BndEvt__BtnLock_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.BndEvt__BtnLock_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");
		
		UWBP_InventoryActiveImagineDescription_C_BndEvt__BtnLock_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.BndEvt__BtnTrash_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryActiveImagineDescription_C::BndEvt__BtnTrash_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.BndEvt__BtnTrash_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");
		
		UWBP_InventoryActiveImagineDescription_C_BndEvt__BtnTrash_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.BndEvt__BtnLock2_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryActiveImagineDescription_C::BndEvt__BtnLock2_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.BndEvt__BtnLock2_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature");
		
		UWBP_InventoryActiveImagineDescription_C_BndEvt__BtnLock2_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.BndEvt__BtnTrash2_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryActiveImagineDescription_C::BndEvt__BtnTrash2_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.BndEvt__BtnTrash2_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature");
		
		UWBP_InventoryActiveImagineDescription_C_BndEvt__BtnTrash2_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.BndEvt__BtnTakeOut_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryActiveImagineDescription_C::BndEvt__BtnTakeOut_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.BndEvt__BtnTakeOut_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature");
		
		UWBP_InventoryActiveImagineDescription_C_BndEvt__BtnTakeOut_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.BndEvt__BtnSale_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryActiveImagineDescription_C::BndEvt__BtnSale_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.BndEvt__BtnSale_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature");
		
		UWBP_InventoryActiveImagineDescription_C_BndEvt__BtnSale_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.BndEvt__WBP_InventoryActiveImagineDescription_SBButton_AbilityInfo_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryActiveImagineDescription_C::BndEvt__WBP_InventoryActiveImagineDescription_SBButton_AbilityInfo_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.BndEvt__WBP_InventoryActiveImagineDescription_SBButton_AbilityInfo_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_InventoryActiveImagineDescription_C_BndEvt__WBP_InventoryActiveImagineDescription_SBButton_AbilityInfo_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.Destruct
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryActiveImagineDescription_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.Destruct");
		
		UWBP_InventoryActiveImagineDescription_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.ExecuteUbergraph_WBP_InventoryActiveImagineDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InventoryActiveImagineDescription_C::ExecuteUbergraph_WBP_InventoryActiveImagineDescription(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.ExecuteUbergraph_WBP_InventoryActiveImagineDescription");
		
		UWBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.OnButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDescripionButtonType                              Event                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InventoryActiveImagineDescription_C::OnButtonClicked__DelegateSignature(EDescripionButtonType Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.OnButtonClicked__DelegateSignature");
		
		UWBP_InventoryActiveImagineDescription_C_OnButtonClicked__DelegateSignature_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_InventoryActiveImagineDescription_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_InventoryActiveImagineDescription_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C");
		return ptr;
	}

}


