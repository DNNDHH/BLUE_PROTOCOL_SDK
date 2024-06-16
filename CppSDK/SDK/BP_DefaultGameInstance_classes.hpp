#pragma once

 

// Package: BP_DefaultGameInstance

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DefaultGameInstance.BP_DefaultGameInstance_C
// 0x0088 (0x06D0 - 0x0648)
class UBP_DefaultGameInstance_C final : public USBGameInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0648(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          IsStartRoleSelectAtTitle;                          // 0x0650(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9DAA[0x7];                                     // 0x0651(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnPartyMemberUpdate;                               // 0x0658(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnCancelMatch;                                     // 0x0668(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnPartyInviteReceived;                             // 0x0678(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnFailedMatch;                                     // 0x0688(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnTravel;                                          // 0x0698(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnJoin;                                            // 0x06A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnJoinInviteParty;                                 // 0x06B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         Migration_Response_Code;                           // 0x06C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bMigrationRejectByOthersAll;                       // 0x06CC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnPartyMemberUpdate__DelegateSignature();
	void OnCancelMatch__DelegateSignature();
	void OnPartyInviteReceived__DelegateSignature();
	void OnFailedMatch__DelegateSignature();
	void OnTravel__DelegateSignature();
	void OnJoin__DelegateSignature();
	void OnJoinInviteParty__DelegateSignature();
	void ExecuteUbergraph_BP_DefaultGameInstance(int32 EntryPoint);
	void HandleNetworkCafeRewardNotification(const int32 NetworkCafeTotalTimePlayedToday);
	void ReceiveMatchedGame(class USBMatchingGameState* MatchedGame);
	void HandleNetworkCafePlayingTimeNotification(const int32 NetworkCafeTotalTimePlayedToday);
	void HandleTravelError(ETravelFailure FailureType);
	void HandleNetworkError(ENetworkFailure FailureType, bool bIsServer);
	void TryShowPartyJoinedMessage();
	void ReceivePartySimplycityChangeForSolo();
	void ReceivePartySimplycityChange(class USBPartyGameState* PartyState);
	void NotifyExecutePartyServerReConnectError();
	void ExecuteMigrationWaitMembers();
	void ReceivePartySameMapMemberCountChanged();
	void ReceiveMatchingFailed(const ESBMatchingFailureType FailureType, bool PenaltyForMe, int32 MinuteToEndPenalty);
	void ReceivePartyMemberDungeonEntryChanged();
	void MigrationHandleTravelError(int32 RetCode);
	void ExecuteMigration(const bool bExecuted, const ESBPartySystemTextType MessageType, const int32 MigrationResponseCode);
	void ReceivePartyMigration(class USBPartyGameState* PartyState, bool bExecuted);
	void ReceivePartyMemberLeft(class USBPartyGameState* PartyState, bool bIsReleased);
	void ReceivePartyRetireGame(class USBPartyGameState* PartyState, bool bFromLeader);
	void ReceivePartyConvocation(class USBPartyGameState* PartyState, bool bCanceled, const int32 MigrationResponseCode);
	void ReceivePartyInvitesChanged();
	void ReceivePartyJoined(class USBPartyGameState* PartyState, bool bIsRejoin);
	void ReceivePartyLeft(class USBPartyGameState* PartyState, bool bIsKicked);
	void ReceiveSendInvitationComplete(const ESBPartySystemTextType InType, const class FString& RecipientName, bool bWasSuccessful, const class FString& CharacterId, ESBPrivilegeType Type);
	void ReceiveJoinInviteParty(bool bWasSuccessful, const int32 NotApprovedReason);
	void ReceivePromotePartyMember(class USBPartyMemberState* PromoteMember);
	void ReceivePartyMemberLeaving(class USBPartyMemberState* LeavingMember, bool bIsKicked);
	void ReceivePartyMemberJoined(class USBPartyMemberState* JoinedMember, bool bExistingMember, bool bIsRejoin);
	void ReceivePartyInviteResponseReceived(const class FString& SenderId, const class FString& SenderName, bool bIsAccepted, const class FString& CharacterId, const int32 ResultCode, ESBPrivilegeType Type);
	void ReceivePartyInviteReceived(const class FString& SenderId, const class FString& SenderName, const class FString& SenderCharacterId, ESBPrivilegeType Type);
	void ReceivePartyRequestMatchmaking(class USBPartyGameState* PartyState);
	void AdventureBoardError_Event(EDialogResult Result);
	void OnLoaded_88632A3A4D923436604E88879DC1917B(TSubclassOf<class UObject> Loaded);
	void ShowMatchingFailedMessage(ESBMatchingFailureType Type, bool PenaltyForMe, int32 MinuteToEndPenalty);
	void ShowSimpleMessageLite(const class FText& InMessage);
	void ShowPartyMigrationMessage();
	void ShowPartyResponseCommonErrorMessage(int32 MsgCode);
	void GetXboxPrivacyText(ESBPrivilegeType InPrivilegeType, const class FString& InCharacterId, const class FString& InPlatformUserId, const class FText& InText, ESBRestrictTextLength InRestrictText, class FText* Text);
	void GetXboxPrivacyText_ByPartyMemberState(class USBPartyMemberState* InPartyState, const class FText& InText, ESBRestrictTextLength InRestrictText, class FText* Text);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DefaultGameInstance_C">();
	}
	static class UBP_DefaultGameInstance_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_DefaultGameInstance_C>();
	}
};
static_assert(alignof(UBP_DefaultGameInstance_C) == 0x000008, "Wrong alignment on UBP_DefaultGameInstance_C");
static_assert(sizeof(UBP_DefaultGameInstance_C) == 0x0006D0, "Wrong size on UBP_DefaultGameInstance_C");
static_assert(offsetof(UBP_DefaultGameInstance_C, UberGraphFrame) == 0x000648, "Member 'UBP_DefaultGameInstance_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_DefaultGameInstance_C, IsStartRoleSelectAtTitle) == 0x000650, "Member 'UBP_DefaultGameInstance_C::IsStartRoleSelectAtTitle' has a wrong offset!");
static_assert(offsetof(UBP_DefaultGameInstance_C, OnPartyMemberUpdate) == 0x000658, "Member 'UBP_DefaultGameInstance_C::OnPartyMemberUpdate' has a wrong offset!");
static_assert(offsetof(UBP_DefaultGameInstance_C, OnCancelMatch) == 0x000668, "Member 'UBP_DefaultGameInstance_C::OnCancelMatch' has a wrong offset!");
static_assert(offsetof(UBP_DefaultGameInstance_C, OnPartyInviteReceived) == 0x000678, "Member 'UBP_DefaultGameInstance_C::OnPartyInviteReceived' has a wrong offset!");
static_assert(offsetof(UBP_DefaultGameInstance_C, OnFailedMatch) == 0x000688, "Member 'UBP_DefaultGameInstance_C::OnFailedMatch' has a wrong offset!");
static_assert(offsetof(UBP_DefaultGameInstance_C, OnTravel) == 0x000698, "Member 'UBP_DefaultGameInstance_C::OnTravel' has a wrong offset!");
static_assert(offsetof(UBP_DefaultGameInstance_C, OnJoin) == 0x0006A8, "Member 'UBP_DefaultGameInstance_C::OnJoin' has a wrong offset!");
static_assert(offsetof(UBP_DefaultGameInstance_C, OnJoinInviteParty) == 0x0006B8, "Member 'UBP_DefaultGameInstance_C::OnJoinInviteParty' has a wrong offset!");
static_assert(offsetof(UBP_DefaultGameInstance_C, Migration_Response_Code) == 0x0006C8, "Member 'UBP_DefaultGameInstance_C::Migration_Response_Code' has a wrong offset!");
static_assert(offsetof(UBP_DefaultGameInstance_C, bMigrationRejectByOthersAll) == 0x0006CC, "Member 'UBP_DefaultGameInstance_C::bMigrationRejectByOthersAll' has a wrong offset!");

}

