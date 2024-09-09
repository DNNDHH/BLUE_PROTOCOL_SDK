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
	 * 		Name   -> Function MountSelect.MountSelect_C.UpdateSelectBtn
	 * 		Flags  -> ()
	 */
	void UMountSelect_C::UpdateSelectBtn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountSelect.MountSelect_C.UpdateSelectBtn");
		
		UMountSelect_C_UpdateSelectBtn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountSelect.MountSelect_C.Terminate
	 * 		Flags  -> ()
	 */
	void UMountSelect_C::Terminate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountSelect.MountSelect_C.Terminate");
		
		UMountSelect_C_Terminate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountSelect.MountSelect_C.Initialize
	 * 		Flags  -> ()
	 */
	void UMountSelect_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountSelect.MountSelect_C.Initialize");
		
		UMountSelect_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountSelect.MountSelect_C.Unbind Close UI_Cancel
	 * 		Flags  -> ()
	 */
	void UMountSelect_C::UnbindCloseUI_Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountSelect.MountSelect_C.Unbind Close UI_Cancel");
		
		UMountSelect_C_UnbindCloseUI_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountSelect.MountSelect_C.Construct
	 * 		Flags  -> ()
	 */
	void UMountSelect_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountSelect.MountSelect_C.Construct");
		
		UMountSelect_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountSelect.MountSelect_C.BndEvt__WeaponSelect_SelectGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                SelectItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMountSelect_C::BndEvt__WeaponSelect_SelectGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature(const struct FOwnItemInfo& SelectItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountSelect.MountSelect_C.BndEvt__WeaponSelect_SelectGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature");
		
		UMountSelect_C_BndEvt__WeaponSelect_SelectGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature_Params params {};
		params.SelectItem = SelectItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountSelect.MountSelect_C.Destruct
	 * 		Flags  -> ()
	 */
	void UMountSelect_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountSelect.MountSelect_C.Destruct");
		
		UMountSelect_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountSelect.MountSelect_C.RequestClose
	 * 		Flags  -> ()
	 */
	void UMountSelect_C::RequestClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountSelect.MountSelect_C.RequestClose");
		
		UMountSelect_C_RequestClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountSelect.MountSelect_C.WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_2
	 * 		Flags  -> ()
	 */
	void UMountSelect_C::WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountSelect.MountSelect_C.WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_2");
		
		UMountSelect_C_WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountSelect.MountSelect_C.End
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMountSelect_C::End(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountSelect.MountSelect_C.End");
		
		UMountSelect_C_End_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountSelect.MountSelect_C.Bind Close UI_Cancel
	 * 		Flags  -> ()
	 */
	void UMountSelect_C::BindCloseUI_Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountSelect.MountSelect_C.Bind Close UI_Cancel");
		
		UMountSelect_C_BindCloseUI_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountSelect.MountSelect_C.BndEvt__MountSelect_CmnClose03_K2Node_ComponentBoundEvent_5_OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMountSelect_C::BndEvt__MountSelect_CmnClose03_K2Node_ComponentBoundEvent_5_OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountSelect.MountSelect_C.BndEvt__MountSelect_CmnClose03_K2Node_ComponentBoundEvent_5_OnClosed__DelegateSignature");
		
		UMountSelect_C_BndEvt__MountSelect_CmnClose03_K2Node_ComponentBoundEvent_5_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountSelect.MountSelect_C.BndEvt__MountSelect_Btn_Selected_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMountSelect_C::BndEvt__MountSelect_Btn_Selected_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountSelect.MountSelect_C.BndEvt__MountSelect_Btn_Selected_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UMountSelect_C_BndEvt__MountSelect_Btn_Selected_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountSelect.MountSelect_C.Event On Begin Selected Mount
	 * 		Flags  -> ()
	 */
	void UMountSelect_C::EventOnBeginSelectedMount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountSelect.MountSelect_C.Event On Begin Selected Mount");
		
		UMountSelect_C_EventOnBeginSelectedMount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountSelect.MountSelect_C.Event On Abort Selected Mount
	 * 		Flags  -> ()
	 */
	void UMountSelect_C::EventOnAbortSelectedMount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountSelect.MountSelect_C.Event On Abort Selected Mount");
		
		UMountSelect_C_EventOnAbortSelectedMount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountSelect.MountSelect_C.Event On End Selected Mount
	 * 		Flags  -> ()
	 */
	void UMountSelect_C::EventOnEndSelectedMount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountSelect.MountSelect_C.Event On End Selected Mount");
		
		UMountSelect_C_EventOnEndSelectedMount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountSelect.MountSelect_C.ExecuteUbergraph_MountSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMountSelect_C::ExecuteUbergraph_MountSelect(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountSelect.MountSelect_C.ExecuteUbergraph_MountSelect");
		
		UMountSelect_C_ExecuteUbergraph_MountSelect_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountSelect.MountSelect_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMountSelect_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountSelect.MountSelect_C.OnClose__DelegateSignature");
		
		UMountSelect_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MountSelect.MountSelect_C.ImagineSelectApply__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                ItemInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMountSelect_C::ImagineSelectApply__DelegateSignature(const struct FOwnItemInfo& ItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MountSelect.MountSelect_C.ImagineSelectApply__DelegateSignature");
		
		UMountSelect_C_ImagineSelectApply__DelegateSignature_Params params {};
		params.ItemInfo = ItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMountSelect_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMountSelect_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MountSelect.MountSelect_C");
		return ptr;
	}

}


