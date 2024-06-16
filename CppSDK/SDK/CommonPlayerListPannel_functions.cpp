#pragma once

 

// Package: CommonPlayerListPannel

#include "Basic.hpp"

#include "CommonPlayerListPannel_classes.hpp"
#include "CommonPlayerListPannel_parameters.hpp"


namespace SDK
{

// Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestCancelInvite__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBPartyMemberState*              MemberState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonPlayerListPannel_C::OnRequestCancelInvite__DelegateSignature(class USBPartyMemberState* MemberState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "OnRequestCancelInvite__DelegateSignature");

	Params::CommonPlayerListPannel_C_OnRequestCancelInvite__DelegateSignature Parms{};

	Parms.MemberState = MemberState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestPartyMemberButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBPartyMemberState*              MemberState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayerProfileSummaryData        ProfileData                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommonPlayerListPannel_C::OnRequestPartyMemberButtonClicked__DelegateSignature(class USBPartyMemberState* MemberState, const struct FPlayerProfileSummaryData& ProfileData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "OnRequestPartyMemberButtonClicked__DelegateSignature");

	Params::CommonPlayerListPannel_C_OnRequestPartyMemberButtonClicked__DelegateSignature Parms{};

	Parms.MemberState = MemberState;
	Parms.ProfileData = std::move(ProfileData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestFriendButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonPlayerListPannel_C*        TargetPlayerListPannel                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonPlayerListPannel_C::OnRequestFriendButtonClicked__DelegateSignature(class UCommonPlayerListPannel_C* TargetPlayerListPannel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "OnRequestFriendButtonClicked__DelegateSignature");

	Params::CommonPlayerListPannel_C_OnRequestFriendButtonClicked__DelegateSignature Parms{};

	Parms.TargetPlayerListPannel = TargetPlayerListPannel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestDirectChat__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::OnRequestDirectChat__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "OnRequestDirectChat__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.RequestTransitonMenu__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           MenuType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCommonPlayerListPannel_C::RequestTransitonMenu__DelegateSignature(const class FString& MenuType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "RequestTransitonMenu__DelegateSignature");

	Params::CommonPlayerListPannel_C_RequestTransitonMenu__DelegateSignature Parms{};

	Parms.MenuType = std::move(MenuType);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestBlockButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonPlayerListPannel_C*        TargetPlayerListPannel                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonPlayerListPannel_C::OnRequestBlockButtonClicked__DelegateSignature(class UCommonPlayerListPannel_C* TargetPlayerListPannel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "OnRequestBlockButtonClicked__DelegateSignature");

	Params::CommonPlayerListPannel_C_OnRequestBlockButtonClicked__DelegateSignature Parms{};

	Parms.TargetPlayerListPannel = TargetPlayerListPannel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestSearchButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonPlayerListPannel_C*        TargetPlayerListPannel                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonPlayerListPannel_C::OnRequestSearchButtonClicked__DelegateSignature(class UCommonPlayerListPannel_C* TargetPlayerListPannel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "OnRequestSearchButtonClicked__DelegateSignature");

	Params::CommonPlayerListPannel_C_OnRequestSearchButtonClicked__DelegateSignature Parms{};

	Parms.TargetPlayerListPannel = TargetPlayerListPannel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestConsentButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonPlayerListPannel_C*        TargetPlayerListPannel                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonPlayerListPannel_C::OnRequestConsentButtonClicked__DelegateSignature(class UCommonPlayerListPannel_C* TargetPlayerListPannel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "OnRequestConsentButtonClicked__DelegateSignature");

	Params::CommonPlayerListPannel_C_OnRequestConsentButtonClicked__DelegateSignature Parms{};

	Parms.TargetPlayerListPannel = TargetPlayerListPannel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestContactButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonPlayerListPannel_C*        TargetPlayerListPannel                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonPlayerListPannel_C::OnRequestContactButtonClicked__DelegateSignature(class UCommonPlayerListPannel_C* TargetPlayerListPannel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "OnRequestContactButtonClicked__DelegateSignature");

	Params::CommonPlayerListPannel_C_OnRequestContactButtonClicked__DelegateSignature Parms{};

	Parms.TargetPlayerListPannel = TargetPlayerListPannel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnCompleteAdventureCardSend__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::OnCompleteAdventureCardSend__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "OnCompleteAdventureCardSend__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestMailInBoxButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonPlayerListPannel_C*        TargetPlayerListPannel                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonPlayerListPannel_C::OnRequestMailInBoxButtonClicked__DelegateSignature(class UCommonPlayerListPannel_C* TargetPlayerListPannel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "OnRequestMailInBoxButtonClicked__DelegateSignature");

	Params::CommonPlayerListPannel_C_OnRequestMailInBoxButtonClicked__DelegateSignature Parms{};

	Parms.TargetPlayerListPannel = TargetPlayerListPannel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestGuildMemberButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonPlayerListPannel_C*        TargetPlayerListPannel                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonPlayerListPannel_C::OnRequestGuildMemberButtonClicked__DelegateSignature(class UCommonPlayerListPannel_C* TargetPlayerListPannel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "OnRequestGuildMemberButtonClicked__DelegateSignature");

	Params::CommonPlayerListPannel_C_OnRequestGuildMemberButtonClicked__DelegateSignature Parms{};

	Parms.TargetPlayerListPannel = TargetPlayerListPannel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestGuildMemberInviteCancel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::OnRequestGuildMemberInviteCancel__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "OnRequestGuildMemberInviteCancel__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestDungeonPartyMemberButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonPlayerListPannel_C*        TargetPlayerListPannel                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonPlayerListPannel_C::OnRequestDungeonPartyMemberButtonClicked__DelegateSignature(class UCommonPlayerListPannel_C* TargetPlayerListPannel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "OnRequestDungeonPartyMemberButtonClicked__DelegateSignature");

	Params::CommonPlayerListPannel_C_OnRequestDungeonPartyMemberButtonClicked__DelegateSignature Parms{};

	Parms.TargetPlayerListPannel = TargetPlayerListPannel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.SendLikeEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::SendLikeEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "SendLikeEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnPlayerProfileClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::OnPlayerProfileClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "OnPlayerProfileClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnUpdateBlackList__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::OnUpdateBlackList__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "OnUpdateBlackList__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.ExecuteUbergraph_CommonPlayerListPannel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonPlayerListPannel_C::ExecuteUbergraph_CommonPlayerListPannel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "ExecuteUbergraph_CommonPlayerListPannel");

	Params::CommonPlayerListPannel_C_ExecuteUbergraph_CommonPlayerListPannel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.UpdateInfoAll
// (BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::UpdateInfoAll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "UpdateInfoAll");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetLikeSendPannelMode
// (BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::SetLikeSendPannelMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "SetLikeSendPannelMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnCheckBlockStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bCheckBlockStatus                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonPlayerListPannel_C::OnCheckBlockStatus(const bool bCheckBlockStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "OnCheckBlockStatus");

	Params::CommonPlayerListPannel_C_OnCheckBlockStatus Parms{};

	Parms.bCheckBlockStatus = bCheckBlockStatus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnSendAdvCard
// (BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::OnSendAdvCard()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "OnSendAdvCard");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnUpdateBlackListEvent
// (BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::OnUpdateBlackListEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "OnUpdateBlackListEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.BndEvt__CommonPlayerListPannel_LikeBtn_K2Node_ComponentBoundEvent_0_BtnEventComplete__DelegateSignature
// (BlueprintEvent)

void UCommonPlayerListPannel_C::BndEvt__CommonPlayerListPannel_LikeBtn_K2Node_ComponentBoundEvent_0_BtnEventComplete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "BndEvt__CommonPlayerListPannel_LikeBtn_K2Node_ComponentBoundEvent_0_BtnEventComplete__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.PlayerProfile_OnClose_Event
// (BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::PlayerProfile_OnClose_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "PlayerProfile_OnClose_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestTransitonMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           MenuType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCommonPlayerListPannel_C::OnRequestTransitonMenu(const class FString& MenuType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "OnRequestTransitonMenu");

	Params::CommonPlayerListPannel_C_OnRequestTransitonMenu Parms{};

	Parms.MenuType = std::move(MenuType);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnRequestDirectChat_Event
// (BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::OnRequestDirectChat_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "OnRequestDirectChat_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.Complete_OpenPlayerProfile_Event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasSuccessful                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPlayerProfileMenuDetailData     PlayerProfileDetailMenuData                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonPlayerListPannel_C::Complete_OpenPlayerProfile_Event(const bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "Complete_OpenPlayerProfile_Event");

	Params::CommonPlayerListPannel_C_Complete_OpenPlayerProfile_Event Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.PlayerProfileDetailMenuData = std::move(PlayerProfileDetailMenuData);
	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.OpenPlayerProfile
// (BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::OpenPlayerProfile()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "OpenPlayerProfile");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetCaptureImageFace
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Download                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonPlayerListPannel_C::SetCaptureImageFace(bool Download)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "SetCaptureImageFace");

	Params::CommonPlayerListPannel_C_SetCaptureImageFace Parms{};

	Parms.Download = Download;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.SendLike
// (BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::SendLike()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "SendLike");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetCommonProfileData
// (BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::SetCommonProfileData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "SetCommonProfileData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonPlayerListPannel_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "PreConstruct");

	Params::CommonPlayerListPannel_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCommonPlayerListPannel_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCommonPlayerListPannel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.SelectProfileButtonStyle_Event
// (BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::SelectProfileButtonStyle_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "SelectProfileButtonStyle_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.ClearBlackListButtonStyle_Event
// (BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::ClearBlackListButtonStyle_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "ClearBlackListButtonStyle_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.ClearProfileButtonStyle_Event
// (BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::ClearProfileButtonStyle_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "ClearProfileButtonStyle_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.InitGuildMember
// (BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::InitGuildMember()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "InitGuildMember");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetGuildMemberPannelMode
// (BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::SetGuildMemberPannelMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "SetGuildMemberPannelMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnCharactersAdventurerCardSendDelegate_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasSuccessful                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSendAdventureCardResult         SendAdventureCardResult                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UCommonPlayerListPannel_C::OnCharactersAdventurerCardSendDelegate_Event(const bool bWasSuccessful, const struct FSendAdventureCardResult& SendAdventureCardResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "OnCharactersAdventurerCardSendDelegate_Event");

	Params::CommonPlayerListPannel_C_OnCharactersAdventurerCardSendDelegate_Event Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.SendAdventureCardResult = std::move(SendAdventureCardResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.BndEvt__CommonPlayerListPannel_Pannel_Btn_Short_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCommonPlayerListPannel_C::BndEvt__CommonPlayerListPannel_Pannel_Btn_Short_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "BndEvt__CommonPlayerListPannel_Pannel_Btn_Short_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.SendAdventureCard
// (BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::SendAdventureCard()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "SendAdventureCard");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.BndEvt__CommonPlayerListPannel_CardButton_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UCommonPlayerListPannel_C::BndEvt__CommonPlayerListPannel_CardButton_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "BndEvt__CommonPlayerListPannel_CardButton_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.BndEvt__CommonPlayerListPannel_PannelBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCommonPlayerListPannel_C::BndEvt__CommonPlayerListPannel_PannelBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "BndEvt__CommonPlayerListPannel_PannelBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.OnCompleteChangeConvocationDelegate_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bConvocation                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonPlayerListPannel_C::OnCompleteChangeConvocationDelegate_Event(const bool bConvocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "OnCompleteChangeConvocationDelegate_Event");

	Params::CommonPlayerListPannel_C_OnCompleteChangeConvocationDelegate_Event Parms{};

	Parms.bConvocation = bConvocation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetPartyMemberProfileData
// (BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::SetPartyMemberProfileData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "SetPartyMemberProfileData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetVisibleConvocation
// (BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::SetVisibleConvocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "SetVisibleConvocation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.EnableInviteCommand
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonPlayerListPannel_C::EnableInviteCommand(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "EnableInviteCommand");

	Params::CommonPlayerListPannel_C_EnableInviteCommand Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetPartyMemberPannelMode
// (BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::SetPartyMemberPannelMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "SetPartyMemberPannelMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.InitPartyMember
// (BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::InitPartyMember()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "InitPartyMember");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.UpdateFriend
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPlayerPannelTypeEnum                   NewPlayerPannelMode                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayerProfileSummaryData        NewPlayerProfileSummaryData                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommonPlayerListPannel_C::UpdateFriend(EPlayerPannelTypeEnum NewPlayerPannelMode, const struct FPlayerProfileSummaryData& NewPlayerProfileSummaryData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "UpdateFriend");

	Params::CommonPlayerListPannel_C_UpdateFriend Parms{};

	Parms.NewPlayerPannelMode = NewPlayerPannelMode;
	Parms.NewPlayerProfileSummaryData = std::move(NewPlayerProfileSummaryData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetFriendMemberPannelMode
// (BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::SetFriendMemberPannelMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "SetFriendMemberPannelMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.InitFriend
// (BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::InitFriend()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "InitFriend");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.UpdateSearch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPlayerPannelTypeEnum                   NewPlayerPannelMode                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayerProfileSummaryData        NewPlayerProfileSummaryData                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommonPlayerListPannel_C::UpdateSearch(EPlayerPannelTypeEnum NewPlayerPannelMode, const struct FPlayerProfileSummaryData& NewPlayerProfileSummaryData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "UpdateSearch");

	Params::CommonPlayerListPannel_C_UpdateSearch Parms{};

	Parms.NewPlayerPannelMode = NewPlayerPannelMode;
	Parms.NewPlayerProfileSummaryData = std::move(NewPlayerProfileSummaryData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetGuildMemberData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuildMemberData                 Param_GuildMemberData                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    Param_bGuildMemberInviteList                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonPlayerListPannel_C::SetGuildMemberData(const struct FGuildMemberData& Param_GuildMemberData, bool Param_bGuildMemberInviteList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "SetGuildMemberData");

	Params::CommonPlayerListPannel_C_SetGuildMemberData Parms{};

	Parms.Param_GuildMemberData = std::move(Param_GuildMemberData);
	Parms.Param_bGuildMemberInviteList = Param_bGuildMemberInviteList;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetSearchPlayerPannelMode
// (BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::SetSearchPlayerPannelMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "SetSearchPlayerPannelMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.InitSearch
// (BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::InitSearch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "InitSearch");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.UpdateBlock
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPlayerPannelTypeEnum                   NewPlayerPannelMode                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayerProfileSummaryData        NewPlayerProfileSummaryData                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommonPlayerListPannel_C::UpdateBlock(EPlayerPannelTypeEnum NewPlayerPannelMode, const struct FPlayerProfileSummaryData& NewPlayerProfileSummaryData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "UpdateBlock");

	Params::CommonPlayerListPannel_C_UpdateBlock Parms{};

	Parms.NewPlayerPannelMode = NewPlayerPannelMode;
	Parms.NewPlayerProfileSummaryData = std::move(NewPlayerProfileSummaryData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.InitBlock
// (BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::InitBlock()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "InitBlock");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetBlockPannelMode
// (BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::SetBlockPannelMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "SetBlockPannelMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.UpdateConsent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPlayerPannelTypeEnum                   NewPlayerPannelMode                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FContactListData                 NewContactListData                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommonPlayerListPannel_C::UpdateConsent(EPlayerPannelTypeEnum NewPlayerPannelMode, const struct FContactListData& NewContactListData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "UpdateConsent");

	Params::CommonPlayerListPannel_C_UpdateConsent Parms{};

	Parms.NewPlayerPannelMode = NewPlayerPannelMode;
	Parms.NewContactListData = std::move(NewContactListData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetConsentPlayerPannelMode
// (BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::SetConsentPlayerPannelMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "SetConsentPlayerPannelMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.InitConsent
// (BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::InitConsent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "InitConsent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.UpdateContact
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPlayerPannelTypeEnum                   NewPlayerPannelMode                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FContactListData                 NewContactListData                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommonPlayerListPannel_C::UpdateContact(EPlayerPannelTypeEnum NewPlayerPannelMode, const struct FContactListData& NewContactListData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "UpdateContact");

	Params::CommonPlayerListPannel_C_UpdateContact Parms{};

	Parms.NewPlayerPannelMode = NewPlayerPannelMode;
	Parms.NewContactListData = std::move(NewContactListData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetContactPlayerPannelMode
// (BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::SetContactPlayerPannelMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "SetContactPlayerPannelMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.InitContact
// (BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::InitContact()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "InitContact");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.InitLikeSendPlayerList
// (BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::InitLikeSendPlayerList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "InitLikeSendPlayerList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetMailInBoxPlayerPannelMode
// (BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::SetMailInBoxPlayerPannelMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "SetMailInBoxPlayerPannelMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.InitMailInbox
// (BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::InitMailInbox()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "InitMailInbox");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetSendLikeInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bIsSendLike                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonPlayerListPannel_C::SetSendLikeInfo(bool Param_bIsSendLike)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "SetSendLikeInfo");

	Params::CommonPlayerListPannel_C_SetSendLikeInfo Parms{};

	Parms.Param_bIsSendLike = Param_bIsSendLike;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.IsOwnPartyLeader
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UCommonPlayerListPannel_C::IsOwnPartyLeader()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "IsOwnPartyLeader");

	Params::CommonPlayerListPannel_C_IsOwnPartyLeader Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetEmpty
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::SetEmpty()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "SetEmpty");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetEnableCommandModeButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonPlayerListPannel_C::SetEnableCommandModeButton(bool InEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "SetEnableCommandModeButton");

	Params::CommonPlayerListPannel_C_SetEnableCommandModeButton Parms{};

	Parms.InEnable = InEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.IsCommandMode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InMyCharacterId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    IsPromoteMember                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonPlayerListPannel_C::IsCommandMode(const class FString& InMyCharacterId, bool IsPromoteMember, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "IsCommandMode");

	Params::CommonPlayerListPannel_C_IsCommandMode Parms{};

	Parms.InMyCharacterId = std::move(InMyCharacterId);
	Parms.IsPromoteMember = IsPromoteMember;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetPlayerName
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::SetPlayerName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "SetPlayerName");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetFriendIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::SetFriendIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "SetFriendIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetFaceImage
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::SetFaceImage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "SetFaceImage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetClassIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::SetClassIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "SetClassIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetClassLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::SetClassLevel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "SetClassLevel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetComment
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::SetComment()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "SetComment");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetTensionTagIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::SetTensionTagIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "SetTensionTagIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetOnlineStateTagInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::SetOnlineStateTagInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "SetOnlineStateTagInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.PreSetParty
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::PreSetParty()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "PreSetParty");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.PreSetFriend
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::PreSetFriend()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "PreSetFriend");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.IsSelected
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bSelected                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonPlayerListPannel_C::IsSelected(bool* Param_bSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "IsSelected");

	Params::CommonPlayerListPannel_C_IsSelected Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_bSelected != nullptr)
		*Param_bSelected = Parms.Param_bSelected;
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.PreSetSearch
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::PreSetSearch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "PreSetSearch");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.Set Profile Variables
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::Set_Profile_Variables()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "Set Profile Variables");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.PreSetBlock
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::PreSetBlock()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "PreSetBlock");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.TurnOnCommonUI
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::TurnOnCommonUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "TurnOnCommonUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.RefreshPannel
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::RefreshPannel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "RefreshPannel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.CheckProfileEnable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBProfilePublicSettingType             PublicSetting                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsFriend                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsOk                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonPlayerListPannel_C::CheckProfileEnable(ESBProfilePublicSettingType PublicSetting, bool IsFriend, bool* IsOk)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "CheckProfileEnable");

	Params::CommonPlayerListPannel_C_CheckProfileEnable Parms{};

	Parms.PublicSetting = PublicSetting;
	Parms.IsFriend = IsFriend;

	UObject::ProcessEvent(Func, &Parms);

	if (IsOk != nullptr)
		*IsOk = Parms.IsOk;
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.Set Like Btn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSendLIke                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   OnlineStatus                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsPSOnlyDiff                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonPlayerListPannel_C::Set_Like_Btn(bool IsSendLIke, int32 OnlineStatus, bool IsPSOnlyDiff)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "Set Like Btn");

	Params::CommonPlayerListPannel_C_Set_Like_Btn Parms{};

	Parms.IsSendLIke = IsSendLIke;
	Parms.OnlineStatus = OnlineStatus;
	Parms.IsPSOnlyDiff = IsPSOnlyDiff;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.CreateResponseWaitUIblocker
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::CreateResponseWaitUIblocker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "CreateResponseWaitUIblocker");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.DeleteResponseWaitUIblocker
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::DeleteResponseWaitUIblocker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "DeleteResponseWaitUIblocker");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.PreSetMailInBox
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::PreSetMailInBox()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "PreSetMailInBox");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.PreSetGuild
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::PreSetGuild()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "PreSetGuild");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetGuildRoleIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::SetGuildRoleIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "SetGuildRoleIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetPannelVersion
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::SetPannelVersion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "SetPannelVersion");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.PreSetLikeSend
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::PreSetLikeSend()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "PreSetLikeSend");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.InitLikeBtn
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::InitLikeBtn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "InitLikeBtn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetPartyIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::SetPartyIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "SetPartyIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.PreSetContact
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::PreSetContact()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "PreSetContact");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.PreSetConsent
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::PreSetConsent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "PreSetConsent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.Show Player Profile Error Message
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InTextNameId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InTextID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonPlayerListPannel_C::Show_Player_Profile_Error_Message(class FName InTextNameId, int32 InTextID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "Show Player Profile Error Message");

	Params::CommonPlayerListPannel_C_Show_Player_Profile_Error_Message Parms{};

	Parms.InTextNameId = InTextNameId;
	Parms.InTextID = InTextID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.ShowSendAdventureCardError
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    InWasSuccessful                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSendAdventureCardResult         InSendAdventureResult                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UCommonPlayerListPannel_C::ShowSendAdventureCardError(bool InWasSuccessful, const struct FSendAdventureCardResult& InSendAdventureResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "ShowSendAdventureCardError");

	Params::CommonPlayerListPannel_C_ShowSendAdventureCardError Parms{};

	Parms.InWasSuccessful = InWasSuccessful;
	Parms.InSendAdventureResult = std::move(InSendAdventureResult);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.BindPlayerProfile
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::BindPlayerProfile()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "BindPlayerProfile");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.UnbindPlayerProfile
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::UnbindPlayerProfile()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "UnbindPlayerProfile");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetErrorType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InWarning                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonPlayerListPannel_C::SetErrorType(int32 InWarning)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "SetErrorType");

	Params::CommonPlayerListPannel_C_SetErrorType Parms{};

	Parms.InWarning = InWarning;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.CheckOpenAdventureCard
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   InWarning                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsOpen                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonPlayerListPannel_C::CheckOpenAdventureCard(int32 InWarning, bool* IsOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "CheckOpenAdventureCard");

	Params::CommonPlayerListPannel_C_CheckOpenAdventureCard Parms{};

	Parms.InWarning = InWarning;

	UObject::ProcessEvent(Func, &Parms);

	if (IsOpen != nullptr)
		*IsOpen = Parms.IsOpen;
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.UpdatePlayerName
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::UpdatePlayerName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "UpdatePlayerName");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.UpdatePlayerCommet
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCommonPlayerListPannel_C::UpdatePlayerCommet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "UpdatePlayerCommet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.UpdatePlayerIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Download                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonPlayerListPannel_C::UpdatePlayerIcon(bool* Download)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "UpdatePlayerIcon");

	Params::CommonPlayerListPannel_C_UpdatePlayerIcon Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Download != nullptr)
		*Download = Parms.Download;
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.Set Is PSOnly Diff
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBPlatformInfo                  Platform_Info                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommonPlayerListPannel_C::Set_Is_PSOnly_Diff(const struct FSBPlatformInfo& Platform_Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "Set Is PSOnly Diff");

	Params::CommonPlayerListPannel_C_Set_Is_PSOnly_Diff Parms{};

	Parms.Platform_Info = std::move(Platform_Info);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.SetFriendProgressText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDateTime                        InProgressDate                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    InExtraVisible                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonPlayerListPannel_C::SetFriendProgressText(const struct FDateTime& InProgressDate, bool InExtraVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "SetFriendProgressText");

	Params::CommonPlayerListPannel_C_SetFriendProgressText Parms{};

	Parms.InProgressDate = std::move(InProgressDate);
	Parms.InExtraVisible = InExtraVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonPlayerListPannel.CommonPlayerListPannel_C.UpdateCommandBtnStatus
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsVisible                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonPlayerListPannel_C::UpdateCommandBtnStatus(bool bIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPlayerListPannel_C", "UpdateCommandBtnStatus");

	Params::CommonPlayerListPannel_C_UpdateCommandBtnStatus Parms{};

	Parms.bIsVisible = bIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}

}

