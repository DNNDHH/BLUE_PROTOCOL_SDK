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
	 * Function NumberInputDialog.NumberInputDialog_C.SetDialogPoint
	 */
	struct UNumberInputDialog_C_SetDialogPoint_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function NumberInputDialog.NumberInputDialog_C.SetDialogTexts
	 */
	struct UNumberInputDialog_C_SetDialogTexts_Params
	{
	public:
		class FText                                                InCommentText;                                           // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                InFreeText;                                              // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                InButtonText;                                            // 0x0030(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function NumberInputDialog.NumberInputDialog_C.SetDialogNumber
	 */
	struct UNumberInputDialog_C_SetDialogNumber_Params
	{
	public:
		int32_t                                                    Number;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NumberMax;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NumberInputDialog.NumberInputDialog_C.BndEvt__Button1_1_K2Node_ComponentBoundEvent_50_OnButtonHoverEvent__DelegateSignature
	 */
	struct UNumberInputDialog_C_BndEvt__Button1_1_K2Node_ComponentBoundEvent_50_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function NumberInputDialog.NumberInputDialog_C.BndEvt__Button1_1_K2Node_ComponentBoundEvent_60_OnButtonHoverEvent__DelegateSignature
	 */
	struct UNumberInputDialog_C_BndEvt__Button1_1_K2Node_ComponentBoundEvent_60_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function NumberInputDialog.NumberInputDialog_C.OnDestructMainWidget
	 */
	struct UNumberInputDialog_C_OnDestructMainWidget_Params
	{	};

	/**
	 * Function NumberInputDialog.NumberInputDialog_C.BndEvt__Button1_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UNumberInputDialog_C_BndEvt__Button1_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function NumberInputDialog.NumberInputDialog_C.BndEvt__SBButtonTransparent_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UNumberInputDialog_C_BndEvt__SBButtonTransparent_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function NumberInputDialog.NumberInputDialog_C.BndEvt__SliderInputV_K2Node_ComponentBoundEvent_3_OnChange__DelegateSignature
	 */
	struct UNumberInputDialog_C_BndEvt__SliderInputV_K2Node_ComponentBoundEvent_3_OnChange__DelegateSignature_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Ratio;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NumberInputDialog.NumberInputDialog_C.SetFreeText
	 */
	struct UNumberInputDialog_C_SetFreeText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function NumberInputDialog.NumberInputDialog_C.OnPress_Cancel
	 */
	struct UNumberInputDialog_C_OnPress_Cancel_Params
	{	};

	/**
	 * Function NumberInputDialog.NumberInputDialog_C.HideDialog
	 */
	struct UNumberInputDialog_C_HideDialog_Params
	{
	public:
		bool                                                       bPlayCloseSe;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function NumberInputDialog.NumberInputDialog_C.Destruct
	 */
	struct UNumberInputDialog_C_Destruct_Params
	{	};

	/**
	 * Function NumberInputDialog.NumberInputDialog_C.Construct
	 */
	struct UNumberInputDialog_C_Construct_Params
	{	};

	/**
	 * Function NumberInputDialog.NumberInputDialog_C.BndEvt__Button_Plus_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UNumberInputDialog_C_BndEvt__Button_Plus_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function NumberInputDialog.NumberInputDialog_C.BndEvt__Button_Minus_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct UNumberInputDialog_C_BndEvt__Button_Minus_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function NumberInputDialog.NumberInputDialog_C.BndEvt__Button_Max_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 */
	struct UNumberInputDialog_C_BndEvt__Button_Max_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function NumberInputDialog.NumberInputDialog_C.BndEvt__Button_Min_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 */
	struct UNumberInputDialog_C_BndEvt__Button_Min_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function NumberInputDialog.NumberInputDialog_C.OnSliderChange
	 */
	struct UNumberInputDialog_C_OnSliderChange_Params
	{	};

	/**
	 * Function NumberInputDialog.NumberInputDialog_C.BndEvt__Button1_2_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	 */
	struct UNumberInputDialog_C_BndEvt__Button1_2_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function NumberInputDialog.NumberInputDialog_C.BndEvt__Button1_2_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
	 */
	struct UNumberInputDialog_C_BndEvt__Button1_2_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function NumberInputDialog.NumberInputDialog_C.BndEvt__Button1_2_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
	 */
	struct UNumberInputDialog_C_BndEvt__Button1_2_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function NumberInputDialog.NumberInputDialog_C.PreConstruct
	 */
	struct UNumberInputDialog_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function NumberInputDialog.NumberInputDialog_C.StartAnimation
	 */
	struct UNumberInputDialog_C_StartAnimation_Params
	{	};

	/**
	 * Function NumberInputDialog.NumberInputDialog_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
	 */
	struct UNumberInputDialog_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function NumberInputDialog.NumberInputDialog_C.BndEvt__Button1_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
	 */
	struct UNumberInputDialog_C_BndEvt__Button1_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function NumberInputDialog.NumberInputDialog_C.BndEvt__Button1_3_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
	 */
	struct UNumberInputDialog_C_BndEvt__Button1_3_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function NumberInputDialog.NumberInputDialog_C.BndEvt__Button1_3_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature
	 */
	struct UNumberInputDialog_C_BndEvt__Button1_3_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function NumberInputDialog.NumberInputDialog_C.PositionInit
	 */
	struct UNumberInputDialog_C_PositionInit_Params
	{	};

	/**
	 * Function NumberInputDialog.NumberInputDialog_C.BndEvt__NumberInputDialog_CmnClose02_K2Node_ComponentBoundEvent_12_OnClosed__DelegateSignature
	 */
	struct UNumberInputDialog_C_BndEvt__NumberInputDialog_CmnClose02_K2Node_ComponentBoundEvent_12_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function NumberInputDialog.NumberInputDialog_C.ExecuteUbergraph_NumberInputDialog
	 */
	struct UNumberInputDialog_C_ExecuteUbergraph_NumberInputDialog_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SWXJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function NumberInputDialog.NumberInputDialog_C.OnNumSliderUpdeta__DelegateSignature
	 */
	struct UNumberInputDialog_C_OnNumSliderUpdeta__DelegateSignature_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HVGL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UNumberInputDialog_C*                                CallerDialg;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NumberInputDialog.NumberInputDialog_C.OnHide__DelegateSignature
	 */
	struct UNumberInputDialog_C_OnHide__DelegateSignature_Params
	{
	public:
		ENumberInputDialogResult                                   InResult;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GS29[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InNumber;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
