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
	 * Function HistoryWindow.HistoryWindow_C.CanInput
	 */
	struct UHistoryWindow_C_CanInput_Params
	{
	public:
		bool                                                       Ok;                                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HistoryWindow.HistoryWindow_C.FixExpired
	 */
	struct UHistoryWindow_C_FixExpired_Params
	{
	public:
		struct FSBHistoryExpired                                   Data;                                                    // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function HistoryWindow.HistoryWindow_C.GetRequestDate_DeleteAnnounce
	 */
	struct UHistoryWindow_C_GetRequestDate_DeleteAnnounce_Params
	{	};

	/**
	 * Function HistoryWindow.HistoryWindow_C.SetUIBlocker
	 */
	struct UHistoryWindow_C_SetUIBlocker_Params
	{
	public:
		bool                                                       bLock;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HistoryWindow.HistoryWindow_C.On_ComboBox_Count_GenerateWidget_1
	 */
	struct UHistoryWindow_C_On_ComboBox_Count_GenerateWidget_1_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HistoryWindow.HistoryWindow_C.On_ComboBox_Month_GenerateWidget_1
	 */
	struct UHistoryWindow_C_On_ComboBox_Month_GenerateWidget_1_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HistoryWindow.HistoryWindow_C.On_ComboBox_Year_GenerateWidget_1
	 */
	struct UHistoryWindow_C_On_ComboBox_Year_GenerateWidget_1_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HistoryWindow.HistoryWindow_C.CreateHistoryList
	 */
	struct UHistoryWindow_C_CreateHistoryList_Params
	{
	public:
		TArray<struct FSBCashHistory>                              List;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function HistoryWindow.HistoryWindow_C.Create_MonthComboBox
	 */
	struct UHistoryWindow_C_Create_MonthComboBox_Params
	{
	public:
		int32_t                                                    First;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Last;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HistoryWindow.HistoryWindow_C.Init_CountComboBox
	 */
	struct UHistoryWindow_C_Init_CountComboBox_Params
	{	};

	/**
	 * Function HistoryWindow.HistoryWindow_C.Init_YearComboBox
	 */
	struct UHistoryWindow_C_Init_YearComboBox_Params
	{	};

	/**
	 * Function HistoryWindow.HistoryWindow_C.Init_MonthComboBox
	 */
	struct UHistoryWindow_C_Init_MonthComboBox_Params
	{	};

	/**
	 * Function HistoryWindow.HistoryWindow_C.Init
	 */
	struct UHistoryWindow_C_Init_Params
	{	};

	/**
	 * Function HistoryWindow.HistoryWindow_C.Hide
	 */
	struct UHistoryWindow_C_Hide_Params
	{	};

	/**
	 * Function HistoryWindow.HistoryWindow_C.Show
	 */
	struct UHistoryWindow_C_Show_Params
	{
	public:
		ESBHistoryType                                             HistoryType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7NK5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HistoryWindow.HistoryWindow_C.Construct
	 */
	struct UHistoryWindow_C_Construct_Params
	{	};

	/**
	 * Function HistoryWindow.HistoryWindow_C.BndEvt__ComboBox_Year_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UHistoryWindow_C_BndEvt__ComboBox_Year_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HistoryWindow.HistoryWindow_C.BndEvt__ComboBox_Month_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UHistoryWindow_C_BndEvt__ComboBox_Month_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HistoryWindow.HistoryWindow_C.BndEvt__ComboBox_Count_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UHistoryWindow_C_BndEvt__ComboBox_Count_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HistoryWindow.HistoryWindow_C.BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature
	 */
	struct UHistoryWindow_C_BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function HistoryWindow.HistoryWindow_C.BndEvt__BtnCancel_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature
	 */
	struct UHistoryWindow_C_BndEvt__BtnCancel_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function HistoryWindow.HistoryWindow_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
	 */
	struct UHistoryWindow_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function HistoryWindow.HistoryWindow_C.BndEvt__HistoryWindow_BtnExit_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature
	 */
	struct UHistoryWindow_C_BndEvt__HistoryWindow_BtnExit_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature_Params
	{	};

	/**
	 * Function HistoryWindow.HistoryWindow_C.BndEvt__HistoryWindow_BtnAnnounce_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
	 */
	struct UHistoryWindow_C_BndEvt__HistoryWindow_BtnAnnounce_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function HistoryWindow.HistoryWindow_C.OnClosed_Announce
	 */
	struct UHistoryWindow_C_OnClosed_Announce_Params
	{	};

	/**
	 * Function HistoryWindow.HistoryWindow_C.OnEsc
	 */
	struct UHistoryWindow_C_OnEsc_Params
	{	};

	/**
	 * Function HistoryWindow.HistoryWindow_C.ShowWindow_DeleteAnnounce
	 */
	struct UHistoryWindow_C_ShowWindow_DeleteAnnounce_Params
	{	};

	/**
	 * Function HistoryWindow.HistoryWindow_C.ShowMessageDialog_Event
	 */
	struct UHistoryWindow_C_ShowMessageDialog_Event_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function HistoryWindow.HistoryWindow_C.SetExpiredData
	 */
	struct UHistoryWindow_C_SetExpiredData_Params
	{
	public:
		struct FSBHistoryExpired                                   Data;                                                    // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function HistoryWindow.HistoryWindow_C.ExecuteUbergraph_HistoryWindow
	 */
	struct UHistoryWindow_C_ExecuteUbergraph_HistoryWindow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HistoryWindow.HistoryWindow_C.OnRequestDel__DelegateSignature
	 */
	struct UHistoryWindow_C_OnRequestDel__DelegateSignature_Params
	{
	public:
		ESBHistoryType                                             Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HistoryWindow.HistoryWindow_C.OnRequest__DelegateSignature
	 */
	struct UHistoryWindow_C_OnRequest__DelegateSignature_Params
	{
	public:
		ESBHistoryType                                             Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PYMZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Year;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Month;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Count;                                                   // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HistoryWindow.HistoryWindow_C.OnClose__DelegateSignature
	 */
	struct UHistoryWindow_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
