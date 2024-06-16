#pragma once

 

// Package: ChatWindow_InputText

#include "Basic.hpp"

#include "ChatWindow_InputText_classes.hpp"
#include "ChatWindow_InputText_parameters.hpp"


namespace SDK
{

// Function ChatWindow_InputText.ChatWindow_InputText_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UChatWindow_InputText_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatWindow_InputText_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatWindow_InputText.ChatWindow_InputText_C.ExecuteUbergraph_ChatWindow_InputText
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatWindow_InputText_C::ExecuteUbergraph_ChatWindow_InputText(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatWindow_InputText_C", "ExecuteUbergraph_ChatWindow_InputText");

	Params::ChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatWindow_InputText.ChatWindow_InputText_C.SendMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UChatWindow_InputText_C::SendMessage(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatWindow_InputText_C", "SendMessage");

	Params::ChatWindow_InputText_C_SendMessage Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatWindow_InputText.ChatWindow_InputText_C.UpdateMouseCursorIcon
// (BlueprintCallable, BlueprintEvent)

void UChatWindow_InputText_C::UpdateMouseCursorIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatWindow_InputText_C", "UpdateMouseCursorIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatWindow_InputText.ChatWindow_InputText_C.BndEvt__InputMessage_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UChatWindow_InputText_C::BndEvt__InputMessage_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextChangedEvent__DelegateSignature(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatWindow_InputText_C", "BndEvt__InputMessage_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextChangedEvent__DelegateSignature");

	Params::ChatWindow_InputText_C_BndEvt__InputMessage_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextChangedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatWindow_InputText.ChatWindow_InputText_C.BndEvt__CmnBtn15_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UChatWindow_InputText_C::BndEvt__CmnBtn15_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatWindow_InputText_C", "BndEvt__CmnBtn15_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatWindow_InputText.ChatWindow_InputText_C.BndEvt__InputMessage_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ETextCommit                             CommitMethod                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatWindow_InputText_C::BndEvt__InputMessage_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatWindow_InputText_C", "BndEvt__InputMessage_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextCommittedEvent__DelegateSignature");

	Params::ChatWindow_InputText_C_BndEvt__InputMessage_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextCommittedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatWindow_InputText.ChatWindow_InputText_C.OnPreviewKeyDown
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UChatWindow_InputText_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatWindow_InputText_C", "OnPreviewKeyDown");

	Params::ChatWindow_InputText_C_OnPreviewKeyDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ChatWindow_InputText.ChatWindow_InputText_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UChatWindow_InputText_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatWindow_InputText_C", "OnKeyUp");

	Params::ChatWindow_InputText_C_OnKeyUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ChatWindow_InputText.ChatWindow_InputText_C.RoundText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    IsRound                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             OutText                                                (Parm, OutParm)

void UChatWindow_InputText_C::RoundText(const class FText& InText, bool* IsRound, class FText* OutText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatWindow_InputText_C", "RoundText");

	Params::ChatWindow_InputText_C_RoundText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);

	if (IsRound != nullptr)
		*IsRound = Parms.IsRound;

	if (OutText != nullptr)
		*OutText = std::move(Parms.OutText);
}


// Function ChatWindow_InputText.ChatWindow_InputText_C.Show
// (Public, BlueprintCallable, BlueprintEvent)

void UChatWindow_InputText_C::Show()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatWindow_InputText_C", "Show");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatWindow_InputText.ChatWindow_InputText_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)

void UChatWindow_InputText_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatWindow_InputText_C", "Hide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatWindow_InputText.ChatWindow_InputText_C.SetUserFocusAtITextInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    MessageReset                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatWindow_InputText_C::SetUserFocusAtITextInput(bool MessageReset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatWindow_InputText_C", "SetUserFocusAtITextInput");

	Params::ChatWindow_InputText_C_SetUserFocusAtITextInput Parms{};

	Parms.MessageReset = MessageReset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatWindow_InputText.ChatWindow_InputText_C.UpdateTextCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UChatWindow_InputText_C::UpdateTextCount()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatWindow_InputText_C", "UpdateTextCount");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatWindow_InputText.ChatWindow_InputText_C.IsTextInputFocus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatWindow_InputText_C::IsTextInputFocus(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatWindow_InputText_C", "IsTextInputFocus");

	Params::ChatWindow_InputText_C_IsTextInputFocus Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function ChatWindow_InputText.ChatWindow_InputText_C.OnPreviewMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UChatWindow_InputText_C::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatWindow_InputText_C", "OnPreviewMouseButtonDown");

	Params::ChatWindow_InputText_C_OnPreviewMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ChatWindow_InputText.ChatWindow_InputText_C.GetPlayerControllerEx
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController*                ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class APlayerController* UChatWindow_InputText_C::GetPlayerControllerEx()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatWindow_InputText_C", "GetPlayerControllerEx");

	Params::ChatWindow_InputText_C_GetPlayerControllerEx Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

