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
	 * Function PlayerReport.PlayerReport_C.SyncAnimInAfterVisibility
	 */
	struct UPlayerReport_C_SyncAnimInAfterVisibility_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_77JJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerReport.PlayerReport_C.On_sb_cb_category_list_GenerateWidget_4
	 */
	struct UPlayerReport_C_On_sb_cb_category_list_GenerateWidget_4_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerReport.PlayerReport_C.On_sb_cb_category_list_GenerateWidget_3
	 */
	struct UPlayerReport_C_On_sb_cb_category_list_GenerateWidget_3_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerReport.PlayerReport_C.On_sb_cb_category_list_GenerateWidget_2
	 */
	struct UPlayerReport_C_On_sb_cb_category_list_GenerateWidget_2_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerReport.PlayerReport_C.On_sb_cb_category_list_GenerateWidget_1
	 */
	struct UPlayerReport_C_On_sb_cb_category_list_GenerateWidget_1_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerReport.PlayerReport_C.ClearInputData
	 */
	struct UPlayerReport_C_ClearInputData_Params
	{	};

	/**
	 * Function PlayerReport.PlayerReport_C.UpdateReportConfirmState
	 */
	struct UPlayerReport_C_UpdateReportConfirmState_Params
	{	};

	/**
	 * Function PlayerReport.PlayerReport_C.CheckReportMessage
	 */
	struct UPlayerReport_C_CheckReportMessage_Params
	{	};

	/**
	 * Function PlayerReport.PlayerReport_C.Get_multiline_tb_report_input_body_HintText
	 */
	struct UPlayerReport_C_Get_multiline_tb_report_input_body_HintText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function PlayerReport.PlayerReport_C.InitCategoryList
	 */
	struct UPlayerReport_C_InitCategoryList_Params
	{	};

	/**
	 * Function PlayerReport.PlayerReport_C.Init
	 */
	struct UPlayerReport_C_Init_Params
	{
	public:
		struct FPlayerProfileMenuDetailData                        TargetPlayerDetailData;                                  // 0x0000(0x0468)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function PlayerReport.PlayerReport_C.Construct
	 */
	struct UPlayerReport_C_Construct_Params
	{	};

	/**
	 * Function PlayerReport.PlayerReport_C.Destruct
	 */
	struct UPlayerReport_C_Destruct_Params
	{	};

	/**
	 * Function PlayerReport.PlayerReport_C.DownLoadFaceImage_Event
	 */
	struct UPlayerReport_C_DownLoadFaceImage_Event_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerReport.PlayerReport_C.BndEvt__btn_input_confirm_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
	 */
	struct UPlayerReport_C_BndEvt__btn_input_confirm_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function PlayerReport.PlayerReport_C.BndEvt__multiline_tb_report_input_body_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UPlayerReport_C_BndEvt__multiline_tb_report_input_body_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PlayerReport.PlayerReport_C.BndEvt__multiline_tb_report_input_body_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UPlayerReport_C_BndEvt__multiline_tb_report_input_body_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerReport.PlayerReport_C.BndEvt__sb_cb_category_list_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UPlayerReport_C_BndEvt__sb_cb_category_list_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerReport.PlayerReport_C.OnDecideReportDialog
	 */
	struct UPlayerReport_C_OnDecideReportDialog_Params
	{
	public:
		EYesNoDialogResult                                         Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerReport.PlayerReport_C.BndEvt__btn_space_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 */
	struct UPlayerReport_C_BndEvt__btn_space_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function PlayerReport.PlayerReport_C.OnCloseReportDialog
	 */
	struct UPlayerReport_C_OnCloseReportDialog_Params
	{
	public:
		EYesNoDialogResult                                         Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerReport.PlayerReport_C.OnRequestReportSendDelegate_Event
	 */
	struct UPlayerReport_C_OnRequestReportSendDelegate_Event_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TM2L[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RetCode;                                                 // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerReport.PlayerReport_C.BndEvt__PlayerReport_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
	 */
	struct UPlayerReport_C_BndEvt__PlayerReport_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function PlayerReport.PlayerReport_C.PressCancel_Event
	 */
	struct UPlayerReport_C_PressCancel_Event_Params
	{	};

	/**
	 * Function PlayerReport.PlayerReport_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_2
	 */
	struct UPlayerReport_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_2_Params
	{	};

	/**
	 * Function PlayerReport.PlayerReport_C.OnAnimationFinished
	 */
	struct UPlayerReport_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerReport.PlayerReport_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1
	 */
	struct UPlayerReport_C_WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function PlayerReport.PlayerReport_C.OnVisibilityChanged_Event_1
	 */
	struct UPlayerReport_C_OnVisibilityChanged_Event_1_Params
	{
	public:
		ESlateVisibility                                           InVisibility;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerReport.PlayerReport_C.ExecuteUbergraph_PlayerReport
	 */
	struct UPlayerReport_C_ExecuteUbergraph_PlayerReport_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerReport.PlayerReport_C.OnClose__DelegateSignature
	 */
	struct UPlayerReport_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
