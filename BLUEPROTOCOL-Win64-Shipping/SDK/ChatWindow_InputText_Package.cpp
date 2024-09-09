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
	 * 		Name   -> Function ChatWindow_InputText.ChatWindow_InputText_C.GetPlayerControllerEx
	 * 		Flags  -> ()
	 */
	class APlayerController* UChatWindow_InputText_C::GetPlayerControllerEx()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatWindow_InputText.ChatWindow_InputText_C.GetPlayerControllerEx");
		
		UChatWindow_InputText_C_GetPlayerControllerEx_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatWindow_InputText.ChatWindow_InputText_C.OnPreviewMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UChatWindow_InputText_C::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatWindow_InputText.ChatWindow_InputText_C.OnPreviewMouseButtonDown");
		
		UChatWindow_InputText_C_OnPreviewMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatWindow_InputText.ChatWindow_InputText_C.IsTextInputFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatWindow_InputText_C::IsTextInputFocus(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatWindow_InputText.ChatWindow_InputText_C.IsTextInputFocus");
		
		UChatWindow_InputText_C_IsTextInputFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatWindow_InputText.ChatWindow_InputText_C.UpdateTextCount
	 * 		Flags  -> ()
	 */
	void UChatWindow_InputText_C::UpdateTextCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatWindow_InputText.ChatWindow_InputText_C.UpdateTextCount");
		
		UChatWindow_InputText_C_UpdateTextCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatWindow_InputText.ChatWindow_InputText_C.SetUserFocusAtITextInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               MessageReset                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatWindow_InputText_C::SetUserFocusAtITextInput(bool MessageReset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatWindow_InputText.ChatWindow_InputText_C.SetUserFocusAtITextInput");
		
		UChatWindow_InputText_C_SetUserFocusAtITextInput_Params params {};
		params.MessageReset = MessageReset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatWindow_InputText.ChatWindow_InputText_C.Hide
	 * 		Flags  -> ()
	 */
	void UChatWindow_InputText_C::Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatWindow_InputText.ChatWindow_InputText_C.Hide");
		
		UChatWindow_InputText_C_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatWindow_InputText.ChatWindow_InputText_C.Show
	 * 		Flags  -> ()
	 */
	void UChatWindow_InputText_C::Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatWindow_InputText.ChatWindow_InputText_C.Show");
		
		UChatWindow_InputText_C_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatWindow_InputText.ChatWindow_InputText_C.RoundText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               IsRound                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        OutText                                                    (Parm, OutParm)
	 */
	void UChatWindow_InputText_C::RoundText(const class FText& InText, bool* IsRound, class FText* OutText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatWindow_InputText.ChatWindow_InputText_C.RoundText");
		
		UChatWindow_InputText_C_RoundText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsRound != nullptr)
			*IsRound = params.IsRound;
		if (OutText != nullptr)
			*OutText = params.OutText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatWindow_InputText.ChatWindow_InputText_C.OnKeyUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UChatWindow_InputText_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatWindow_InputText.ChatWindow_InputText_C.OnKeyUp");
		
		UChatWindow_InputText_C_OnKeyUp_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatWindow_InputText.ChatWindow_InputText_C.OnPreviewKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UChatWindow_InputText_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatWindow_InputText.ChatWindow_InputText_C.OnPreviewKeyDown");
		
		UChatWindow_InputText_C_OnPreviewKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatWindow_InputText.ChatWindow_InputText_C.BndEvt__InputMessage_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatWindow_InputText_C::BndEvt__InputMessage_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatWindow_InputText.ChatWindow_InputText_C.BndEvt__InputMessage_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextCommittedEvent__DelegateSignature");
		
		UChatWindow_InputText_C_BndEvt__InputMessage_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatWindow_InputText.ChatWindow_InputText_C.BndEvt__CmnBtn15_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChatWindow_InputText_C::BndEvt__CmnBtn15_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatWindow_InputText.ChatWindow_InputText_C.BndEvt__CmnBtn15_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");
		
		UChatWindow_InputText_C_BndEvt__CmnBtn15_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatWindow_InputText.ChatWindow_InputText_C.BndEvt__InputMessage_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UChatWindow_InputText_C::BndEvt__InputMessage_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatWindow_InputText.ChatWindow_InputText_C.BndEvt__InputMessage_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextChangedEvent__DelegateSignature");
		
		UChatWindow_InputText_C_BndEvt__InputMessage_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatWindow_InputText.ChatWindow_InputText_C.UpdateMouseCursorIcon
	 * 		Flags  -> ()
	 */
	void UChatWindow_InputText_C::UpdateMouseCursorIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatWindow_InputText.ChatWindow_InputText_C.UpdateMouseCursorIcon");
		
		UChatWindow_InputText_C_UpdateMouseCursorIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatWindow_InputText.ChatWindow_InputText_C.SendMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UChatWindow_InputText_C::SendMessage(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatWindow_InputText.ChatWindow_InputText_C.SendMessage");
		
		UChatWindow_InputText_C_SendMessage_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatWindow_InputText.ChatWindow_InputText_C.ExecuteUbergraph_ChatWindow_InputText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatWindow_InputText_C::ExecuteUbergraph_ChatWindow_InputText(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatWindow_InputText.ChatWindow_InputText_C.ExecuteUbergraph_ChatWindow_InputText");
		
		UChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatWindow_InputText.ChatWindow_InputText_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChatWindow_InputText_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatWindow_InputText.ChatWindow_InputText_C.OnClose__DelegateSignature");
		
		UChatWindow_InputText_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChatWindow_InputText_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChatWindow_InputText_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ChatWindow_InputText.ChatWindow_InputText_C");
		return ptr;
	}

}


