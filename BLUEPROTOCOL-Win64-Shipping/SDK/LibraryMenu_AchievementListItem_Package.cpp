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
	 * 		Name   -> Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.SetFontColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                SpecifiedColor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_AchievementListItem_C::SetFontColor(const struct FLinearColor& SpecifiedColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.SetFontColor");
		
		ULibraryMenu_AchievementListItem_C_SetFontColor_Params params {};
		params.SpecifiedColor = SpecifiedColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.SetVisibilityAchievementEventTermIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisibility                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_AchievementListItem_C::SetVisibilityAchievementEventTermIcon(bool IsVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.SetVisibilityAchievementEventTermIcon");
		
		ULibraryMenu_AchievementListItem_C_SetVisibilityAchievementEventTermIcon_Params params {};
		params.IsVisibility = IsVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.SetVisibilityAchievementTitleIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisibility                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_AchievementListItem_C::SetVisibilityAchievementTitleIcon(bool IsVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.SetVisibilityAchievementTitleIcon");
		
		ULibraryMenu_AchievementListItem_C_SetVisibilityAchievementTitleIcon_Params params {};
		params.IsVisibility = IsVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.SetRewardIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              RewardIdList                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               IsClear                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsRecievedReward                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsTermEnd                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_AchievementListItem_C::SetRewardIcon(TArray<class FString>* RewardIdList, bool IsClear, bool IsRecievedReward, bool IsTermEnd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.SetRewardIcon");
		
		ULibraryMenu_AchievementListItem_C_SetRewardIcon_Params params {};
		params.IsClear = IsClear;
		params.IsRecievedReward = IsRecievedReward;
		params.IsTermEnd = IsTermEnd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RewardIdList != nullptr)
			*RewardIdList = params.RewardIdList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.SetProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InObjectNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InProgress                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InObejectKind                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_AchievementListItem_C::SetProgress(int32_t InObjectNum, int32_t InProgress, int32_t InObejectKind)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.SetProgress");
		
		ULibraryMenu_AchievementListItem_C_SetProgress_Params params {};
		params.InObjectNum = InObjectNum;
		params.InProgress = InProgress;
		params.InObejectKind = InObejectKind;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.SetExcramationIconVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_AchievementListItem_C::SetExcramationIconVisible(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.SetExcramationIconVisible");
		
		ULibraryMenu_AchievementListItem_C_SetExcramationIconVisible_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.SetBtnSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSelected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_AchievementListItem_C::SetBtnSelected(bool bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.SetBtnSelected");
		
		ULibraryMenu_AchievementListItem_C_SetBtnSelected_Params params {};
		params.bSelected = bSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.Initialize
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_AchievementListItem_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.Initialize");
		
		ULibraryMenu_AchievementListItem_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.Construct
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_AchievementListItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.Construct");
		
		ULibraryMenu_AchievementListItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_AchievementListItem_C::BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature");
		
		ULibraryMenu_AchievementListItem_C_BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_103_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_AchievementListItem_C::BndEvt__Btn1_K2Node_ComponentBoundEvent_103_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_103_OnButtonHoverEvent__DelegateSignature");
		
		ULibraryMenu_AchievementListItem_C_BndEvt__Btn1_K2Node_ComponentBoundEvent_103_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_122_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_AchievementListItem_C::BndEvt__Btn1_K2Node_ComponentBoundEvent_122_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_122_OnButtonHoverEvent__DelegateSignature");
		
		ULibraryMenu_AchievementListItem_C_BndEvt__Btn1_K2Node_ComponentBoundEvent_122_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.ExecuteUbergraph_LibraryMenu_AchievementListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_AchievementListItem_C::ExecuteUbergraph_LibraryMenu_AchievementListItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.ExecuteUbergraph_LibraryMenu_AchievementListItem");
		
		ULibraryMenu_AchievementListItem_C_ExecuteUbergraph_LibraryMenu_AchievementListItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.EventCheckStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            listIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_AchievementListItem_C::EventCheckStateChanged__DelegateSignature(bool IsChecked, int32_t listIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.EventCheckStateChanged__DelegateSignature");
		
		ULibraryMenu_AchievementListItem_C_EventCheckStateChanged__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		params.listIndex = listIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.OnClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            listIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_AchievementListItem_C::OnClick__DelegateSignature(int32_t listIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C.OnClick__DelegateSignature");
		
		ULibraryMenu_AchievementListItem_C_OnClick__DelegateSignature_Params params {};
		params.listIndex = listIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULibraryMenu_AchievementListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULibraryMenu_AchievementListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LibraryMenu_AchievementListItem.LibraryMenu_AchievementListItem_C");
		return ptr;
	}

}


