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
	 * Function ResultDialog_Letter.ResultDialog_Letter_C.SetEnableButtonClose
	 */
	struct UResultDialog_Letter_C_SetEnableButtonClose_Params
	{
	public:
		bool                                                       bInIsEnabled;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ResultDialog_Letter.ResultDialog_Letter_C.SetEnableButtonFullScreen
	 */
	struct UResultDialog_Letter_C_SetEnableButtonFullScreen_Params
	{
	public:
		bool                                                       bInIsEnabled;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ResultDialog_Letter.ResultDialog_Letter_C.SetEnableButtonDecide
	 */
	struct UResultDialog_Letter_C_SetEnableButtonDecide_Params
	{
	public:
		bool                                                       bInIsEnabled;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ResultDialog_Letter.ResultDialog_Letter_C.SetEnableButton
	 */
	struct UResultDialog_Letter_C_SetEnableButton_Params
	{
	public:
		bool                                                       bInIsEnabled;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ResultDialog_Letter.ResultDialog_Letter_C.Closed
	 */
	struct UResultDialog_Letter_C_Closed_Params
	{	};

	/**
	 * Function ResultDialog_Letter.ResultDialog_Letter_C.PlayAnimationOut
	 */
	struct UResultDialog_Letter_C_PlayAnimationOut_Params
	{	};

	/**
	 * Function ResultDialog_Letter.ResultDialog_Letter_C.PlayAnimationIn
	 */
	struct UResultDialog_Letter_C_PlayAnimationIn_Params
	{	};

	/**
	 * Function ResultDialog_Letter.ResultDialog_Letter_C.Close
	 */
	struct UResultDialog_Letter_C_Close_Params
	{	};

	/**
	 * Function ResultDialog_Letter.ResultDialog_Letter_C.Opened
	 */
	struct UResultDialog_Letter_C_Opened_Params
	{	};

	/**
	 * Function ResultDialog_Letter.ResultDialog_Letter_C.Open
	 */
	struct UResultDialog_Letter_C_Open_Params
	{	};

	/**
	 * Function ResultDialog_Letter.ResultDialog_Letter_C.SetVisibleVBSend
	 */
	struct UResultDialog_Letter_C_SetVisibleVBSend_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ResultDialog_Letter.ResultDialog_Letter_C.SetVisibleVBLost
	 */
	struct UResultDialog_Letter_C_SetVisibleVBLost_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ResultDialog_Letter.ResultDialog_Letter_C.SetupSendItem
	 */
	struct UResultDialog_Letter_C_SetupSendItem_Params
	{
	public:
		TArray<struct FOwnItemInfo>                                InSendItems;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    InSkyCoin;                                               // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ResultDialog_Letter.ResultDialog_Letter_C.SetupLostItem
	 */
	struct UResultDialog_Letter_C_SetupLostItem_Params
	{
	public:
		TArray<struct FOwnItemInfo>                                InLostItems;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FSBOverLimit                                        InOverLimit;                                             // 0x0010(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ResultDialog_Letter.ResultDialog_Letter_C.Setup
	 */
	struct UResultDialog_Letter_C_Setup_Params
	{
	public:
		struct FSBLetter                                           InLetter;                                                // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FSBOverLimit                                        InOverLimit;                                             // 0x0028(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ResultDialog_Letter.ResultDialog_Letter_C.BindEscapeKey
	 */
	struct UResultDialog_Letter_C_BindEscapeKey_Params
	{	};

	/**
	 * Function ResultDialog_Letter.ResultDialog_Letter_C.UnbindEscapeKey
	 */
	struct UResultDialog_Letter_C_UnbindEscapeKey_Params
	{	};

	/**
	 * Function ResultDialog_Letter.ResultDialog_Letter_C.CustomEvent
	 */
	struct UResultDialog_Letter_C_CustomEvent_Params
	{	};

	/**
	 * Function ResultDialog_Letter.ResultDialog_Letter_C.OnAnimationFinished
	 */
	struct UResultDialog_Letter_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ResultDialog_Letter.ResultDialog_Letter_C.BndEvt__ResultDialog_Letter_Btn_Decide_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UResultDialog_Letter_C_BndEvt__ResultDialog_Letter_Btn_Decide_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ResultDialog_Letter.ResultDialog_Letter_C.BndEvt__ResultDialog_Letter_CmnClose03_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
	 */
	struct UResultDialog_Letter_C_BndEvt__ResultDialog_Letter_CmnClose03_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function ResultDialog_Letter.ResultDialog_Letter_C.OnPressEsc
	 */
	struct UResultDialog_Letter_C_OnPressEsc_Params
	{	};

	/**
	 * Function ResultDialog_Letter.ResultDialog_Letter_C.Construct
	 */
	struct UResultDialog_Letter_C_Construct_Params
	{	};

	/**
	 * Function ResultDialog_Letter.ResultDialog_Letter_C.Destruct
	 */
	struct UResultDialog_Letter_C_Destruct_Params
	{	};

	/**
	 * Function ResultDialog_Letter.ResultDialog_Letter_C.BndEvt__ResultDialog_Letter_Btn_FullScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UResultDialog_Letter_C_BndEvt__ResultDialog_Letter_Btn_FullScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ResultDialog_Letter.ResultDialog_Letter_C.BndEvt__Dialog_TacticalAbilityLearning_Btn_Decide_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UResultDialog_Letter_C_BndEvt__Dialog_TacticalAbilityLearning_Btn_Decide_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ResultDialog_Letter.ResultDialog_Letter_C.BndEvt__Dialog_TacticalAbilityLearning_Btn_Decide_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UResultDialog_Letter_C_BndEvt__Dialog_TacticalAbilityLearning_Btn_Decide_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ResultDialog_Letter.ResultDialog_Letter_C.ExecuteUbergraph_ResultDialog_Letter
	 */
	struct UResultDialog_Letter_C_ExecuteUbergraph_ResultDialog_Letter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DQXE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ResultDialog_Letter.ResultDialog_Letter_C.EndAnimOut__DelegateSignature
	 */
	struct UResultDialog_Letter_C_EndAnimOut__DelegateSignature_Params
	{	};

	/**
	 * Function ResultDialog_Letter.ResultDialog_Letter_C.EndAnimIn__DelegateSignature
	 */
	struct UResultDialog_Letter_C_EndAnimIn__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
