#pragma once

 

// Package: PlayerProfile

#include "Basic.hpp"

#include "PlayerProfile_classes.hpp"
#include "PlayerProfile_parameters.hpp"


namespace SDK
{

// Function PlayerProfile.PlayerProfile_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UPlayerProfile_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.UpdateFollowData__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerProfileMenuDetailData     Param_DetailData                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    IsUnFollow                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerProfile_C::UpdateFollowData__DelegateSignature(const struct FPlayerProfileMenuDetailData& Param_DetailData, bool IsUnFollow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "UpdateFollowData__DelegateSignature");

	Params::PlayerProfile_C_UpdateFollowData__DelegateSignature Parms{};

	Parms.Param_DetailData = std::move(Param_DetailData);
	Parms.IsUnFollow = IsUnFollow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerProfile.PlayerProfile_C.AddBlackList__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerProfileMenuDetailData     ProfileData                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UPlayerProfile_C::AddBlackList__DelegateSignature(const struct FPlayerProfileMenuDetailData& ProfileData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "AddBlackList__DelegateSignature");

	Params::PlayerProfile_C_AddBlackList__DelegateSignature Parms{};

	Parms.ProfileData = std::move(ProfileData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerProfile.PlayerProfile_C.OnRequestDirectChat__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UPlayerProfile_C::OnRequestDirectChat__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "OnRequestDirectChat__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.OnDestruct__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerProfileMenuDetailData     Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UPlayerProfile_C::OnDestruct__DelegateSignature(const struct FPlayerProfileMenuDetailData& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "OnDestruct__DelegateSignature");

	Params::PlayerProfile_C_OnDestruct__DelegateSignature Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerProfile.PlayerProfile_C.RequestTransitionMenu__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           MenuType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UPlayerProfile_C::RequestTransitionMenu__DelegateSignature(const class FString& MenuType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "RequestTransitionMenu__DelegateSignature");

	Params::PlayerProfile_C_RequestTransitionMenu__DelegateSignature Parms{};

	Parms.MenuType = std::move(MenuType);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerProfile.PlayerProfile_C.RemoveBlackList__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UPlayerProfile_C::RemoveBlackList__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "RemoveBlackList__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.OnNotificationBlackListed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UPlayerProfile_C::OnNotificationBlackListed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "OnNotificationBlackListed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.OnDestructForPlayerList__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerProfileMenuDetailData     Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    AnyClose                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerProfile_C::OnDestructForPlayerList__DelegateSignature(const struct FPlayerProfileMenuDetailData& Data, bool AnyClose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "OnDestructForPlayerList__DelegateSignature");

	Params::PlayerProfile_C_OnDestructForPlayerList__DelegateSignature Parms{};

	Parms.Data = std::move(Data);
	Parms.AnyClose = AnyClose;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerProfile.PlayerProfile_C.OnTravel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UPlayerProfile_C::OnTravel__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "OnTravel__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.OnSendLikeEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UPlayerProfile_C::OnSendLikeEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "OnSendLikeEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.OnUpdateBlackList__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UPlayerProfile_C::OnUpdateBlackList__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "OnUpdateBlackList__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.OnSendAdventureCard__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UPlayerProfile_C::OnSendAdventureCard__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "OnSendAdventureCard__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.OnClickedPhotoLikeBtn__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                           OutLikeCountList                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<bool>                            OutLikeBtnEnbaleList                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPlayerProfile_C::OnClickedPhotoLikeBtn__DelegateSignature(TArray<int32>& OutLikeCountList, TArray<bool>& OutLikeBtnEnbaleList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "OnClickedPhotoLikeBtn__DelegateSignature");

	Params::PlayerProfile_C_OnClickedPhotoLikeBtn__DelegateSignature Parms{};

	Parms.OutLikeCountList = std::move(OutLikeCountList);
	Parms.OutLikeBtnEnbaleList = std::move(OutLikeBtnEnbaleList);

	UObject::ProcessEvent(Func, &Parms);

	OutLikeCountList = std::move(Parms.OutLikeCountList);
	OutLikeBtnEnbaleList = std::move(Parms.OutLikeBtnEnbaleList);
}


// Function PlayerProfile.PlayerProfile_C.ExecuteUbergraph_PlayerProfile
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerProfile_C::ExecuteUbergraph_PlayerProfile(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "ExecuteUbergraph_PlayerProfile");

	Params::PlayerProfile_C_ExecuteUbergraph_PlayerProfile Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerProfile.PlayerProfile_C.BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_9_OnCliked_PhotoLikeBtn__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// TArray<int32>                           OutLikeCountList                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<bool>                            OutLikeBtnEnableList                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPlayerProfile_C::BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_9_OnCliked_PhotoLikeBtn__DelegateSignature(TArray<int32>& OutLikeCountList, TArray<bool>& OutLikeBtnEnableList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_9_OnCliked_PhotoLikeBtn__DelegateSignature");

	Params::PlayerProfile_C_BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_9_OnCliked_PhotoLikeBtn__DelegateSignature Parms{};

	Parms.OutLikeCountList = std::move(OutLikeCountList);
	Parms.OutLikeBtnEnableList = std::move(OutLikeBtnEnableList);

	UObject::ProcessEvent(Func, &Parms);

	OutLikeCountList = std::move(Parms.OutLikeCountList);
	OutLikeBtnEnableList = std::move(Parms.OutLikeBtnEnableList);
}


// Function PlayerProfile.PlayerProfile_C.ProductDetailMenuCloseEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_ProductDetailMenu_C*         Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerProfile_C::ProductDetailMenuCloseEvent(class UUMG_ProductDetailMenu_C* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "ProductDetailMenuCloseEvent");

	Params::PlayerProfile_C_ProductDetailMenuCloseEvent Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerProfile.PlayerProfile_C.BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_3_OnClickedEquipList__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   OutItemId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           OutUniqueId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UPlayerProfile_C::BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_3_OnClickedEquipList__DelegateSignature(int32 OutItemId, const class FString& OutUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_3_OnClickedEquipList__DelegateSignature");

	Params::PlayerProfile_C_BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_3_OnClickedEquipList__DelegateSignature Parms{};

	Parms.OutItemId = OutItemId;
	Parms.OutUniqueId = std::move(OutUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerProfile.PlayerProfile_C.SetAdventureCardFrame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InItemID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerProfile_C::SetAdventureCardFrame(int32 InItemID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "SetAdventureCardFrame");

	Params::PlayerProfile_C_SetAdventureCardFrame Parms{};

	Parms.InItemID = InItemID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerProfile.PlayerProfile_C.SetBgPattern
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InItemID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerProfile_C::SetBgPattern(int32 InItemID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "SetBgPattern");

	Params::PlayerProfile_C_SetBgPattern Parms{};

	Parms.InItemID = InItemID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerProfile.PlayerProfile_C.SetDecoFrame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InItemID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                           InWG                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerProfile_C::SetDecoFrame(int32 InItemID, class UImage* InWG)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "SetDecoFrame");

	Params::PlayerProfile_C_SetDecoFrame Parms{};

	Parms.InItemID = InItemID;
	Parms.InWG = InWG;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerProfile.PlayerProfile_C.OnCheckBlockStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bCheckBlockStatus                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerProfile_C::OnCheckBlockStatus(const bool bCheckBlockStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "OnCheckBlockStatus");

	Params::PlayerProfile_C_OnCheckBlockStatus Parms{};

	Parms.bCheckBlockStatus = bCheckBlockStatus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerProfile.PlayerProfile_C.RemoveBlackListEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Condition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerProfile_C::RemoveBlackListEvent(bool Condition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "RemoveBlackListEvent");

	Params::PlayerProfile_C_RemoveBlackListEvent Parms{};

	Parms.Condition = Condition;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerProfile.PlayerProfile_C.AddBlackListEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Condition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerProfile_C::AddBlackListEvent(bool Condition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "AddBlackListEvent");

	Params::PlayerProfile_C_AddBlackListEvent Parms{};

	Parms.Condition = Condition;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerProfile.PlayerProfile_C.OnClosedFromPlayerReport
// (BlueprintCallable, BlueprintEvent)

void UPlayerProfile_C::OnClosedFromPlayerReport()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "OnClosedFromPlayerReport");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)

void UPlayerProfile_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "CustomEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.BndEvt__BtnInviteGuild_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UPlayerProfile_C::BndEvt__BtnInviteGuild_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "BndEvt__BtnInviteGuild_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)

void UPlayerProfile_C::WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.WidgetAnimationEvt_GuildDetailsAnimOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UPlayerProfile_C::WidgetAnimationEvt_GuildDetailsAnimOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "WidgetAnimationEvt_GuildDetailsAnimOut_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.GuildDetailsClose
// (BlueprintCallable, BlueprintEvent)

void UPlayerProfile_C::GuildDetailsClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "GuildDetailsClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.PhotoViewerCloseCompleteEvent
// (BlueprintCallable, BlueprintEvent)

void UPlayerProfile_C::PhotoViewerCloseCompleteEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "PhotoViewerCloseCompleteEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_8_OnClickedThumbnail__DelegateSignature
// (BlueprintEvent)

void UPlayerProfile_C::BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_8_OnClickedThumbnail__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_8_OnClickedThumbnail__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.BndEvt__PlayerProfile_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature
// (BlueprintEvent)

void UPlayerProfile_C::BndEvt__PlayerProfile_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "BndEvt__PlayerProfile_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.SendLike
// (BlueprintCallable, BlueprintEvent)

void UPlayerProfile_C::SendLike()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "SendLike");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.Initialize Guilds
// (BlueprintCallable, BlueprintEvent)

void UPlayerProfile_C::Initialize_Guilds()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "Initialize Guilds");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.OnGetBlackListDataEvent
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasSuccessful                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FPlayerProfileSummaryData>Param_CharacterName                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   TotalPageNum                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CurrentPageNum                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerProfile_C::OnGetBlackListDataEvent(const bool bWasSuccessful, const TArray<struct FPlayerProfileSummaryData>& Param_CharacterName, const int32 TotalPageNum, const int32 CurrentPageNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "OnGetBlackListDataEvent");

	Params::PlayerProfile_C_OnGetBlackListDataEvent Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.Param_CharacterName = std::move(Param_CharacterName);
	Parms.TotalPageNum = TotalPageNum;
	Parms.CurrentPageNum = CurrentPageNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerProfile.PlayerProfile_C.BndEvt__BtnClose3_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerProfile_C::BndEvt__BtnClose3_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "BndEvt__BtnClose3_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.SendFriend
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasSuccessful                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSendAdventureCardResult         SendAdventureCardResult                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UPlayerProfile_C::SendFriend(const bool bWasSuccessful, const struct FSendAdventureCardResult& SendAdventureCardResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "SendFriend");

	Params::PlayerProfile_C_SendFriend Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.SendAdventureCardResult = std::move(SendAdventureCardResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerProfile.PlayerProfile_C.Teleport
// (BlueprintCallable, BlueprintEvent)

void UPlayerProfile_C::Teleport()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "Teleport");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.BndEvt__BtnReport_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UPlayerProfile_C::BndEvt__BtnReport_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "BndEvt__BtnReport_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.OnInvited
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerProfile_C::OnInvited(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "OnInvited");

	Params::PlayerProfile_C_OnInvited Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerProfile.PlayerProfile_C.OnTeleport_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EYesNoDialogResult                      Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerProfile_C::OnTeleport_Event(const EYesNoDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "OnTeleport_Event");

	Params::PlayerProfile_C_OnTeleport_Event Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerProfile.PlayerProfile_C.OnNotifyBlocked_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasSuccessful                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerProfile_C::OnNotifyBlocked_Event(const bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "OnNotifyBlocked_Event");

	Params::PlayerProfile_C_OnNotifyBlocked_Event Parms{};

	Parms.bWasSuccessful = bWasSuccessful;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerProfile.PlayerProfile_C.OnNotificationBlackListedDelegate_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bBlackListed                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           SenderId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UPlayerProfile_C::OnNotificationBlackListedDelegate_Event(const bool bBlackListed, const class FString& SenderId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "OnNotificationBlackListedDelegate_Event");

	Params::PlayerProfile_C_OnNotificationBlackListedDelegate_Event Parms{};

	Parms.bBlackListed = bBlackListed;
	Parms.SenderId = std::move(SenderId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerProfile.PlayerProfile_C.OnGuildDataArriverd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerProfile_C::OnGuildDataArriverd(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "OnGuildDataArriverd");

	Params::PlayerProfile_C_OnGuildDataArriverd Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerProfile.PlayerProfile_C.CloseByQuickAccess
// (BlueprintCallable, BlueprintEvent)

void UPlayerProfile_C::CloseByQuickAccess()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "CloseByQuickAccess");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.BndEvt__PlayerProfileFollowBtn_K2Node_ComponentBoundEvent_4_EventClicked__DelegateSignature
// (BlueprintEvent)

void UPlayerProfile_C::BndEvt__PlayerProfileFollowBtn_K2Node_ComponentBoundEvent_4_EventClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "BndEvt__PlayerProfileFollowBtn_K2Node_ComponentBoundEvent_4_EventClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.BndEvt__BtnDirectChat_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UPlayerProfile_C::BndEvt__BtnDirectChat_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "BndEvt__BtnDirectChat_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.BndEvt__BtnInvite_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UPlayerProfile_C::BndEvt__BtnInvite_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "BndEvt__BtnInvite_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.BndEvt__BtnBlackList_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UPlayerProfile_C::BndEvt__BtnBlackList_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "BndEvt__BtnBlackList_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.BndEvt__BtnClose2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPlayerProfile_C::BndEvt__BtnClose2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "BndEvt__BtnClose2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.OnCloseParentsMenu
// (BlueprintCallable, BlueprintEvent)

void UPlayerProfile_C::OnCloseParentsMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "OnCloseParentsMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerProfile_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "OnAnimationFinished");

	Params::PlayerProfile_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerProfile.PlayerProfile_C.Matched_Cancel_Invite_Dialog_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EYesNoDialogResult                      Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerProfile_C::Matched_Cancel_Invite_Dialog_Event(const EYesNoDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "Matched_Cancel_Invite_Dialog_Event");

	Params::PlayerProfile_C_Matched_Cancel_Invite_Dialog_Event Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerProfile.PlayerProfile_C.OnPress_Cancel
// (Event, Public, BlueprintEvent)

void UPlayerProfile_C::OnPress_Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "OnPress_Cancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.PartyInvite_Dialog_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EYesNoDialogResult                      Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerProfile_C::PartyInvite_Dialog_Event(const EYesNoDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "PartyInvite_Dialog_Event");

	Params::PlayerProfile_C_PartyInvite_Dialog_Event Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerProfile.PlayerProfile_C.OnRemoveBlackListPlayerDelegate_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasSuccessful                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerProfile_C::OnRemoveBlackListPlayerDelegate_Event(const bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "OnRemoveBlackListPlayerDelegate_Event");

	Params::PlayerProfile_C_OnRemoveBlackListPlayerDelegate_Event Parms{};

	Parms.bWasSuccessful = bWasSuccessful;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerProfile.PlayerProfile_C.OnAddBlackListPlayerDelegate_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasSuccessful                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerProfile_C::OnAddBlackListPlayerDelegate_Event(const bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "OnAddBlackListPlayerDelegate_Event");

	Params::PlayerProfile_C_OnAddBlackListPlayerDelegate_Event Parms{};

	Parms.bWasSuccessful = bWasSuccessful;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerProfile.PlayerProfile_C.BndEvt__BtnCheckGuild_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UPlayerProfile_C::BndEvt__BtnCheckGuild_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "BndEvt__BtnCheckGuild_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.BlackListDialogResult
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EYesNoDialogResult                      Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerProfile_C::BlackListDialogResult(const EYesNoDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "BlackListDialogResult");

	Params::PlayerProfile_C_BlackListDialogResult Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerProfile.PlayerProfile_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerProfile_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerProfile_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.OnPress_QuickAccess
// (Event, Public, BlueprintEvent)
// Parameters:
// ESBKeyConfigAction                      QuickAccess                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerProfile_C::OnPress_QuickAccess(ESBKeyConfigAction QuickAccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "OnPress_QuickAccess");

	Params::PlayerProfile_C_OnPress_QuickAccess Parms{};

	Parms.QuickAccess = QuickAccess;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerProfile.PlayerProfile_C.UnbindGuildDetailDelegate
// (BlueprintCallable, BlueprintEvent)

void UPlayerProfile_C::UnbindGuildDetailDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "UnbindGuildDetailDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.OnCompletedGuildEntry_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerProfile_C::OnCompletedGuildEntry_Event(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "OnCompletedGuildEntry_Event");

	Params::PlayerProfile_C_OnCompletedGuildEntry_Event Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerProfile.PlayerProfile_C.WidgetAnimationEvt_GuildDetailsAnimIn_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UPlayerProfile_C::WidgetAnimationEvt_GuildDetailsAnimIn_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "WidgetAnimationEvt_GuildDetailsAnimIn_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.OnGetedGuildDetailData_Event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuildData                       InGuildData                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPlayerProfile_C::OnGetedGuildDetailData_Event(const int32 RetCode, const struct FGuildData& InGuildData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "OnGetedGuildDetailData_Event");

	Params::PlayerProfile_C_OnGetedGuildDetailData_Event Parms{};

	Parms.RetCode = RetCode;
	Parms.InGuildData = std::move(InGuildData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerProfile.PlayerProfile_C.OnLoaded_BE02DCD94EFDE6E554F688BC1FAD60E4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerProfile_C::OnLoaded_BE02DCD94EFDE6E554F688BC1FAD60E4(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "OnLoaded_BE02DCD94EFDE6E554F688BC1FAD60E4");

	Params::PlayerProfile_C_OnLoaded_BE02DCD94EFDE6E554F688BC1FAD60E4 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerProfile.PlayerProfile_C.OnLoaded_43D4BE074FD0F5F77DAF339AD524CE67
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerProfile_C::OnLoaded_43D4BE074FD0F5F77DAF339AD524CE67(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "OnLoaded_43D4BE074FD0F5F77DAF339AD524CE67");

	Params::PlayerProfile_C_OnLoaded_43D4BE074FD0F5F77DAF339AD524CE67 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerProfile.PlayerProfile_C.OnLoaded_112687964F2BE7FAB45CE180EB11CC13
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerProfile_C::OnLoaded_112687964F2BE7FAB45CE180EB11CC13(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "OnLoaded_112687964F2BE7FAB45CE180EB11CC13");

	Params::PlayerProfile_C_OnLoaded_112687964F2BE7FAB45CE180EB11CC13 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerProfile.PlayerProfile_C.CloseMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerProfile_C::CloseMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "CloseMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerProfileMenuDetailData     Param_DetailData                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    IsFavorite                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsMe                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsDungeon                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsSaveName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsSearchMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerProfile_C::Init(const struct FPlayerProfileMenuDetailData& Param_DetailData, bool IsFavorite, bool IsMe, bool IsDungeon, bool IsSaveName, bool IsSearchMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "Init");

	Params::PlayerProfile_C_Init Parms{};

	Parms.Param_DetailData = std::move(Param_DetailData);
	Parms.IsFavorite = IsFavorite;
	Parms.IsMe = IsMe;
	Parms.IsDungeon = IsDungeon;
	Parms.IsSaveName = IsSaveName;
	Parms.IsSearchMode = IsSearchMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerProfile.PlayerProfile_C.Init_BlackList
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerProfile_C::Init_BlackList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "Init_BlackList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.UpdateFollow
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerProfile_C::UpdateFollow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "UpdateFollow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.SetLocationFollowerUIVisible
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerProfile_C::SetLocationFollowerUIVisible()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "SetLocationFollowerUIVisible");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.Get_AddBlackListTextLabel_Text_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UPlayerProfile_C::Get_AddBlackListTextLabel_Text_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "Get_AddBlackListTextLabel_Text_0");

	Params::PlayerProfile_C_Get_AddBlackListTextLabel_Text_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function PlayerProfile.PlayerProfile_C.Get_BlackListButtonText_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UPlayerProfile_C::Get_BlackListButtonText_Text_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "Get_BlackListButtonText_Text_0");

	Params::PlayerProfile_C_Get_BlackListButtonText_Text_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function PlayerProfile.PlayerProfile_C.Get_PartyInviteButton_Visibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UPlayerProfile_C::Get_PartyInviteButton_Visibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "Get_PartyInviteButton_Visibility_0");

	Params::PlayerProfile_C_Get_PartyInviteButton_Visibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function PlayerProfile.PlayerProfile_C.Get_DirectChatButton_Visibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UPlayerProfile_C::Get_DirectChatButton_Visibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "Get_DirectChatButton_Visibility_0");

	Params::PlayerProfile_C_Get_DirectChatButton_Visibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function PlayerProfile.PlayerProfile_C.Get_PartyInviteButton_bIsEnabled_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UPlayerProfile_C::Get_PartyInviteButton_bIsEnabled_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "Get_PartyInviteButton_bIsEnabled_0");

	Params::PlayerProfile_C_Get_PartyInviteButton_bIsEnabled_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function PlayerProfile.PlayerProfile_C.SetActivePartyInviteButton
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerProfile_C::SetActivePartyInviteButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "SetActivePartyInviteButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.SetActiveDirectChatButton
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerProfile_C::SetActiveDirectChatButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "SetActiveDirectChatButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.AllDataButtonDisabled
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerProfile_C::AllDataButtonDisabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "AllDataButtonDisabled");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.GetClassLevel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBClassType                            Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Exp                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Level                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerProfile_C::GetClassLevel(ESBClassType Type, int32 Exp, int32* Level)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "GetClassLevel");

	Params::PlayerProfile_C_GetClassLevel Parms{};

	Parms.Type = Type;
	Parms.Exp = Exp;

	UObject::ProcessEvent(Func, &Parms);

	if (Level != nullptr)
		*Level = Parms.Level;
}


// Function PlayerProfile.PlayerProfile_C.UpdateClassData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerProfileMenuDetailData     Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UPlayerProfile_C::UpdateClassData(const struct FPlayerProfileMenuDetailData& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "UpdateClassData");

	Params::PlayerProfile_C_UpdateClassData Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerProfile.PlayerProfile_C.AddBlocker
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerProfile_C::AddBlocker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "AddBlocker");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.RemoveBlocker
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerProfile_C::RemoveBlocker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "RemoveBlocker");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.CanSendPartyInvitation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UPlayerProfile_C::CanSendPartyInvitation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "CanSendPartyInvitation");

	Params::PlayerProfile_C_CanSendPartyInvitation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function PlayerProfile.PlayerProfile_C.IsInvited
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bIsInvited                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerProfile_C::IsInvited(bool* bIsInvited)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "IsInvited");

	Params::PlayerProfile_C_IsInvited Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bIsInvited != nullptr)
		*bIsInvited = Parms.bIsInvited;
}


// Function PlayerProfile.PlayerProfile_C.InitReport
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerProfile_C::InitReport()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "InitReport");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.Set Equip LIstData
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerProfile_C::Set_Equip_LIstData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "Set Equip LIstData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.SetPlayerProfileMenuDetailData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerProfileMenuDetailData     Param_DetailData                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UPlayerProfile_C::SetPlayerProfileMenuDetailData(const struct FPlayerProfileMenuDetailData& Param_DetailData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "SetPlayerProfileMenuDetailData");

	Params::PlayerProfile_C_SetPlayerProfileMenuDetailData Parms{};

	Parms.Param_DetailData = std::move(Param_DetailData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerProfile.PlayerProfile_C.InitComment
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerProfile_C::InitComment()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "InitComment");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.InitProfileLikeInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerProfile_C::InitProfileLikeInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "InitProfileLikeInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.InitScreenshotInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerProfile_C::InitScreenshotInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "InitScreenshotInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.InitPlayerCharacterPositionInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerProfile_C::InitPlayerCharacterPositionInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "InitPlayerCharacterPositionInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.InitTensionInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerProfile_C::InitTensionInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "InitTensionInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.InitVisibilityForButtons
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerProfile_C::InitVisibilityForButtons()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "InitVisibilityForButtons");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.InitProfilePartyInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerProfile_C::InitProfilePartyInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "InitProfilePartyInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.InitTeleportBtnInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPlayerProfile_C::InitTeleportBtnInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "InitTeleportBtnInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.SetBG
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                           _____                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InScale                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        InPosition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2DDynamic*                InTexture                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetSwitcher*                  InWidgetSwitcher                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerProfile_C::SetBG(class UImage* _____, float InScale, const struct FVector2D& InPosition, class UWidget* Widget, class UTexture2DDynamic* InTexture, class UWidgetSwitcher* InWidgetSwitcher)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "SetBG");

	Params::PlayerProfile_C_SetBG Parms{};

	Parms._____ = _____;
	Parms.InScale = InScale;
	Parms.InPosition = std::move(InPosition);
	Parms.Widget = Widget;
	Parms.InTexture = InTexture;
	Parms.InWidgetSwitcher = InWidgetSwitcher;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerProfile.PlayerProfile_C.IsCalledCommandGuildMenu
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bResult                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerProfile_C::IsCalledCommandGuildMenu(bool* bResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "IsCalledCommandGuildMenu");

	Params::PlayerProfile_C_IsCalledCommandGuildMenu Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bResult != nullptr)
		*bResult = Parms.bResult;
}


// Function PlayerProfile.PlayerProfile_C.Show Player Profile Error Message
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InTextNameId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InTextID                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerProfile_C::Show_Player_Profile_Error_Message(class FName InTextNameId, const int32 InTextID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "Show Player Profile Error Message");

	Params::PlayerProfile_C_Show_Player_Profile_Error_Message Parms{};

	Parms.InTextNameId = InTextNameId;
	Parms.InTextID = InTextID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerProfile.PlayerProfile_C.Show Send Adventure Card Error
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    InWasSuccessful                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSendAdventureCardResult         InSendAdventureResult                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UPlayerProfile_C::Show_Send_Adventure_Card_Error(bool InWasSuccessful, const struct FSendAdventureCardResult& InSendAdventureResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "Show Send Adventure Card Error");

	Params::PlayerProfile_C_Show_Send_Adventure_Card_Error Parms{};

	Parms.InWasSuccessful = InWasSuccessful;
	Parms.InSendAdventureResult = std::move(InSendAdventureResult);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function PlayerProfile.PlayerProfile_C.SetRankingBtn
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerProfile_C::SetRankingBtn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "SetRankingBtn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.SetCommunicateBtn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsComunicateMode                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerProfile_C::SetCommunicateBtn(bool Param_IsComunicateMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "SetCommunicateBtn");

	Params::PlayerProfile_C_SetCommunicateBtn Parms{};

	Parms.Param_IsComunicateMode = Param_IsComunicateMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerProfile.PlayerProfile_C.BindBlackList
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerProfile_C::BindBlackList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "BindBlackList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.UnbindBlackList
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerProfile_C::UnbindBlackList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "UnbindBlackList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.SetActiveGuildInviteButton
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerProfile_C::SetActiveGuildInviteButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "SetActiveGuildInviteButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.IsPlayingMission
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerProfile_C::IsPlayingMission(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "IsPlayingMission");

	Params::PlayerProfile_C_IsPlayingMission Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function PlayerProfile.PlayerProfile_C.SetBtnGroup1Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInIsVisible                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerProfile_C::SetBtnGroup1Visibility(bool bInIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "SetBtnGroup1Visibility");

	Params::PlayerProfile_C_SetBtnGroup1Visibility Parms{};

	Parms.bInIsVisible = bInIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerProfile.PlayerProfile_C.IsAbleToTeleport
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bResult                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerProfile_C::IsAbleToTeleport(bool* bResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "IsAbleToTeleport");

	Params::PlayerProfile_C_IsAbleToTeleport Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bResult != nullptr)
		*bResult = Parms.bResult;
}


// Function PlayerProfile.PlayerProfile_C.UpdatePlayerName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPlayerProfile_C::UpdatePlayerName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "UpdatePlayerName");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.Update Player Screenshot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPlayerProfile_C::Update_Player_Screenshot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "Update Player Screenshot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerProfile.PlayerProfile_C.UpdatePlayerComment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPlayerProfile_C::UpdatePlayerComment()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerProfile_C", "UpdatePlayerComment");

	UObject::ProcessEvent(Func, nullptr);
}

}

