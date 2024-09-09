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
	 * 		Name   -> Function DebugInt32.DebugInt32_C.Set Menu Focus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bFocus                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDebugInt32_C::SetMenuFocus(bool bFocus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInt32.DebugInt32_C.Set Menu Focus");
		
		UDebugInt32_C_SetMenuFocus_Params params {};
		params.bFocus = bFocus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInt32.DebugInt32_C.BndEvt__Button_Int32_K2Node_ComponentBoundEvent_169_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDebugInt32_C::BndEvt__Button_Int32_K2Node_ComponentBoundEvent_169_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInt32.DebugInt32_C.BndEvt__Button_Int32_K2Node_ComponentBoundEvent_169_OnButtonClickedEvent__DelegateSignature");
		
		UDebugInt32_C_BndEvt__Button_Int32_K2Node_ComponentBoundEvent_169_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInt32.DebugInt32_C.BndEvt__EditableTextBox_Int32_K2Node_ComponentBoundEvent_395_OnEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugInt32_C::BndEvt__EditableTextBox_Int32_K2Node_ComponentBoundEvent_395_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInt32.DebugInt32_C.BndEvt__EditableTextBox_Int32_K2Node_ComponentBoundEvent_395_OnEditableTextBoxCommittedEvent__DelegateSignature");
		
		UDebugInt32_C_BndEvt__EditableTextBox_Int32_K2Node_ComponentBoundEvent_395_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInt32.DebugInt32_C.OnPressOk
	 * 		Flags  -> ()
	 */
	void UDebugInt32_C::OnPressOk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInt32.DebugInt32_C.OnPressOk");
		
		UDebugInt32_C_OnPressOk_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInt32.DebugInt32_C.OnGetFocus
	 * 		Flags  -> ()
	 */
	void UDebugInt32_C::OnGetFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInt32.DebugInt32_C.OnGetFocus");
		
		UDebugInt32_C_OnGetFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInt32.DebugInt32_C.OnLostFocus
	 * 		Flags  -> ()
	 */
	void UDebugInt32_C::OnLostFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInt32.DebugInt32_C.OnLostFocus");
		
		UDebugInt32_C_OnLostFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DebugInt32.DebugInt32_C.ExecuteUbergraph_DebugInt32
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDebugInt32_C::ExecuteUbergraph_DebugInt32(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DebugInt32.DebugInt32_C.ExecuteUbergraph_DebugInt32");
		
		UDebugInt32_C_ExecuteUbergraph_DebugInt32_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDebugInt32_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDebugInt32_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DebugInt32.DebugInt32_C");
		return ptr;
	}

}


