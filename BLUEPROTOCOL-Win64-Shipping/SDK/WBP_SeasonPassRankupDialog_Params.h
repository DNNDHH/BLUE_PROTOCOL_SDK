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
	 * Function WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C.PreConstruct
	 */
	struct UWBP_SeasonPassRankupDialog_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C.BndEvt__WBP_SeasonPassRankupDialog_SBButton_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_SeasonPassRankupDialog_C_BndEvt__WBP_SeasonPassRankupDialog_SBButton_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C.Construct
	 */
	struct UWBP_SeasonPassRankupDialog_C_Construct_Params
	{	};

	/**
	 * Function WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C.OnInputCancelKey
	 */
	struct UWBP_SeasonPassRankupDialog_C_OnInputCancelKey_Params
	{	};

	/**
	 * Function WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C.BndEvt__WBP_SeasonPassRankupDialog_SBButtonFullScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_SeasonPassRankupDialog_C_BndEvt__WBP_SeasonPassRankupDialog_SBButtonFullScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C.SetData
	 */
	struct UWBP_SeasonPassRankupDialog_C_SetData_Params
	{
	public:
		int32_t                                                    CurrRank;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    MinRank;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    MaxRank;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CurrPoint;                                               // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CosumePoint;                                             // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C.BndEvt__WBP_SeasonPassRankupDialog_SBTextButtonCmnBtn27_Ok_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_SeasonPassRankupDialog_C_BndEvt__WBP_SeasonPassRankupDialog_SBTextButtonCmnBtn27_Ok_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C.Event_OnValueChanged
	 */
	struct UWBP_SeasonPassRankupDialog_C_Event_OnValueChanged_Params
	{
	public:
		bool                                                       bOnlyDisplay;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C.WidgetAnimationEvt_AnmOut_K2Node_WidgetAnimationEvent_1
	 */
	struct UWBP_SeasonPassRankupDialog_C_WidgetAnimationEvt_AnmOut_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C.WidgetAnimationEvt_AnmIn_K2Node_WidgetAnimationEvent_2
	 */
	struct UWBP_SeasonPassRankupDialog_C_WidgetAnimationEvt_AnmIn_K2Node_WidgetAnimationEvent_2_Params
	{	};

	/**
	 * Function WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C.ExecuteUbergraph_WBP_SeasonPassRankupDialog
	 */
	struct UWBP_SeasonPassRankupDialog_C_ExecuteUbergraph_WBP_SeasonPassRankupDialog_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0M9O[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_SeasonPassRankupDialog.WBP_SeasonPassRankupDialog_C.OnClickedOk__DelegateSignature
	 */
	struct UWBP_SeasonPassRankupDialog_C_OnClickedOk__DelegateSignature_Params
	{
	public:
		int32_t                                                    UpRank;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
