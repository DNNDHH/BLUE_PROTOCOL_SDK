#pragma once

 

// Package: UMG_ChatWindow

#include "Basic.hpp"

#include "UMG_ChatWindow_classes.hpp"
#include "UMG_ChatWindow_parameters.hpp"


namespace SDK
{

// Function UMG_ChatWindow.UMG_ChatWindow_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUMG_ChatWindow_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ChatWindow.UMG_ChatWindow_C.OnAddDirectChatWindow__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           PlayerId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                             Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                           Param_CharacterId                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUMG_ChatWindow_C::OnAddDirectChatWindow__DelegateSignature(const class FString& PlayerId, const class FText& Param_Name, const class FString& Param_CharacterId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "OnAddDirectChatWindow__DelegateSignature");

	Params::UMG_ChatWindow_C_OnAddDirectChatWindow__DelegateSignature Parms{};

	Parms.PlayerId = std::move(PlayerId);
	Parms.Param_Name = std::move(Param_Name);
	Parms.Param_CharacterId = std::move(Param_CharacterId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ChatWindow.UMG_ChatWindow_C.OnRemoveDirectChatWindow__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           PlayerId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUMG_ChatWindow_C::OnRemoveDirectChatWindow__DelegateSignature(const class FString& PlayerId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "OnRemoveDirectChatWindow__DelegateSignature");

	Params::UMG_ChatWindow_C_OnRemoveDirectChatWindow__DelegateSignature Parms{};

	Parms.PlayerId = std::move(PlayerId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ChatWindow.UMG_ChatWindow_C.OnChangeChatMode__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUMG_ChatWindow_C::OnChangeChatMode__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "OnChangeChatMode__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ChatWindow.UMG_ChatWindow_C.ExecuteUbergraph_UMG_ChatWindow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ChatWindow_C::ExecuteUbergraph_UMG_ChatWindow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "ExecuteUbergraph_UMG_ChatWindow");

	Params::UMG_ChatWindow_C_ExecuteUbergraph_UMG_ChatWindow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ChatWindow.UMG_ChatWindow_C.OnIsGetPlayerSearchListDelegate_Event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasSuccessful                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FPlayerProfileSummaryData>PlayerSearchListData                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    bIsOver                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ChatWindow_C::OnIsGetPlayerSearchListDelegate_Event(const bool bWasSuccessful, const TArray<struct FPlayerProfileSummaryData>& PlayerSearchListData, bool bIsOver, const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "OnIsGetPlayerSearchListDelegate_Event");

	Params::UMG_ChatWindow_C_OnIsGetPlayerSearchListDelegate_Event Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.PlayerSearchListData = std::move(PlayerSearchListData);
	Parms.bIsOver = bIsOver;
	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ChatWindow.UMG_ChatWindow_C.OnDirectChatSenderRemoveDelegate_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_CharacterId                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUMG_ChatWindow_C::OnDirectChatSenderRemoveDelegate_Event(const class FString& Param_CharacterId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "OnDirectChatSenderRemoveDelegate_Event");

	Params::UMG_ChatWindow_C_OnDirectChatSenderRemoveDelegate_Event Parms{};

	Parms.Param_CharacterId = std::move(Param_CharacterId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ChatWindow.UMG_ChatWindow_C.Unbind
// (BlueprintCallable, BlueprintEvent)

void UUMG_ChatWindow_C::Unbind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "Unbind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ChatWindow.UMG_ChatWindow_C.OnNotificationBlackListedDelegate_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bBlackListed                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           SenderId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUMG_ChatWindow_C::OnNotificationBlackListedDelegate_Event(const bool bBlackListed, const class FString& SenderId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "OnNotificationBlackListedDelegate_Event");

	Params::UMG_ChatWindow_C_OnNotificationBlackListedDelegate_Event Parms{};

	Parms.bBlackListed = bBlackListed;
	Parms.SenderId = std::move(SenderId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ChatWindow.UMG_ChatWindow_C.RemoveDirectChatSenderLogs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_CharacterId                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUMG_ChatWindow_C::RemoveDirectChatSenderLogs(const class FString& Param_CharacterId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "RemoveDirectChatSenderLogs");

	Params::UMG_ChatWindow_C_RemoveDirectChatSenderLogs Parms{};

	Parms.Param_CharacterId = std::move(Param_CharacterId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ChatWindow.UMG_ChatWindow_C.OnChanged_ConnectionChatServer
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsLogin                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ChatWindow_C::OnChanged_ConnectionChatServer(bool IsLogin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "OnChanged_ConnectionChatServer");

	Params::UMG_ChatWindow_C_OnChanged_ConnectionChatServer Parms{};

	Parms.IsLogin = IsLogin;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ChatWindow.UMG_ChatWindow_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ChatWindow_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "PreConstruct");

	Params::UMG_ChatWindow_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ChatWindow.UMG_ChatWindow_C.SetInputFocus
// (BlueprintCallable, BlueprintEvent)

void UUMG_ChatWindow_C::SetInputFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "SetInputFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ChatWindow.UMG_ChatWindow_C.BndEvt__FixedPhraseButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_ChatWindow_C::BndEvt__FixedPhraseButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "BndEvt__FixedPhraseButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ChatWindow.UMG_ChatWindow_C.BndEvt__StampButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_ChatWindow_C::BndEvt__StampButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "BndEvt__StampButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ChatWindow.UMG_ChatWindow_C.BndEvt__TextInputButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_ChatWindow_C::BndEvt__TextInputButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "BndEvt__TextInputButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ChatWindow.UMG_ChatWindow_C.BndEvt__ChatWindow_Input_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
// (BlueprintEvent)

void UUMG_ChatWindow_C::BndEvt__ChatWindow_Input_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "BndEvt__ChatWindow_Input_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ChatWindow.UMG_ChatWindow_C.Errorr
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBChatSendErrorType                    ErrorType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ChatWindow_C::Errorr(ESBChatSendErrorType ErrorType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "Errorr");

	Params::UMG_ChatWindow_C_Errorr Parms{};

	Parms.ErrorType = ErrorType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ChatWindow.UMG_ChatWindow_C.Init
// (BlueprintCallable, BlueprintEvent)

void UUMG_ChatWindow_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ChatWindow.UMG_ChatWindow_C.OnGetPlayerProfileDetailMenuDelegate_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasSuccessful                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           ShortId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ChatWindow_C::OnGetPlayerProfileDetailMenuDelegate_Event(const bool bWasSuccessful, const class FString& ShortId, const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "OnGetPlayerProfileDetailMenuDelegate_Event");

	Params::UMG_ChatWindow_C_OnGetPlayerProfileDetailMenuDelegate_Event Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.ShortId = std::move(ShortId);
	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ChatWindow.UMG_ChatWindow_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_ChatWindow_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ChatWindow.UMG_ChatWindow_C.OnEnterClose
// (BlueprintCallable, BlueprintEvent)

void UUMG_ChatWindow_C::OnEnterClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "OnEnterClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ChatWindow.UMG_ChatWindow_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ChatWindow_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "OnAnimationFinished");

	Params::UMG_ChatWindow_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ChatWindow.UMG_ChatWindow_C.OnPress_EndChat
// (Event, Public, BlueprintEvent)

void UUMG_ChatWindow_C::OnPress_EndChat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "OnPress_EndChat");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ChatWindow.UMG_ChatWindow_C.SetUserFocusAtITextInput
// (BlueprintCallable, BlueprintEvent)

void UUMG_ChatWindow_C::SetUserFocusAtITextInput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "SetUserFocusAtITextInput");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ChatWindow.UMG_ChatWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_ChatWindow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ChatWindow.UMG_ChatWindow_C.CloseChatType
// (BlueprintCallable, BlueprintEvent)

void UUMG_ChatWindow_C::CloseChatType()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "CloseChatType");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ChatWindow.UMG_ChatWindow_C.OpenChatType
// (BlueprintCallable, BlueprintEvent)

void UUMG_ChatWindow_C::OpenChatType()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "OpenChatType");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ChatWindow.UMG_ChatWindow_C.SetDirectChatMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           PlayerId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                             Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                           Param_CharacterId                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    SearchShortID                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ESBPrivilegeType                        PrivilegeType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ChatWindow_C::SetDirectChatMode(const class FString& PlayerId, const class FText& Param_Name, const class FString& Param_CharacterId, bool SearchShortID, ESBPrivilegeType PrivilegeType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "SetDirectChatMode");

	Params::UMG_ChatWindow_C_SetDirectChatMode Parms{};

	Parms.PlayerId = std::move(PlayerId);
	Parms.Param_Name = std::move(Param_Name);
	Parms.Param_CharacterId = std::move(Param_CharacterId);
	Parms.SearchShortID = SearchShortID;
	Parms.PrivilegeType = PrivilegeType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ChatWindow.UMG_ChatWindow_C.OnEventTypeSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBChatLogType                          SelectedType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ChatWindow_C::OnEventTypeSelected(ESBChatLogType SelectedType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "OnEventTypeSelected");

	Params::UMG_ChatWindow_C_OnEventTypeSelected Parms{};

	Parms.SelectedType = SelectedType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ChatWindow.UMG_ChatWindow_C.BndEvt__ChatType_K2Node_ComponentBoundEvent_2_EventBtnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UChatWindowTypeItem_C*            TypeItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ChatWindow_C::BndEvt__ChatType_K2Node_ComponentBoundEvent_2_EventBtnClicked__DelegateSignature(class UChatWindowTypeItem_C* TypeItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "BndEvt__ChatType_K2Node_ComponentBoundEvent_2_EventBtnClicked__DelegateSignature");

	Params::UMG_ChatWindow_C_BndEvt__ChatType_K2Node_ComponentBoundEvent_2_EventBtnClicked__DelegateSignature Parms{};

	Parms.TypeItem = TypeItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ChatWindow.UMG_ChatWindow_C.SendChatMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Message                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESBChatLogType                          ChatLogType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ChatWindow_C::SendChatMessage(const class FString& Message, ESBChatLogType ChatLogType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "SendChatMessage");

	Params::UMG_ChatWindow_C_SendChatMessage Parms{};

	Parms.Message = std::move(Message);
	Parms.ChatLogType = ChatLogType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ChatWindow.UMG_ChatWindow_C.Show
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_ChatWindow_C::Show()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "Show");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ChatWindow.UMG_ChatWindow_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_ChatWindow_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "Hide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ChatWindow.UMG_ChatWindow_C.SetChatMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBChatLogType                          NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ChatWindow_C::SetChatMode(ESBChatLogType NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "SetChatMode");

	Params::UMG_ChatWindow_C_SetChatMode Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ChatWindow.UMG_ChatWindow_C.UpdateDirectChatLogButton
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_ChatWindow_C::UpdateDirectChatLogButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "UpdateDirectChatLogButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ChatWindow.UMG_ChatWindow_C.UpdatePartyIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_ChatWindow_C::UpdatePartyIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "UpdatePartyIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ChatWindow.UMG_ChatWindow_C.GetPlayerSearchList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_ChatWindow_C::GetPlayerSearchList(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "GetPlayerSearchList");

	Params::UMG_ChatWindow_C_GetPlayerSearchList Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ChatWindow.UMG_ChatWindow_C.ShowErrorDirectChatSearch
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TextIdx                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ChatWindow_C::ShowErrorDirectChatSearch(int32 TextIdx)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "ShowErrorDirectChatSearch");

	Params::UMG_ChatWindow_C_ShowErrorDirectChatSearch Parms{};

	Parms.TextIdx = TextIdx;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ChatWindow.UMG_ChatWindow_C.SetDirectChatParameter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           PlayerId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                             Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                           Param_CharacterId                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESBPrivilegeType                        PrivilegeType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ChatWindow_C::SetDirectChatParameter(const class FString& PlayerId, const class FText& Param_Name, const class FString& Param_CharacterId, ESBPrivilegeType PrivilegeType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "SetDirectChatParameter");

	Params::UMG_ChatWindow_C_SetDirectChatParameter Parms{};

	Parms.PlayerId = std::move(PlayerId);
	Parms.Param_Name = std::move(Param_Name);
	Parms.Param_CharacterId = std::move(Param_CharacterId);
	Parms.PrivilegeType = PrivilegeType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ChatWindow.UMG_ChatWindow_C.SetTeamParameter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUMG_ChatWindow_C::SetTeamParameter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "SetTeamParameter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ChatWindow.UMG_ChatWindow_C.SaveChatSendData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUMG_ChatWindow_C::SaveChatSendData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "SaveChatSendData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ChatWindow.UMG_ChatWindow_C.LoadChatSendData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUMG_ChatWindow_C::LoadChatSendData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "LoadChatSendData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_ChatWindow.UMG_ChatWindow_C.SetChatType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_ChatWindowChatType                    InChatType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ChatWindow_C::SetChatType(E_ChatWindowChatType InChatType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "SetChatType");

	Params::UMG_ChatWindow_C_SetChatType Parms{};

	Parms.InChatType = InChatType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ChatWindow.UMG_ChatWindow_C.SetIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBChatLogType                          LogType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ChatWindow_C::SetIcon(ESBChatLogType LogType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "SetIcon");

	Params::UMG_ChatWindow_C_SetIcon Parms{};

	Parms.LogType = LogType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ChatWindow.UMG_ChatWindow_C.SpecialCommandProcess
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InChatMessage                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           OutChatMessage                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// ESBChatLogType                          ChatLogType                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ChatWindow_C::SpecialCommandProcess(const class FString& InChatMessage, class FString* OutChatMessage, ESBChatLogType* ChatLogType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "SpecialCommandProcess");

	Params::UMG_ChatWindow_C_SpecialCommandProcess Parms{};

	Parms.InChatMessage = std::move(InChatMessage);

	UObject::ProcessEvent(Func, &Parms);

	if (OutChatMessage != nullptr)
		*OutChatMessage = std::move(Parms.OutChatMessage);

	if (ChatLogType != nullptr)
		*ChatLogType = Parms.ChatLogType;
}


// Function UMG_ChatWindow.UMG_ChatWindow_C.IsVisibleChatType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ChatWindow_C::IsVisibleChatType(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "IsVisibleChatType");

	Params::UMG_ChatWindow_C_IsVisibleChatType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function UMG_ChatWindow.UMG_ChatWindow_C.IsTextInputFocus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Resurl                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ChatWindow_C::IsTextInputFocus(bool* Resurl)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "IsTextInputFocus");

	Params::UMG_ChatWindow_C_IsTextInputFocus Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Resurl != nullptr)
		*Resurl = Parms.Resurl;
}


// Function UMG_ChatWindow.UMG_ChatWindow_C.CheckChatModeIsValid
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBChatLogType                          Param_ChatType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ChatWindow_C::CheckChatModeIsValid(ESBChatLogType Param_ChatType, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "CheckChatModeIsValid");

	Params::UMG_ChatWindow_C_CheckChatModeIsValid Parms{};

	Parms.Param_ChatType = Param_ChatType;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function UMG_ChatWindow.UMG_ChatWindow_C.GetChatType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_ChatWindowChatType                    Param_ChatType                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ChatWindow_C::GetChatType(E_ChatWindowChatType* Param_ChatType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "GetChatType");

	Params::UMG_ChatWindow_C_GetChatType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ChatType != nullptr)
		*Param_ChatType = Parms.Param_ChatType;
}


// Function UMG_ChatWindow.UMG_ChatWindow_C.SetServerReconnectionMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OnServerReconnection                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ChatWindow_C::SetServerReconnectionMode(bool OnServerReconnection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "SetServerReconnectionMode");

	Params::UMG_ChatWindow_C_SetServerReconnectionMode Parms{};

	Parms.OnServerReconnection = OnServerReconnection;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ChatWindow.UMG_ChatWindow_C.Open Server Reconnection Notice Tool Tip Widget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bOpen                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ChatWindow_C::Open_Server_Reconnection_Notice_Tool_Tip_Widget(bool bOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "Open Server Reconnection Notice Tool Tip Widget");

	Params::UMG_ChatWindow_C_Open_Server_Reconnection_Notice_Tool_Tip_Widget Parms{};

	Parms.bOpen = bOpen;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_ChatWindow.UMG_ChatWindow_C.RequestAPICheckOnlineStatus
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_ChatWindow_C::RequestAPICheckOnlineStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_ChatWindow_C", "RequestAPICheckOnlineStatus");

	UObject::ProcessEvent(Func, nullptr);
}

}

