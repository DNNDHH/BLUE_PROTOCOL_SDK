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
	 * Function CertificationWindow.CertificationWindow_C.SetBirthdayInfo
	 */
	struct UCertificationWindow_C_SetBirthdayInfo_Params
	{
	public:
		int32_t                                                    Year;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Month;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Age;                                                     // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Count;                                                   // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CertificationWindow.CertificationWindow_C.ReserveInputText
	 */
	struct UCertificationWindow_C_ReserveInputText_Params
	{
	public:
		class FText                                                Input;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       IsYear;                                                  // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsMonth;                                                 // 0x0019(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ISHI[0x2];                                   // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CertificationWindow.CertificationWindow_C.CheckInputText
	 */
	struct UCertificationWindow_C_CheckInputText_Params
	{
	public:
		class FText                                                Input;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       IsYear;                                                  // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsMonth;                                                 // 0x0019(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WWED[0x2];                                   // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CertificationWindow.CertificationWindow_C.CreateAgeLimit
	 */
	struct UCertificationWindow_C_CreateAgeLimit_Params
	{	};

	/**
	 * Function CertificationWindow.CertificationWindow_C.Clear
	 */
	struct UCertificationWindow_C_Clear_Params
	{	};

	/**
	 * Function CertificationWindow.CertificationWindow_C.CreateLists
	 */
	struct UCertificationWindow_C_CreateLists_Params
	{	};

	/**
	 * Function CertificationWindow.CertificationWindow_C.Hide
	 */
	struct UCertificationWindow_C_Hide_Params
	{	};

	/**
	 * Function CertificationWindow.CertificationWindow_C.Show
	 */
	struct UCertificationWindow_C_Show_Params
	{	};

	/**
	 * Function CertificationWindow.CertificationWindow_C.Construct
	 */
	struct UCertificationWindow_C_Construct_Params
	{	};

	/**
	 * Function CertificationWindow.CertificationWindow_C.BndEvt__List_Year_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UCertificationWindow_C_BndEvt__List_Year_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CertificationWindow.CertificationWindow_C.BndEvt__List_Month_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UCertificationWindow_C_BndEvt__List_Month_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CertificationWindow.CertificationWindow_C.DoClose
	 */
	struct UCertificationWindow_C_DoClose_Params
	{	};

	/**
	 * Function CertificationWindow.CertificationWindow_C.BndEvt__CmnBtn27_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature
	 */
	struct UCertificationWindow_C_BndEvt__CmnBtn27_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function CertificationWindow.CertificationWindow_C.BndEvt__CmnBtn27_132_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature
	 */
	struct UCertificationWindow_C_BndEvt__CmnBtn27_132_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function CertificationWindow.CertificationWindow_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
	 */
	struct UCertificationWindow_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function CertificationWindow.CertificationWindow_C.BndEvt__EditYear_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UCertificationWindow_C_BndEvt__EditYear_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CertificationWindow.CertificationWindow_C.BndEvt__EditMonth_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UCertificationWindow_C_BndEvt__EditMonth_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CertificationWindow.CertificationWindow_C.BndEvt__EditYear_K2Node_ComponentBoundEvent_8_OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UCertificationWindow_C_BndEvt__EditYear_K2Node_ComponentBoundEvent_8_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CertificationWindow.CertificationWindow_C.BndEvt__EditMonth_K2Node_ComponentBoundEvent_9_OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UCertificationWindow_C_BndEvt__EditMonth_K2Node_ComponentBoundEvent_9_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CertificationWindow.CertificationWindow_C.OnEsc
	 */
	struct UCertificationWindow_C_OnEsc_Params
	{	};

	/**
	 * Function CertificationWindow.CertificationWindow_C.BndEvt__CertificationWindow_BtnExit_K2Node_ComponentBoundEvent_6_EventClicked__DelegateSignature
	 */
	struct UCertificationWindow_C_BndEvt__CertificationWindow_BtnExit_K2Node_ComponentBoundEvent_6_EventClicked__DelegateSignature_Params
	{	};

	/**
	 * Function CertificationWindow.CertificationWindow_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_2
	 */
	struct UCertificationWindow_C_WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_2_Params
	{	};

	/**
	 * Function CertificationWindow.CertificationWindow_C.ExecuteUbergraph_CertificationWindow
	 */
	struct UCertificationWindow_C_ExecuteUbergraph_CertificationWindow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CertificationWindow.CertificationWindow_C.OnRequest__DelegateSignature
	 */
	struct UCertificationWindow_C_OnRequest__DelegateSignature_Params
	{
	public:
		int32_t                                                    Year;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Month;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CertificationWindow.CertificationWindow_C.OnClose__DelegateSignature
	 */
	struct UCertificationWindow_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
