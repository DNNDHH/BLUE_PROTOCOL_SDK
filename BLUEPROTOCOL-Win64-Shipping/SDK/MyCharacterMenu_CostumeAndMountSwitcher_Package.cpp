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
	 * 		Name   -> Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.GetWidgetSwitcherActiveWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     OutWidget                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharacterMenu_CostumeAndMountSwitcher_C::GetWidgetSwitcherActiveWidget(class UWidget** OutWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.GetWidgetSwitcherActiveWidget");
		
		UMyCharacterMenu_CostumeAndMountSwitcher_C_GetWidgetSwitcherActiveWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutWidget != nullptr)
			*OutWidget = params.OutWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.InitCostumeChangeMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMyCharaMenu_Costume_C*                      InCostumeChangeMenu                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharacterMenu_CostumeAndMountSwitcher_C::InitCostumeChangeMenu(class UMyCharaMenu_Costume_C* InCostumeChangeMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.InitCostumeChangeMenu");
		
		UMyCharacterMenu_CostumeAndMountSwitcher_C_InitCostumeChangeMenu_Params params {};
		params.InCostumeChangeMenu = InCostumeChangeMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.IsBattleSetButtonEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutIsEnable                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharacterMenu_CostumeAndMountSwitcher_C::IsBattleSetButtonEnable(bool* OutIsEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.IsBattleSetButtonEnable");
		
		UMyCharacterMenu_CostumeAndMountSwitcher_C_IsBattleSetButtonEnable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsEnable != nullptr)
			*OutIsEnable = params.OutIsEnable;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.Update Sub Button Excramation Icon
	 * 		Flags  -> ()
	 */
	void UMyCharacterMenu_CostumeAndMountSwitcher_C::UpdateSubButtonExcramationIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.Update Sub Button Excramation Icon");
		
		UMyCharacterMenu_CostumeAndMountSwitcher_C_UpdateSubButtonExcramationIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.Destruct
	 * 		Flags  -> ()
	 */
	void UMyCharacterMenu_CostumeAndMountSwitcher_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.Destruct");
		
		UMyCharacterMenu_CostumeAndMountSwitcher_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.Construct
	 * 		Flags  -> ()
	 */
	void UMyCharacterMenu_CostumeAndMountSwitcher_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.Construct");
		
		UMyCharacterMenu_CostumeAndMountSwitcher_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.SetTab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ItemToFind                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 */
	void UMyCharacterMenu_CostumeAndMountSwitcher_C::SetTab(const class FString& ItemToFind)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.SetTab");
		
		UMyCharacterMenu_CostumeAndMountSwitcher_C_SetTab_Params params {};
		params.ItemToFind = ItemToFind;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.BndEvt__TabButtons_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharacterMenu_CostumeAndMountSwitcher_C::BndEvt__TabButtons_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.BndEvt__TabButtons_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");
		
		UMyCharacterMenu_CostumeAndMountSwitcher_C_BndEvt__TabButtons_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFirstOpen                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      OpenBookMarkType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMyCharacterMenu_CostumeAndMountSwitcher_C::Init(bool IsFirstOpen, const class FString& OpenBookMarkType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.Init");
		
		UMyCharacterMenu_CostumeAndMountSwitcher_C_Init_Params params {};
		params.IsFirstOpen = IsFirstOpen;
		params.OpenBookMarkType = OpenBookMarkType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnSetPlayerCaptureStudioHidden_イベント
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsHidden                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharacterMenu_CostumeAndMountSwitcher_C::OnSetPlayerCaptureStudioHidden_(bool IsHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnSetPlayerCaptureStudioHidden_イベント");
		
		UMyCharacterMenu_CostumeAndMountSwitcher_C_OnSetPlayerCaptureStudioHidden__Params params {};
		params.IsHidden = IsHidden;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.ChangeTab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TmpClickedTabButtonId                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharacterMenu_CostumeAndMountSwitcher_C::ChangeTab(int32_t TmpClickedTabButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.ChangeTab");
		
		UMyCharacterMenu_CostumeAndMountSwitcher_C_ChangeTab_Params params {};
		params.TmpClickedTabButtonId = TmpClickedTabButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.BookmarkUpdateRequest
	 * 		Flags  -> ()
	 */
	void UMyCharacterMenu_CostumeAndMountSwitcher_C::BookmarkUpdateRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.BookmarkUpdateRequest");
		
		UMyCharacterMenu_CostumeAndMountSwitcher_C_BookmarkUpdateRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.UpdateBookmarkStatusButton
	 * 		Flags  -> ()
	 */
	void UMyCharacterMenu_CostumeAndMountSwitcher_C::UpdateBookmarkStatusButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.UpdateBookmarkStatusButton");
		
		UMyCharacterMenu_CostumeAndMountSwitcher_C_UpdateBookmarkStatusButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnClicked_BattleSet_DetailedStatus
	 * 		Flags  -> ()
	 */
	void UMyCharacterMenu_CostumeAndMountSwitcher_C::OnClicked_BattleSet_DetailedStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnClicked_BattleSet_DetailedStatus");
		
		UMyCharacterMenu_CostumeAndMountSwitcher_C_OnClicked_BattleSet_DetailedStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.BndEvt__MyCharacterMenu_StatusSwitcher_ButtonFullScreen_BattleSet_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharacterMenu_CostumeAndMountSwitcher_C::BndEvt__MyCharacterMenu_StatusSwitcher_ButtonFullScreen_BattleSet_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.BndEvt__MyCharacterMenu_StatusSwitcher_ButtonFullScreen_BattleSet_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UMyCharacterMenu_CostumeAndMountSwitcher_C_BndEvt__MyCharacterMenu_StatusSwitcher_ButtonFullScreen_BattleSet_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.Init_BattleSet_FullSrnBtn
	 * 		Flags  -> ()
	 */
	void UMyCharacterMenu_CostumeAndMountSwitcher_C::Init_BattleSet_FullSrnBtn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.Init_BattleSet_FullSrnBtn");
		
		UMyCharacterMenu_CostumeAndMountSwitcher_C_Init_BattleSet_FullSrnBtn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.EscDetailedStatus
	 * 		Flags  -> ()
	 */
	void UMyCharacterMenu_CostumeAndMountSwitcher_C::EscDetailedStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.EscDetailedStatus");
		
		UMyCharacterMenu_CostumeAndMountSwitcher_C_EscDetailedStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnClickedDetailedStatus
	 * 		Flags  -> ()
	 */
	void UMyCharacterMenu_CostumeAndMountSwitcher_C::OnClickedDetailedStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnClickedDetailedStatus");
		
		UMyCharacterMenu_CostumeAndMountSwitcher_C_OnClickedDetailedStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.Free_BattleSet_FullSrnBtn
	 * 		Flags  -> ()
	 */
	void UMyCharacterMenu_CostumeAndMountSwitcher_C::Free_BattleSet_FullSrnBtn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.Free_BattleSet_FullSrnBtn");
		
		UMyCharacterMenu_CostumeAndMountSwitcher_C_Free_BattleSet_FullSrnBtn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnAdventureBoardBtn_Event
	 * 		Flags  -> ()
	 */
	void UMyCharacterMenu_CostumeAndMountSwitcher_C::OnAdventureBoardBtn_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnAdventureBoardBtn_Event");
		
		UMyCharacterMenu_CostumeAndMountSwitcher_C_OnAdventureBoardBtn_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharacterMenu_CostumeAndMountSwitcher_C::ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher");
		
		UMyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnSetCostumeOnFlag__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsCostumeOn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharacterMenu_CostumeAndMountSwitcher_C::OnSetCostumeOnFlag__DelegateSignature(bool InIsCostumeOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnSetCostumeOnFlag__DelegateSignature");
		
		UMyCharacterMenu_CostumeAndMountSwitcher_C_OnSetCostumeOnFlag__DelegateSignature_Params params {};
		params.InIsCostumeOn = InIsCostumeOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnResetPlayerAvatarRotate__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharacterMenu_CostumeAndMountSwitcher_C::OnResetPlayerAvatarRotate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnResetPlayerAvatarRotate__DelegateSignature");
		
		UMyCharacterMenu_CostumeAndMountSwitcher_C_OnResetPlayerAvatarRotate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnEquippedWeaponSpawned__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharacterMenu_CostumeAndMountSwitcher_C::OnEquippedWeaponSpawned__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnEquippedWeaponSpawned__DelegateSignature");
		
		UMyCharacterMenu_CostumeAndMountSwitcher_C_OnEquippedWeaponSpawned__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnIsCmnBackBtnVisible__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharacterMenu_CostumeAndMountSwitcher_C::OnIsCmnBackBtnVisible__DelegateSignature(bool InIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnIsCmnBackBtnVisible__DelegateSignature");
		
		UMyCharacterMenu_CostumeAndMountSwitcher_C_OnIsCmnBackBtnVisible__DelegateSignature_Params params {};
		params.InIsVisible = InIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnPlayerCharacterEquippedCostumeChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharacterMenu_CostumeAndMountSwitcher_C::OnPlayerCharacterEquippedCostumeChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnPlayerCharacterEquippedCostumeChanged__DelegateSignature");
		
		UMyCharacterMenu_CostumeAndMountSwitcher_C_OnPlayerCharacterEquippedCostumeChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnPlayerAvatarRotateActive__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsActive                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharacterMenu_CostumeAndMountSwitcher_C::OnPlayerAvatarRotateActive__DelegateSignature(bool InIsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnPlayerAvatarRotateActive__DelegateSignature");
		
		UMyCharacterMenu_CostumeAndMountSwitcher_C_OnPlayerAvatarRotateActive__DelegateSignature_Params params {};
		params.InIsActive = InIsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnSetPlayerCaptureStudioHidden__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsHidden                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharacterMenu_CostumeAndMountSwitcher_C::OnSetPlayerCaptureStudioHidden__DelegateSignature(bool IsHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnSetPlayerCaptureStudioHidden__DelegateSignature");
		
		UMyCharacterMenu_CostumeAndMountSwitcher_C_OnSetPlayerCaptureStudioHidden__DelegateSignature_Params params {};
		params.IsHidden = IsHidden;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnSelectAchievementSaved__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharacterMenu_CostumeAndMountSwitcher_C::OnSelectAchievementSaved__DelegateSignature(bool InResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnSelectAchievementSaved__DelegateSignature");
		
		UMyCharacterMenu_CostumeAndMountSwitcher_C_OnSelectAchievementSaved__DelegateSignature_Params params {};
		params.InResult = InResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnAcquiredAchievementLoaded__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharacterMenu_CostumeAndMountSwitcher_C::OnAcquiredAchievementLoaded__DelegateSignature(bool InResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnAcquiredAchievementLoaded__DelegateSignature");
		
		UMyCharacterMenu_CostumeAndMountSwitcher_C_OnAcquiredAchievementLoaded__DelegateSignature_Params params {};
		params.InResult = InResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnAchievementChangeButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMyCharaMenu_AchievementList_C*              InAchievementList                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharacterMenu_CostumeAndMountSwitcher_C::OnAchievementChangeButtonClicked__DelegateSignature(class UMyCharaMenu_AchievementList_C* InAchievementList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnAchievementChangeButtonClicked__DelegateSignature");
		
		UMyCharacterMenu_CostumeAndMountSwitcher_C_OnAchievementChangeButtonClicked__DelegateSignature_Params params {};
		params.InAchievementList = InAchievementList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnSubMenuChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharacterMenu_CostumeAndMountSwitcher_C::OnSubMenuChanged__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnSubMenuChanged__DelegateSignature");
		
		UMyCharacterMenu_CostumeAndMountSwitcher_C_OnSubMenuChanged__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMyCharacterMenu_CostumeAndMountSwitcher_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMyCharacterMenu_CostumeAndMountSwitcher_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C");
		return ptr;
	}

}


