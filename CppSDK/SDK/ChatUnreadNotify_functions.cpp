#pragma once

 

// Package: ChatUnreadNotify

#include "Basic.hpp"

#include "ChatUnreadNotify_classes.hpp"
#include "ChatUnreadNotify_parameters.hpp"


namespace SDK
{

// Function ChatUnreadNotify.ChatUnreadNotify_C.ExecuteUbergraph_ChatUnreadNotify
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatUnreadNotify_C::ExecuteUbergraph_ChatUnreadNotify(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatUnreadNotify_C", "ExecuteUbergraph_ChatUnreadNotify");

	Params::ChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatUnreadNotify.ChatUnreadNotify_C.OnReceiveMessageDelegate_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBChatMessage*                   Message                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBChatUIMessage                 Mess                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UChatUnreadNotify_C::OnReceiveMessageDelegate_Event(const class USBChatMessage* Message, const struct FSBChatUIMessage& Mess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatUnreadNotify_C", "OnReceiveMessageDelegate_Event");

	Params::ChatUnreadNotify_C_OnReceiveMessageDelegate_Event Parms{};

	Parms.Message = Message;
	Parms.Mess = std::move(Mess);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatUnreadNotify.ChatUnreadNotify_C.OnReciveMessageToUnreadNotify_Event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBChatLogWindowSlot                    Param_Slot                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBChatUIMessage                 UIMessage                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UChatUnreadNotify_C::OnReciveMessageToUnreadNotify_Event(const ESBChatLogWindowSlot Param_Slot, const struct FSBChatUIMessage& UIMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatUnreadNotify_C", "OnReciveMessageToUnreadNotify_Event");

	Params::ChatUnreadNotify_C_OnReciveMessageToUnreadNotify_Event Parms{};

	Parms.Param_Slot = Param_Slot;
	Parms.UIMessage = std::move(UIMessage);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatUnreadNotify.ChatUnreadNotify_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UChatUnreadNotify_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatUnreadNotify_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatUnreadNotify.ChatUnreadNotify_C.PlayAnim
// (BlueprintCallable, BlueprintEvent)

void UChatUnreadNotify_C::PlayAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatUnreadNotify_C", "PlayAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatUnreadNotify.ChatUnreadNotify_C.WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UChatUnreadNotify_C::WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatUnreadNotify_C", "WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatUnreadNotify.ChatUnreadNotify_C.DownLoadFaceImage_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           URL                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UChatUnreadNotify_C::DownLoadFaceImage_Event(const class FString& URL)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatUnreadNotify_C", "DownLoadFaceImage_Event");

	Params::ChatUnreadNotify_C_DownLoadFaceImage_Event Parms{};

	Parms.URL = std::move(URL);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatUnreadNotify.ChatUnreadNotify_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UChatUnreadNotify_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatUnreadNotify_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatUnreadNotify.ChatUnreadNotify_C.SetMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBChatUIMessage                 InChatUIMessage                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UChatUnreadNotify_C::SetMessage(const struct FSBChatUIMessage& InChatUIMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatUnreadNotify_C", "SetMessage");

	Params::ChatUnreadNotify_C_SetMessage Parms{};

	Parms.InChatUIMessage = std::move(InChatUIMessage);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatUnreadNotify.ChatUnreadNotify_C.UpdateFilter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBChatLogWindowSlot                    Param_Slot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatUnreadNotify_C::UpdateFilter(ESBChatLogWindowSlot Param_Slot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatUnreadNotify_C", "UpdateFilter");

	Params::ChatUnreadNotify_C_UpdateFilter Parms{};

	Parms.Param_Slot = Param_Slot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatUnreadNotify.ChatUnreadNotify_C.VisibleCheck
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSBChatUIMessage                 ChatUIMessage                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    bResult                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatUnreadNotify_C::VisibleCheck(const struct FSBChatUIMessage& ChatUIMessage, bool* bResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatUnreadNotify_C", "VisibleCheck");

	Params::ChatUnreadNotify_C_VisibleCheck Parms{};

	Parms.ChatUIMessage = std::move(ChatUIMessage);

	UObject::ProcessEvent(Func, &Parms);

	if (bResult != nullptr)
		*bResult = Parms.bResult;
}


// Function ChatUnreadNotify.ChatUnreadNotify_C.SetTextOverflowEllipsis
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InStr                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UChatUnreadNotify_C::SetTextOverflowEllipsis(const class FString& InStr)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatUnreadNotify_C", "SetTextOverflowEllipsis");

	Params::ChatUnreadNotify_C_SetTextOverflowEllipsis Parms{};

	Parms.InStr = std::move(InStr);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatUnreadNotify.ChatUnreadNotify_C.CheckMessageWidth
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           InString                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    IsEllipsisWidthSize                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Exceeded                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatUnreadNotify_C::CheckMessageWidth(const class FString& InString, bool IsEllipsisWidthSize, bool* Exceeded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatUnreadNotify_C", "CheckMessageWidth");

	Params::ChatUnreadNotify_C_CheckMessageWidth Parms{};

	Parms.InString = std::move(InString);
	Parms.IsEllipsisWidthSize = IsEllipsisWidthSize;

	UObject::ProcessEvent(Func, &Parms);

	if (Exceeded != nullptr)
		*Exceeded = Parms.Exceeded;
}


// Function ChatUnreadNotify.ChatUnreadNotify_C.InitChatLogData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UChatUnreadNotify_C::InitChatLogData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatUnreadNotify_C", "InitChatLogData");

	UObject::ProcessEvent(Func, nullptr);
}

}

