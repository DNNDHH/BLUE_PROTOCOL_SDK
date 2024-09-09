#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_DefaultGameInstance.BP_DefaultGameInstance_C
	 * Size -> 0x0085 (FullSize[0x06E5] - InheritedSize[0x0660])
	 */
	class UBP_DefaultGameInstance_C : public USBGameInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0660(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       IsStartRoleSelectAtTitle;                                // 0x0668(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VM50[0x7];                                   // 0x0669(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPartyMemberUpdate;                                     // 0x0670(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnCancelMatch;                                           // 0x0680(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnPartyInviteReceived;                                   // 0x0690(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnFailedMatch;                                           // 0x06A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnTravel;                                                // 0x06B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnJoin;                                                  // 0x06C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnJoinInviteParty;                                       // 0x06D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    MigrationResponseCode;                                   // 0x06E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bMigrationRejectByOthersAll;                             // 0x06E4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetXboxPrivacyText_ByPartyMemberState(class USBPartyMemberState* InPartyState, const class FText& InText, ESBRestrictTextLength InRestrictText, class FText* Text);
		void GetXboxPrivacyText(ESBPrivilegeType InPrivilegeType, const class FString& InCharacterId, const class FString& InPlatformUserId, const class FText& InText, ESBRestrictTextLength InRestrictText, class FText* Text);
		void ShowPartyResponseCommonErrorMessage(int32_t MsgCode);
		void ShowPartyMigrationMessage();
		void ShowSimpleMessageLite(const class FText& InMessage);
		void ShowMatchingFailedMessage(ESBMatchingFailureType Type, bool PenaltyForMe, int32_t MinuteToEndPenalty);
		void OnLoaded_88632A3A4D923436604E88879DC1917B(class UClass* Loaded);
		void AdventureBoardError_Event(EDialogResult Result);
		void ReceivePartyRequestMatchmaking(class USBPartyGameState* PartyState);
		void ReceivePartyInviteReceived(const class FString& SenderId, const class FString& SenderName, const class FString& SenderCharacterId, ESBPrivilegeType Type);
		void ReceivePartyInviteResponseReceived(const class FString& SenderId, const class FString& SenderName, bool bIsAccepted, const class FString& CharacterId, int32_t ResultCode, ESBPrivilegeType Type);
		void ReceivePartyMemberJoined(class USBPartyMemberState* JoinedMember, bool bExistingMember, bool bIsRejoin);
		void ReceivePartyMemberLeaving(class USBPartyMemberState* LeavingMember, bool bIsKicked);
		void ReceivePromotePartyMember(class USBPartyMemberState* PromoteMember);
		void ReceiveJoinInviteParty(bool bWasSuccessful, int32_t NotApprovedReason);
		void ReceiveSendInvitationComplete(ESBPartySystemTextType InType, const class FString& RecipientName, bool bWasSuccessful, int32_t ResultCode, const class FString& CharacterId, ESBPrivilegeType Type);
		void ReceivePartyLeft(class USBPartyGameState* PartyState, bool bIsKicked);
		void ReceivePartyJoined(class USBPartyGameState* PartyState, bool bIsRejoin);
		void ReceivePartyInvitesChanged();
		void ReceivePartyConvocation(class USBPartyGameState* PartyState, bool bCanceled, int32_t MigrationResponseCode);
		void ReceivePartyRetireGame(class USBPartyGameState* PartyState, bool bFromLeader);
		void ReceivePartyMemberLeft(class USBPartyGameState* PartyState, bool bIsReleased);
		void ReceivePartyMigration(class USBPartyGameState* PartyState, bool bExecuted);
		void ExecuteMigration(bool bExecuted, ESBPartySystemTextType MessageType, int32_t MigrationResponseCode);
		void MigrationHandleTravelError(int32_t RetCode);
		void ReceivePartyMemberDungeonEntryChanged();
		void ReceiveMatchingFailed(ESBMatchingFailureType FailureType, bool PenaltyForMe, int32_t MinuteToEndPenalty);
		void ReceivePartySameMapMemberCountChanged();
		void ExecuteMigrationWaitMembers();
		void NotifyExecutePartyServerReConnectError();
		void ReceivePartySimplycityChange(class USBPartyGameState* PartyState);
		void ReceivePartySimplycityChangeForSolo();
		void TryShowPartyJoinedMessage();
		void HandleNetworkError(ENetworkFailure FailureType, bool bIsServer);
		void HandleTravelError(ETravelFailure FailureType);
		void HandleNetworkCafePlayingTimeNotification(int32_t NetworkCafeTotalTimePlayedToday);
		void ReceiveMatchedGame(class USBMatchingGameState* MatchedGame);
		void HandleNetworkCafeRewardNotification(int32_t NetworkCafeTotalTimePlayedToday);
		void ExecuteUbergraph_BP_DefaultGameInstance(int32_t EntryPoint);
		void OnJoinInviteParty__DelegateSignature();
		void OnJoin__DelegateSignature();
		void OnTravel__DelegateSignature();
		void OnFailedMatch__DelegateSignature();
		void OnPartyInviteReceived__DelegateSignature();
		void OnCancelMatch__DelegateSignature();
		void OnPartyMemberUpdate__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
