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
	 * 		Name   -> Function EquipmentDiffDialog.EquipmentDiffDialog_C.Set Own Item
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Left                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FOwnItemInfo                                OwnItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UEquipmentDiffDialog_C::SetOwnItem(bool Left, const struct FOwnItemInfo& OwnItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentDiffDialog.EquipmentDiffDialog_C.Set Own Item");
		
		UEquipmentDiffDialog_C_SetOwnItem_Params params {};
		params.Left = Left;
		params.OwnItem = OwnItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentDiffDialog.EquipmentDiffDialog_C.SetRecepi
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsImagine                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Left                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            RecepiId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEquipmentDiffDialog_C::SetRecepi(bool IsImagine, bool Left, int32_t RecepiId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentDiffDialog.EquipmentDiffDialog_C.SetRecepi");
		
		UEquipmentDiffDialog_C_SetRecepi_Params params {};
		params.IsImagine = IsImagine;
		params.Left = Left;
		params.RecepiId = RecepiId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentDiffDialog.EquipmentDiffDialog_C.Construct
	 * 		Flags  -> ()
	 */
	void UEquipmentDiffDialog_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentDiffDialog.EquipmentDiffDialog_C.Construct");
		
		UEquipmentDiffDialog_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentDiffDialog.EquipmentDiffDialog_C.BndEvt__EquipmentDiffDialog_Btn_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEquipmentDiffDialog_C::BndEvt__EquipmentDiffDialog_Btn_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentDiffDialog.EquipmentDiffDialog_C.BndEvt__EquipmentDiffDialog_Btn_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UEquipmentDiffDialog_C_BndEvt__EquipmentDiffDialog_Btn_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentDiffDialog.EquipmentDiffDialog_C.Close
	 * 		Flags  -> ()
	 */
	void UEquipmentDiffDialog_C::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentDiffDialog.EquipmentDiffDialog_C.Close");
		
		UEquipmentDiffDialog_C_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentDiffDialog.EquipmentDiffDialog_C.BndEvt__EquipmentDiffDialog_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEquipmentDiffDialog_C::BndEvt__EquipmentDiffDialog_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentDiffDialog.EquipmentDiffDialog_C.BndEvt__EquipmentDiffDialog_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature");
		
		UEquipmentDiffDialog_C_BndEvt__EquipmentDiffDialog_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentDiffDialog.EquipmentDiffDialog_C.OnPressCancel
	 * 		Flags  -> ()
	 */
	void UEquipmentDiffDialog_C::OnPressCancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentDiffDialog.EquipmentDiffDialog_C.OnPressCancel");
		
		UEquipmentDiffDialog_C_OnPressCancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentDiffDialog.EquipmentDiffDialog_C.Destruct
	 * 		Flags  -> ()
	 */
	void UEquipmentDiffDialog_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentDiffDialog.EquipmentDiffDialog_C.Destruct");
		
		UEquipmentDiffDialog_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentDiffDialog.EquipmentDiffDialog_C.WidgetAnimationEvt_InAnim_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UEquipmentDiffDialog_C::WidgetAnimationEvt_InAnim_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentDiffDialog.EquipmentDiffDialog_C.WidgetAnimationEvt_InAnim_K2Node_WidgetAnimationEvent_1");
		
		UEquipmentDiffDialog_C_WidgetAnimationEvt_InAnim_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentDiffDialog.EquipmentDiffDialog_C.ExecuteUbergraph_EquipmentDiffDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEquipmentDiffDialog_C::ExecuteUbergraph_EquipmentDiffDialog(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentDiffDialog.EquipmentDiffDialog_C.ExecuteUbergraph_EquipmentDiffDialog");
		
		UEquipmentDiffDialog_C_ExecuteUbergraph_EquipmentDiffDialog_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentDiffDialog.EquipmentDiffDialog_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEquipmentDiffDialog_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentDiffDialog.EquipmentDiffDialog_C.OnClose__DelegateSignature");
		
		UEquipmentDiffDialog_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEquipmentDiffDialog_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEquipmentDiffDialog_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EquipmentDiffDialog.EquipmentDiffDialog_C");
		return ptr;
	}

}


