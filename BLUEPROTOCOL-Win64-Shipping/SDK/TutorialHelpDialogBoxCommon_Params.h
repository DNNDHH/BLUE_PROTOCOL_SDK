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
	 * Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.SetErrorData
	 */
	struct UTutorialHelpDialogBoxCommon_C_SetErrorData_Params
	{
	public:
		class FName                                                HelpId;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.ISCurrentPageEnd
	 */
	struct UTutorialHelpDialogBoxCommon_C_ISCurrentPageEnd_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.UpdatePageButton
	 */
	struct UTutorialHelpDialogBoxCommon_C_UpdatePageButton_Params
	{	};

	/**
	 * Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.SetHelpData
	 */
	struct UTutorialHelpDialogBoxCommon_C_SetHelpData_Params
	{
	public:
		int32_t                                                    InPage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2EPI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBTutorialHelpData                                 InData;                                                  // 0x0008(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.FindTurotialHelpData
	 */
	struct UTutorialHelpDialogBoxCommon_C_FindTurotialHelpData_Params
	{
	public:
		class FName                                                InId;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInIsUsingClassTypeForTutorialHelp;                      // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ESBClassType                                               InClassTypeForTutorialHelp;                              // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFind;                                                   // 0x000A(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HBNR[0x5];                                   // 0x000B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBTutorialHelpData                                 Ret;                                                     // 0x0010(0x0058)  (Parm, OutParm)
	};

	/**
	 * Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.Init
	 */
	struct UTutorialHelpDialogBoxCommon_C_Init_Params
	{
	public:
		class FName                                                InId;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InSubMode;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsContinue;                                              // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInIsUsingClassTypeForTutorialHelp;                      // 0x000A(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ESBClassType                                               InClasTypeForTutorialHelp;                               // 0x000B(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.UpdateUI
	 */
	struct UTutorialHelpDialogBoxCommon_C_UpdateUI_Params
	{	};

	/**
	 * Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.BndEvt__NextButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UTutorialHelpDialogBoxCommon_C_BndEvt__NextButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.OnNextPage
	 */
	struct UTutorialHelpDialogBoxCommon_C_OnNextPage_Params
	{	};

	/**
	 * Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.BndEvt__BackButton_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UTutorialHelpDialogBoxCommon_C_BndEvt__BackButton_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.Construct
	 */
	struct UTutorialHelpDialogBoxCommon_C_Construct_Params
	{	};

	/**
	 * Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.Destruct
	 */
	struct UTutorialHelpDialogBoxCommon_C_Destruct_Params
	{	};

	/**
	 * Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.OnClose_Event
	 */
	struct UTutorialHelpDialogBoxCommon_C_OnClose_Event_Params
	{	};

	/**
	 * Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.OnForceClose_Event
	 */
	struct UTutorialHelpDialogBoxCommon_C_OnForceClose_Event_Params
	{	};

	/**
	 * Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.On Colose
	 */
	struct UTutorialHelpDialogBoxCommon_C_OnColose_Params
	{	};

	/**
	 * Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.BndEvt__TutorialHelpDialogBoxCommon_CmnClose01_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature
	 */
	struct UTutorialHelpDialogBoxCommon_C_BndEvt__TutorialHelpDialogBoxCommon_CmnClose01_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.BndEvt__TutorialHelpDialogBoxCommon_Btn_NextClose_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 */
	struct UTutorialHelpDialogBoxCommon_C_BndEvt__TutorialHelpDialogBoxCommon_Btn_NextClose_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.OnPress_Cancel_2
	 */
	struct UTutorialHelpDialogBoxCommon_C_OnPress_Cancel_2_Params
	{	};

	/**
	 * Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.On Open
	 */
	struct UTutorialHelpDialogBoxCommon_C_OnOpen_Params
	{	};

	/**
	 * Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.On Open Continue
	 */
	struct UTutorialHelpDialogBoxCommon_C_OnOpenContinue_Params
	{	};

	/**
	 * Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_4
	 */
	struct UTutorialHelpDialogBoxCommon_C_WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_4_Params
	{	};

	/**
	 * Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.WidgetAnimationEvt_AnimIn_Continue_K2Node_WidgetAnimationEvent_5
	 */
	struct UTutorialHelpDialogBoxCommon_C_WidgetAnimationEvt_AnimIn_Continue_K2Node_WidgetAnimationEvent_5_Params
	{	};

	/**
	 * Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.ExecuteUbergraph_TutorialHelpDialogBoxCommon
	 */
	struct UTutorialHelpDialogBoxCommon_C_ExecuteUbergraph_TutorialHelpDialogBoxCommon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C.OnClose__DelegateSignature
	 */
	struct UTutorialHelpDialogBoxCommon_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
