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
	 * 		Name   -> Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.SetPlayerAvatarImageVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIsVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharacterMenu_StatusSwitcher_C::SetPlayerAvatarImageVisibility(bool bInIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.SetPlayerAvatarImageVisibility");
		
		UMyCharacterMenu_StatusSwitcher_C_SetPlayerAvatarImageVisibility_Params params {};
		params.bInIsVisible = bInIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.InitCostumeChangeMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMyCharaMenu_Costume_C*                      InCostumeChangeMenu                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharacterMenu_StatusSwitcher_C::InitCostumeChangeMenu(class UMyCharaMenu_Costume_C* InCostumeChangeMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.InitCostumeChangeMenu");
		
		UMyCharacterMenu_StatusSwitcher_C_InitCostumeChangeMenu_Params params {};
		params.InCostumeChangeMenu = InCostumeChangeMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.IsBattleSetButtonEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutIsEnable                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharacterMenu_StatusSwitcher_C::IsBattleSetButtonEnable(bool* OutIsEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.IsBattleSetButtonEnable");
		
		UMyCharacterMenu_StatusSwitcher_C_IsBattleSetButtonEnable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsEnable != nullptr)
			*OutIsEnable = params.OutIsEnable;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.Update Sub Button Excramation Icon
	 * 		Flags  -> ()
	 */
	void UMyCharacterMenu_StatusSwitcher_C::UpdateSubButtonExcramationIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.Update Sub Button Excramation Icon");
		
		UMyCharacterMenu_StatusSwitcher_C_UpdateSubButtonExcramationIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.Construct
	 * 		Flags  -> ()
	 */
	void UMyCharacterMenu_StatusSwitcher_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.Construct");
		
		UMyCharacterMenu_StatusSwitcher_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFirstOpen                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      OpenBookMarkType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMyCharacterMenu_StatusSwitcher_C::Init(bool IsFirstOpen, const class FString& OpenBookMarkType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.Init");
		
		UMyCharacterMenu_StatusSwitcher_C_Init_Params params {};
		params.IsFirstOpen = IsFirstOpen;
		params.OpenBookMarkType = OpenBookMarkType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.Destruct
	 * 		Flags  -> ()
	 */
	void UMyCharacterMenu_StatusSwitcher_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.Destruct");
		
		UMyCharacterMenu_StatusSwitcher_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnSetPlayerCaptureStudioHidden_イベント
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsHidden                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharacterMenu_StatusSwitcher_C::OnSetPlayerCaptureStudioHidden_(bool IsHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnSetPlayerCaptureStudioHidden_イベント");
		
		UMyCharacterMenu_StatusSwitcher_C_OnSetPlayerCaptureStudioHidden__Params params {};
		params.IsHidden = IsHidden;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.ChangeTab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TmpClickedTabButtonId                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharacterMenu_StatusSwitcher_C::ChangeTab(int32_t TmpClickedTabButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.ChangeTab");
		
		UMyCharacterMenu_StatusSwitcher_C_ChangeTab_Params params {};
		params.TmpClickedTabButtonId = TmpClickedTabButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnClicked_BattleSet_DetailedStatus
	 * 		Flags  -> ()
	 */
	void UMyCharacterMenu_StatusSwitcher_C::OnClicked_BattleSet_DetailedStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnClicked_BattleSet_DetailedStatus");
		
		UMyCharacterMenu_StatusSwitcher_C_OnClicked_BattleSet_DetailedStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.BndEvt__MyCharacterMenu_StatusSwitcher_ButtonFullScreen_BattleSet_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharacterMenu_StatusSwitcher_C::BndEvt__MyCharacterMenu_StatusSwitcher_ButtonFullScreen_BattleSet_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.BndEvt__MyCharacterMenu_StatusSwitcher_ButtonFullScreen_BattleSet_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UMyCharacterMenu_StatusSwitcher_C_BndEvt__MyCharacterMenu_StatusSwitcher_ButtonFullScreen_BattleSet_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.BookmarkUpdateRequest
	 * 		Flags  -> ()
	 */
	void UMyCharacterMenu_StatusSwitcher_C::BookmarkUpdateRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.BookmarkUpdateRequest");
		
		UMyCharacterMenu_StatusSwitcher_C_BookmarkUpdateRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.Init_BattleSet_FullSrnBtn
	 * 		Flags  -> ()
	 */
	void UMyCharacterMenu_StatusSwitcher_C::Init_BattleSet_FullSrnBtn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.Init_BattleSet_FullSrnBtn");
		
		UMyCharacterMenu_StatusSwitcher_C_Init_BattleSet_FullSrnBtn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.EscDetailedStatus
	 * 		Flags  -> ()
	 */
	void UMyCharacterMenu_StatusSwitcher_C::EscDetailedStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.EscDetailedStatus");
		
		UMyCharacterMenu_StatusSwitcher_C_EscDetailedStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnClickedDetailedStatus
	 * 		Flags  -> ()
	 */
	void UMyCharacterMenu_StatusSwitcher_C::OnClickedDetailedStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnClickedDetailedStatus");
		
		UMyCharacterMenu_StatusSwitcher_C_OnClickedDetailedStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.Free_BattleSet_FullSrnBtn
	 * 		Flags  -> ()
	 */
	void UMyCharacterMenu_StatusSwitcher_C::Free_BattleSet_FullSrnBtn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.Free_BattleSet_FullSrnBtn");
		
		UMyCharacterMenu_StatusSwitcher_C_Free_BattleSet_FullSrnBtn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnAdventureBoardBtn_Event
	 * 		Flags  -> ()
	 */
	void UMyCharacterMenu_StatusSwitcher_C::OnAdventureBoardBtn_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnAdventureBoardBtn_Event");
		
		UMyCharacterMenu_StatusSwitcher_C_OnAdventureBoardBtn_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_6_OnSetPlayerAvatarRotateActive__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsRotateActive                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharacterMenu_StatusSwitcher_C::BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_6_OnSetPlayerAvatarRotateActive__DelegateSignature(bool InIsRotateActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_6_OnSetPlayerAvatarRotateActive__DelegateSignature");
		
		UMyCharacterMenu_StatusSwitcher_C_BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_6_OnSetPlayerAvatarRotateActive__DelegateSignature_Params params {};
		params.InIsRotateActive = InIsRotateActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_7_OnPlayerCharacterEquippedCostumeChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharacterMenu_StatusSwitcher_C::BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_7_OnPlayerCharacterEquippedCostumeChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_7_OnPlayerCharacterEquippedCostumeChanged__DelegateSignature");
		
		UMyCharacterMenu_StatusSwitcher_C_BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_7_OnPlayerCharacterEquippedCostumeChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_5_OnIsCmnBackBtnVisible__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharacterMenu_StatusSwitcher_C::BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_5_OnIsCmnBackBtnVisible__DelegateSignature(bool InIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_5_OnIsCmnBackBtnVisible__DelegateSignature");
		
		UMyCharacterMenu_StatusSwitcher_C_BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_5_OnIsCmnBackBtnVisible__DelegateSignature_Params params {};
		params.InIsVisible = InIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_10_OnEquippedWeaponSpawned__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharacterMenu_StatusSwitcher_C::BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_10_OnEquippedWeaponSpawned__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_10_OnEquippedWeaponSpawned__DelegateSignature");
		
		UMyCharacterMenu_StatusSwitcher_C_BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_10_OnEquippedWeaponSpawned__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_8_OnResetPlayerAvatarRotate__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharacterMenu_StatusSwitcher_C::BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_8_OnResetPlayerAvatarRotate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_8_OnResetPlayerAvatarRotate__DelegateSignature");
		
		UMyCharacterMenu_StatusSwitcher_C_BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_8_OnResetPlayerAvatarRotate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_0_OnSetPlayerCaptureStudioHidden__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsHidden                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharacterMenu_StatusSwitcher_C::BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_0_OnSetPlayerCaptureStudioHidden__DelegateSignature(bool InIsHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_0_OnSetPlayerCaptureStudioHidden__DelegateSignature");
		
		UMyCharacterMenu_StatusSwitcher_C_BndEvt__MyCharacterMenu_StatusSwitcher_BattleSet_K2Node_ComponentBoundEvent_0_OnSetPlayerCaptureStudioHidden__DelegateSignature_Params params {};
		params.InIsHidden = InIsHidden;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.ExecuteUbergraph_MyCharacterMenu_StatusSwitcher
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharacterMenu_StatusSwitcher_C::ExecuteUbergraph_MyCharacterMenu_StatusSwitcher(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.ExecuteUbergraph_MyCharacterMenu_StatusSwitcher");
		
		UMyCharacterMenu_StatusSwitcher_C_ExecuteUbergraph_MyCharacterMenu_StatusSwitcher_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnSetCostumeOnFlag__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsCostumeOn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharacterMenu_StatusSwitcher_C::OnSetCostumeOnFlag__DelegateSignature(bool InIsCostumeOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnSetCostumeOnFlag__DelegateSignature");
		
		UMyCharacterMenu_StatusSwitcher_C_OnSetCostumeOnFlag__DelegateSignature_Params params {};
		params.InIsCostumeOn = InIsCostumeOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnResetPlayerAvatarRotate__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharacterMenu_StatusSwitcher_C::OnResetPlayerAvatarRotate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnResetPlayerAvatarRotate__DelegateSignature");
		
		UMyCharacterMenu_StatusSwitcher_C_OnResetPlayerAvatarRotate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnEquippedWeaponSpawned__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharacterMenu_StatusSwitcher_C::OnEquippedWeaponSpawned__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnEquippedWeaponSpawned__DelegateSignature");
		
		UMyCharacterMenu_StatusSwitcher_C_OnEquippedWeaponSpawned__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnIsCmnBackBtnVisible__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharacterMenu_StatusSwitcher_C::OnIsCmnBackBtnVisible__DelegateSignature(bool InIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnIsCmnBackBtnVisible__DelegateSignature");
		
		UMyCharacterMenu_StatusSwitcher_C_OnIsCmnBackBtnVisible__DelegateSignature_Params params {};
		params.InIsVisible = InIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnPlayerCharacterEquippedCostumeChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharacterMenu_StatusSwitcher_C::OnPlayerCharacterEquippedCostumeChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnPlayerCharacterEquippedCostumeChanged__DelegateSignature");
		
		UMyCharacterMenu_StatusSwitcher_C_OnPlayerCharacterEquippedCostumeChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnPlayerAvatarRotateActive__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsActive                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharacterMenu_StatusSwitcher_C::OnPlayerAvatarRotateActive__DelegateSignature(bool InIsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnPlayerAvatarRotateActive__DelegateSignature");
		
		UMyCharacterMenu_StatusSwitcher_C_OnPlayerAvatarRotateActive__DelegateSignature_Params params {};
		params.InIsActive = InIsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnSetPlayerCaptureStudioHidden__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsHidden                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharacterMenu_StatusSwitcher_C::OnSetPlayerCaptureStudioHidden__DelegateSignature(bool IsHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnSetPlayerCaptureStudioHidden__DelegateSignature");
		
		UMyCharacterMenu_StatusSwitcher_C_OnSetPlayerCaptureStudioHidden__DelegateSignature_Params params {};
		params.IsHidden = IsHidden;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnSelectAchievementSaved__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharacterMenu_StatusSwitcher_C::OnSelectAchievementSaved__DelegateSignature(bool InResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnSelectAchievementSaved__DelegateSignature");
		
		UMyCharacterMenu_StatusSwitcher_C_OnSelectAchievementSaved__DelegateSignature_Params params {};
		params.InResult = InResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnAcquiredAchievementLoaded__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharacterMenu_StatusSwitcher_C::OnAcquiredAchievementLoaded__DelegateSignature(bool InResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnAcquiredAchievementLoaded__DelegateSignature");
		
		UMyCharacterMenu_StatusSwitcher_C_OnAcquiredAchievementLoaded__DelegateSignature_Params params {};
		params.InResult = InResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnAchievementChangeButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMyCharaMenu_AchievementList_C*              InAchievementList                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharacterMenu_StatusSwitcher_C::OnAchievementChangeButtonClicked__DelegateSignature(class UMyCharaMenu_AchievementList_C* InAchievementList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnAchievementChangeButtonClicked__DelegateSignature");
		
		UMyCharacterMenu_StatusSwitcher_C_OnAchievementChangeButtonClicked__DelegateSignature_Params params {};
		params.InAchievementList = InAchievementList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnSubMenuChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharacterMenu_StatusSwitcher_C::OnSubMenuChanged__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C.OnSubMenuChanged__DelegateSignature");
		
		UMyCharacterMenu_StatusSwitcher_C_OnSubMenuChanged__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMyCharacterMenu_StatusSwitcher_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMyCharacterMenu_StatusSwitcher_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MyCharacterMenu_StatusSwitcher.MyCharacterMenu_StatusSwitcher_C");
		return ptr;
	}

}


