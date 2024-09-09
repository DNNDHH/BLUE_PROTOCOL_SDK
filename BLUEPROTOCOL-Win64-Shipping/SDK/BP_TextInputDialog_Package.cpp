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
	 * 		Name   -> Function BP_TextInputDialog.BP_TextInputDialog_C.SetHint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_TextInputDialog_C::SetHint(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.SetHint");
		
		UBP_TextInputDialog_C_SetHint_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TextInputDialog.BP_TextInputDialog_C.SetInitializeInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_TextInputDialog_C::SetInitializeInput(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.SetInitializeInput");
		
		UBP_TextInputDialog_C_SetInitializeInput_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TextInputDialog.BP_TextInputDialog_C.SetNgWordCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CheckNgWord                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_TextInputDialog_C::SetNgWordCheck(bool CheckNgWord)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.SetNgWordCheck");
		
		UBP_TextInputDialog_C_SetNgWordCheck_Params params {};
		params.CheckNgWord = CheckNgWord;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TextInputDialog.BP_TextInputDialog_C.SetMaxInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MaxLength                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_TextInputDialog_C::SetMaxInput(int32_t MaxLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.SetMaxInput");
		
		UBP_TextInputDialog_C_SetMaxInput_Params params {};
		params.MaxLength = MaxLength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TextInputDialog.BP_TextInputDialog_C.SetMinInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MinLength                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_TextInputDialog_C::SetMinInput(int32_t MinLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.SetMinInput");
		
		UBP_TextInputDialog_C_SetMinInput_Params params {};
		params.MinLength = MinLength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TextInputDialog.BP_TextInputDialog_C.Construct
	 * 		Flags  -> ()
	 */
	void UBP_TextInputDialog_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.Construct");
		
		UBP_TextInputDialog_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TextInputDialog.BP_TextInputDialog_C.Destruct
	 * 		Flags  -> ()
	 */
	void UBP_TextInputDialog_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.Destruct");
		
		UBP_TextInputDialog_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TextInputDialog.BP_TextInputDialog_C.Hide
	 * 		Flags  -> ()
	 */
	void UBP_TextInputDialog_C::Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.Hide");
		
		UBP_TextInputDialog_C_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TextInputDialog.BP_TextInputDialog_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_TextInputDialog_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.OnAnimationFinished");
		
		UBP_TextInputDialog_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TextInputDialog.BP_TextInputDialog_C.Start InputDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_TextInputDialog_C::StartInputDialog(const class FText& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.Start InputDialog");
		
		UBP_TextInputDialog_C_StartInputDialog_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TextInputDialog.BP_TextInputDialog_C.ChangeText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_TextInputDialog_C::ChangeText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.ChangeText");
		
		UBP_TextInputDialog_C_ChangeText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TextInputDialog.BP_TextInputDialog_C.BndEvt__InputTxt_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_TextInputDialog_C::BndEvt__InputTxt_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.BndEvt__InputTxt_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature");
		
		UBP_TextInputDialog_C_BndEvt__InputTxt_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TextInputDialog.BP_TextInputDialog_C.BndEvt__BtnOk_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_TextInputDialog_C::BndEvt__BtnOk_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.BndEvt__BtnOk_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature");
		
		UBP_TextInputDialog_C_BndEvt__BtnOk_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TextInputDialog.BP_TextInputDialog_C.BndEvt__BP_TextInputDialog_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_TextInputDialog_C::BndEvt__BP_TextInputDialog_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.BndEvt__BP_TextInputDialog_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature");
		
		UBP_TextInputDialog_C_BndEvt__BP_TextInputDialog_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TextInputDialog.BP_TextInputDialog_C.BndEvt__BP_TextInputDialog_ButtonFullScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_TextInputDialog_C::BndEvt__BP_TextInputDialog_ButtonFullScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.BndEvt__BP_TextInputDialog_ButtonFullScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UBP_TextInputDialog_C_BndEvt__BP_TextInputDialog_ButtonFullScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TextInputDialog.BP_TextInputDialog_C.UI_Cancel
	 * 		Flags  -> ()
	 */
	void UBP_TextInputDialog_C::UI_Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.UI_Cancel");
		
		UBP_TextInputDialog_C_UI_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TextInputDialog.BP_TextInputDialog_C.ExecuteUbergraph_BP_TextInputDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_TextInputDialog_C::ExecuteUbergraph_BP_TextInputDialog(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.ExecuteUbergraph_BP_TextInputDialog");
		
		UBP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TextInputDialog.BP_TextInputDialog_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      OnButton                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        InputText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_TextInputDialog_C::OnClose__DelegateSignature(EDialogResult OnButton, const class FText& InputText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.OnClose__DelegateSignature");
		
		UBP_TextInputDialog_C_OnClose__DelegateSignature_Params params {};
		params.OnButton = OnButton;
		params.InputText = InputText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_TextInputDialog_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_TextInputDialog_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_TextInputDialog.BP_TextInputDialog_C");
		return ptr;
	}

}


