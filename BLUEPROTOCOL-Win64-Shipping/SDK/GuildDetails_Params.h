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
	 * Function GuildDetails.GuildDetails_C.CheckInviteData
	 */
	struct UGuildDetails_C_CheckInviteData_Params
	{
	public:
		bool                                                       bNeedToWait;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GuildDetails.GuildDetails_C.CheckEntryData
	 */
	struct UGuildDetails_C_CheckEntryData_Params
	{
	public:
		bool                                                       bNeedToWait;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GuildDetails.GuildDetails_C.IsAbleToSendGuildEntry
	 */
	struct UGuildDetails_C_IsAbleToSendGuildEntry_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5JOT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GuildDetails.GuildDetails_C.CheckGuildComment
	 */
	struct UGuildDetails_C_CheckGuildComment_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GuildDetails.GuildDetails_C.SetGuildTimeInfos
	 */
	struct UGuildDetails_C_SetGuildTimeInfos_Params
	{	};

	/**
	 * Function GuildDetails.GuildDetails_C.SetGuildMemberInfos
	 */
	struct UGuildDetails_C_SetGuildMemberInfos_Params
	{	};

	/**
	 * Function GuildDetails.GuildDetails_C.SetGuildExperienceInfos
	 */
	struct UGuildDetails_C_SetGuildExperienceInfos_Params
	{	};

	/**
	 * Function GuildDetails.GuildDetails_C.SetGuildAcceptTypeInfos
	 */
	struct UGuildDetails_C_SetGuildAcceptTypeInfos_Params
	{	};

	/**
	 * Function GuildDetails.GuildDetails_C.SetGuildLeaderInfos
	 */
	struct UGuildDetails_C_SetGuildLeaderInfos_Params
	{	};

	/**
	 * Function GuildDetails.GuildDetails_C.SetGuildComment
	 */
	struct UGuildDetails_C_SetGuildComment_Params
	{	};

	/**
	 * Function GuildDetails.GuildDetails_C.SetGuildIdInfos
	 */
	struct UGuildDetails_C_SetGuildIdInfos_Params
	{	};

	/**
	 * Function GuildDetails.GuildDetails_C.SetGuildNameInfos
	 */
	struct UGuildDetails_C_SetGuildNameInfos_Params
	{	};

	/**
	 * Function GuildDetails.GuildDetails_C.Get Times
	 */
	struct UGuildDetails_C_GetTimes_Params
	{
	public:
		TArray<ESBGuildActivityTime>                               RetTimes;                                                // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function GuildDetails.GuildDetails_C.GetAttributes
	 */
	struct UGuildDetails_C_GetAttributes_Params
	{
	public:
		TArray<EGuildAttribute>                                    RetAttrib;                                               // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function GuildDetails.GuildDetails_C.GetGuildComp
	 */
	struct UGuildDetails_C_GetGuildComp_Params
	{
	public:
		class USBPlayerGuildComponent*                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildDetails.GuildDetails_C.Set EditMode Times
	 */
	struct UGuildDetails_C_SetEditModeTimes_Params
	{
	public:
		bool                                                       bIsEditMode;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WTQ2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GuildDetails.GuildDetails_C.Set EditMode Attributes
	 */
	struct UGuildDetails_C_SetEditModeAttributes_Params
	{
	public:
		bool                                                       bIsEditMode;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CANT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GuildDetails.GuildDetails_C.GenerateTimes
	 */
	struct UGuildDetails_C_GenerateTimes_Params
	{	};

	/**
	 * Function GuildDetails.GuildDetails_C.GenerateAttributes
	 */
	struct UGuildDetails_C_GenerateAttributes_Params
	{	};

	/**
	 * Function GuildDetails.GuildDetails_C.SetGuildData
	 */
	struct UGuildDetails_C_SetGuildData_Params
	{
	public:
		struct FGuildData                                          GuildData;                                               // 0x0000(0x00B8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    ButtonsSwitcherIndex;                                    // 0x00B8(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildDetails.GuildDetails_C.PreConstruct
	 */
	struct UGuildDetails_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GuildDetails.GuildDetails_C.Construct
	 */
	struct UGuildDetails_C_Construct_Params
	{	};

	/**
	 * Function GuildDetails.GuildDetails_C.InitalizeGuildData
	 */
	struct UGuildDetails_C_InitalizeGuildData_Params
	{	};

	/**
	 * Function GuildDetails.GuildDetails_C.BndEvt__Btn_Edit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UGuildDetails_C_BndEvt__Btn_Edit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function GuildDetails.GuildDetails_C.EnterEditMode
	 */
	struct UGuildDetails_C_EnterEditMode_Params
	{	};

	/**
	 * Function GuildDetails.GuildDetails_C.LeaveEditMode
	 */
	struct UGuildDetails_C_LeaveEditMode_Params
	{	};

	/**
	 * Function GuildDetails.GuildDetails_C.DenyEditable
	 */
	struct UGuildDetails_C_DenyEditable_Params
	{	};

	/**
	 * Function GuildDetails.GuildDetails_C.BndEvt__TB_GuildComment_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UGuildDetails_C_BndEvt__TB_GuildComment_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildDetails.GuildDetails_C.BndEvt__Btn_CopyShortID_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UGuildDetails_C_BndEvt__Btn_CopyShortID_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function GuildDetails.GuildDetails_C.BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UGuildDetails_C_BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function GuildDetails.GuildDetails_C.CounstructChangeData
	 */
	struct UGuildDetails_C_CounstructChangeData_Params
	{	};

	/**
	 * Function GuildDetails.GuildDetails_C.On Change GuildData
	 */
	struct UGuildDetails_C_OnChangeGuildData_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildDetails.GuildDetails_C.BndEvt__Btn_Apply_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UGuildDetails_C_BndEvt__Btn_Apply_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function GuildDetails.GuildDetails_C.BindChanged
	 */
	struct UGuildDetails_C_BindChanged_Params
	{	};

	/**
	 * Function GuildDetails.GuildDetails_C.OnComplete GuildDataChanged
	 */
	struct UGuildDetails_C_OnCompleteGuildDataChanged_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DOHJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGuildData                                          InGuildData;                                             // 0x0008(0x00B8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GuildDetails.GuildDetails_C.OnGuildNameChanged
	 */
	struct UGuildDetails_C_OnGuildNameChanged_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildDetails.GuildDetails_C.Set ShowEntryMode
	 */
	struct UGuildDetails_C_SetShowEntryMode_Params
	{
	public:
		bool                                                       bFromPlayerProfile;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GuildDetails.GuildDetails_C.BndEvt__BtnSendEntry_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature
	 */
	struct UGuildDetails_C_BndEvt__BtnSendEntry_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function GuildDetails.GuildDetails_C.OnCloseEntry
	 */
	struct UGuildDetails_C_OnCloseEntry_Params
	{
	public:
		EDialogResult                                              OnButton;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0KRK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                InputText;                                               // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GuildDetails.GuildDetails_C.BndEvt__Btn_Edit_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	 */
	struct UGuildDetails_C_BndEvt__Btn_Edit_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function GuildDetails.GuildDetails_C.BndEvt__Btn_Edit_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	 */
	struct UGuildDetails_C_BndEvt__Btn_Edit_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function GuildDetails.GuildDetails_C.BndEvt__Btn_Apply_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
	 */
	struct UGuildDetails_C_BndEvt__Btn_Apply_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function GuildDetails.GuildDetails_C.BndEvt__Btn_Apply_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
	 */
	struct UGuildDetails_C_BndEvt__Btn_Apply_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function GuildDetails.GuildDetails_C.BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
	 */
	struct UGuildDetails_C_BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function GuildDetails.GuildDetails_C.BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
	 */
	struct UGuildDetails_C_BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function GuildDetails.GuildDetails_C.OnCompletedGuildEntry_Event
	 */
	struct UGuildDetails_C_OnCompletedGuildEntry_Event_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildDetails.GuildDetails_C.CustomEvent_1
	 */
	struct UGuildDetails_C_CustomEvent_1_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isAccept;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I4KV[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InEntryId;                                               // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildDetails.GuildDetails_C.CustomEvent_2
	 */
	struct UGuildDetails_C_CustomEvent_2_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildDetails.GuildDetails_C.EntryRefuseDecisionDialog
	 */
	struct UGuildDetails_C_EntryRefuseDecisionDialog_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildDetails.GuildDetails_C.InviteRefuseDecisionDialog
	 */
	struct UGuildDetails_C_InviteRefuseDecisionDialog_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildDetails.GuildDetails_C.InviteAcceptDecisionDialog
	 */
	struct UGuildDetails_C_InviteAcceptDecisionDialog_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildDetails.GuildDetails_C.BndEvt__GuildDetails_CmnBtn_Invite_Accept_K2Node_ComponentBoundEvent_12_EventOnClicked__DelegateSignature
	 */
	struct UGuildDetails_C_BndEvt__GuildDetails_CmnBtn_Invite_Accept_K2Node_ComponentBoundEvent_12_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function GuildDetails.GuildDetails_C.BndEvt__GuildDetails_CmnBtn_Invite_Refuse_K2Node_ComponentBoundEvent_13_EventOnClicked__DelegateSignature
	 */
	struct UGuildDetails_C_BndEvt__GuildDetails_CmnBtn_Invite_Refuse_K2Node_ComponentBoundEvent_13_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function GuildDetails.GuildDetails_C.BndEvt__GuildDetails_CmnBtn_Entry_Refuse_K2Node_ComponentBoundEvent_14_EventOnClicked__DelegateSignature
	 */
	struct UGuildDetails_C_BndEvt__GuildDetails_CmnBtn_Entry_Refuse_K2Node_ComponentBoundEvent_14_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function GuildDetails.GuildDetails_C.BndEvt__GuildDetails_CmnClose02_K2Node_ComponentBoundEvent_16_OnClosed__DelegateSignature
	 */
	struct UGuildDetails_C_BndEvt__GuildDetails_CmnClose02_K2Node_ComponentBoundEvent_16_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function GuildDetails.GuildDetails_C.SetGuildDetailsCloseBtnEnables
	 */
	struct UGuildDetails_C_SetGuildDetailsCloseBtnEnables_Params
	{
	public:
		bool                                                       InIsEnable;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GuildDetails.GuildDetails_C.BndEvt__GuildDetails_TB_GuildComment_K2Node_ComponentBoundEvent_15_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UGuildDetails_C_BndEvt__GuildDetails_TB_GuildComment_K2Node_ComponentBoundEvent_15_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GuildDetails.GuildDetails_C.OnCompletedGetGuildEntryData_Event
	 */
	struct UGuildDetails_C_OnCompletedGetGuildEntryData_Event_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildDetails.GuildDetails_C.OnCompletedGetGuildInviteData_Event
	 */
	struct UGuildDetails_C_OnCompletedGetGuildInviteData_Event_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildDetails.GuildDetails_C.ExecuteUbergraph_GuildDetails
	 */
	struct UGuildDetails_C_ExecuteUbergraph_GuildDetails_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_65LX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GuildDetails.GuildDetails_C.OnClose__DelegateSignature
	 */
	struct UGuildDetails_C_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function GuildDetails.GuildDetails_C.EventEdit__DelegateSignature
	 */
	struct UGuildDetails_C_EventEdit__DelegateSignature_Params
	{
	public:
		bool                                                       Edit;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
