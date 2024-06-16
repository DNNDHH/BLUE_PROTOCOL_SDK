#pragma once

 

// Package: OtherPCMenu

#include "Basic.hpp"

#include "OtherPCMenu_classes.hpp"
#include "OtherPCMenu_parameters.hpp"


namespace SDK
{

// Function OtherPCMenu.OtherPCMenu_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UOtherPCMenu_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCMenu.OtherPCMenu_C.OnDirectChat__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UOtherPCMenu_C::OnDirectChat__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "OnDirectChat__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCMenu.OtherPCMenu_C.ExecuteUbergraph_OtherPCMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOtherPCMenu_C::ExecuteUbergraph_OtherPCMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "ExecuteUbergraph_OtherPCMenu");

	Params::OtherPCMenu_C_ExecuteUbergraph_OtherPCMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OtherPCMenu.OtherPCMenu_C.OnSendAdventureCard
// (BlueprintCallable, BlueprintEvent)

void UOtherPCMenu_C::OnSendAdventureCard()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "OnSendAdventureCard");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCMenu.OtherPCMenu_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOtherPCMenu_C::CustomEvent_1(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "CustomEvent_1");

	Params::OtherPCMenu_C_CustomEvent_1 Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OtherPCMenu.OtherPCMenu_C.ResultClose
// (BlueprintCallable, BlueprintEvent)

void UOtherPCMenu_C::ResultClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "ResultClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCMenu.OtherPCMenu_C.OnCheckBlockStatus_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bCheckBlockStatus                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOtherPCMenu_C::OnCheckBlockStatus_Event(const bool bCheckBlockStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "OnCheckBlockStatus_Event");

	Params::OtherPCMenu_C_OnCheckBlockStatus_Event Parms{};

	Parms.bCheckBlockStatus = bCheckBlockStatus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OtherPCMenu.OtherPCMenu_C.OnSendLikeEvent
// (BlueprintCallable, BlueprintEvent)

void UOtherPCMenu_C::OnSendLikeEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "OnSendLikeEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCMenu.OtherPCMenu_C.BndEvt__OtherPCMenu_CmnClose01_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature
// (BlueprintEvent)

void UOtherPCMenu_C::BndEvt__OtherPCMenu_CmnClose01_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "BndEvt__OtherPCMenu_CmnClose01_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCMenu.OtherPCMenu_C.SendLike
// (BlueprintCallable, BlueprintEvent)

void UOtherPCMenu_C::SendLike()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "SendLike");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCMenu.OtherPCMenu_C.OnRequestDirectChat_Event
// (BlueprintCallable, BlueprintEvent)

void UOtherPCMenu_C::OnRequestDirectChat_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "OnRequestDirectChat_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCMenu.OtherPCMenu_C.SendMess(SendAdv)
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasSuccessful                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSendAdventureCardResult         SendAdventureCardResult                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UOtherPCMenu_C::SendMess_SendAdv_(const bool bWasSuccessful, const struct FSendAdventureCardResult& SendAdventureCardResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "SendMess(SendAdv)");

	Params::OtherPCMenu_C_SendMess_SendAdv_ Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.SendAdventureCardResult = std::move(SendAdventureCardResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function OtherPCMenu.OtherPCMenu_C.UnBindJankenUIDelegate
// (BlueprintCallable, BlueprintEvent)

void UOtherPCMenu_C::UnBindJankenUIDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "UnBindJankenUIDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCMenu.OtherPCMenu_C.OnJankenUIDelegate_Event_0
// (BlueprintCallable, BlueprintEvent)

void UOtherPCMenu_C::OnJankenUIDelegate_Event_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "OnJankenUIDelegate_Event_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCMenu.OtherPCMenu_C.UnBindNotificationBlackListedDelegate
// (BlueprintCallable, BlueprintEvent)

void UOtherPCMenu_C::UnBindNotificationBlackListedDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "UnBindNotificationBlackListedDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCMenu.OtherPCMenu_C.OnNotificationBlackListedDelegate_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bBlackListed                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           SenderId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UOtherPCMenu_C::OnNotificationBlackListedDelegate_Event(const bool bBlackListed, const class FString& SenderId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "OnNotificationBlackListedDelegate_Event");

	Params::OtherPCMenu_C_OnNotificationBlackListedDelegate_Event Parms{};

	Parms.bBlackListed = bBlackListed;
	Parms.SenderId = std::move(SenderId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function OtherPCMenu.OtherPCMenu_C.start_construct
// (BlueprintCallable, BlueprintEvent)

void UOtherPCMenu_C::Start_construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "start_construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCMenu.OtherPCMenu_C.Close_Force
// (BlueprintCallable, BlueprintEvent)

void UOtherPCMenu_C::Close_Force()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "Close_Force");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCMenu.OtherPCMenu_C.UnbindBlackListDelegate
// (BlueprintCallable, BlueprintEvent)

void UOtherPCMenu_C::UnbindBlackListDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "UnbindBlackListDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCMenu.OtherPCMenu_C.RemoveBlackList
// (BlueprintCallable, BlueprintEvent)

void UOtherPCMenu_C::RemoveBlackList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "RemoveBlackList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCMenu.OtherPCMenu_C.AddBlackList_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerProfileMenuDetailData     Param_ProfileData                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UOtherPCMenu_C::AddBlackList_Event(const struct FPlayerProfileMenuDetailData& Param_ProfileData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "AddBlackList_Event");

	Params::OtherPCMenu_C_AddBlackList_Event Parms{};

	Parms.Param_ProfileData = std::move(Param_ProfileData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function OtherPCMenu.OtherPCMenu_C.UnbindGameOverDelegate
// (BlueprintCallable, BlueprintEvent)

void UOtherPCMenu_C::UnbindGameOverDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "UnbindGameOverDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCMenu.OtherPCMenu_C.UnbindPlayerConcernedListDelegate
// (BlueprintCallable, BlueprintEvent)

void UOtherPCMenu_C::UnbindPlayerConcernedListDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "UnbindPlayerConcernedListDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCMenu.OtherPCMenu_C.OnGameOverDelegate_Event_0
// (BlueprintCallable, BlueprintEvent)

void UOtherPCMenu_C::OnGameOverDelegate_Event_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "OnGameOverDelegate_Event_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCMenu.OtherPCMenu_C.BndEvt__AutoRunButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOtherPCMenu_C::BndEvt__AutoRunButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "BndEvt__AutoRunButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCMenu.OtherPCMenu_C.BndEvt__DirectChatButton_K2Node_ComponentBoundEvent_179_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UOtherPCMenu_C::BndEvt__DirectChatButton_K2Node_ComponentBoundEvent_179_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "BndEvt__DirectChatButton_K2Node_ComponentBoundEvent_179_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCMenu.OtherPCMenu_C.BndEvt__DirectChatButton_K2Node_ComponentBoundEvent_142_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UOtherPCMenu_C::BndEvt__DirectChatButton_K2Node_ComponentBoundEvent_142_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "BndEvt__DirectChatButton_K2Node_ComponentBoundEvent_142_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCMenu.OtherPCMenu_C.BndEvt__DirectChatButton_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOtherPCMenu_C::BndEvt__DirectChatButton_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "BndEvt__DirectChatButton_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCMenu.OtherPCMenu_C.OnCancelMatching_Dialog_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EYesNoDialogResult                      Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOtherPCMenu_C::OnCancelMatching_Dialog_Event(const EYesNoDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "OnCancelMatching_Dialog_Event");

	Params::OtherPCMenu_C_OnCancelMatching_Dialog_Event Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OtherPCMenu.OtherPCMenu_C.BndEvt__TradeButton_K2Node_ComponentBoundEvent_92_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UOtherPCMenu_C::BndEvt__TradeButton_K2Node_ComponentBoundEvent_92_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "BndEvt__TradeButton_K2Node_ComponentBoundEvent_92_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCMenu.OtherPCMenu_C.BndEvt__TradeButton_K2Node_ComponentBoundEvent_75_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UOtherPCMenu_C::BndEvt__TradeButton_K2Node_ComponentBoundEvent_75_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "BndEvt__TradeButton_K2Node_ComponentBoundEvent_75_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCMenu.OtherPCMenu_C.BndEvt__FollowButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UOtherPCMenu_C::BndEvt__FollowButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "BndEvt__FollowButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCMenu.OtherPCMenu_C.BndEvt__FollowButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UOtherPCMenu_C::BndEvt__FollowButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "BndEvt__FollowButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCMenu.OtherPCMenu_C.BndEvt__EmotoButton_K2Node_ComponentBoundEvent_86_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UOtherPCMenu_C::BndEvt__EmotoButton_K2Node_ComponentBoundEvent_86_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "BndEvt__EmotoButton_K2Node_ComponentBoundEvent_86_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCMenu.OtherPCMenu_C.BndEvt__EmotoButton_K2Node_ComponentBoundEvent_54_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UOtherPCMenu_C::BndEvt__EmotoButton_K2Node_ComponentBoundEvent_54_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "BndEvt__EmotoButton_K2Node_ComponentBoundEvent_54_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCMenu.OtherPCMenu_C.BndEvt__PartyInviteButton_K2Node_ComponentBoundEvent_36_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UOtherPCMenu_C::BndEvt__PartyInviteButton_K2Node_ComponentBoundEvent_36_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "BndEvt__PartyInviteButton_K2Node_ComponentBoundEvent_36_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCMenu.OtherPCMenu_C.BndEvt__PartyInviteButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UOtherPCMenu_C::BndEvt__PartyInviteButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "BndEvt__PartyInviteButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCMenu.OtherPCMenu_C.BndEvt__ProfileViewButton_K2Node_ComponentBoundEvent_34_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UOtherPCMenu_C::BndEvt__ProfileViewButton_K2Node_ComponentBoundEvent_34_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "BndEvt__ProfileViewButton_K2Node_ComponentBoundEvent_34_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCMenu.OtherPCMenu_C.BndEvt__ProfileViewButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UOtherPCMenu_C::BndEvt__ProfileViewButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "BndEvt__ProfileViewButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCMenu.OtherPCMenu_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOtherPCMenu_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "OnAnimationFinished");

	Params::OtherPCMenu_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OtherPCMenu.OtherPCMenu_C.Close
// (BlueprintCallable, BlueprintEvent)

void UOtherPCMenu_C::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCMenu.OtherPCMenu_C.OnGetPlayerProfileDetailMenuDelegate_Event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasSuccessful                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPlayerProfileMenuDetailData     PlayerProfileDetailMenuData                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOtherPCMenu_C::OnGetPlayerProfileDetailMenuDelegate_Event(const bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "OnGetPlayerProfileDetailMenuDelegate_Event");

	Params::OtherPCMenu_C_OnGetPlayerProfileDetailMenuDelegate_Event Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.PlayerProfileDetailMenuData = std::move(PlayerProfileDetailMenuData);
	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OtherPCMenu.OtherPCMenu_C.BndEvt__FollowButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOtherPCMenu_C::BndEvt__FollowButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "BndEvt__FollowButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCMenu.OtherPCMenu_C.OnPress_Cancel
// (Event, Public, BlueprintEvent)

void UOtherPCMenu_C::OnPress_Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "OnPress_Cancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCMenu.OtherPCMenu_C.BndEvt__EmotoButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOtherPCMenu_C::BndEvt__EmotoButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "BndEvt__EmotoButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCMenu.OtherPCMenu_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EYesNoDialogResult                      Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOtherPCMenu_C::CustomEvent_0(const EYesNoDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "CustomEvent_0");

	Params::OtherPCMenu_C_CustomEvent_0 Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OtherPCMenu.OtherPCMenu_C.BndEvt__PartyInviteButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOtherPCMenu_C::BndEvt__PartyInviteButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "BndEvt__PartyInviteButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCMenu.OtherPCMenu_C.BndEvt__ProfileViewButton_K2Node_ComponentBoundEvent_571_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOtherPCMenu_C::BndEvt__ProfileViewButton_K2Node_ComponentBoundEvent_571_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "BndEvt__ProfileViewButton_K2Node_ComponentBoundEvent_571_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCMenu.OtherPCMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOtherPCMenu_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCMenu.OtherPCMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOtherPCMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCMenu.OtherPCMenu_C.Initialize GuildData
// (BlueprintCallable, BlueprintEvent)

void UOtherPCMenu_C::Initialize_GuildData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "Initialize GuildData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCMenu.OtherPCMenu_C.CloseMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UOtherPCMenu_C::CloseMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "CloseMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCMenu.OtherPCMenu_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// ESBClassType                            InRole                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBTensionTagType                       InTensionTagId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             InComment                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   InAchievementId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_IsSendLIke                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   OnlineStatus                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOtherPCMenu_C::Init(const class FText& InName, ESBClassType InRole, ESBTensionTagType InTensionTagId, const class FText& InComment, int32 InAchievementId, bool Param_IsSendLIke, int32 OnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "Init");

	Params::OtherPCMenu_C_Init Parms{};

	Parms.InName = std::move(InName);
	Parms.InRole = InRole;
	Parms.InTensionTagId = InTensionTagId;
	Parms.InComment = std::move(InComment);
	Parms.InAchievementId = InAchievementId;
	Parms.Param_IsSendLIke = Param_IsSendLIke;
	Parms.OnlineStatus = OnlineStatus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OtherPCMenu.OtherPCMenu_C.InitProfileDetail
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerProfileMenuDetailData     Param_ProfileData                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UOtherPCMenu_C::InitProfileDetail(const struct FPlayerProfileMenuDetailData& Param_ProfileData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "InitProfileDetail");

	Params::OtherPCMenu_C_InitProfileDetail Parms{};

	Parms.Param_ProfileData = std::move(Param_ProfileData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function OtherPCMenu.OtherPCMenu_C.SetRootVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOtherPCMenu_C::SetRootVisibility(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "SetRootVisibility");

	Params::OtherPCMenu_C_SetRootVisibility Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OtherPCMenu.OtherPCMenu_C.GetSendAdventurerCardButtonLabelText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UOtherPCMenu_C::GetSendAdventurerCardButtonLabelText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "GetSendAdventurerCardButtonLabelText");

	Params::OtherPCMenu_C_GetSendAdventurerCardButtonLabelText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function OtherPCMenu.OtherPCMenu_C.CheckProfileEnable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsOk                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOtherPCMenu_C::CheckProfileEnable(bool* IsOk)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "CheckProfileEnable");

	Params::OtherPCMenu_C_CheckProfileEnable Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsOk != nullptr)
		*IsOk = Parms.IsOk;
}


// Function OtherPCMenu.OtherPCMenu_C.UpdatePartyIconVisible
// (Public, BlueprintCallable, BlueprintEvent)

void UOtherPCMenu_C::UpdatePartyIconVisible()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "UpdatePartyIconVisible");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCMenu.OtherPCMenu_C.UpdateBlackListState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsBlackList                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOtherPCMenu_C::UpdateBlackListState(bool Param_IsBlackList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "UpdateBlackListState");

	Params::OtherPCMenu_C_UpdateBlackListState Parms{};

	Parms.Param_IsBlackList = Param_IsBlackList;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OtherPCMenu.OtherPCMenu_C.CanSendInvitationSelf
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bResult                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOtherPCMenu_C::CanSendInvitationSelf(bool* bResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "CanSendInvitationSelf");

	Params::OtherPCMenu_C_CanSendInvitationSelf Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bResult != nullptr)
		*bResult = Parms.bResult;
}


// Function OtherPCMenu.OtherPCMenu_C.ShowMessage_IsBlackListed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOtherPCMenu_C::ShowMessage_IsBlackListed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "ShowMessage_IsBlackListed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCMenu.OtherPCMenu_C.ShowMessage_DisableProfile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOtherPCMenu_C::ShowMessage_DisableProfile()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "ShowMessage_DisableProfile");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCMenu.OtherPCMenu_C.GetOtherPlayerState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBPlayerState*                   OutPlayerState                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOtherPCMenu_C::GetOtherPlayerState(class ASBPlayerState** OutPlayerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "GetOtherPlayerState");

	Params::OtherPCMenu_C_GetOtherPlayerState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutPlayerState != nullptr)
		*OutPlayerState = Parms.OutPlayerState;
}


// Function OtherPCMenu.OtherPCMenu_C.GetPlayerCharacter
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASBPlayerCharacter*               ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class ASBPlayerCharacter* UOtherPCMenu_C::GetPlayerCharacter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "GetPlayerCharacter");

	Params::OtherPCMenu_C_GetPlayerCharacter Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function OtherPCMenu.OtherPCMenu_C.SetPlayerProfile_LikeBtn
// (Public, BlueprintCallable, BlueprintEvent)

void UOtherPCMenu_C::SetPlayerProfile_LikeBtn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "SetPlayerProfile_LikeBtn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCMenu.OtherPCMenu_C.SetPlatformIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOtherPCMenu_C::SetPlatformIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "SetPlatformIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCMenu.OtherPCMenu_C.ShowSendAdventureCardError
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    InWasSuccessful                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSendAdventureCardResult         InSendAdventureResult                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UOtherPCMenu_C::ShowSendAdventureCardError(bool InWasSuccessful, const struct FSendAdventureCardResult& InSendAdventureResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "ShowSendAdventureCardError");

	Params::OtherPCMenu_C_ShowSendAdventureCardError Parms{};

	Parms.InWasSuccessful = InWasSuccessful;
	Parms.InSendAdventureResult = std::move(InSendAdventureResult);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function OtherPCMenu.OtherPCMenu_C.Show Player Profile Error Message
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InTextNameId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InTextID                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOtherPCMenu_C::Show_Player_Profile_Error_Message(class FName InTextNameId, const int32 InTextID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "Show Player Profile Error Message");

	Params::OtherPCMenu_C_Show_Player_Profile_Error_Message Parms{};

	Parms.InTextNameId = InTextNameId;
	Parms.InTextID = InTextID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OtherPCMenu.OtherPCMenu_C.UpdatePlayerIcon
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Download                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOtherPCMenu_C::UpdatePlayerIcon(bool* Download)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "UpdatePlayerIcon");

	Params::OtherPCMenu_C_UpdatePlayerIcon Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Download != nullptr)
		*Download = Parms.Download;
}


// Function OtherPCMenu.OtherPCMenu_C.UpdatePlayerName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOtherPCMenu_C::UpdatePlayerName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "UpdatePlayerName");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCMenu.OtherPCMenu_C.Update Player Comment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOtherPCMenu_C::Update_Player_Comment()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "Update Player Comment");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCMenu.OtherPCMenu_C.OnClickedPhotoLikeBtn
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                           OutLikeCountList                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<bool>                            OutLikeBtnEnbaleList                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOtherPCMenu_C::OnClickedPhotoLikeBtn(TArray<int32>& OutLikeCountList, TArray<bool>& OutLikeBtnEnbaleList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCMenu_C", "OnClickedPhotoLikeBtn");

	Params::OtherPCMenu_C_OnClickedPhotoLikeBtn Parms{};

	Parms.OutLikeCountList = std::move(OutLikeCountList);
	Parms.OutLikeBtnEnbaleList = std::move(OutLikeBtnEnbaleList);

	UObject::ProcessEvent(Func, &Parms);

	OutLikeCountList = std::move(Parms.OutLikeCountList);
	OutLikeBtnEnbaleList = std::move(Parms.OutLikeBtnEnbaleList);
}

}

