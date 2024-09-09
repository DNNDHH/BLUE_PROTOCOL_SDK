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
	 * 		Name   -> Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.SetBattleSetPlayerAvatarVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIsVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_StoragePresetEquip_C::SetBattleSetPlayerAvatarVisibility(bool bInIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.SetBattleSetPlayerAvatarVisibility");
		
		UWBP_StoragePresetEquip_C_SetBattleSetPlayerAvatarVisibility_Params params {};
		params.bInIsVisible = bInIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.SetUIBlockerForBattleSetVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_StoragePresetEquip_C::SetUIBlockerForBattleSetVisibility(bool InIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.SetUIBlockerForBattleSetVisibility");
		
		UWBP_StoragePresetEquip_C_SetUIBlockerForBattleSetVisibility_Params params {};
		params.InIsVisible = InIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.SetPlayerAvatarStudioHidden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsHidden                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_StoragePresetEquip_C::SetPlayerAvatarStudioHidden(bool InIsHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.SetPlayerAvatarStudioHidden");
		
		UWBP_StoragePresetEquip_C_SetPlayerAvatarStudioHidden_Params params {};
		params.InIsHidden = InIsHidden;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.SetPlayerAvatarRotateActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsRotateActive                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_StoragePresetEquip_C::SetPlayerAvatarRotateActive(bool InIsRotateActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.SetPlayerAvatarRotateActive");
		
		UWBP_StoragePresetEquip_C_SetPlayerAvatarRotateActive_Params params {};
		params.InIsRotateActive = InIsRotateActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.SetPlayerAvatarCurrentModeMotion
	 * 		Flags  -> ()
	 */
	void UWBP_StoragePresetEquip_C::SetPlayerAvatarCurrentModeMotion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.SetPlayerAvatarCurrentModeMotion");
		
		UWBP_StoragePresetEquip_C_SetPlayerAvatarCurrentModeMotion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.FindCurrMapPlayerAvatarTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InCurrMapName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  OutTransform                                               (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void UWBP_StoragePresetEquip_C::FindCurrMapPlayerAvatarTransform(const class FString& InCurrMapName, struct FTransform* OutTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.FindCurrMapPlayerAvatarTransform");
		
		UWBP_StoragePresetEquip_C_FindCurrMapPlayerAvatarTransform_Params params {};
		params.InCurrMapName = InCurrMapName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTransform != nullptr)
			*OutTransform = params.OutTransform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.SetCmnBackBtnVIsibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_StoragePresetEquip_C::SetCmnBackBtnVIsibility(bool InIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.SetCmnBackBtnVIsibility");
		
		UWBP_StoragePresetEquip_C_SetCmnBackBtnVIsibility_Params params {};
		params.InIsVisible = InIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.SetPresetType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBPlayerPresetType                                InPresetType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StoragePresetEquip_C::SetPresetType(ESBPlayerPresetType InPresetType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.SetPresetType");
		
		UWBP_StoragePresetEquip_C_SetPresetType_Params params {};
		params.InPresetType = InPresetType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.RandomPlayAnimation2
	 * 		Flags  -> ()
	 */
	void UWBP_StoragePresetEquip_C::RandomPlayAnimation2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.RandomPlayAnimation2");
		
		UWBP_StoragePresetEquip_C_RandomPlayAnimation2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.RandomPlayAnimation
	 * 		Flags  -> ()
	 */
	void UWBP_StoragePresetEquip_C::RandomPlayAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.RandomPlayAnimation");
		
		UWBP_StoragePresetEquip_C_RandomPlayAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.OnPress_Cancel
	 * 		Flags  -> ()
	 */
	void UWBP_StoragePresetEquip_C::OnPress_Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.OnPress_Cancel");
		
		UWBP_StoragePresetEquip_C_OnPress_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.BndEvt__TabBtn1_K2Node_ComponentBoundEvent_3_BtnClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UShopCmnBtn1_C*                              ClickBtn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TabId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StoragePresetEquip_C::BndEvt__TabBtn1_K2Node_ComponentBoundEvent_3_BtnClick__DelegateSignature(class UShopCmnBtn1_C* ClickBtn, int32_t TabId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.BndEvt__TabBtn1_K2Node_ComponentBoundEvent_3_BtnClick__DelegateSignature");
		
		UWBP_StoragePresetEquip_C_BndEvt__TabBtn1_K2Node_ComponentBoundEvent_3_BtnClick__DelegateSignature_Params params {};
		params.ClickBtn = ClickBtn;
		params.TabId = TabId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UShopCmnBtn1_C*                              ClickBtn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TabId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StoragePresetEquip_C::BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature(class UShopCmnBtn1_C* ClickBtn, int32_t TabId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature");
		
		UWBP_StoragePresetEquip_C_BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature_Params params {};
		params.ClickBtn = ClickBtn;
		params.TabId = TabId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.BndEvt__CmnBack_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_StoragePresetEquip_C::BndEvt__CmnBack_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.BndEvt__CmnBack_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature");
		
		UWBP_StoragePresetEquip_C_BndEvt__CmnBack_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_2
	 * 		Flags  -> ()
	 */
	void UWBP_StoragePresetEquip_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_2");
		
		UWBP_StoragePresetEquip_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_1_OnIsCmnBackBtnVisible__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_StoragePresetEquip_C::BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_1_OnIsCmnBackBtnVisible__DelegateSignature(bool InIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_1_OnIsCmnBackBtnVisible__DelegateSignature");
		
		UWBP_StoragePresetEquip_C_BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_1_OnIsCmnBackBtnVisible__DelegateSignature_Params params {};
		params.InIsVisible = InIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_2_OnIsChildWidgetOpened__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsChildWidgetOpened                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_StoragePresetEquip_C::BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_2_OnIsChildWidgetOpened__DelegateSignature(bool InIsChildWidgetOpened)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_2_OnIsChildWidgetOpened__DelegateSignature");
		
		UWBP_StoragePresetEquip_C_BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_2_OnIsChildWidgetOpened__DelegateSignature_Params params {};
		params.InIsChildWidgetOpened = InIsChildWidgetOpened;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_1_OnSetPlayerAvatarRotateActive__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsRotateActive                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_StoragePresetEquip_C::BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_1_OnSetPlayerAvatarRotateActive__DelegateSignature(bool InIsRotateActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_1_OnSetPlayerAvatarRotateActive__DelegateSignature");
		
		UWBP_StoragePresetEquip_C_BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_1_OnSetPlayerAvatarRotateActive__DelegateSignature_Params params {};
		params.InIsRotateActive = InIsRotateActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_5_OnResetPlayerAvatarRotate__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_StoragePresetEquip_C::BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_5_OnResetPlayerAvatarRotate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_5_OnResetPlayerAvatarRotate__DelegateSignature");
		
		UWBP_StoragePresetEquip_C_BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_5_OnResetPlayerAvatarRotate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_6_OnPlayerCharacterEquippedCostumeChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_StoragePresetEquip_C::BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_6_OnPlayerCharacterEquippedCostumeChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_6_OnPlayerCharacterEquippedCostumeChanged__DelegateSignature");
		
		UWBP_StoragePresetEquip_C_BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_6_OnPlayerCharacterEquippedCostumeChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_7_OnEquippedWeaponSpawned__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_StoragePresetEquip_C::BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_7_OnEquippedWeaponSpawned__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_7_OnEquippedWeaponSpawned__DelegateSignature");
		
		UWBP_StoragePresetEquip_C_BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_7_OnEquippedWeaponSpawned__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.OnClicked_BattleSet_DetailedStatus
	 * 		Flags  -> ()
	 */
	void UWBP_StoragePresetEquip_C::OnClicked_BattleSet_DetailedStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.OnClicked_BattleSet_DetailedStatus");
		
		UWBP_StoragePresetEquip_C_OnClicked_BattleSet_DetailedStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.BndEvt__MyCharacterMenu_StatusSwitcher_ButtonFullScreen_BattleSet_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_StoragePresetEquip_C::BndEvt__MyCharacterMenu_StatusSwitcher_ButtonFullScreen_BattleSet_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.BndEvt__MyCharacterMenu_StatusSwitcher_ButtonFullScreen_BattleSet_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_StoragePresetEquip_C_BndEvt__MyCharacterMenu_StatusSwitcher_ButtonFullScreen_BattleSet_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.EscDetailedStatus
	 * 		Flags  -> ()
	 */
	void UWBP_StoragePresetEquip_C::EscDetailedStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.EscDetailedStatus");
		
		UWBP_StoragePresetEquip_C_EscDetailedStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.OnClickedDetailedStatus
	 * 		Flags  -> ()
	 */
	void UWBP_StoragePresetEquip_C::OnClickedDetailedStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.OnClickedDetailedStatus");
		
		UWBP_StoragePresetEquip_C_OnClickedDetailedStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_0_OnSetPlayerCaptureStudioHidden__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsHidden                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_StoragePresetEquip_C::BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_0_OnSetPlayerCaptureStudioHidden__DelegateSignature(bool InIsHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_0_OnSetPlayerCaptureStudioHidden__DelegateSignature");
		
		UWBP_StoragePresetEquip_C_BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_0_OnSetPlayerCaptureStudioHidden__DelegateSignature_Params params {};
		params.InIsHidden = InIsHidden;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_StoragePresetEquip_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.Construct");
		
		UWBP_StoragePresetEquip_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.Destruct
	 * 		Flags  -> ()
	 */
	void UWBP_StoragePresetEquip_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.Destruct");
		
		UWBP_StoragePresetEquip_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.onAnimTimer
	 * 		Flags  -> ()
	 */
	void UWBP_StoragePresetEquip_C::onAnimTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.onAnimTimer");
		
		UWBP_StoragePresetEquip_C_onAnimTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UWBP_StoragePresetEquip_C::WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1");
		
		UWBP_StoragePresetEquip_C_WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.OnCalcEquipStatusDiff
	 * 		Flags  -> ()
	 */
	void UWBP_StoragePresetEquip_C::OnCalcEquipStatusDiff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.OnCalcEquipStatusDiff");
		
		UWBP_StoragePresetEquip_C_OnCalcEquipStatusDiff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.OnPlayerAvatarLoaded
	 * 		Flags  -> ()
	 */
	void UWBP_StoragePresetEquip_C::OnPlayerAvatarLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.OnPlayerAvatarLoaded");
		
		UWBP_StoragePresetEquip_C_OnPlayerAvatarLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.OnChangeState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InPrevStateName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      InNextStateName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_StoragePresetEquip_C::OnChangeState(const class FString& InPrevStateName, const class FString& InNextStateName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.OnChangeState");
		
		UWBP_StoragePresetEquip_C_OnChangeState_Params params {};
		params.InPrevStateName = InPrevStateName;
		params.InNextStateName = InNextStateName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.StartOpenMenuAnimation
	 * 		Flags  -> ()
	 */
	void UWBP_StoragePresetEquip_C::StartOpenMenuAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.StartOpenMenuAnimation");
		
		UWBP_StoragePresetEquip_C_StartOpenMenuAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.OnCostumeChangeOccured
	 * 		Flags  -> ()
	 */
	void UWBP_StoragePresetEquip_C::OnCostumeChangeOccured()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.OnCostumeChangeOccured");
		
		UWBP_StoragePresetEquip_C_OnCostumeChangeOccured_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.SetUIBlockerFrontRowVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_StoragePresetEquip_C::SetUIBlockerFrontRowVisibility(bool InIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.SetUIBlockerFrontRowVisibility");
		
		UWBP_StoragePresetEquip_C_SetUIBlockerFrontRowVisibility_Params params {};
		params.InIsVisible = InIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.OnCharaPartsLoadedDelegate_ByChangeCostume_イベント
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_StoragePresetEquip_C::OnCharaPartsLoadedDelegate_ByChangeCostume_(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.OnCharaPartsLoadedDelegate_ByChangeCostume_イベント");
		
		UWBP_StoragePresetEquip_C_OnCharaPartsLoadedDelegate_ByChangeCostume__Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.OnChangeStateByCostumeChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InPrevStateName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      InNextStateName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_StoragePresetEquip_C::OnChangeStateByCostumeChange(const class FString& InPrevStateName, const class FString& InNextStateName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.OnChangeStateByCostumeChange");
		
		UWBP_StoragePresetEquip_C_OnChangeStateByCostumeChange_Params params {};
		params.InPrevStateName = InPrevStateName;
		params.InNextStateName = InNextStateName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.InitBattleSet
	 * 		Flags  -> ()
	 */
	void UWBP_StoragePresetEquip_C::InitBattleSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.InitBattleSet");
		
		UWBP_StoragePresetEquip_C_InitBattleSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.FreeBattleSet
	 * 		Flags  -> ()
	 */
	void UWBP_StoragePresetEquip_C::FreeBattleSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.FreeBattleSet");
		
		UWBP_StoragePresetEquip_C_FreeBattleSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_StoragePresetEquip_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.PreConstruct");
		
		UWBP_StoragePresetEquip_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.ExecuteUbergraph_WBP_StoragePresetEquip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StoragePresetEquip_C::ExecuteUbergraph_WBP_StoragePresetEquip(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.ExecuteUbergraph_WBP_StoragePresetEquip");
		
		UWBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_StoragePresetEquip_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.OnClose__DelegateSignature");
		
		UWBP_StoragePresetEquip_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_StoragePresetEquip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_StoragePresetEquip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_StoragePresetEquip.WBP_StoragePresetEquip_C");
		return ptr;
	}

}


