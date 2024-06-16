#pragma once

 

// Package: ChatHUD

#include "Basic.hpp"

#include "ChatHUD_classes.hpp"
#include "ChatHUD_parameters.hpp"


namespace SDK
{

// Function ChatHUD.ChatHUD_C.ExecuteUbergraph_ChatHUD
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatHUD_C::ExecuteUbergraph_ChatHUD(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "ExecuteUbergraph_ChatHUD");

	Params::ChatHUD_C_ExecuteUbergraph_ChatHUD Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatHUD.ChatHUD_C.ResultClose
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatHUD_C::ResultClose(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "ResultClose");

	Params::ChatHUD_C_ResultClose Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatHUD.ChatHUD_C.OnClose_Event_0
// (BlueprintCallable, BlueprintEvent)

void UChatHUD_C::OnClose_Event_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "OnClose_Event_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.OnClosePCList_Event_0
// (BlueprintCallable, BlueprintEvent)

void UChatHUD_C::OnClosePCList_Event_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "OnClosePCList_Event_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.CameraCtrl_Right_Rel
// (BlueprintCallable, BlueprintEvent)

void UChatHUD_C::CameraCtrl_Right_Rel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "CameraCtrl_Right_Rel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.CameraCtrl_Right
// (BlueprintCallable, BlueprintEvent)

void UChatHUD_C::CameraCtrl_Right()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "CameraCtrl_Right");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.CameraCtrl_Left_Rel
// (BlueprintCallable, BlueprintEvent)

void UChatHUD_C::CameraCtrl_Left_Rel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "CameraCtrl_Left_Rel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.CameraCtrl_Left
// (BlueprintCallable, BlueprintEvent)

void UChatHUD_C::CameraCtrl_Left()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "CameraCtrl_Left");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.CameraCtrl_Down_Rel
// (BlueprintCallable, BlueprintEvent)

void UChatHUD_C::CameraCtrl_Down_Rel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "CameraCtrl_Down_Rel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.CameraCtrl_Down
// (BlueprintCallable, BlueprintEvent)

void UChatHUD_C::CameraCtrl_Down()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "CameraCtrl_Down");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.CameraCtrl_Up_Rel
// (BlueprintCallable, BlueprintEvent)

void UChatHUD_C::CameraCtrl_Up_Rel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "CameraCtrl_Up_Rel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.CameraCtrl_Up
// (BlueprintCallable, BlueprintEvent)

void UChatHUD_C::CameraCtrl_Up()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "CameraCtrl_Up");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.OnRequestTutorialHelp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CheckUnlock                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatHUD_C::OnRequestTutorialHelp(bool CheckUnlock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "OnRequestTutorialHelp");

	Params::ChatHUD_C_OnRequestTutorialHelp Parms{};

	Parms.CheckUnlock = CheckUnlock;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatHUD.ChatHUD_C.MouseInteractionRelease
// (BlueprintCallable, BlueprintEvent)

void UChatHUD_C::MouseInteractionRelease()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "MouseInteractionRelease");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.MouseInteraction
// (BlueprintCallable, BlueprintEvent)

void UChatHUD_C::MouseInteraction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "MouseInteraction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.BndEvt__CmnBack01_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature
// (BlueprintEvent)

void UChatHUD_C::BndEvt__CmnBack01_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "BndEvt__CmnBack01_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.OnGameOverDelegate_Event_0
// (BlueprintCallable, BlueprintEvent)

void UChatHUD_C::OnGameOverDelegate_Event_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "OnGameOverDelegate_Event_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UChatHUD_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.OnReceivedMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBChatMessage*                   Message                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBChatUIMessage                 Mess                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UChatHUD_C::OnReceivedMessage(const class USBChatMessage* Message, const struct FSBChatUIMessage& Mess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "OnReceivedMessage");

	Params::ChatHUD_C_OnReceivedMessage Parms{};

	Parms.Message = Message;
	Parms.Mess = std::move(Mess);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatHUD.ChatHUD_C.BndEvt__ResetLayoutButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UChatHUD_C::BndEvt__ResetLayoutButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "BndEvt__ResetLayoutButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.OnChangeVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBUIType                               InUIType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInInstantly                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatHUD_C::OnChangeVisibility(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "OnChangeVisibility");

	Params::ChatHUD_C_OnChangeVisibility Parms{};

	Parms.InUIType = InUIType;
	Parms.bInVisibility = bInVisibility;
	Parms.bInInstantly = bInInstantly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatHUD.ChatHUD_C.Init
// (BlueprintCallable, BlueprintEvent)

void UChatHUD_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UChatHUD_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.OnLogDispTime_event
// (BlueprintCallable, BlueprintEvent)

void UChatHUD_C::OnLogDispTime_event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "OnLogDispTime_event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.OnRefreshChatLogs_event
// (BlueprintCallable, BlueprintEvent)

void UChatHUD_C::OnRefreshChatLogs_event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "OnRefreshChatLogs_event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.ChatSettingWindow_OnClose_Event
// (BlueprintCallable, BlueprintEvent)

void UChatHUD_C::ChatSettingWindow_OnClose_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "ChatSettingWindow_OnClose_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.EndChatSettingWindow
// (BlueprintCallable, BlueprintEvent)

void UChatHUD_C::EndChatSettingWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "EndChatSettingWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.BndEvt__ChatHUD_ButtonFullScreen_UnreadNotifySettingWindow_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UChatHUD_C::BndEvt__ChatHUD_ButtonFullScreen_UnreadNotifySettingWindow_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "BndEvt__ChatHUD_ButtonFullScreen_UnreadNotifySettingWindow_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.BndEvt__ChatHUD_BtnChatUnreadNotify_ON_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UChatHUD_C::BndEvt__ChatHUD_BtnChatUnreadNotify_ON_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "BndEvt__ChatHUD_BtnChatUnreadNotify_ON_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.UpdateCursorMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Flag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatHUD_C::UpdateCursorMode(bool Flag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "UpdateCursorMode");

	Params::ChatHUD_C_UpdateCursorMode Parms{};

	Parms.Flag = Flag;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatHUD.ChatHUD_C.DelayUpdateMouseCursorIcon
// (BlueprintCallable, BlueprintEvent)

void UChatHUD_C::DelayUpdateMouseCursorIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "DelayUpdateMouseCursorIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.RequestTabClose
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBChatLogWindowSlot                    RequestSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InFilterType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InDetailFilterType                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatHUD_C::RequestTabClose(ESBChatLogWindowSlot RequestSlot, int32 InFilterType, int32 InDetailFilterType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "RequestTabClose");

	Params::ChatHUD_C_RequestTabClose Parms{};

	Parms.RequestSlot = RequestSlot;
	Parms.InFilterType = InFilterType;
	Parms.InDetailFilterType = InDetailFilterType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatHUD.ChatHUD_C.RequestTabAdd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBChatLogWindowSlot                    RequestSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatHUD_C::RequestTabAdd(ESBChatLogWindowSlot RequestSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "RequestTabAdd");

	Params::ChatHUD_C_RequestTabAdd Parms{};

	Parms.RequestSlot = RequestSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatHUD.ChatHUD_C.ChatTempLogs_Init
// (BlueprintCallable, BlueprintEvent)

void UChatHUD_C::ChatTempLogs_Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "ChatTempLogs_Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.OnClickedClose
// (BlueprintCallable, BlueprintEvent)

void UChatHUD_C::OnClickedClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "OnClickedClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.RequestDirectChat
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           PlayerId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                             Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                           CharacterId                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESBPrivilegeType                        PrivilegeType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatHUD_C::RequestDirectChat(const class FString& PlayerId, const class FText& Param_Name, const class FString& CharacterId, ESBPrivilegeType PrivilegeType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "RequestDirectChat");

	Params::ChatHUD_C_RequestDirectChat Parms{};

	Parms.PlayerId = std::move(PlayerId);
	Parms.Param_Name = std::move(Param_Name);
	Parms.CharacterId = std::move(CharacterId);
	Parms.PrivilegeType = PrivilegeType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatHUD.ChatHUD_C.OnChatRoomMessageReceived
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBChatMessage*                   Message                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatHUD_C::OnChatRoomMessageReceived(class USBChatMessage* Message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "OnChatRoomMessageReceived");

	Params::ChatHUD_C_OnChatRoomMessageReceived Parms{};

	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatHUD.ChatHUD_C.CloseRequestChatLogs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBChatLogWindowSlot                    SlotType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatHUD_C::CloseRequestChatLogs(ESBChatLogWindowSlot SlotType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "CloseRequestChatLogs");

	Params::ChatHUD_C_CloseRequestChatLogs Parms{};

	Parms.SlotType = SlotType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatHUD.ChatHUD_C.RequestChatLogAdd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBChatLogWindowSlot                    RequestSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatHUD_C::RequestChatLogAdd(ESBChatLogWindowSlot RequestSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "RequestChatLogAdd");

	Params::ChatHUD_C_RequestChatLogAdd Parms{};

	Parms.RequestSlot = RequestSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatHUD.ChatHUD_C.OnClosedChatWindow
// (BlueprintCallable, BlueprintEvent)

void UChatHUD_C::OnClosedChatWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "OnClosedChatWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.Construct_Chat
// (BlueprintCallable, BlueprintEvent)

void UChatHUD_C::Construct_Chat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "Construct_Chat");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.OnChang_ChatMode_Event
// (BlueprintCallable, BlueprintEvent)

void UChatHUD_C::OnChang_ChatMode_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "OnChang_ChatMode_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.Emite_Construct
// (BlueprintCallable, BlueprintEvent)

void UChatHUD_C::Emite_Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "Emite_Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.UnbindAdminCommandCallbeck
// (BlueprintCallable, BlueprintEvent)

void UChatHUD_C::UnbindAdminCommandCallbeck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "UnbindAdminCommandCallbeck");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.Hide_Admin
// (BlueprintCallable, BlueprintEvent)

void UChatHUD_C::Hide_Admin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "Hide_Admin");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.OpenGotoBookmarkWindow
// (BlueprintCallable, BlueprintEvent)

void UChatHUD_C::OpenGotoBookmarkWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "OpenGotoBookmarkWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.OnAdminCommandRequest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBAdminCommandCallbackRequest          Request                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatHUD_C::OnAdminCommandRequest(ESBAdminCommandCallbackRequest Request)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "OnAdminCommandRequest");

	Params::ChatHUD_C_OnAdminCommandRequest Parms{};

	Parms.Request = Request;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatHUD.ChatHUD_C.Construct_Admin
// (BlueprintCallable, BlueprintEvent)

void UChatHUD_C::Construct_Admin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "Construct_Admin");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.OnMouseButtonDownByAdminMode
// (BlueprintCallable, BlueprintEvent)

void UChatHUD_C::OnMouseButtonDownByAdminMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "OnMouseButtonDownByAdminMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.OnCloseAdminWindow
// (BlueprintCallable, BlueprintEvent)

void UChatHUD_C::OnCloseAdminWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "OnCloseAdminWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.BndEvt__ChatHUD_OtherPCList_K2Node_ComponentBoundEvent_2_OnAllClose__DelegateSignature
// (BlueprintEvent)

void UChatHUD_C::BndEvt__ChatHUD_OtherPCList_K2Node_ComponentBoundEvent_2_OnAllClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "BndEvt__ChatHUD_OtherPCList_K2Node_ComponentBoundEvent_2_OnAllClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.OpenCursorModeToOtherPCMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBPlayerCharacter*               InOtherPC                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatHUD_C::OpenCursorModeToOtherPCMenu(class ASBPlayerCharacter* InOtherPC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "OpenCursorModeToOtherPCMenu");

	Params::ChatHUD_C_OpenCursorModeToOtherPCMenu Parms{};

	Parms.InOtherPC = InOtherPC;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatHUD.ChatHUD_C.BndEvt__OtherPCList_K2Node_ComponentBoundEvent_1_EventButtonClicked__DelegateSignature
// (BlueprintEvent)

void UChatHUD_C::BndEvt__OtherPCList_K2Node_ComponentBoundEvent_1_EventButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "BndEvt__OtherPCList_K2Node_ComponentBoundEvent_1_EventButtonClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.InputPadButton
// (BlueprintCallable, BlueprintEvent)

void UChatHUD_C::InputPadButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "InputPadButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.BndEvt__ButtonFullScreen_OtherPClist_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UChatHUD_C::BndEvt__ButtonFullScreen_OtherPClist_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "BndEvt__ButtonFullScreen_OtherPClist_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.KeyShortcut_TabChange
// (BlueprintCallable, BlueprintEvent)

void UChatHUD_C::KeyShortcut_TabChange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "KeyShortcut_TabChange");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.KeyShortcut_PlayerList
// (BlueprintCallable, BlueprintEvent)

void UChatHUD_C::KeyShortcut_PlayerList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "KeyShortcut_PlayerList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.KeyShortcut_ChatTypeList
// (BlueprintCallable, BlueprintEvent)

void UChatHUD_C::KeyShortcut_ChatTypeList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "KeyShortcut_ChatTypeList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.KeyShortcut_Stamp
// (BlueprintCallable, BlueprintEvent)

void UChatHUD_C::KeyShortcut_Stamp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "KeyShortcut_Stamp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.KeyShortcut_FixedPhrase
// (BlueprintCallable, BlueprintEvent)

void UChatHUD_C::KeyShortcut_FixedPhrase()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "KeyShortcut_FixedPhrase");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.KeyShortcut_TextMode
// (BlueprintCallable, BlueprintEvent)

void UChatHUD_C::KeyShortcut_TextMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "KeyShortcut_TextMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.Show
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UChatHUD_C::Show()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "Show");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)

void UChatHUD_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "Hide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.IsFullChildLogWindows
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatHUD_C::IsFullChildLogWindows(bool* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "IsFullChildLogWindows");

	Params::ChatHUD_C_IsFullChildLogWindows Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function ChatHUD.ChatHUD_C.AddChatLogWindow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBChatLogWindowSlot                    RequestSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatHUD_C::AddChatLogWindow(ESBChatLogWindowSlot RequestSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "AddChatLogWindow");

	Params::ChatHUD_C_AddChatLogWindow Parms{};

	Parms.RequestSlot = RequestSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatHUD.ChatHUD_C.AddTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBChatLogWindowSlot                    RequestSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatHUD_C::AddTab(ESBChatLogWindowSlot RequestSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "AddTab");

	Params::ChatHUD_C_AddTab Parms{};

	Parms.RequestSlot = RequestSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatHUD.ChatHUD_C.InitChatLogsHUDLayout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UChatHUD_C::InitChatLogsHUDLayout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "InitChatLogsHUDLayout");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.LoadHudLayout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UChatHUD_C::LoadHudLayout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "LoadHudLayout");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.SaveLayoutData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      InWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatHUD_C::SaveLayoutData(class UUserWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "SaveLayoutData");

	Params::ChatHUD_C_SaveLayoutData Parms{};

	Parms.InWidget = InWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatHUD.ChatHUD_C.SaveHudLayout
// (Public, BlueprintCallable, BlueprintEvent)

void UChatHUD_C::SaveHudLayout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "SaveHudLayout");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.InitChatLogSlots
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UChatHUD_C::InitChatLogSlots()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "InitChatLogSlots");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.SetChatLogsWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InWindow                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatHUD_C::SetChatLogsWindow(bool InWindow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "SetChatLogsWindow");

	Params::ChatHUD_C_SetChatLogsWindow Parms{};

	Parms.InWindow = InWindow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatHUD.ChatHUD_C.Refresh Chat Logs
// (Public, BlueprintCallable, BlueprintEvent)

void UChatHUD_C::Refresh_Chat_Logs()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "Refresh Chat Logs");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    PointerEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*               Operation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UChatHUD_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "OnDrop");

	Params::ChatHUD_C_OnDrop Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.PointerEvent = std::move(PointerEvent);
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ChatHUD.ChatHUD_C.OnDragOver
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    PointerEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*               Operation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UChatHUD_C::OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "OnDragOver");

	Params::ChatHUD_C_OnDragOver Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.PointerEvent = std::move(PointerEvent);
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ChatHUD.ChatHUD_C.SaveLayoutWindowSizeData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      InWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatHUD_C::SaveLayoutWindowSizeData(class UUserWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "SaveLayoutWindowSizeData");

	Params::ChatHUD_C_SaveLayoutWindowSizeData Parms{};

	Parms.InWidget = InWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatHUD.ChatHUD_C.InitStampEmoteHUDLayout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UChatHUD_C::InitStampEmoteHUDLayout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "InitStampEmoteHUDLayout");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.InitChatHUDLayout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UChatHUD_C::InitChatHUDLayout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "InitChatHUDLayout");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.LoadStampHisoryData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UChatHUD_C::LoadStampHisoryData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "LoadStampHisoryData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UChatHUD_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "OnMouseButtonDown");

	Params::ChatHUD_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ChatHUD.ChatHUD_C.ResetAllLayout
// (Public, BlueprintCallable, BlueprintEvent)

void UChatHUD_C::ResetAllLayout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "ResetAllLayout");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.On_TextSizeComboBox_GenerateWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UChatHUD_C::On_TextSizeComboBox_GenerateWidget_0(const class FString& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "On_TextSizeComboBox_GenerateWidget_0");

	Params::ChatHUD_C_On_TextSizeComboBox_GenerateWidget_0 Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ChatHUD.ChatHUD_C.IsActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsActive                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatHUD_C::IsActive(bool* Param_IsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "IsActive");

	Params::ChatHUD_C_IsActive Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsActive != nullptr)
		*Param_IsActive = Parms.Param_IsActive;
}


// Function ChatHUD.ChatHUD_C.ForceClose
// (Public, BlueprintCallable, BlueprintEvent)

void UChatHUD_C::ForceClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "ForceClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.UpdateMouseCursorIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UChatHUD_C::UpdateMouseCursorIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "UpdateMouseCursorIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.CheckReceivedMessageSound
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBChatLogType                          LogType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsCloseArea                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatHUD_C::CheckReceivedMessageSound(ESBChatLogType LogType, bool IsCloseArea, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "CheckReceivedMessageSound");

	Params::ChatHUD_C_CheckReceivedMessageSound Parms{};

	Parms.LogType = LogType;
	Parms.IsCloseArea = IsCloseArea;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function ChatHUD.ChatHUD_C.CheckLogWindowFilter
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBChatLogType                          LogType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBChatLogWindowSlot                    NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatHUD_C::CheckLogWindowFilter(ESBChatLogType LogType, ESBChatLogWindowSlot NewParam, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "CheckLogWindowFilter");

	Params::ChatHUD_C_CheckLogWindowFilter Parms{};

	Parms.LogType = LogType;
	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function ChatHUD.ChatHUD_C.UpdateUnread
// (Public, BlueprintCallable, BlueprintEvent)

void UChatHUD_C::UpdateUnread()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "UpdateUnread");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatHUD.ChatHUD_C.Get Log Window Visible Status List
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<bool>                            IsVisibleStatusList                                    (Parm, OutParm)

void UChatHUD_C::Get_Log_Window_Visible_Status_List(TArray<bool>* IsVisibleStatusList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "Get Log Window Visible Status List");

	Params::ChatHUD_C_Get_Log_Window_Visible_Status_List Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsVisibleStatusList != nullptr)
		*IsVisibleStatusList = std::move(Parms.IsVisibleStatusList);
}


// Function ChatHUD.ChatHUD_C.SetFishHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFishingHUD_C*                    HUD                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatHUD_C::SetFishHUD(class UFishingHUD_C* HUD)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatHUD_C", "SetFishHUD");

	Params::ChatHUD_C_SetFishHUD Parms{};

	Parms.HUD = HUD;

	UObject::ProcessEvent(Func, &Parms);
}

}

