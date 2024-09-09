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
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.IsSimplycityPartyStateChangeBase
	 */
	struct UUMG_Notification_Party_C_IsSimplycityPartyStateChangeBase_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.MatchStateObserver
	 */
	struct UUMG_Notification_Party_C_MatchStateObserver_Params
	{	};

	/**
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.IsPressStatus
	 */
	struct UUMG_Notification_Party_C_IsPressStatus_Params
	{
	public:
		bool                                                       Press;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.IsPress
	 */
	struct UUMG_Notification_Party_C_IsPress_Params
	{
	public:
		bool                                                       Press;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_07RE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.Get Change Time
	 */
	struct UUMG_Notification_Party_C_GetChangeTime_Params
	{
	public:
		float                                                      Tiem;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EN6Z[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.Get Status Time
	 */
	struct UUMG_Notification_Party_C_GetStatusTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_59QF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.NotificationConvocationMessage
	 */
	struct UUMG_Notification_Party_C_NotificationConvocationMessage_Params
	{	};

	/**
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.ResetPartyDialogState
	 */
	struct UUMG_Notification_Party_C_ResetPartyDialogState_Params
	{	};

	/**
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.Can Open Party Member Migration Dialog
	 */
	struct UUMG_Notification_Party_C_CanOpenPartyMemberMigrationDialog_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.HideNotification
	 */
	struct UUMG_Notification_Party_C_HideNotification_Params
	{	};

	/**
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.IsOwningPlayerPartyLeader
	 */
	struct UUMG_Notification_Party_C_IsOwningPlayerPartyLeader_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XK3U[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.GetCurrentPartyMemberStateGeneral
	 */
	struct UUMG_Notification_Party_C_GetCurrentPartyMemberStateGeneral_Params
	{
	public:
		class USBPartyMemberStateGeneral*                          CurrentPartyMemberStateGeneral;                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.PartyMigrationAnswerRemainTimeCounter
	 */
	struct UUMG_Notification_Party_C_PartyMigrationAnswerRemainTimeCounter_Params
	{	};

	/**
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.CanCreateInviteMessage
	 */
	struct UUMG_Notification_Party_C_CanCreateInviteMessage_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.CanAcceptInvite
	 */
	struct UUMG_Notification_Party_C_CanAcceptInvite_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.SetPartyText
	 */
	struct UUMG_Notification_Party_C_SetPartyText_Params
	{
	public:
		class UTextBlock*                                          OutText;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                BaseText;                                                // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.GetOperateMode
	 */
	struct UUMG_Notification_Party_C_GetOperateMode_Params
	{	};

	/**
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.GetQuickAccessKeyText
	 */
	struct UUMG_Notification_Party_C_GetQuickAccessKeyText_Params
	{	};

	/**
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.Get_InviteReceived_CountText_Text_1
	 */
	struct UUMG_Notification_Party_C_Get_InviteReceived_CountText_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.Get_JumpConvocation_Visibility_1
	 */
	struct UUMG_Notification_Party_C_Get_JumpConvocation_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E3AR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.Get_InviteReceived_Visibility_1
	 */
	struct UUMG_Notification_Party_C_Get_InviteReceived_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_219V[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.Init
	 */
	struct UUMG_Notification_Party_C_Init_Params
	{	};

	/**
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.OnUpdateKeyConfig
	 */
	struct UUMG_Notification_Party_C_OnUpdateKeyConfig_Params
	{	};

	/**
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.ChangeKeyGuide
	 */
	struct UUMG_Notification_Party_C_ChangeKeyGuide_Params
	{	};

	/**
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.GetResultMultipleDialog
	 */
	struct UUMG_Notification_Party_C_GetResultMultipleDialog_Params
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.OnBtnCancel
	 */
	struct UUMG_Notification_Party_C_OnBtnCancel_Params
	{	};

	/**
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.OnBtnAccept
	 */
	struct UUMG_Notification_Party_C_OnBtnAccept_Params
	{	};

	/**
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.OnBtnProfile
	 */
	struct UUMG_Notification_Party_C_OnBtnProfile_Params
	{	};

	/**
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.OnBtnReserve
	 */
	struct UUMG_Notification_Party_C_OnBtnReserve_Params
	{	};

	/**
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.OnCancelMatching_Dialog_Event
	 */
	struct UUMG_Notification_Party_C_OnCancelMatching_Dialog_Event_Params
	{
	public:
		EYesNoDialogResult                                         Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.OnPartyInviteResponse_Event
	 */
	struct UUMG_Notification_Party_C_OnPartyInviteResponse_Event_Params
	{
	public:
		bool                                                       isAccept;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.OnDestruct_Event
	 */
	struct UUMG_Notification_Party_C_OnDestruct_Event_Params
	{
	public:
		struct FPlayerProfileMenuDetailData                        RetData;                                                 // 0x0000(0x0468)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.OnResponsedGetPlayerProfile
	 */
	struct UUMG_Notification_Party_C_OnResponsedGetPlayerProfile_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RENR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPlayerProfileMenuDetailData                        PlayerProfileDetailMenuData;                             // 0x0008(0x0468)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    RetCode;                                                 // 0x0470(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.CloseDialog
	 */
	struct UUMG_Notification_Party_C_CloseDialog_Params
	{	};

	/**
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.OpenNotificationDialog
	 */
	struct UUMG_Notification_Party_C_OpenNotificationDialog_Params
	{	};

	/**
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.OpenProfile
	 */
	struct UUMG_Notification_Party_C_OpenProfile_Params
	{	};

	/**
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.OpenMigrationAnswerDialog
	 */
	struct UUMG_Notification_Party_C_OpenMigrationAnswerDialog_Params
	{	};

	/**
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.PartyMigrationAnswer_Event
	 */
	struct UUMG_Notification_Party_C_PartyMigrationAnswer_Event_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.CloseMigrationAnswerDialog
	 */
	struct UUMG_Notification_Party_C_CloseMigrationAnswerDialog_Params
	{	};

	/**
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.Tick
	 */
	struct UUMG_Notification_Party_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.OnChangeInvitePartyConvocationDelegate_Event
	 */
	struct UUMG_Notification_Party_C_OnChangeInvitePartyConvocationDelegate_Event_Params
	{
	public:
		bool                                                       bCanceled;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LQ51[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    MigrationResponseCode;                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.Destruct
	 */
	struct UUMG_Notification_Party_C_Destruct_Params
	{	};

	/**
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.Construct
	 */
	struct UUMG_Notification_Party_C_Construct_Params
	{	};

	/**
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.DialogEndCheck
	 */
	struct UUMG_Notification_Party_C_DialogEndCheck_Params
	{	};

	/**
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.OnChangeInvitePartyConvocationDelagateDialogResult
	 */
	struct UUMG_Notification_Party_C_OnChangeInvitePartyConvocationDelagateDialogResult_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.OnPartyInviteReceived_Event
	 */
	struct UUMG_Notification_Party_C_OnPartyInviteReceived_Event_Params
	{	};

	/**
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.OnJoinInviteParty_Event
	 */
	struct UUMG_Notification_Party_C_OnJoinInviteParty_Event_Params
	{	};

	/**
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.PartyUpdate
	 */
	struct UUMG_Notification_Party_C_PartyUpdate_Params
	{
	public:
		E_NotificationPartyStatus                                  Status;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.SimplycityPartyStateChange_OnMatching
	 */
	struct UUMG_Notification_Party_C_SimplycityPartyStateChange_OnMatching_Params
	{	};

	/**
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.CloseSimplycityPartyStateChangeDialog
	 */
	struct UUMG_Notification_Party_C_CloseSimplycityPartyStateChangeDialog_Params
	{	};

	/**
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.GetResultSimplycityPartyStateChangeDialog
	 */
	struct UUMG_Notification_Party_C_GetResultSimplycityPartyStateChangeDialog_Params
	{
	public:
		EYesNoDialogResult                                         Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.OnPartyMemberUpdate_Event
	 */
	struct UUMG_Notification_Party_C_OnPartyMemberUpdate_Event_Params
	{	};

	/**
	 * Function UMG_Notification_Party.UMG_Notification_Party_C.ExecuteUbergraph_UMG_Notification_Party
	 */
	struct UUMG_Notification_Party_C_ExecuteUbergraph_UMG_Notification_Party_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
