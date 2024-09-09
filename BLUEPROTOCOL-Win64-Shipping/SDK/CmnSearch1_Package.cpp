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
	 * 		Name   -> Function CmnSearch1.CmnSearch1_C.GetSearchText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SearchText                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCmnSearch1_C::GetSearchText(class FString* SearchText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnSearch1.CmnSearch1_C.GetSearchText");
		
		UCmnSearch1_C_GetSearchText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SearchText != nullptr)
			*SearchText = params.SearchText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnSearch1.CmnSearch1_C.ClearText
	 * 		Flags  -> ()
	 */
	void UCmnSearch1_C::ClearText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnSearch1.CmnSearch1_C.ClearText");
		
		UCmnSearch1_C_ClearText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnSearch1.CmnSearch1_C.BndEvt__TextBoxPlayerName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UCmnSearch1_C::BndEvt__TextBoxPlayerName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnSearch1.CmnSearch1_C.BndEvt__TextBoxPlayerName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");
		
		UCmnSearch1_C_BndEvt__TextBoxPlayerName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnSearch1.CmnSearch1_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_223_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCmnSearch1_C::BndEvt__ResetButton_K2Node_ComponentBoundEvent_223_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnSearch1.CmnSearch1_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_223_OnButtonHoverEvent__DelegateSignature");
		
		UCmnSearch1_C_BndEvt__ResetButton_K2Node_ComponentBoundEvent_223_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnSearch1.CmnSearch1_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_246_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCmnSearch1_C::BndEvt__ResetButton_K2Node_ComponentBoundEvent_246_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnSearch1.CmnSearch1_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_246_OnButtonHoverEvent__DelegateSignature");
		
		UCmnSearch1_C_BndEvt__ResetButton_K2Node_ComponentBoundEvent_246_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnSearch1.CmnSearch1_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_267_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCmnSearch1_C::BndEvt__ResetButton_K2Node_ComponentBoundEvent_267_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnSearch1.CmnSearch1_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_267_OnButtonClickedEvent__DelegateSignature");
		
		UCmnSearch1_C_BndEvt__ResetButton_K2Node_ComponentBoundEvent_267_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnSearch1.CmnSearch1_C.SetHintWithText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCmnSearch1_C::SetHintWithText(const class FText& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnSearch1.CmnSearch1_C.SetHintWithText");
		
		UCmnSearch1_C_SetHintWithText_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnSearch1.CmnSearch1_C.ExecuteUbergraph_CmnSearch1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCmnSearch1_C::ExecuteUbergraph_CmnSearch1(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnSearch1.CmnSearch1_C.ExecuteUbergraph_CmnSearch1");
		
		UCmnSearch1_C_ExecuteUbergraph_CmnSearch1_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnSearch1.CmnSearch1_C.OnTextChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        newText                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCmnSearch1_C::OnTextChange__DelegateSignature(const class FText& newText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnSearch1.CmnSearch1_C.OnTextChange__DelegateSignature");
		
		UCmnSearch1_C_OnTextChange__DelegateSignature_Params params {};
		params.newText = newText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCmnSearch1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCmnSearch1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CmnSearch1.CmnSearch1_C");
		return ptr;
	}

}


