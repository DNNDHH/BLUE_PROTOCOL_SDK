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
	 * 		Name   -> Function MyCharaMenu_EffectDetailsList.MyCharaMenu_EffectDetailsList_C.AddEffectDetailItemToList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InEffectNameText                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        InEffectDescText                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMyCharaMenu_EffectDetailsList_C::AddEffectDetailItemToList(const class FText& InEffectNameText, const class FText& InEffectDescText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EffectDetailsList.MyCharaMenu_EffectDetailsList_C.AddEffectDetailItemToList");
		
		UMyCharaMenu_EffectDetailsList_C_AddEffectDetailItemToList_Params params {};
		params.InEffectNameText = InEffectNameText;
		params.InEffectDescText = InEffectDescText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_EffectDetailsList.MyCharaMenu_EffectDetailsList_C.Setup
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_EffectDetailsList_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EffectDetailsList.MyCharaMenu_EffectDetailsList_C.Setup");
		
		UMyCharaMenu_EffectDetailsList_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_EffectDetailsList.MyCharaMenu_EffectDetailsList_C.HideWindow
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_EffectDetailsList_C::HideWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EffectDetailsList.MyCharaMenu_EffectDetailsList_C.HideWindow");
		
		UMyCharaMenu_EffectDetailsList_C_HideWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_EffectDetailsList.MyCharaMenu_EffectDetailsList_C.ShowWindow
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_EffectDetailsList_C::ShowWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EffectDetailsList.MyCharaMenu_EffectDetailsList_C.ShowWindow");
		
		UMyCharaMenu_EffectDetailsList_C_ShowWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_EffectDetailsList.MyCharaMenu_EffectDetailsList_C.Construct
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_EffectDetailsList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EffectDetailsList.MyCharaMenu_EffectDetailsList_C.Construct");
		
		UMyCharaMenu_EffectDetailsList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_EffectDetailsList.MyCharaMenu_EffectDetailsList_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_EffectDetailsList_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EffectDetailsList.MyCharaMenu_EffectDetailsList_C.OnAnimationFinished");
		
		UMyCharaMenu_EffectDetailsList_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_EffectDetailsList.MyCharaMenu_EffectDetailsList_C.BndEvt__BtnFullScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_EffectDetailsList_C::BndEvt__BtnFullScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EffectDetailsList.MyCharaMenu_EffectDetailsList_C.BndEvt__BtnFullScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UMyCharaMenu_EffectDetailsList_C_BndEvt__BtnFullScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_EffectDetailsList.MyCharaMenu_EffectDetailsList_C.OnPress_Cancel
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_EffectDetailsList_C::OnPress_Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EffectDetailsList.MyCharaMenu_EffectDetailsList_C.OnPress_Cancel");
		
		UMyCharaMenu_EffectDetailsList_C_OnPress_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_EffectDetailsList.MyCharaMenu_EffectDetailsList_C.BndEvt__MyCharaMenu_EffectDetailsList_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_EffectDetailsList_C::BndEvt__MyCharaMenu_EffectDetailsList_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EffectDetailsList.MyCharaMenu_EffectDetailsList_C.BndEvt__MyCharaMenu_EffectDetailsList_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature");
		
		UMyCharaMenu_EffectDetailsList_C_BndEvt__MyCharaMenu_EffectDetailsList_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_EffectDetailsList.MyCharaMenu_EffectDetailsList_C.ExecuteUbergraph_MyCharaMenu_EffectDetailsList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_EffectDetailsList_C::ExecuteUbergraph_MyCharaMenu_EffectDetailsList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EffectDetailsList.MyCharaMenu_EffectDetailsList_C.ExecuteUbergraph_MyCharaMenu_EffectDetailsList");
		
		UMyCharaMenu_EffectDetailsList_C_ExecuteUbergraph_MyCharaMenu_EffectDetailsList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMyCharaMenu_EffectDetailsList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMyCharaMenu_EffectDetailsList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MyCharaMenu_EffectDetailsList.MyCharaMenu_EffectDetailsList_C");
		return ptr;
	}

}


