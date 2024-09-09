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
	 * 		Name   -> Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.SetWndPos
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   WndPos                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAppearanceWeaponStickerWeaponSelectMenuWindow_C::SetWndPos(const struct FVector2D& WndPos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.SetWndPos");
		
		UAppearanceWeaponStickerWeaponSelectMenuWindow_C_SetWndPos_Params params {};
		params.WndPos = WndPos;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.HideAllSlotListItem
	 * 		Flags  -> ()
	 */
	void UAppearanceWeaponStickerWeaponSelectMenuWindow_C::HideAllSlotListItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.HideAllSlotListItem");
		
		UAppearanceWeaponStickerWeaponSelectMenuWindow_C_HideAllSlotListItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.SortList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBOwnItemListContainer*                     InOwnItemListContainer                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBItemSortType                                    InSortType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FFilterGroup>                        InSortFilterGroup                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ESBWeaponType                                      InWeaponType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutCandidateItemCount                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAppearanceWeaponStickerWeaponSelectMenuWindow_C::SortList(class USBOwnItemListContainer* InOwnItemListContainer, ESBItemSortType InSortType, TArray<struct FFilterGroup>* InSortFilterGroup, ESBWeaponType InWeaponType, int32_t* OutCandidateItemCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.SortList");
		
		UAppearanceWeaponStickerWeaponSelectMenuWindow_C_SortList_Params params {};
		params.InOwnItemListContainer = InOwnItemListContainer;
		params.InSortType = InSortType;
		params.InWeaponType = InWeaponType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InSortFilterGroup != nullptr)
			*InSortFilterGroup = params.InSortFilterGroup;
		if (OutCandidateItemCount != nullptr)
			*OutCandidateItemCount = params.OutCandidateItemCount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.ChangeActiveWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInActivateListWindow                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInUseAnimation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAppearanceWeaponStickerWeaponSelectMenuWindow_C::ChangeActiveWindow(bool bInActivateListWindow, bool bInUseAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.ChangeActiveWindow");
		
		UAppearanceWeaponStickerWeaponSelectMenuWindow_C_ChangeActiveWindow_Params params {};
		params.bInActivateListWindow = bInActivateListWindow;
		params.bInUseAnimation = bInUseAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.SelectAll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsSelected                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAppearanceWeaponStickerWeaponSelectMenuWindow_C::SelectAll(bool InIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.SelectAll");
		
		UAppearanceWeaponStickerWeaponSelectMenuWindow_C_SelectAll_Params params {};
		params.InIsSelected = InIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.CreateEmptySlotList
	 * 		Flags  -> ()
	 */
	void UAppearanceWeaponStickerWeaponSelectMenuWindow_C::CreateEmptySlotList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.CreateEmptySlotList");
		
		UAppearanceWeaponStickerWeaponSelectMenuWindow_C_CreateEmptySlotList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.HideWindow
	 * 		Flags  -> ()
	 */
	void UAppearanceWeaponStickerWeaponSelectMenuWindow_C::HideWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.HideWindow");
		
		UAppearanceWeaponStickerWeaponSelectMenuWindow_C_HideWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.ShowWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBWeaponType                                      InWeaponType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAppearanceWeaponStickerWeaponSelectMenuWindow_C::ShowWindow(ESBWeaponType InWeaponType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.ShowWindow");
		
		UAppearanceWeaponStickerWeaponSelectMenuWindow_C_ShowWindow_Params params {};
		params.InWeaponType = InWeaponType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.ShowWeaponUnchangeableMessageDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues InUnchangeableRetValue                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAppearanceWeaponStickerWeaponSelectMenuWindow_C::ShowWeaponUnchangeableMessageDialog(ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues InUnchangeableRetValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.ShowWeaponUnchangeableMessageDialog");
		
		UAppearanceWeaponStickerWeaponSelectMenuWindow_C_ShowWeaponUnchangeableMessageDialog_Params params {};
		params.InUnchangeableRetValue = InUnchangeableRetValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.Construct
	 * 		Flags  -> ()
	 */
	void UAppearanceWeaponStickerWeaponSelectMenuWindow_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.Construct");
		
		UAppearanceWeaponStickerWeaponSelectMenuWindow_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAppearanceWeaponStickerWeaponSelectMenuWindow_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.OnAnimationFinished");
		
		UAppearanceWeaponStickerWeaponSelectMenuWindow_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.BndEvt__BtnSearch_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UAppearanceWeaponStickerWeaponSelectMenuWindow_C::BndEvt__BtnSearch_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.BndEvt__BtnSearch_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UAppearanceWeaponStickerWeaponSelectMenuWindow_C_BndEvt__BtnSearch_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.BndEvt__BtnChange_K2Node_ComponentBoundEvent_18_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UAppearanceWeaponStickerWeaponSelectMenuWindow_C::BndEvt__BtnChange_K2Node_ComponentBoundEvent_18_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.BndEvt__BtnChange_K2Node_ComponentBoundEvent_18_EventOnClicked__DelegateSignature");
		
		UAppearanceWeaponStickerWeaponSelectMenuWindow_C_BndEvt__BtnChange_K2Node_ComponentBoundEvent_18_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.OnPress_Cancel
	 * 		Flags  -> ()
	 */
	void UAppearanceWeaponStickerWeaponSelectMenuWindow_C::OnPress_Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.OnPress_Cancel");
		
		UAppearanceWeaponStickerWeaponSelectMenuWindow_C_OnPress_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.OnSelect_ItemIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemIconBtn_C*                              InSelectedIcon                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAppearanceWeaponStickerWeaponSelectMenuWindow_C::OnSelect_ItemIcon(class UItemIconBtn_C* InSelectedIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.OnSelect_ItemIcon");
		
		UAppearanceWeaponStickerWeaponSelectMenuWindow_C_OnSelect_ItemIcon_Params params {};
		params.InSelectedIcon = InSelectedIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.UiInputBlock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsBlock                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAppearanceWeaponStickerWeaponSelectMenuWindow_C::UiInputBlock(bool InIsBlock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.UiInputBlock");
		
		UAppearanceWeaponStickerWeaponSelectMenuWindow_C_UiInputBlock_Params params {};
		params.InIsBlock = InIsBlock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.BndEvt__FilterSelector_K2Node_ComponentBoundEvent_20_OnFilterApply__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FFilterGroup>                        Filters                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UAppearanceWeaponStickerWeaponSelectMenuWindow_C::BndEvt__FilterSelector_K2Node_ComponentBoundEvent_20_OnFilterApply__DelegateSignature(TArray<struct FFilterGroup>* Filters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.BndEvt__FilterSelector_K2Node_ComponentBoundEvent_20_OnFilterApply__DelegateSignature");
		
		UAppearanceWeaponStickerWeaponSelectMenuWindow_C_BndEvt__FilterSelector_K2Node_ComponentBoundEvent_20_OnFilterApply__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filters != nullptr)
			*Filters = params.Filters;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.BndEvt__FilterSelector_K2Node_ComponentBoundEvent_21_OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UAppearanceWeaponStickerWeaponSelectMenuWindow_C::BndEvt__FilterSelector_K2Node_ComponentBoundEvent_21_OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.BndEvt__FilterSelector_K2Node_ComponentBoundEvent_21_OnClose__DelegateSignature");
		
		UAppearanceWeaponStickerWeaponSelectMenuWindow_C_BndEvt__FilterSelector_K2Node_ComponentBoundEvent_21_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.BndEvt__SortBox_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBItemSortType                                    SortType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAppearanceWeaponStickerWeaponSelectMenuWindow_C::BndEvt__SortBox_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature(ESBItemSortType SortType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.BndEvt__SortBox_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature");
		
		UAppearanceWeaponStickerWeaponSelectMenuWindow_C_BndEvt__SortBox_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature_Params params {};
		params.SortType = SortType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.OnWeaponIconSelected_イベント
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemIconBtn_C*                              InSelectedItemIconBtn                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAppearanceWeaponStickerWeaponSelectMenuWindow_C::OnWeaponIconSelected_(class UItemIconBtn_C* InSelectedItemIconBtn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.OnWeaponIconSelected_イベント");
		
		UAppearanceWeaponStickerWeaponSelectMenuWindow_C_OnWeaponIconSelected__Params params {};
		params.InSelectedItemIconBtn = InSelectedItemIconBtn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.BndEvt__BtnScreen_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UAppearanceWeaponStickerWeaponSelectMenuWindow_C::BndEvt__BtnScreen_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.BndEvt__BtnScreen_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature");
		
		UAppearanceWeaponStickerWeaponSelectMenuWindow_C_BndEvt__BtnScreen_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.BndEvt__AppearanceWeaponStickerWeaponSelectMenuWindow_CmnClose02_K2Node_ComponentBoundEvent_3_OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UAppearanceWeaponStickerWeaponSelectMenuWindow_C::BndEvt__AppearanceWeaponStickerWeaponSelectMenuWindow_CmnClose02_K2Node_ComponentBoundEvent_3_OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.BndEvt__AppearanceWeaponStickerWeaponSelectMenuWindow_CmnClose02_K2Node_ComponentBoundEvent_3_OnClosed__DelegateSignature");
		
		UAppearanceWeaponStickerWeaponSelectMenuWindow_C_BndEvt__AppearanceWeaponStickerWeaponSelectMenuWindow_CmnClose02_K2Node_ComponentBoundEvent_3_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAppearanceWeaponStickerWeaponSelectMenuWindow_C::ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow");
		
		UAppearanceWeaponStickerWeaponSelectMenuWindow_C_ExecuteUbergraph_AppearanceWeaponStickerWeaponSelectMenuWindow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.OnHideWindowEnd__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsHideWindowCalledByDecide                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAppearanceWeaponStickerWeaponSelectMenuWindow_C::OnHideWindowEnd__DelegateSignature(bool InIsHideWindowCalledByDecide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.OnHideWindowEnd__DelegateSignature");
		
		UAppearanceWeaponStickerWeaponSelectMenuWindow_C_OnHideWindowEnd__DelegateSignature_Params params {};
		params.InIsHideWindowCalledByDecide = InIsHideWindowCalledByDecide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.OnDecide__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InSelectedWeaponUniqueItemId                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAppearanceWeaponStickerWeaponSelectMenuWindow_C::OnDecide__DelegateSignature(const class FString& InSelectedWeaponUniqueItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C.OnDecide__DelegateSignature");
		
		UAppearanceWeaponStickerWeaponSelectMenuWindow_C_OnDecide__DelegateSignature_Params params {};
		params.InSelectedWeaponUniqueItemId = InSelectedWeaponUniqueItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAppearanceWeaponStickerWeaponSelectMenuWindow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAppearanceWeaponStickerWeaponSelectMenuWindow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AppearanceWeaponStickerWeaponSelectMenuWindow.AppearanceWeaponStickerWeaponSelectMenuWindow_C");
		return ptr;
	}

}


