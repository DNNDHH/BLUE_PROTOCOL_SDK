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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.GetXboxPrivacyText_ByPartyMemberState
	 */
	struct UBP_DefaultGameInstance_C_GetXboxPrivacyText_ByPartyMemberState_Params
	{
	public:
		class USBPartyMemberState*                                 InPartyState;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                InText;                                                  // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ESBRestrictTextLength                                      InRestrictText;                                          // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_314P[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Text;                                                    // 0x0028(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.GetXboxPrivacyText
	 */
	struct UBP_DefaultGameInstance_C_GetXboxPrivacyText_Params
	{
	public:
		ESBPrivilegeType                                           InPrivilegeType;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DFRO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InCharacterId;                                           // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              InPlatformUserId;                                        // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FText                                                InText;                                                  // 0x0028(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ESBRestrictTextLength                                      InRestrictText;                                          // 0x0040(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XY9D[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Text;                                                    // 0x0048(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ShowPartyResponseCommonErrorMessage
	 */
	struct UBP_DefaultGameInstance_C_ShowPartyResponseCommonErrorMessage_Params
	{
	public:
		int32_t                                                    MsgCode;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1HX7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ShowPartyMigrationMessage
	 */
	struct UBP_DefaultGameInstance_C_ShowPartyMigrationMessage_Params
	{	};

	/**
	 * Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ShowSimpleMessageLite
	 */
	struct UBP_DefaultGameInstance_C_ShowSimpleMessageLite_Params
	{
	public:
		class FText                                                InMessage;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ShowMatchingFailedMessage
	 */
	struct UBP_DefaultGameInstance_C_ShowMatchingFailedMessage_Params
	{
	public:
		ESBMatchingFailureType                                     Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PenaltyForMe;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8COZ[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    MinuteToEndPenalty;                                      // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.OnLoaded_88632A3A4D923436604E88879DC1917B
	 */
	struct UBP_DefaultGameInstance_C_OnLoaded_88632A3A4D923436604E88879DC1917B_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.AdventureBoardError_Event
	 */
	struct UBP_DefaultGameInstance_C_AdventureBoardError_Event_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyRequestMatchmaking
	 */
	struct UBP_DefaultGameInstance_C_ReceivePartyRequestMatchmaking_Params
	{
	public:
		class USBPartyGameState*                                   PartyState;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyInviteReceived
	 */
	struct UBP_DefaultGameInstance_C_ReceivePartyInviteReceived_Params
	{
	public:
		class FString                                              SenderId;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              SenderName;                                              // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              SenderCharacterId;                                       // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESBPrivilegeType                                           Type;                                                    // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyInviteResponseReceived
	 */
	struct UBP_DefaultGameInstance_C_ReceivePartyInviteResponseReceived_Params
	{
	public:
		class FString                                              SenderId;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              SenderName;                                              // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       bIsAccepted;                                             // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SBP8[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              CharacterId;                                             // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    ResultCode;                                              // 0x0038(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBPrivilegeType                                           Type;                                                    // 0x003C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyMemberJoined
	 */
	struct UBP_DefaultGameInstance_C_ReceivePartyMemberJoined_Params
	{
	public:
		class USBPartyMemberState*                                 JoinedMember;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bExistingMember;                                         // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsRejoin;                                               // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyMemberLeaving
	 */
	struct UBP_DefaultGameInstance_C_ReceivePartyMemberLeaving_Params
	{
	public:
		class USBPartyMemberState*                                 LeavingMember;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsKicked;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePromotePartyMember
	 */
	struct UBP_DefaultGameInstance_C_ReceivePromotePartyMember_Params
	{
	public:
		class USBPartyMemberState*                                 PromoteMember;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceiveJoinInviteParty
	 */
	struct UBP_DefaultGameInstance_C_ReceiveJoinInviteParty_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UB86[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    NotApprovedReason;                                       // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceiveSendInvitationComplete
	 */
	struct UBP_DefaultGameInstance_C_ReceiveSendInvitationComplete_Params
	{
	public:
		ESBPartySystemTextType                                     InType;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3EZR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              RecipientName;                                           // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       bWasSuccessful;                                          // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WQ8V[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ResultCode;                                              // 0x001C(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              CharacterId;                                             // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESBPrivilegeType                                           Type;                                                    // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyLeft
	 */
	struct UBP_DefaultGameInstance_C_ReceivePartyLeft_Params
	{
	public:
		class USBPartyGameState*                                   PartyState;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsKicked;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyJoined
	 */
	struct UBP_DefaultGameInstance_C_ReceivePartyJoined_Params
	{
	public:
		class USBPartyGameState*                                   PartyState;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsRejoin;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyInvitesChanged
	 */
	struct UBP_DefaultGameInstance_C_ReceivePartyInvitesChanged_Params
	{	};

	/**
	 * Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyConvocation
	 */
	struct UBP_DefaultGameInstance_C_ReceivePartyConvocation_Params
	{
	public:
		class USBPartyGameState*                                   PartyState;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bCanceled;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2QGN[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    MigrationResponseCode;                                   // 0x000C(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyRetireGame
	 */
	struct UBP_DefaultGameInstance_C_ReceivePartyRetireGame_Params
	{
	public:
		class USBPartyGameState*                                   PartyState;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromLeader;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyMemberLeft
	 */
	struct UBP_DefaultGameInstance_C_ReceivePartyMemberLeft_Params
	{
	public:
		class USBPartyGameState*                                   PartyState;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsReleased;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyMigration
	 */
	struct UBP_DefaultGameInstance_C_ReceivePartyMigration_Params
	{
	public:
		class USBPartyGameState*                                   PartyState;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bExecuted;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ExecuteMigration
	 */
	struct UBP_DefaultGameInstance_C_ExecuteMigration_Params
	{
	public:
		bool                                                       bExecuted;                                               // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ESBPartySystemTextType                                     MessageType;                                             // 0x0001(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OE36[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    MigrationResponseCode;                                   // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.MigrationHandleTravelError
	 */
	struct UBP_DefaultGameInstance_C_MigrationHandleTravelError_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartyMemberDungeonEntryChanged
	 */
	struct UBP_DefaultGameInstance_C_ReceivePartyMemberDungeonEntryChanged_Params
	{	};

	/**
	 * Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceiveMatchingFailed
	 */
	struct UBP_DefaultGameInstance_C_ReceiveMatchingFailed_Params
	{
	public:
		ESBMatchingFailureType                                     FailureType;                                             // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PenaltyForMe;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I7V3[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    MinuteToEndPenalty;                                      // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartySameMapMemberCountChanged
	 */
	struct UBP_DefaultGameInstance_C_ReceivePartySameMapMemberCountChanged_Params
	{	};

	/**
	 * Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ExecuteMigrationWaitMembers
	 */
	struct UBP_DefaultGameInstance_C_ExecuteMigrationWaitMembers_Params
	{	};

	/**
	 * Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.NotifyExecutePartyServerReConnectError
	 */
	struct UBP_DefaultGameInstance_C_NotifyExecutePartyServerReConnectError_Params
	{	};

	/**
	 * Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartySimplycityChange
	 */
	struct UBP_DefaultGameInstance_C_ReceivePartySimplycityChange_Params
	{
	public:
		class USBPartyGameState*                                   PartyState;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceivePartySimplycityChangeForSolo
	 */
	struct UBP_DefaultGameInstance_C_ReceivePartySimplycityChangeForSolo_Params
	{	};

	/**
	 * Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.TryShowPartyJoinedMessage
	 */
	struct UBP_DefaultGameInstance_C_TryShowPartyJoinedMessage_Params
	{	};

	/**
	 * Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.HandleNetworkError
	 */
	struct UBP_DefaultGameInstance_C_HandleNetworkError_Params
	{
	public:
		ENetworkFailure                                            FailureType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsServer;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.HandleTravelError
	 */
	struct UBP_DefaultGameInstance_C_HandleTravelError_Params
	{
	public:
		ETravelFailure                                             FailureType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.HandleNetworkCafePlayingTimeNotification
	 */
	struct UBP_DefaultGameInstance_C_HandleNetworkCafePlayingTimeNotification_Params
	{
	public:
		int32_t                                                    NetworkCafeTotalTimePlayedToday;                         // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ReceiveMatchedGame
	 */
	struct UBP_DefaultGameInstance_C_ReceiveMatchedGame_Params
	{
	public:
		class USBMatchingGameState*                                MatchedGame;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.HandleNetworkCafeRewardNotification
	 */
	struct UBP_DefaultGameInstance_C_HandleNetworkCafeRewardNotification_Params
	{
	public:
		int32_t                                                    NetworkCafeTotalTimePlayedToday;                         // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.ExecuteUbergraph_BP_DefaultGameInstance
	 */
	struct UBP_DefaultGameInstance_C_ExecuteUbergraph_BP_DefaultGameInstance_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0TBA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.OnJoinInviteParty__DelegateSignature
	 */
	struct UBP_DefaultGameInstance_C_OnJoinInviteParty__DelegateSignature_Params
	{	};

	/**
	 * Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.OnJoin__DelegateSignature
	 */
	struct UBP_DefaultGameInstance_C_OnJoin__DelegateSignature_Params
	{	};

	/**
	 * Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.OnTravel__DelegateSignature
	 */
	struct UBP_DefaultGameInstance_C_OnTravel__DelegateSignature_Params
	{	};

	/**
	 * Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.OnFailedMatch__DelegateSignature
	 */
	struct UBP_DefaultGameInstance_C_OnFailedMatch__DelegateSignature_Params
	{	};

	/**
	 * Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.OnPartyInviteReceived__DelegateSignature
	 */
	struct UBP_DefaultGameInstance_C_OnPartyInviteReceived__DelegateSignature_Params
	{	};

	/**
	 * Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.OnCancelMatch__DelegateSignature
	 */
	struct UBP_DefaultGameInstance_C_OnCancelMatch__DelegateSignature_Params
	{	};

	/**
	 * Function BP_DefaultGameInstance.BP_DefaultGameInstance_C.OnPartyMemberUpdate__DelegateSignature
	 */
	struct UBP_DefaultGameInstance_C_OnPartyMemberUpdate__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
