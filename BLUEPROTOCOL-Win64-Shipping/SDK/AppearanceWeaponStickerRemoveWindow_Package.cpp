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
	 * 		Name   -> Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.SetWindowPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   InWindowPosition                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAppearanceWeaponStickerRemoveWindow_C::SetWindowPosition(const struct FVector2D& InWindowPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.SetWindowPosition");
		
		UAppearanceWeaponStickerRemoveWindow_C_SetWindowPosition_Params params {};
		params.InWindowPosition = InWindowPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.SetIsDecideButtonEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsEnabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAppearanceWeaponStickerRemoveWindow_C::SetIsDecideButtonEnabled(bool InIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.SetIsDecideButtonEnabled");
		
		UAppearanceWeaponStickerRemoveWindow_C_SetIsDecideButtonEnabled_Params params {};
		params.InIsEnabled = InIsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.BlockUIInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InBlockInput                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAppearanceWeaponStickerRemoveWindow_C::BlockUIInput(bool InBlockInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.BlockUIInput");
		
		UAppearanceWeaponStickerRemoveWindow_C_BlockUIInput_Params params {};
		params.InBlockInput = InBlockInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.HideWindow
	 * 		Flags  -> ()
	 */
	void UAppearanceWeaponStickerRemoveWindow_C::HideWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.HideWindow");
		
		UAppearanceWeaponStickerRemoveWindow_C_HideWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.ShowWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsStickerIndefinite                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InHaveWeaponStickerRemoveItem                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            InWeaponStickerRemoveItemHoldNum                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAppearanceWeaponStickerRemoveWindow_C::ShowWindow(bool InIsStickerIndefinite, bool InHaveWeaponStickerRemoveItem, int32_t InWeaponStickerRemoveItemHoldNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.ShowWindow");
		
		UAppearanceWeaponStickerRemoveWindow_C_ShowWindow_Params params {};
		params.InIsStickerIndefinite = InIsStickerIndefinite;
		params.InHaveWeaponStickerRemoveItem = InHaveWeaponStickerRemoveItem;
		params.InWeaponStickerRemoveItemHoldNum = InWeaponStickerRemoveItemHoldNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.BndEvt__DecideButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UAppearanceWeaponStickerRemoveWindow_C::BndEvt__DecideButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.BndEvt__DecideButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UAppearanceWeaponStickerRemoveWindow_C_BndEvt__DecideButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.BndEvt__BtnScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UAppearanceWeaponStickerRemoveWindow_C::BndEvt__BtnScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.BndEvt__BtnScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UAppearanceWeaponStickerRemoveWindow_C_BndEvt__BtnScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.OnPress_Cancel
	 * 		Flags  -> ()
	 */
	void UAppearanceWeaponStickerRemoveWindow_C::OnPress_Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.OnPress_Cancel");
		
		UAppearanceWeaponStickerRemoveWindow_C_OnPress_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.BndEvt__ItemForStickerDiscard_K2Node_ComponentBoundEvent_3_ItemSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C* InItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAppearanceWeaponStickerRemoveWindow_C::BndEvt__ItemForStickerDiscard_K2Node_ComponentBoundEvent_3_ItemSelected__DelegateSignature(class UAppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C* InItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.BndEvt__ItemForStickerDiscard_K2Node_ComponentBoundEvent_3_ItemSelected__DelegateSignature");
		
		UAppearanceWeaponStickerRemoveWindow_C_BndEvt__ItemForStickerDiscard_K2Node_ComponentBoundEvent_3_ItemSelected__DelegateSignature_Params params {};
		params.InItem = InItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.BndEvt__ItemForStickerRemove_K2Node_ComponentBoundEvent_4_ItemSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAppearanceWeaponStickerRemoveWindowItemForStickerRemove_C* InItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAppearanceWeaponStickerRemoveWindow_C::BndEvt__ItemForStickerRemove_K2Node_ComponentBoundEvent_4_ItemSelected__DelegateSignature(class UAppearanceWeaponStickerRemoveWindowItemForStickerRemove_C* InItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.BndEvt__ItemForStickerRemove_K2Node_ComponentBoundEvent_4_ItemSelected__DelegateSignature");
		
		UAppearanceWeaponStickerRemoveWindow_C_BndEvt__ItemForStickerRemove_K2Node_ComponentBoundEvent_4_ItemSelected__DelegateSignature_Params params {};
		params.InItem = InItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.BndEvt__AppearanceWeaponStickerRemoveWindow_CmnClose02_K2Node_ComponentBoundEvent_5_OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UAppearanceWeaponStickerRemoveWindow_C::BndEvt__AppearanceWeaponStickerRemoveWindow_CmnClose02_K2Node_ComponentBoundEvent_5_OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.BndEvt__AppearanceWeaponStickerRemoveWindow_CmnClose02_K2Node_ComponentBoundEvent_5_OnClosed__DelegateSignature");
		
		UAppearanceWeaponStickerRemoveWindow_C_BndEvt__AppearanceWeaponStickerRemoveWindow_CmnClose02_K2Node_ComponentBoundEvent_5_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.WidgetAnimationEvt_AnmInOut_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UAppearanceWeaponStickerRemoveWindow_C::WidgetAnimationEvt_AnmInOut_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.WidgetAnimationEvt_AnmInOut_K2Node_WidgetAnimationEvent_1");
		
		UAppearanceWeaponStickerRemoveWindow_C_WidgetAnimationEvt_AnmInOut_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.ExecuteUbergraph_AppearanceWeaponStickerRemoveWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAppearanceWeaponStickerRemoveWindow_C::ExecuteUbergraph_AppearanceWeaponStickerRemoveWindow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.ExecuteUbergraph_AppearanceWeaponStickerRemoveWindow");
		
		UAppearanceWeaponStickerRemoveWindow_C_ExecuteUbergraph_AppearanceWeaponStickerRemoveWindow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.OnDecideButtonPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsStickerDiscardSelected                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAppearanceWeaponStickerRemoveWindow_C::OnDecideButtonPressed__DelegateSignature(bool InIsStickerDiscardSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.OnDecideButtonPressed__DelegateSignature");
		
		UAppearanceWeaponStickerRemoveWindow_C_OnDecideButtonPressed__DelegateSignature_Params params {};
		params.InIsStickerDiscardSelected = InIsStickerDiscardSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.OnHideWindowFinished__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UAppearanceWeaponStickerRemoveWindow_C::OnHideWindowFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.OnHideWindowFinished__DelegateSignature");
		
		UAppearanceWeaponStickerRemoveWindow_C_OnHideWindowFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAppearanceWeaponStickerRemoveWindow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAppearanceWeaponStickerRemoveWindow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C");
		return ptr;
	}

}


