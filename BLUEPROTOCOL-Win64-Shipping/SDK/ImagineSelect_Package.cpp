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
	 * 		Name   -> Function ImagineSelect.ImagineSelect_C.ApplyImagineType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UImagineSelect_C::ApplyImagineType(const struct FOwnItemInfo& ItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineSelect.ImagineSelect_C.ApplyImagineType");
		
		UImagineSelect_C_ApplyImagineType_Params params {};
		params.ItemData = ItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineSelect.ImagineSelect_C.Terminate
	 * 		Flags  -> ()
	 */
	void UImagineSelect_C::Terminate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineSelect.ImagineSelect_C.Terminate");
		
		UImagineSelect_C_Terminate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineSelect.ImagineSelect_C.Initialize
	 * 		Flags  -> ()
	 */
	void UImagineSelect_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineSelect.ImagineSelect_C.Initialize");
		
		UImagineSelect_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineSelect.ImagineSelect_C.Destruct
	 * 		Flags  -> ()
	 */
	void UImagineSelect_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineSelect.ImagineSelect_C.Destruct");
		
		UImagineSelect_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineSelect.ImagineSelect_C.RequestClose
	 * 		Flags  -> ()
	 */
	void UImagineSelect_C::RequestClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineSelect.ImagineSelect_C.RequestClose");
		
		UImagineSelect_C_RequestClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineSelect.ImagineSelect_C.WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_2
	 * 		Flags  -> ()
	 */
	void UImagineSelect_C::WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineSelect.ImagineSelect_C.WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_2");
		
		UImagineSelect_C_WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineSelect.ImagineSelect_C.End
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UImagineSelect_C::End(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineSelect.ImagineSelect_C.End");
		
		UImagineSelect_C_End_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineSelect.ImagineSelect_C.BndEvt__WeaponSelect_SelectGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                SelectItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UImagineSelect_C::BndEvt__WeaponSelect_SelectGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature(const struct FOwnItemInfo& SelectItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineSelect.ImagineSelect_C.BndEvt__WeaponSelect_SelectGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature");
		
		UImagineSelect_C_BndEvt__WeaponSelect_SelectGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature_Params params {};
		params.SelectItem = SelectItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineSelect.ImagineSelect_C.Construct
	 * 		Flags  -> ()
	 */
	void UImagineSelect_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineSelect.ImagineSelect_C.Construct");
		
		UImagineSelect_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineSelect.ImagineSelect_C.BndEvt__ImagineSelect_CmnClose03_K2Node_ComponentBoundEvent_5_OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UImagineSelect_C::BndEvt__ImagineSelect_CmnClose03_K2Node_ComponentBoundEvent_5_OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineSelect.ImagineSelect_C.BndEvt__ImagineSelect_CmnClose03_K2Node_ComponentBoundEvent_5_OnClosed__DelegateSignature");
		
		UImagineSelect_C_BndEvt__ImagineSelect_CmnClose03_K2Node_ComponentBoundEvent_5_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineSelect.ImagineSelect_C.BndEvt__ImagineSelect_Btn_Selected_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UImagineSelect_C::BndEvt__ImagineSelect_Btn_Selected_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineSelect.ImagineSelect_C.BndEvt__ImagineSelect_Btn_Selected_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UImagineSelect_C_BndEvt__ImagineSelect_Btn_Selected_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineSelect.ImagineSelect_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UImagineSelect_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineSelect.ImagineSelect_C.PreConstruct");
		
		UImagineSelect_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineSelect.ImagineSelect_C.Event On Begin Selected Imagine
	 * 		Flags  -> ()
	 */
	void UImagineSelect_C::EventOnBeginSelectedImagine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineSelect.ImagineSelect_C.Event On Begin Selected Imagine");
		
		UImagineSelect_C_EventOnBeginSelectedImagine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineSelect.ImagineSelect_C.Event On Abort Selected Imagine
	 * 		Flags  -> ()
	 */
	void UImagineSelect_C::EventOnAbortSelectedImagine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineSelect.ImagineSelect_C.Event On Abort Selected Imagine");
		
		UImagineSelect_C_EventOnAbortSelectedImagine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineSelect.ImagineSelect_C.Event On End Selected Imagine
	 * 		Flags  -> ()
	 */
	void UImagineSelect_C::EventOnEndSelectedImagine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineSelect.ImagineSelect_C.Event On End Selected Imagine");
		
		UImagineSelect_C_EventOnEndSelectedImagine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineSelect.ImagineSelect_C.ExecuteUbergraph_ImagineSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UImagineSelect_C::ExecuteUbergraph_ImagineSelect(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineSelect.ImagineSelect_C.ExecuteUbergraph_ImagineSelect");
		
		UImagineSelect_C_ExecuteUbergraph_ImagineSelect_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineSelect.ImagineSelect_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UImagineSelect_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineSelect.ImagineSelect_C.OnClose__DelegateSignature");
		
		UImagineSelect_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineSelect.ImagineSelect_C.ImagineSelectApply__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                ItemInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UImagineSelect_C::ImagineSelectApply__DelegateSignature(const struct FOwnItemInfo& ItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineSelect.ImagineSelect_C.ImagineSelectApply__DelegateSignature");
		
		UImagineSelect_C_ImagineSelectApply__DelegateSignature_Params params {};
		params.ItemInfo = ItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UImagineSelect_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImagineSelect_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ImagineSelect.ImagineSelect_C");
		return ptr;
	}

}


