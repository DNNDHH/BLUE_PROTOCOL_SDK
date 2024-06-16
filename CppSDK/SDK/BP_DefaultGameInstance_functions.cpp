#pragma once

 

// Package: BP_DefaultGameInstance

#include "Basic.hpp"

#include "BP_DefaultGameInstance_classes.hpp"
#include "BP_DefaultGameInstance_parameters.hpp"


namespace SDK
{

// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.OnPartyMemberUpdate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_DefaultGameInstance_C::OnPartyMemberUpdate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultGameInstance_C", "OnPartyMemberUpdate__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.OnCancelMatch__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_DefaultGameInstance_C::OnCancelMatch__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultGameInstance_C", "OnCancelMatch__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.OnPartyInviteReceived__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_DefaultGameInstance_C::OnPartyInviteReceived__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultGameInstance_C", "OnPartyInviteReceived__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.OnFailedMatch__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_DefaultGameInstance_C::OnFailedMatch__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultGameInstance_C", "OnFailedMatch__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.OnTravel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_DefaultGameInstance_C::OnTravel__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultGameInstance_C", "OnTravel__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.OnJoin__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_DefaultGameInstance_C::OnJoin__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultGameInstance_C", "OnJoin__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.OnJoinInviteParty__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_DefaultGameInstance_C::OnJoinInviteParty__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultGameInstance_C", "OnJoinInviteParty__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ExecuteUbergraph_BP_DefaultGameInstance
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DefaultGameInstance_C::ExecuteUbergraph_BP_DefaultGameInstance(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultGameInstance_C", "ExecuteUbergraph_BP_DefaultGameInstance");

	Params::BP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.HandleNetworkCafeRewardNotification
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   NetworkCafeTotalTimePlayedToday                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DefaultGameInstance_C::HandleNetworkCafeRewardNotification(const int32 NetworkCafeTotalTimePlayedToday)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultGameInstance_C", "HandleNetworkCafeRewardNotification");

	Params::BP_DefaultGameInstance_C_HandleNetworkCafeRewardNotification Parms{};

	Parms.NetworkCafeTotalTimePlayedToday = NetworkCafeTotalTimePlayedToday;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceiveMatchedGame
// (Event, Protected, BlueprintEvent)
// Parameters:
// class USBMatchingGameState*             MatchedGame                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DefaultGameInstance_C::ReceiveMatchedGame(class USBMatchingGameState* MatchedGame)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultGameInstance_C", "ReceiveMatchedGame");

	Params::BP_DefaultGameInstance_C_ReceiveMatchedGame Parms{};

	Parms.MatchedGame = MatchedGame;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.HandleNetworkCafePlayingTimeNotification
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   NetworkCafeTotalTimePlayedToday                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DefaultGameInstance_C::HandleNetworkCafePlayingTimeNotification(const int32 NetworkCafeTotalTimePlayedToday)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultGameInstance_C", "HandleNetworkCafePlayingTimeNotification");

	Params::BP_DefaultGameInstance_C_HandleNetworkCafePlayingTimeNotification Parms{};

	Parms.NetworkCafeTotalTimePlayedToday = NetworkCafeTotalTimePlayedToday;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.HandleTravelError
// (Event, Public, BlueprintEvent)
// Parameters:
// ETravelFailure                          FailureType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DefaultGameInstance_C::HandleTravelError(ETravelFailure FailureType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultGameInstance_C", "HandleTravelError");

	Params::BP_DefaultGameInstance_C_HandleTravelError Parms{};

	Parms.FailureType = FailureType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.HandleNetworkError
// (Event, Public, BlueprintEvent)
// Parameters:
// ENetworkFailure                         FailureType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsServer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_DefaultGameInstance_C::HandleNetworkError(ENetworkFailure FailureType, bool bIsServer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultGameInstance_C", "HandleNetworkError");

	Params::BP_DefaultGameInstance_C_HandleNetworkError Parms{};

	Parms.FailureType = FailureType;
	Parms.bIsServer = bIsServer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.TryShowPartyJoinedMessage
// (BlueprintCallable, BlueprintEvent)

void UBP_DefaultGameInstance_C::TryShowPartyJoinedMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultGameInstance_C", "TryShowPartyJoinedMessage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartySimplycityChangeForSolo
// (Event, Protected, BlueprintEvent)

void UBP_DefaultGameInstance_C::ReceivePartySimplycityChangeForSolo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultGameInstance_C", "ReceivePartySimplycityChangeForSolo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartySimplycityChange
// (Event, Protected, BlueprintEvent)
// Parameters:
// class USBPartyGameState*                PartyState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DefaultGameInstance_C::ReceivePartySimplycityChange(class USBPartyGameState* PartyState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultGameInstance_C", "ReceivePartySimplycityChange");

	Params::BP_DefaultGameInstance_C_ReceivePartySimplycityChange Parms{};

	Parms.PartyState = PartyState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.NotifyExecutePartyServerReConnectError
// (Event, Public, BlueprintEvent)

void UBP_DefaultGameInstance_C::NotifyExecutePartyServerReConnectError()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultGameInstance_C", "NotifyExecutePartyServerReConnectError");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ExecuteMigrationWaitMembers
// (Event, Protected, BlueprintEvent)

void UBP_DefaultGameInstance_C::ExecuteMigrationWaitMembers()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultGameInstance_C", "ExecuteMigrationWaitMembers");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartySameMapMemberCountChanged
// (Event, Protected, BlueprintEvent)

void UBP_DefaultGameInstance_C::ReceivePartySameMapMemberCountChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultGameInstance_C", "ReceivePartySameMapMemberCountChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceiveMatchingFailed
// (Event, Protected, BlueprintEvent)
// Parameters:
// ESBMatchingFailureType                  FailureType                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    PenaltyForMe                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   MinuteToEndPenalty                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DefaultGameInstance_C::ReceiveMatchingFailed(const ESBMatchingFailureType FailureType, bool PenaltyForMe, int32 MinuteToEndPenalty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultGameInstance_C", "ReceiveMatchingFailed");

	Params::BP_DefaultGameInstance_C_ReceiveMatchingFailed Parms{};

	Parms.FailureType = FailureType;
	Parms.PenaltyForMe = PenaltyForMe;
	Parms.MinuteToEndPenalty = MinuteToEndPenalty;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyMemberDungeonEntryChanged
// (Event, Protected, BlueprintEvent)

void UBP_DefaultGameInstance_C::ReceivePartyMemberDungeonEntryChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultGameInstance_C", "ReceivePartyMemberDungeonEntryChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.MigrationHandleTravelError
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DefaultGameInstance_C::MigrationHandleTravelError(int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultGameInstance_C", "MigrationHandleTravelError");

	Params::BP_DefaultGameInstance_C_MigrationHandleTravelError Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ExecuteMigration
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bExecuted                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ESBPartySystemTextType                  MessageType                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MigrationResponseCode                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DefaultGameInstance_C::ExecuteMigration(const bool bExecuted, const ESBPartySystemTextType MessageType, const int32 MigrationResponseCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultGameInstance_C", "ExecuteMigration");

	Params::BP_DefaultGameInstance_C_ExecuteMigration Parms{};

	Parms.bExecuted = bExecuted;
	Parms.MessageType = MessageType;
	Parms.MigrationResponseCode = MigrationResponseCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyMigration
// (Event, Protected, BlueprintEvent)
// Parameters:
// class USBPartyGameState*                PartyState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bExecuted                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_DefaultGameInstance_C::ReceivePartyMigration(class USBPartyGameState* PartyState, bool bExecuted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultGameInstance_C", "ReceivePartyMigration");

	Params::BP_DefaultGameInstance_C_ReceivePartyMigration Parms{};

	Parms.PartyState = PartyState;
	Parms.bExecuted = bExecuted;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyMemberLeft
// (Event, Protected, BlueprintEvent)
// Parameters:
// class USBPartyGameState*                PartyState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsReleased                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_DefaultGameInstance_C::ReceivePartyMemberLeft(class USBPartyGameState* PartyState, bool bIsReleased)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultGameInstance_C", "ReceivePartyMemberLeft");

	Params::BP_DefaultGameInstance_C_ReceivePartyMemberLeft Parms{};

	Parms.PartyState = PartyState;
	Parms.bIsReleased = bIsReleased;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyRetireGame
// (Event, Protected, BlueprintEvent)
// Parameters:
// class USBPartyGameState*                PartyState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromLeader                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_DefaultGameInstance_C::ReceivePartyRetireGame(class USBPartyGameState* PartyState, bool bFromLeader)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultGameInstance_C", "ReceivePartyRetireGame");

	Params::BP_DefaultGameInstance_C_ReceivePartyRetireGame Parms{};

	Parms.PartyState = PartyState;
	Parms.bFromLeader = bFromLeader;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyConvocation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class USBPartyGameState*                PartyState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bCanceled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   MigrationResponseCode                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DefaultGameInstance_C::ReceivePartyConvocation(class USBPartyGameState* PartyState, bool bCanceled, const int32 MigrationResponseCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultGameInstance_C", "ReceivePartyConvocation");

	Params::BP_DefaultGameInstance_C_ReceivePartyConvocation Parms{};

	Parms.PartyState = PartyState;
	Parms.bCanceled = bCanceled;
	Parms.MigrationResponseCode = MigrationResponseCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyInvitesChanged
// (Event, Protected, BlueprintEvent)

void UBP_DefaultGameInstance_C::ReceivePartyInvitesChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultGameInstance_C", "ReceivePartyInvitesChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyJoined
// (Event, Protected, BlueprintEvent)
// Parameters:
// class USBPartyGameState*                PartyState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsRejoin                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_DefaultGameInstance_C::ReceivePartyJoined(class USBPartyGameState* PartyState, bool bIsRejoin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultGameInstance_C", "ReceivePartyJoined");

	Params::BP_DefaultGameInstance_C_ReceivePartyJoined Parms{};

	Parms.PartyState = PartyState;
	Parms.bIsRejoin = bIsRejoin;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyLeft
// (Event, Protected, BlueprintEvent)
// Parameters:
// class USBPartyGameState*                PartyState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsKicked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_DefaultGameInstance_C::ReceivePartyLeft(class USBPartyGameState* PartyState, bool bIsKicked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultGameInstance_C", "ReceivePartyLeft");

	Params::BP_DefaultGameInstance_C_ReceivePartyLeft Parms{};

	Parms.PartyState = PartyState;
	Parms.bIsKicked = bIsKicked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceiveSendInvitationComplete
// (Event, Protected, BlueprintEvent)
// Parameters:
// ESBPartySystemTextType                  InType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           RecipientName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    bWasSuccessful                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           CharacterId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESBPrivilegeType                        Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DefaultGameInstance_C::ReceiveSendInvitationComplete(const ESBPartySystemTextType InType, const class FString& RecipientName, bool bWasSuccessful, const class FString& CharacterId, ESBPrivilegeType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultGameInstance_C", "ReceiveSendInvitationComplete");

	Params::BP_DefaultGameInstance_C_ReceiveSendInvitationComplete Parms{};

	Parms.InType = InType;
	Parms.RecipientName = std::move(RecipientName);
	Parms.bWasSuccessful = bWasSuccessful;
	Parms.CharacterId = std::move(CharacterId);
	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceiveJoinInviteParty
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasSuccessful                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   NotApprovedReason                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DefaultGameInstance_C::ReceiveJoinInviteParty(bool bWasSuccessful, const int32 NotApprovedReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultGameInstance_C", "ReceiveJoinInviteParty");

	Params::BP_DefaultGameInstance_C_ReceiveJoinInviteParty Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.NotApprovedReason = NotApprovedReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePromotePartyMember
// (Event, Protected, BlueprintEvent)
// Parameters:
// class USBPartyMemberState*              PromoteMember                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DefaultGameInstance_C::ReceivePromotePartyMember(class USBPartyMemberState* PromoteMember)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultGameInstance_C", "ReceivePromotePartyMember");

	Params::BP_DefaultGameInstance_C_ReceivePromotePartyMember Parms{};

	Parms.PromoteMember = PromoteMember;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyMemberLeaving
// (Event, Protected, BlueprintEvent)
// Parameters:
// class USBPartyMemberState*              LeavingMember                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsKicked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_DefaultGameInstance_C::ReceivePartyMemberLeaving(class USBPartyMemberState* LeavingMember, bool bIsKicked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultGameInstance_C", "ReceivePartyMemberLeaving");

	Params::BP_DefaultGameInstance_C_ReceivePartyMemberLeaving Parms{};

	Parms.LeavingMember = LeavingMember;
	Parms.bIsKicked = bIsKicked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyMemberJoined
// (Event, Protected, BlueprintEvent)
// Parameters:
// class USBPartyMemberState*              JoinedMember                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bExistingMember                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bIsRejoin                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_DefaultGameInstance_C::ReceivePartyMemberJoined(class USBPartyMemberState* JoinedMember, bool bExistingMember, bool bIsRejoin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultGameInstance_C", "ReceivePartyMemberJoined");

	Params::BP_DefaultGameInstance_C_ReceivePartyMemberJoined Parms{};

	Parms.JoinedMember = JoinedMember;
	Parms.bExistingMember = bExistingMember;
	Parms.bIsRejoin = bIsRejoin;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyInviteResponseReceived
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FString                           SenderId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           SenderName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    bIsAccepted                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           CharacterId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   ResultCode                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBPrivilegeType                        Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DefaultGameInstance_C::ReceivePartyInviteResponseReceived(const class FString& SenderId, const class FString& SenderName, bool bIsAccepted, const class FString& CharacterId, const int32 ResultCode, ESBPrivilegeType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultGameInstance_C", "ReceivePartyInviteResponseReceived");

	Params::BP_DefaultGameInstance_C_ReceivePartyInviteResponseReceived Parms{};

	Parms.SenderId = std::move(SenderId);
	Parms.SenderName = std::move(SenderName);
	Parms.bIsAccepted = bIsAccepted;
	Parms.CharacterId = std::move(CharacterId);
	Parms.ResultCode = ResultCode;
	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyInviteReceived
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FString                           SenderId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           SenderName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           SenderCharacterId                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESBPrivilegeType                        Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DefaultGameInstance_C::ReceivePartyInviteReceived(const class FString& SenderId, const class FString& SenderName, const class FString& SenderCharacterId, ESBPrivilegeType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultGameInstance_C", "ReceivePartyInviteReceived");

	Params::BP_DefaultGameInstance_C_ReceivePartyInviteReceived Parms{};

	Parms.SenderId = std::move(SenderId);
	Parms.SenderName = std::move(SenderName);
	Parms.SenderCharacterId = std::move(SenderCharacterId);
	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyRequestMatchmaking
// (Event, Protected, BlueprintEvent)
// Parameters:
// class USBPartyGameState*                PartyState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DefaultGameInstance_C::ReceivePartyRequestMatchmaking(class USBPartyGameState* PartyState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultGameInstance_C", "ReceivePartyRequestMatchmaking");

	Params::BP_DefaultGameInstance_C_ReceivePartyRequestMatchmaking Parms{};

	Parms.PartyState = PartyState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.AdventureBoardError_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DefaultGameInstance_C::AdventureBoardError_Event(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultGameInstance_C", "AdventureBoardError_Event");

	Params::BP_DefaultGameInstance_C_AdventureBoardError_Event Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.OnLoaded_88632A3A4D923436604E88879DC1917B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UBP_DefaultGameInstance_C::OnLoaded_88632A3A4D923436604E88879DC1917B(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultGameInstance_C", "OnLoaded_88632A3A4D923436604E88879DC1917B");

	Params::BP_DefaultGameInstance_C_OnLoaded_88632A3A4D923436604E88879DC1917B Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ShowMatchingFailedMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBMatchingFailureType                  Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    PenaltyForMe                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   MinuteToEndPenalty                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DefaultGameInstance_C::ShowMatchingFailedMessage(ESBMatchingFailureType Type, bool PenaltyForMe, int32 MinuteToEndPenalty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultGameInstance_C", "ShowMatchingFailedMessage");

	Params::BP_DefaultGameInstance_C_ShowMatchingFailedMessage Parms{};

	Parms.Type = Type;
	Parms.PenaltyForMe = PenaltyForMe;
	Parms.MinuteToEndPenalty = MinuteToEndPenalty;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ShowSimpleMessageLite
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InMessage                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_DefaultGameInstance_C::ShowSimpleMessageLite(const class FText& InMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultGameInstance_C", "ShowSimpleMessageLite");

	Params::BP_DefaultGameInstance_C_ShowSimpleMessageLite Parms{};

	Parms.InMessage = std::move(InMessage);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ShowPartyMigrationMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_DefaultGameInstance_C::ShowPartyMigrationMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultGameInstance_C", "ShowPartyMigrationMessage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ShowPartyResponseCommonErrorMessage
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   MsgCode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DefaultGameInstance_C::ShowPartyResponseCommonErrorMessage(int32 MsgCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultGameInstance_C", "ShowPartyResponseCommonErrorMessage");

	Params::BP_DefaultGameInstance_C_ShowPartyResponseCommonErrorMessage Parms{};

	Parms.MsgCode = MsgCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.GetXboxPrivacyText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBPrivilegeType                        InPrivilegeType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           InCharacterId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           InPlatformUserId                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// ESBRestrictTextLength                   InRestrictText                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Text                                                   (Parm, OutParm)

void UBP_DefaultGameInstance_C::GetXboxPrivacyText(ESBPrivilegeType InPrivilegeType, const class FString& InCharacterId, const class FString& InPlatformUserId, const class FText& InText, ESBRestrictTextLength InRestrictText, class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultGameInstance_C", "GetXboxPrivacyText");

	Params::BP_DefaultGameInstance_C_GetXboxPrivacyText Parms{};

	Parms.InPrivilegeType = InPrivilegeType;
	Parms.InCharacterId = std::move(InCharacterId);
	Parms.InPlatformUserId = std::move(InPlatformUserId);
	Parms.InText = std::move(InText);
	Parms.InRestrictText = InRestrictText;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = std::move(Parms.Text);
}


// Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.GetXboxPrivacyText_ByPartyMemberState
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USBPartyMemberState*              InPartyState                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// ESBRestrictTextLength                   InRestrictText                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Text                                                   (Parm, OutParm)

void UBP_DefaultGameInstance_C::GetXboxPrivacyText_ByPartyMemberState(class USBPartyMemberState* InPartyState, const class FText& InText, ESBRestrictTextLength InRestrictText, class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DefaultGameInstance_C", "GetXboxPrivacyText_ByPartyMemberState");

	Params::BP_DefaultGameInstance_C_GetXboxPrivacyText_ByPartyMemberState Parms{};

	Parms.InPartyState = InPartyState;
	Parms.InText = std::move(InText);
	Parms.InRestrictText = InRestrictText;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = std::move(Parms.Text);
}

}

