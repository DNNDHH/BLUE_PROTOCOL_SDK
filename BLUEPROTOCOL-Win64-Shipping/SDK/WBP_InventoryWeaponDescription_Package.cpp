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
	 * 		Name   -> Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.Refresh
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryWeaponDescription_C::Refresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.Refresh");
		
		UWBP_InventoryWeaponDescription_C_Refresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.SetOperationRotateBtnVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_InventoryWeaponDescription_C::SetOperationRotateBtnVisibility(bool InIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.SetOperationRotateBtnVisibility");
		
		UWBP_InventoryWeaponDescription_C_SetOperationRotateBtnVisibility_Params params {};
		params.InIsVisible = InIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.SetWeaponStickerInUseButtonIsEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsEnabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_InventoryWeaponDescription_C::SetWeaponStickerInUseButtonIsEnabled(bool InIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.SetWeaponStickerInUseButtonIsEnabled");
		
		UWBP_InventoryWeaponDescription_C_SetWeaponStickerInUseButtonIsEnabled_Params params {};
		params.InIsEnabled = InIsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.SetWeaponStickerInUseButtonIsInUse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsInUse                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_InventoryWeaponDescription_C::SetWeaponStickerInUseButtonIsInUse(bool InIsInUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.SetWeaponStickerInUseButtonIsInUse");
		
		UWBP_InventoryWeaponDescription_C_SetWeaponStickerInUseButtonIsInUse_Params params {};
		params.InIsInUse = InIsInUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.GetAbilityDescToolTipWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCommonToolTip_AbilityPerk_C*                AbilityDescToolTip                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InventoryWeaponDescription_C::GetAbilityDescToolTipWidget(int32_t Index, class UCommonToolTip_AbilityPerk_C** AbilityDescToolTip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.GetAbilityDescToolTipWidget");
		
		UWBP_InventoryWeaponDescription_C_GetAbilityDescToolTipWidget_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AbilityDescToolTip != nullptr)
			*AbilityDescToolTip = params.AbilityDescToolTip;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.GetAbility4DescToolTipWidget
	 * 		Flags  -> ()
	 */
	class UWidget* UWBP_InventoryWeaponDescription_C::GetAbility4DescToolTipWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.GetAbility4DescToolTipWidget");
		
		UWBP_InventoryWeaponDescription_C_GetAbility4DescToolTipWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.GetAbility3DescToolTipWidget
	 * 		Flags  -> ()
	 */
	class UWidget* UWBP_InventoryWeaponDescription_C::GetAbility3DescToolTipWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.GetAbility3DescToolTipWidget");
		
		UWBP_InventoryWeaponDescription_C_GetAbility3DescToolTipWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.GetAbility2DescToolTipWidget
	 * 		Flags  -> ()
	 */
	class UWidget* UWBP_InventoryWeaponDescription_C::GetAbility2DescToolTipWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.GetAbility2DescToolTipWidget");
		
		UWBP_InventoryWeaponDescription_C_GetAbility2DescToolTipWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.GetAbility1DescToolTipWidget
	 * 		Flags  -> ()
	 */
	class UWidget* UWBP_InventoryWeaponDescription_C::GetAbility1DescToolTipWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.GetAbility1DescToolTipWidget");
		
		UWBP_InventoryWeaponDescription_C_GetAbility1DescToolTipWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.SetSwitcher
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InventoryWeaponDescription_C::SetSwitcher(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.SetSwitcher");
		
		UWBP_InventoryWeaponDescription_C_SetSwitcher_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.IsNowJob
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEquipable                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_InventoryWeaponDescription_C::IsNowJob(bool* IsEquipable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.IsNowJob");
		
		UWBP_InventoryWeaponDescription_C_IsNowJob_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsEquipable != nullptr)
			*IsEquipable = params.IsEquipable;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.InitBtn
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryWeaponDescription_C::InitBtn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.InitBtn");
		
		UWBP_InventoryWeaponDescription_C_InitBtn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.RefleshButton
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryWeaponDescription_C::RefleshButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.RefleshButton");
		
		UWBP_InventoryWeaponDescription_C_RefleshButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.SetItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryData                              InventoryItemData                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		bool                                               bStorageMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBagStorageViewMode                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_InventoryWeaponDescription_C::SetItem(const struct FInventoryData& InventoryItemData, bool bStorageMode, bool bBagStorageViewMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.SetItem");
		
		UWBP_InventoryWeaponDescription_C_SetItem_Params params {};
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
	 * 		Name   -> Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.BndEvt__BtnEquip_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryWeaponDescription_C::BndEvt__BtnEquip_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.BndEvt__BtnEquip_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");
		
		UWBP_InventoryWeaponDescription_C_BndEvt__BtnEquip_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.BndEvt__BtnTrash_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryWeaponDescription_C::BndEvt__BtnTrash_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.BndEvt__BtnTrash_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");
		
		UWBP_InventoryWeaponDescription_C_BndEvt__BtnTrash_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.BndEvt__BtnDemolition_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryWeaponDescription_C::BndEvt__BtnDemolition_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.BndEvt__BtnDemolition_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature");
		
		UWBP_InventoryWeaponDescription_C_BndEvt__BtnDemolition_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.BndEvt__BtnLock_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryWeaponDescription_C::BndEvt__BtnLock_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.BndEvt__BtnLock_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature");
		
		UWBP_InventoryWeaponDescription_C_BndEvt__BtnLock_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.BndEvt__BtnLock2_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryWeaponDescription_C::BndEvt__BtnLock2_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.BndEvt__BtnLock2_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature");
		
		UWBP_InventoryWeaponDescription_C_BndEvt__BtnLock2_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.BndEvt__BtnTrash2_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryWeaponDescription_C::BndEvt__BtnTrash2_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.BndEvt__BtnTrash2_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature");
		
		UWBP_InventoryWeaponDescription_C_BndEvt__BtnTrash2_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.BndEvt__BtnTakeOut_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryWeaponDescription_C::BndEvt__BtnTakeOut_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.BndEvt__BtnTakeOut_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature");
		
		UWBP_InventoryWeaponDescription_C_BndEvt__BtnTakeOut_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.BndEvt__BtnTrash2_1_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryWeaponDescription_C::BndEvt__BtnTrash2_1_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.BndEvt__BtnTrash2_1_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature");
		
		UWBP_InventoryWeaponDescription_C_BndEvt__BtnTrash2_1_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryWeaponDescription_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.Construct");
		
		UWBP_InventoryWeaponDescription_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.BndEvt__WBP_InventoryWeaponDescription_SBButton_AbilityDetail_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryWeaponDescription_C::BndEvt__WBP_InventoryWeaponDescription_SBButton_AbilityDetail_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.BndEvt__WBP_InventoryWeaponDescription_SBButton_AbilityDetail_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_InventoryWeaponDescription_C_BndEvt__WBP_InventoryWeaponDescription_SBButton_AbilityDetail_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.OnBtnWeaponStickerRemoveButtonClicked
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryWeaponDescription_C::OnBtnWeaponStickerRemoveButtonClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.OnBtnWeaponStickerRemoveButtonClicked");
		
		UWBP_InventoryWeaponDescription_C_OnBtnWeaponStickerRemoveButtonClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.Destruct
	 * 		Flags  -> ()
	 */
	void UWBP_InventoryWeaponDescription_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.Destruct");
		
		UWBP_InventoryWeaponDescription_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.ExecuteUbergraph_WBP_InventoryWeaponDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InventoryWeaponDescription_C::ExecuteUbergraph_WBP_InventoryWeaponDescription(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.ExecuteUbergraph_WBP_InventoryWeaponDescription");
		
		UWBP_InventoryWeaponDescription_C_ExecuteUbergraph_WBP_InventoryWeaponDescription_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.OnWeaponStickerInUseButtonPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsInUse                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_InventoryWeaponDescription_C::OnWeaponStickerInUseButtonPressed__DelegateSignature(bool InIsInUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.OnWeaponStickerInUseButtonPressed__DelegateSignature");
		
		UWBP_InventoryWeaponDescription_C_OnWeaponStickerInUseButtonPressed__DelegateSignature_Params params {};
		params.InIsInUse = InIsInUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.OnWeaponStickerButtonPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InWeaponUniqueId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FSBWeaponItemData                           InWeaponItemData                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_InventoryWeaponDescription_C::OnWeaponStickerButtonPressed__DelegateSignature(const class FString& InWeaponUniqueId, const struct FSBWeaponItemData& InWeaponItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.OnWeaponStickerButtonPressed__DelegateSignature");
		
		UWBP_InventoryWeaponDescription_C_OnWeaponStickerButtonPressed__DelegateSignature_Params params {};
		params.InWeaponUniqueId = InWeaponUniqueId;
		params.InWeaponItemData = InWeaponItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.OnButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDescripionButtonType                              ButtonType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_InventoryWeaponDescription_C::OnButtonClicked__DelegateSignature(EDescripionButtonType ButtonType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.OnButtonClicked__DelegateSignature");
		
		UWBP_InventoryWeaponDescription_C_OnButtonClicked__DelegateSignature_Params params {};
		params.ButtonType = ButtonType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_InventoryWeaponDescription_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_InventoryWeaponDescription_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C");
		return ptr;
	}

}


