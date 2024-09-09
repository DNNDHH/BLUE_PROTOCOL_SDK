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
	 * 		Name   -> Function DebugComboBox.DebugComboBox_C.SetComboBoxStringFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bFocus                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDebugComboBox_C::SetComboBoxStringFocus(bool bFocus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugComboBox.DebugComboBox_C.SetComboBoxStringFocus");
		
		UDebugComboBox_C_SetComboBoxStringFocus_Params params {};
		params.bFocus = bFocus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugComboBox.DebugComboBox_C.SetSpacerWidthFromStringLength
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Length                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugComboBox_C::SetSpacerWidthFromStringLength(int32_t Length)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugComboBox.DebugComboBox_C.SetSpacerWidthFromStringLength");
		
		UDebugComboBox_C_SetSpacerWidthFromStringLength_Params params {};
		params.Length = Length;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugComboBox.DebugComboBox_C.Set Menu Focus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bFocus                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDebugComboBox_C::SetMenuFocus(bool bFocus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugComboBox.DebugComboBox_C.Set Menu Focus");
		
		UDebugComboBox_C_SetMenuFocus_Params params {};
		params.bFocus = bFocus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugComboBox.DebugComboBox_C.BndEvt__Button_ComboBox_K2Node_ComponentBoundEvent_433_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugComboBox_C::BndEvt__Button_ComboBox_K2Node_ComponentBoundEvent_433_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugComboBox.DebugComboBox_C.BndEvt__Button_ComboBox_K2Node_ComponentBoundEvent_433_OnButtonClickedEvent__DelegateSignature");
		
		UDebugComboBox_C_BndEvt__Button_ComboBox_K2Node_ComponentBoundEvent_433_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugComboBox.DebugComboBox_C.BndEvt__ComboBoxString_K2Node_ComponentBoundEvent_443_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugComboBox_C::BndEvt__ComboBoxString_K2Node_ComponentBoundEvent_443_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugComboBox.DebugComboBox_C.BndEvt__ComboBoxString_K2Node_ComponentBoundEvent_443_OnSelectionChangedEvent__DelegateSignature");
		
		UDebugComboBox_C_BndEvt__ComboBoxString_K2Node_ComponentBoundEvent_443_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugComboBox.DebugComboBox_C.OnPressOk
	 * 		Flags  -> ()
	 */
	void UDebugComboBox_C::OnPressOk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugComboBox.DebugComboBox_C.OnPressOk");
		
		UDebugComboBox_C_OnPressOk_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugComboBox.DebugComboBox_C.OnGetFocus
	 * 		Flags  -> ()
	 */
	void UDebugComboBox_C::OnGetFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugComboBox.DebugComboBox_C.OnGetFocus");
		
		UDebugComboBox_C_OnGetFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugComboBox.DebugComboBox_C.OnLostFocus
	 * 		Flags  -> ()
	 */
	void UDebugComboBox_C::OnLostFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugComboBox.DebugComboBox_C.OnLostFocus");
		
		UDebugComboBox_C_OnLostFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugComboBox.DebugComboBox_C.Construct
	 * 		Flags  -> ()
	 */
	void UDebugComboBox_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugComboBox.DebugComboBox_C.Construct");
		
		UDebugComboBox_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugComboBox.DebugComboBox_C.BndEvt__ComboBoxString_K2Node_ComponentBoundEvent_403_OnOpeningEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugComboBox_C::BndEvt__ComboBoxString_K2Node_ComponentBoundEvent_403_OnOpeningEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugComboBox.DebugComboBox_C.BndEvt__ComboBoxString_K2Node_ComponentBoundEvent_403_OnOpeningEvent__DelegateSignature");
		
		UDebugComboBox_C_BndEvt__ComboBoxString_K2Node_ComponentBoundEvent_403_OnOpeningEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugComboBox.DebugComboBox_C.ExecuteUbergraph_DebugComboBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugComboBox_C::ExecuteUbergraph_DebugComboBox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugComboBox.DebugComboBox_C.ExecuteUbergraph_DebugComboBox");
		
		UDebugComboBox_C_ExecuteUbergraph_DebugComboBox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDebugComboBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDebugComboBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DebugComboBox.DebugComboBox_C");
		return ptr;
	}

}


