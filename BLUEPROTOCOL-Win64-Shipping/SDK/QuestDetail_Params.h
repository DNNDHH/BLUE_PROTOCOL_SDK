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
	 * Function QuestDetail.QuestDetail_C.Stop All Button Click Input Action
	 */
	struct UQuestDetail_C_StopAllButtonClickInputAction_Params
	{	};

	/**
	 * Function QuestDetail.QuestDetail_C.SetActionButtonLabelCmn16
	 */
	struct UQuestDetail_C_SetActionButtonLabelCmn16_Params
	{
	public:
		class UCmnBtn16_C*                                         CmnBtn16;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EQuestDetail_ActionButtonType                              InType;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AG37[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function QuestDetail.QuestDetail_C.SetNextMainQuestMode
	 */
	struct UQuestDetail_C_SetNextMainQuestMode_Params
	{
	public:
		bool                                                       Flag;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function QuestDetail.QuestDetail_C.SetPreviewModeEx
	 */
	struct UQuestDetail_C_SetPreviewModeEx_Params
	{
	public:
		bool                                                       InShowButton;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function QuestDetail.QuestDetail_C.Get Quest Precondition Infos
	 */
	struct UQuestDetail_C_GetQuestPreconditionInfos_Params
	{
	public:
		int32_t                                                    InQuestIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EQuestStatus                                               InQuestStatus;                                           // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2TWT[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FSBQuestPreconditionUIInfo>                  OutUiInfo;                                               // 0x0008(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function QuestDetail.QuestDetail_C.Set Repeat Count Text
	 */
	struct UQuestDetail_C_SetRepeatCountText_Params
	{
	public:
		int32_t                                                    InQuestIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestDetail.QuestDetail_C.SetQuestStatusText
	 */
	struct UQuestDetail_C_SetQuestStatusText_Params
	{
	public:
		int32_t                                                    InQuestIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EQuestStatus                                               InQuestStatus;                                           // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H78G[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function QuestDetail.QuestDetail_C.TermRequesTiming
	 */
	struct UQuestDetail_C_TermRequesTiming_Params
	{	};

	/**
	 * Function QuestDetail.QuestDetail_C.SetPreviewMode
	 */
	struct UQuestDetail_C_SetPreviewMode_Params
	{
	public:
		bool                                                       bPreviewMode;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function QuestDetail.QuestDetail_C.ResetButtonEnable
	 */
	struct UQuestDetail_C_ResetButtonEnable_Params
	{	};

	/**
	 * Function QuestDetail.QuestDetail_C.CheckPrecondition
	 */
	struct UQuestDetail_C_CheckPrecondition_Params
	{
	public:
		int32_t                                                    InQuestIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bResult;                                                 // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function QuestDetail.QuestDetail_C.PlayActionButtonClickSound
	 */
	struct UQuestDetail_C_PlayActionButtonClickSound_Params
	{
	public:
		EQuestDetail_ActionButtonType                              InType;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestDetail.QuestDetail_C.DestroyBlocker
	 */
	struct UQuestDetail_C_DestroyBlocker_Params
	{	};

	/**
	 * Function QuestDetail.QuestDetail_C.CreateBlocker
	 */
	struct UQuestDetail_C_CreateBlocker_Params
	{	};

	/**
	 * Function QuestDetail.QuestDetail_C.GetThumbnailId
	 */
	struct UQuestDetail_C_GetThumbnailId_Params
	{
	public:
		int32_t                                                    QuestIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                ThumbnailId;                                             // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestDetail.QuestDetail_C.SetButtonVisibility
	 */
	struct UQuestDetail_C_SetButtonVisibility_Params
	{
	public:
		ESlateVisibility                                           InButton1;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESlateVisibility                                           InButton2;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestDetail.QuestDetail_C.SetButtonState
	 */
	struct UQuestDetail_C_SetButtonState_Params
	{
	public:
		EQuestDetail_ActionButtonType                              ButtonType1;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EQuestDetail_ActionButtonType                              ButtonType2;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bButtonEnable1;                                          // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CNJE[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function QuestDetail.QuestDetail_C.SetButton
	 */
	struct UQuestDetail_C_SetButton_Params
	{
	public:
		EQuestStatus                                               InQuestStatus;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DFDC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FQuestMasterData                                    InQuestMasterData;                                       // 0x0008(0x0118)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function QuestDetail.QuestDetail_C.SetQuestInfo_Internal
	 */
	struct UQuestDetail_C_SetQuestInfo_Internal_Params
	{
	public:
		int32_t                                                    InQuestIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsEnableRouteGuideSw;                                    // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function QuestDetail.QuestDetail_C.OnLoaded_430FBD6944474F8D28745AB2C5A082A2
	 */
	struct UQuestDetail_C_OnLoaded_430FBD6944474F8D28745AB2C5A082A2_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestDetail.QuestDetail_C.AcceptQuest
	 */
	struct UQuestDetail_C_AcceptQuest_Params
	{	};

	/**
	 * Function QuestDetail.QuestDetail_C.OnAcceptQuestDelegate_Event_1
	 */
	struct UQuestDetail_C_OnAcceptQuestDelegate_Event_1_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EAcceptedQuestErrorCode                                    ErrorCode;                                               // 0x0001(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3SW2[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RetCode;                                                 // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FAcceptedQuestInfo                                  AcceptedQuestInfo;                                       // 0x0008(0x0060)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function QuestDetail.QuestDetail_C.CustomEvent
	 */
	struct UQuestDetail_C_CustomEvent_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KN48[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    QuestIndex;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestDetail.QuestDetail_C.CancelQuest
	 */
	struct UQuestDetail_C_CancelQuest_Params
	{	};

	/**
	 * Function QuestDetail.QuestDetail_C.ReportQuest
	 */
	struct UQuestDetail_C_ReportQuest_Params
	{	};

	/**
	 * Function QuestDetail.QuestDetail_C.OnFinish_Event_1
	 */
	struct UQuestDetail_C_OnFinish_Event_1_Params
	{
	public:
		bool                                                       bReported;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function QuestDetail.QuestDetail_C.Construct
	 */
	struct UQuestDetail_C_Construct_Params
	{	};

	/**
	 * Function QuestDetail.QuestDetail_C.Destruct
	 */
	struct UQuestDetail_C_Destruct_Params
	{	};

	/**
	 * Function QuestDetail.QuestDetail_C.OnActionButtonClicked
	 */
	struct UQuestDetail_C_OnActionButtonClicked_Params
	{
	public:
		EQuestDetail_ActionButtonType                              InType;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestDetail.QuestDetail_C.FinishResultNone
	 */
	struct UQuestDetail_C_FinishResultNone_Params
	{	};

	/**
	 * Function QuestDetail.QuestDetail_C.SetThumbnail
	 */
	struct UQuestDetail_C_SetThumbnail_Params
	{
	public:
		int32_t                                                    InQuestIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestDetail.QuestDetail_C.FinishResultCancel
	 */
	struct UQuestDetail_C_FinishResultCancel_Params
	{	};

	/**
	 * Function QuestDetail.QuestDetail_C.SetQuestInfo
	 */
	struct UQuestDetail_C_SetQuestInfo_Params
	{
	public:
		int32_t                                                    InQuestIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsEnableRouteGuideSw;                                    // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function QuestDetail.QuestDetail_C.ChangeQuestInfo
	 */
	struct UQuestDetail_C_ChangeQuestInfo_Params
	{
	public:
		int32_t                                                    InQuestIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsEnableRouteGuideSw;                                    // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function QuestDetail.QuestDetail_C.OnPress_Cancel
	 */
	struct UQuestDetail_C_OnPress_Cancel_Params
	{	};

	/**
	 * Function QuestDetail.QuestDetail_C.ChangeQuestInfoForQuestList
	 */
	struct UQuestDetail_C_ChangeQuestInfoForQuestList_Params
	{
	public:
		int32_t                                                    InQuestIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsEnableRouteGuideSw;                                    // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsClosed;                                                // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function QuestDetail.QuestDetail_C.BndEvt__QuestDetail_NewButton1_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
	 */
	struct UQuestDetail_C_BndEvt__QuestDetail_NewButton1_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function QuestDetail.QuestDetail_C.BndEvt__QuestDetail_NewButton2_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
	 */
	struct UQuestDetail_C_BndEvt__QuestDetail_NewButton2_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function QuestDetail.QuestDetail_C.BndEvt__QuestDetail_NewButton3_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature
	 */
	struct UQuestDetail_C_BndEvt__QuestDetail_NewButton3_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function QuestDetail.QuestDetail_C.ExecuteUbergraph_QuestDetail
	 */
	struct UQuestDetail_C_ExecuteUbergraph_QuestDetail_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestDetail.QuestDetail_C.OnFinish__DelegateSignature
	 */
	struct UQuestDetail_C_OnFinish__DelegateSignature_Params
	{
	public:
		EQuestDetail_FinishStatus                                  FinishStatus;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9G90[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    QuestIndex;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
