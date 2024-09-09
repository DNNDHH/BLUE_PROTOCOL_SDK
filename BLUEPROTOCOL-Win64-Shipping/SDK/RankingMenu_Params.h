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
	 * Function RankingMenu.RankingMenu_C.OffsetMyRank
	 */
	struct URankingMenu_C_OffsetMyRank_Params
	{	};

	/**
	 * Function RankingMenu.RankingMenu_C.GetNowRankingType
	 */
	struct URankingMenu_C_GetNowRankingType_Params
	{
	public:
		ESBRankingType                                             RankingType;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RankingMenu.RankingMenu_C.GetMyItemPosition
	 */
	struct URankingMenu_C_GetMyItemPosition_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RankingMenu.RankingMenu_C.IsShowEmptyMyRankingData
	 */
	struct URankingMenu_C_IsShowEmptyMyRankingData_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RankingMenu.RankingMenu_C.SetRankingHistory_ComboBoxSelectAt
	 */
	struct URankingMenu_C_SetRankingHistory_ComboBoxSelectAt_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       NotUpdateRankingHistory;                                 // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RankingMenu.RankingMenu_C.ClearPage_ComboBox
	 */
	struct URankingMenu_C_ClearPage_ComboBox_Params
	{
	public:
		bool                                                       NotUpdatePage;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RankingMenu.RankingMenu_C.SetClassType_ComboBoxSelectAt
	 */
	struct URankingMenu_C_SetClassType_ComboBoxSelectAt_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       NotUpdateClassType;                                      // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RankingMenu.RankingMenu_C.SetPage_ComboBoxSelectAt
	 */
	struct URankingMenu_C_SetPage_ComboBoxSelectAt_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       NotUpdatePage;                                           // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RankingMenu.RankingMenu_C.On_RankingHistory_ComboBox_GenerateWidget_1
	 */
	struct URankingMenu_C_On_RankingHistory_ComboBox_GenerateWidget_1_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RankingMenu.RankingMenu_C.On_ClassType_ComboBox_GenerateWidget_1
	 */
	struct URankingMenu_C_On_ClassType_ComboBox_GenerateWidget_1_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RankingMenu.RankingMenu_C.On_Page_ComboBox_GenerateWidget_1
	 */
	struct URankingMenu_C_On_Page_ComboBox_GenerateWidget_1_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RankingMenu.RankingMenu_C.SetHistoryComboBox
	 */
	struct URankingMenu_C_SetHistoryComboBox_Params
	{	};

	/**
	 * Function RankingMenu.RankingMenu_C.Set Page Combo Box Option
	 */
	struct URankingMenu_C_SetPageComboBoxOption_Params
	{
	public:
		int32_t                                                    InLastIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RankingMenu.RankingMenu_C.SetClassComboBox
	 */
	struct URankingMenu_C_SetClassComboBox_Params
	{	};

	/**
	 * Function RankingMenu.RankingMenu_C.Construct
	 */
	struct URankingMenu_C_Construct_Params
	{	};

	/**
	 * Function RankingMenu.RankingMenu_C.Destruct
	 */
	struct URankingMenu_C_Destruct_Params
	{	};

	/**
	 * Function RankingMenu.RankingMenu_C.BndEvt__CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature
	 */
	struct URankingMenu_C_BndEvt__CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature_Params
	{	};

	/**
	 * Function RankingMenu.RankingMenu_C.OnPress_Cancel
	 */
	struct URankingMenu_C_OnPress_Cancel_Params
	{	};

	/**
	 * Function RankingMenu.RankingMenu_C.BndEvt__ClassType_ComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature
	 */
	struct URankingMenu_C_BndEvt__ClassType_ComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RankingMenu.RankingMenu_C.ChangeFocusCategory
	 */
	struct URankingMenu_C_ChangeFocusCategory_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RankingMenu.RankingMenu_C.BndEvt__Page_ComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
	 */
	struct URankingMenu_C_BndEvt__Page_ComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RankingMenu.RankingMenu_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
	 */
	struct URankingMenu_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function RankingMenu.RankingMenu_C.BndEvt__RankingHistory_ComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature
	 */
	struct URankingMenu_C_BndEvt__RankingHistory_ComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RankingMenu.RankingMenu_C.OnCompletedRankingHistory
	 */
	struct URankingMenu_C_OnCompletedRankingHistory_Params
	{	};

	/**
	 * Function RankingMenu.RankingMenu_C.OnCompletedRankingView
	 */
	struct URankingMenu_C_OnCompletedRankingView_Params
	{	};

	/**
	 * Function RankingMenu.RankingMenu_C.OutRangeMyRank
	 */
	struct URankingMenu_C_OutRangeMyRank_Params
	{	};

	/**
	 * Function RankingMenu.RankingMenu_C.BndEvt__RankingMenu_NextRank_Btn_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature
	 */
	struct URankingMenu_C_BndEvt__RankingMenu_NextRank_Btn_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function RankingMenu.RankingMenu_C.BndEvt__RankingMenu_MyRank_Btn_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature
	 */
	struct URankingMenu_C_BndEvt__RankingMenu_MyRank_Btn_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function RankingMenu.RankingMenu_C.BndEvt__RankingMenu_PrevRank_Btn_K2Node_ComponentBoundEvent_11_EventOnClicked__DelegateSignature
	 */
	struct URankingMenu_C_BndEvt__RankingMenu_PrevRank_Btn_K2Node_ComponentBoundEvent_11_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function RankingMenu.RankingMenu_C.BndEvt__RankingMenu_TopRank_Btn_K2Node_ComponentBoundEvent_12_EventOnClicked__DelegateSignature
	 */
	struct URankingMenu_C_BndEvt__RankingMenu_TopRank_Btn_K2Node_ComponentBoundEvent_12_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function RankingMenu.RankingMenu_C.OnFailedRankingView
	 */
	struct URankingMenu_C_OnFailedRankingView_Params
	{	};

	/**
	 * Function RankingMenu.RankingMenu_C.BndEvt__RankingMenu_CmnBtn27_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature
	 */
	struct URankingMenu_C_BndEvt__RankingMenu_CmnBtn27_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function RankingMenu.RankingMenu_C.ChangeStart
	 */
	struct URankingMenu_C_ChangeStart_Params
	{	};

	/**
	 * Function RankingMenu.RankingMenu_C.ChangeEnd
	 */
	struct URankingMenu_C_ChangeEnd_Params
	{
	public:
		bool                                                       PlayAnimation;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RankingMenu.RankingMenu_C.ChangeSelectHistory
	 */
	struct URankingMenu_C_ChangeSelectHistory_Params
	{	};

	/**
	 * Function RankingMenu.RankingMenu_C.ChangeSelectClass
	 */
	struct URankingMenu_C_ChangeSelectClass_Params
	{	};

	/**
	 * Function RankingMenu.RankingMenu_C.RequestUpdateRankingView
	 */
	struct URankingMenu_C_RequestUpdateRankingView_Params
	{	};

	/**
	 * Function RankingMenu.RankingMenu_C.ChangeSelectPage
	 */
	struct URankingMenu_C_ChangeSelectPage_Params
	{	};

	/**
	 * Function RankingMenu.RankingMenu_C.BndEvt__RankingMenu_SBButton_C_139_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct URankingMenu_C_BndEvt__RankingMenu_SBButton_C_139_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function RankingMenu.RankingMenu_C.ExecuteUbergraph_RankingMenu
	 */
	struct URankingMenu_C_ExecuteUbergraph_RankingMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RankingMenu.RankingMenu_C.OnClose__DelegateSignature
	 */
	struct URankingMenu_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
