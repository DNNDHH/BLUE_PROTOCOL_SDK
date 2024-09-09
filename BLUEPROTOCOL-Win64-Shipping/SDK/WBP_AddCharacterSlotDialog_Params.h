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
	 * Function WBP_AddCharacterSlotDialog.WBP_AddCharacterSlotDialog_C.GetWarningToolTipWidget
	 */
	struct UWBP_AddCharacterSlotDialog_C_GetWarningToolTipWidget_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_AddCharacterSlotDialog.WBP_AddCharacterSlotDialog_C.CancelEvent
	 */
	struct UWBP_AddCharacterSlotDialog_C_CancelEvent_Params
	{	};

	/**
	 * Function WBP_AddCharacterSlotDialog.WBP_AddCharacterSlotDialog_C.EndEvent
	 */
	struct UWBP_AddCharacterSlotDialog_C_EndEvent_Params
	{	};

	/**
	 * Function WBP_AddCharacterSlotDialog.WBP_AddCharacterSlotDialog_C.BndEvt__WBP_AddCharacterSlotDialog_SBButton_C_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_AddCharacterSlotDialog_C_BndEvt__WBP_AddCharacterSlotDialog_SBButton_C_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_AddCharacterSlotDialog.WBP_AddCharacterSlotDialog_C.Initialize
	 */
	struct UWBP_AddCharacterSlotDialog_C_Initialize_Params
	{
	public:
		int32_t                                                    SlotNowMax;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SlotAddMax;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PurchaseAmount;                                          // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8P9R[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBCryptoCurrency                                   SBCryptoCurrency;                                        // 0x0010(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function WBP_AddCharacterSlotDialog.WBP_AddCharacterSlotDialog_C.BndEvt__WBP_AddCharacterSlotDialog_SBButton_C_7_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_AddCharacterSlotDialog_C_BndEvt__WBP_AddCharacterSlotDialog_SBButton_C_7_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_AddCharacterSlotDialog.WBP_AddCharacterSlotDialog_C.BuiFinish
	 */
	struct UWBP_AddCharacterSlotDialog_C_BuiFinish_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9FAB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RetCode;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_AddCharacterSlotDialog.WBP_AddCharacterSlotDialog_C.BndEvt__WBP_AddCharacterSlotDialog_CmnBack01_K2Node_ComponentBoundEvent_3_EventClicked__DelegateSignature
	 */
	struct UWBP_AddCharacterSlotDialog_C_BndEvt__WBP_AddCharacterSlotDialog_CmnBack01_K2Node_ComponentBoundEvent_3_EventClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_AddCharacterSlotDialog.WBP_AddCharacterSlotDialog_C.BndEvt__WBP_AddCharacterSlotDialog_ExpansionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_AddCharacterSlotDialog_C_BndEvt__WBP_AddCharacterSlotDialog_ExpansionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_AddCharacterSlotDialog.WBP_AddCharacterSlotDialog_C.BndEvt__WBP_AddCharacterSlotDialog_ExpansionButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_AddCharacterSlotDialog_C_BndEvt__WBP_AddCharacterSlotDialog_ExpansionButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_AddCharacterSlotDialog.WBP_AddCharacterSlotDialog_C.BndEvt__WBP_AddCharacterSlotDialog_CancelButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_AddCharacterSlotDialog_C_BndEvt__WBP_AddCharacterSlotDialog_CancelButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_AddCharacterSlotDialog.WBP_AddCharacterSlotDialog_C.BndEvt__WBP_AddCharacterSlotDialog_CancelButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_AddCharacterSlotDialog_C_BndEvt__WBP_AddCharacterSlotDialog_CancelButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_AddCharacterSlotDialog.WBP_AddCharacterSlotDialog_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
	 */
	struct UWBP_AddCharacterSlotDialog_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function WBP_AddCharacterSlotDialog.WBP_AddCharacterSlotDialog_C.CustomEvent_3
	 */
	struct UWBP_AddCharacterSlotDialog_C_CustomEvent_3_Params
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_AddCharacterSlotDialog.WBP_AddCharacterSlotDialog_C.CreateReturn
	 */
	struct UWBP_AddCharacterSlotDialog_C_CreateReturn_Params
	{	};

	/**
	 * Function WBP_AddCharacterSlotDialog.WBP_AddCharacterSlotDialog_C.initializeinput
	 */
	struct UWBP_AddCharacterSlotDialog_C_initializeinput_Params
	{	};

	/**
	 * Function WBP_AddCharacterSlotDialog.WBP_AddCharacterSlotDialog_C.BndEvt__WBP_AddCharacterSlotDialog_Btn_Commerce_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature
	 */
	struct UWBP_AddCharacterSlotDialog_C_BndEvt__WBP_AddCharacterSlotDialog_Btn_Commerce_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_AddCharacterSlotDialog.WBP_AddCharacterSlotDialog_C.ExecuteUbergraph_WBP_AddCharacterSlotDialog
	 */
	struct UWBP_AddCharacterSlotDialog_C_ExecuteUbergraph_WBP_AddCharacterSlotDialog_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_AddCharacterSlotDialog.WBP_AddCharacterSlotDialog_C.OnBuySlot__DelegateSignature
	 */
	struct UWBP_AddCharacterSlotDialog_C_OnBuySlot__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_AddCharacterSlotDialog.WBP_AddCharacterSlotDialog_C.OnEnd__DelegateSignature
	 */
	struct UWBP_AddCharacterSlotDialog_C_OnEnd__DelegateSignature_Params
	{
	public:
		class UWBP_AddCharacterSlotDialog_C*                       Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Add;                                                     // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
