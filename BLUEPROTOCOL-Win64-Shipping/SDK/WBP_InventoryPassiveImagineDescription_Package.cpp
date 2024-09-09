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
	 * 		Name   -> Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.Refresh
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryPassiveImagineDescription_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.Refresh");
		
		UWBP_InventoryPassiveImagineDescription_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.GetAbilityDescToolTipWidget
	 * 		Flags  -> ()
	 */
	class UWidget* UWBP_InventoryPassiveImagineDescription_C::GetAbilityDescToolTipWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.GetAbilityDescToolTipWidget");
		
		UWBP_InventoryPassiveImagineDescription_C_GetAbilityDescToolTipWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.SetSwitcher
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InventoryPassiveImagineDescription_C::SetSwitcher(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.SetSwitcher");
		
		UWBP_InventoryPassiveImagineDescription_C_SetSwitcher_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.Set Level And Exp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterImagine                            MasterData                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            Exp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InventoryPassiveImagineDescription_C::SetLevelAndExp(const struct FSBMasterImagine& MasterData, int32_t Exp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.Set Level And Exp");
		
		UWBP_InventoryPassiveImagineDescription_C_SetLevelAndExp_Params params {};
		params.MasterData = MasterData;
		params.Exp = Exp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.SetImagineParam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FImagineParameter                           ImagineParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWBP_InventoryPassiveImagineDescription_C::SetImagineParam(const struct FImagineParameter& ImagineParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.SetImagineParam");
		
		UWBP_InventoryPassiveImagineDescription_C_SetImagineParam_Params params {};
		params.ImagineParam = ImagineParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.OnLoaded_A6DAA6C845C948C7E7A97C9A7D207C26
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InventoryPassiveImagineDescription_C::OnLoaded_A6DAA6C845C948C7E7A97C9A7D207C26(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.OnLoaded_A6DAA6C845C948C7E7A97C9A7D207C26");
		
		UWBP_InventoryPassiveImagineDescription_C_OnLoaded_A6DAA6C845C948C7E7A97C9A7D207C26_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.RequestLoad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ImagineId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InventoryPassiveImagineDescription_C::RequestLoad(int32_t ImagineId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.RequestLoad");
		
		UWBP_InventoryPassiveImagineDescription_C_RequestLoad_Params params {};
		params.ImagineId = ImagineId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.UpdateButton
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryPassiveImagineDescription_C::UpdateButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.UpdateButton");
		
		UWBP_InventoryPassiveImagineDescription_C_UpdateButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.BndEvt__BtnLock_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryPassiveImagineDescription_C::BndEvt__BtnLock_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.BndEvt__BtnLock_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");
		
		UWBP_InventoryPassiveImagineDescription_C_BndEvt__BtnLock_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.BndEvt__BtnTrash_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryPassiveImagineDescription_C::BndEvt__BtnTrash_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.BndEvt__BtnTrash_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");
		
		UWBP_InventoryPassiveImagineDescription_C_BndEvt__BtnTrash_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.BndEvt__BtnLock2_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryPassiveImagineDescription_C::BndEvt__BtnLock2_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.BndEvt__BtnLock2_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature");
		
		UWBP_InventoryPassiveImagineDescription_C_BndEvt__BtnLock2_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.BndEvt__BtnTrash2_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryPassiveImagineDescription_C::BndEvt__BtnTrash2_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.BndEvt__BtnTrash2_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature");
		
		UWBP_InventoryPassiveImagineDescription_C_BndEvt__BtnTrash2_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.BndEvt__BtnTakeOut_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryPassiveImagineDescription_C::BndEvt__BtnTakeOut_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.BndEvt__BtnTakeOut_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature");
		
		UWBP_InventoryPassiveImagineDescription_C_BndEvt__BtnTakeOut_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.BndEvt__BtnSale_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryPassiveImagineDescription_C::BndEvt__BtnSale_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.BndEvt__BtnSale_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature");
		
		UWBP_InventoryPassiveImagineDescription_C_BndEvt__BtnSale_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.SelectKiraSwitcher
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterImagine                            MasterImagine                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_InventoryPassiveImagineDescription_C::SelectKiraSwitcher(const struct FSBMasterImagine& MasterImagine)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.SelectKiraSwitcher");
		
		UWBP_InventoryPassiveImagineDescription_C_SelectKiraSwitcher_Params params {};
		params.MasterImagine = MasterImagine;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.SetItemData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryData                              InventoryItemData                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		bool                                               bStorageMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBagStorageViewMode                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_InventoryPassiveImagineDescription_C::SetItemData(const struct FInventoryData& InventoryItemData, bool bStorageMode, bool bBagStorageViewMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.SetItemData");
		
		UWBP_InventoryPassiveImagineDescription_C_SetItemData_Params params {};
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
	 * 		Name   -> Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.BndEvt__Button_illustImagine_1_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryPassiveImagineDescription_C::BndEvt__Button_illustImagine_1_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.BndEvt__Button_illustImagine_1_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_InventoryPassiveImagineDescription_C_BndEvt__Button_illustImagine_1_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.BndEvt__Button_illustImagine_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryPassiveImagineDescription_C::BndEvt__Button_illustImagine_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.BndEvt__Button_illustImagine_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_InventoryPassiveImagineDescription_C_BndEvt__Button_illustImagine_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.BndEvt__Button_illustImagine_S_1_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryPassiveImagineDescription_C::BndEvt__Button_illustImagine_S_1_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.BndEvt__Button_illustImagine_S_1_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_InventoryPassiveImagineDescription_C_BndEvt__Button_illustImagine_S_1_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.BndEvt__WBP_InventoryPassiveImagineDescription_SBButton_AbilityInfo_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryPassiveImagineDescription_C::BndEvt__WBP_InventoryPassiveImagineDescription_SBButton_AbilityInfo_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.BndEvt__WBP_InventoryPassiveImagineDescription_SBButton_AbilityInfo_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_InventoryPassiveImagineDescription_C_BndEvt__WBP_InventoryPassiveImagineDescription_SBButton_AbilityInfo_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.Destruct
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryPassiveImagineDescription_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.Destruct");
		
		UWBP_InventoryPassiveImagineDescription_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.ExecuteUbergraph_WBP_InventoryPassiveImagineDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InventoryPassiveImagineDescription_C::ExecuteUbergraph_WBP_InventoryPassiveImagineDescription(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.ExecuteUbergraph_WBP_InventoryPassiveImagineDescription");
		
		UWBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.OnButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDescripionButtonType                              ButtonType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InventoryPassiveImagineDescription_C::OnButtonClicked__DelegateSignature(EDescripionButtonType ButtonType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.OnButtonClicked__DelegateSignature");
		
		UWBP_InventoryPassiveImagineDescription_C_OnButtonClicked__DelegateSignature_Params params {};
		params.ButtonType = ButtonType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_InventoryPassiveImagineDescription_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_InventoryPassiveImagineDescription_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C");
		return ptr;
	}

}


