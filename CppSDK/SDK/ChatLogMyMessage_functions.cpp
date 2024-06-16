#pragma once

 

// Package: ChatLogMyMessage

#include "Basic.hpp"

#include "ChatLogMyMessage_classes.hpp"
#include "ChatLogMyMessage_parameters.hpp"


namespace SDK
{

// Function ChatLogMyMessage.ChatLogMyMessage_C.ExecuteUbergraph_ChatLogMyMessage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatLogMyMessage_C::ExecuteUbergraph_ChatLogMyMessage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogMyMessage_C", "ExecuteUbergraph_ChatLogMyMessage");

	Params::ChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogMyMessage.ChatLogMyMessage_C.SetWidthOverride
// (BlueprintCallable, BlueprintEvent)

void UChatLogMyMessage_C::SetWidthOverride()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogMyMessage_C", "SetWidthOverride");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatLogMyMessage.ChatLogMyMessage_C.BndEvt__SBButtonMessageBG_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UChatLogMyMessage_C::BndEvt__SBButtonMessageBG_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogMyMessage_C", "BndEvt__SBButtonMessageBG_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatLogMyMessage.ChatLogMyMessage_C.BndEvt__SBButtonMessageBG_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UChatLogMyMessage_C::BndEvt__SBButtonMessageBG_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogMyMessage_C", "BndEvt__SBButtonMessageBG_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatLogMyMessage.ChatLogMyMessage_C.ClipboardCopy
// (BlueprintCallable, BlueprintEvent)

void UChatLogMyMessage_C::ClipboardCopy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogMyMessage_C", "ClipboardCopy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatLogMyMessage.ChatLogMyMessage_C.BndEvt__Button_StampLog_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UChatLogMyMessage_C::BndEvt__Button_StampLog_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogMyMessage_C", "BndEvt__Button_StampLog_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatLogMyMessage.ChatLogMyMessage_C.BndEvt__Button_82_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UChatLogMyMessage_C::BndEvt__Button_82_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogMyMessage_C", "BndEvt__Button_82_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatLogMyMessage.ChatLogMyMessage_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UChatLogMyMessage_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogMyMessage_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatLogMyMessage.ChatLogMyMessage_C.OnTimeEvent
// (BlueprintCallable, BlueprintEvent)

void UChatLogMyMessage_C::OnTimeEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogMyMessage_C", "OnTimeEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatLogMyMessage.ChatLogMyMessage_C.DonwloadFaceImage_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           URL                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UChatLogMyMessage_C::DonwloadFaceImage_Event(const class FString& URL)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogMyMessage_C", "DonwloadFaceImage_Event");

	Params::ChatLogMyMessage_C_DonwloadFaceImage_Event Parms{};

	Parms.URL = std::move(URL);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogMyMessage.ChatLogMyMessage_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBChatUIMessage                 InMessLog                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    IsEndInit                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsCursorStampHit                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatLogMyMessage_C::Init(const struct FSBChatUIMessage& InMessLog, bool IsEndInit, bool IsCursorStampHit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogMyMessage_C", "Init");

	Params::ChatLogMyMessage_C_Init Parms{};

	Parms.InMessLog = std::move(InMessLog);
	Parms.IsEndInit = IsEndInit;
	Parms.IsCursorStampHit = IsCursorStampHit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogMyMessage.ChatLogMyMessage_C.ZeroPadding
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             RetValue                                               (Parm, OutParm)

void UChatLogMyMessage_C::ZeroPadding(int32 InValue, class FText* RetValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogMyMessage_C", "ZeroPadding");

	Params::ChatLogMyMessage_C_ZeroPadding Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

	if (RetValue != nullptr)
		*RetValue = std::move(Parms.RetValue);
}


// Function ChatLogMyMessage.ChatLogMyMessage_C.SetStamp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InStampId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEndInit                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UChatLogMyMessage_C::SetStamp(int32 InStampId, bool IsEndInit, const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogMyMessage_C", "SetStamp");

	Params::ChatLogMyMessage_C_SetStamp Parms{};

	Parms.InStampId = InStampId;
	Parms.IsEndInit = IsEndInit;
	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogMyMessage.ChatLogMyMessage_C.GetFloatStampPoint
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D                        NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatLogMyMessage_C::GetFloatStampPoint(struct FVector2D* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogMyMessage_C", "GetFloatStampPoint");

	Params::ChatLogMyMessage_C_GetFloatStampPoint Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = std::move(Parms.NewParam);
}


// Function ChatLogMyMessage.ChatLogMyMessage_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UChatLogMyMessage_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogMyMessage_C", "OnMouseButtonDown");

	Params::ChatLogMyMessage_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ChatLogMyMessage.ChatLogMyMessage_C.SetClipboardCopy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsCopy                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatLogMyMessage_C::SetClipboardCopy(bool IsCopy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogMyMessage_C", "SetClipboardCopy");

	Params::ChatLogMyMessage_C_SetClipboardCopy Parms{};

	Parms.IsCopy = IsCopy;

	UObject::ProcessEvent(Func, &Parms);
}

}

