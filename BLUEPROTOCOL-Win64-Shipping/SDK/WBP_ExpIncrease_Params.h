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
	 * Function WBP_ExpIncrease.WBP_ExpIncrease_C.SetGauge
	 */
	struct UWBP_ExpIncrease_C_SetGauge_Params
	{
	public:
		class UCanvasPanelSlot*                                    Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           InVec;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Naw;                                                     // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Max;                                                     // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ExpIncrease.WBP_ExpIncrease_C.SetDialogComment
	 */
	struct UWBP_ExpIncrease_C_SetDialogComment_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_ExpIncrease.WBP_ExpIncrease_C.SetDialogNumsAfter
	 */
	struct UWBP_ExpIncrease_C_SetDialogNumsAfter_Params
	{
	public:
		int32_t                                                    LVNum2;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ExpNum2;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ExpMaxNum2;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ExpIncrease.WBP_ExpIncrease_C.SetDialogNumsBefore
	 */
	struct UWBP_ExpIncrease_C_SetDialogNumsBefore_Params
	{
	public:
		int32_t                                                    LVNum1;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ExpNum1;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ExpMaxNum1;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ExpIncrease.WBP_ExpIncrease_C.SetDialogTexts
	 */
	struct UWBP_ExpIncrease_C_SetDialogTexts_Params
	{
	public:
		class FText                                                InCommentText;                                           // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                InButtonText;                                            // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                InLVText;                                                // 0x0030(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_ExpIncrease.WBP_ExpIncrease_C.SetDialogNumber
	 */
	struct UWBP_ExpIncrease_C_SetDialogNumber_Params
	{
	public:
		int32_t                                                    Number;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NumberMax;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ExpIncrease.WBP_ExpIncrease_C.OnAnimationFinished
	 */
	struct UWBP_ExpIncrease_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ExpIncrease.WBP_ExpIncrease_C.BndEvt__Button1_1_K2Node_ComponentBoundEvent_50_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_ExpIncrease_C_BndEvt__Button1_1_K2Node_ComponentBoundEvent_50_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ExpIncrease.WBP_ExpIncrease_C.BndEvt__Button1_1_K2Node_ComponentBoundEvent_60_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_ExpIncrease_C_BndEvt__Button1_1_K2Node_ComponentBoundEvent_60_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ExpIncrease.WBP_ExpIncrease_C.OnDestructMainWidget
	 */
	struct UWBP_ExpIncrease_C_OnDestructMainWidget_Params
	{	};

	/**
	 * Function WBP_ExpIncrease.WBP_ExpIncrease_C.BndEvt__Button1_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_ExpIncrease_C_BndEvt__Button1_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ExpIncrease.WBP_ExpIncrease_C.BndEvt__SBButtonTransparent_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_ExpIncrease_C_BndEvt__SBButtonTransparent_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ExpIncrease.WBP_ExpIncrease_C.OnPress_Cancel
	 */
	struct UWBP_ExpIncrease_C_OnPress_Cancel_Params
	{	};

	/**
	 * Function WBP_ExpIncrease.WBP_ExpIncrease_C.HideDialog
	 */
	struct UWBP_ExpIncrease_C_HideDialog_Params
	{
	public:
		bool                                                       bPlayCloseSe;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ExpIncrease.WBP_ExpIncrease_C.Destruct
	 */
	struct UWBP_ExpIncrease_C_Destruct_Params
	{	};

	/**
	 * Function WBP_ExpIncrease.WBP_ExpIncrease_C.Construct
	 */
	struct UWBP_ExpIncrease_C_Construct_Params
	{	};

	/**
	 * Function WBP_ExpIncrease.WBP_ExpIncrease_C.BndEvt__Button_Plus_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_ExpIncrease_C_BndEvt__Button_Plus_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ExpIncrease.WBP_ExpIncrease_C.BndEvt__Button_Minus_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_ExpIncrease_C_BndEvt__Button_Minus_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ExpIncrease.WBP_ExpIncrease_C.BndEvt__Button_Max_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_ExpIncrease_C_BndEvt__Button_Max_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ExpIncrease.WBP_ExpIncrease_C.BndEvt__Button_Min_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_ExpIncrease_C_BndEvt__Button_Min_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ExpIncrease.WBP_ExpIncrease_C.BndEvt__SliderInputV_K2Node_ComponentBoundEvent_3_OnChange__DelegateSignature
	 */
	struct UWBP_ExpIncrease_C_BndEvt__SliderInputV_K2Node_ComponentBoundEvent_3_OnChange__DelegateSignature_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Ratio;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ExpIncrease.WBP_ExpIncrease_C.OnSliderChange
	 */
	struct UWBP_ExpIncrease_C_OnSliderChange_Params
	{	};

	/**
	 * Function WBP_ExpIncrease.WBP_ExpIncrease_C.BndEvt__WBP_ExpIncrease_CmnClose02_K2Node_ComponentBoundEvent_8_OnClosed__DelegateSignature
	 */
	struct UWBP_ExpIncrease_C_BndEvt__WBP_ExpIncrease_CmnClose02_K2Node_ComponentBoundEvent_8_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ExpIncrease.WBP_ExpIncrease_C.ExecuteUbergraph_WBP_ExpIncrease
	 */
	struct UWBP_ExpIncrease_C_ExecuteUbergraph_WBP_ExpIncrease_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EJ85[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_ExpIncrease.WBP_ExpIncrease_C.OnExpSliderUpdeta__DelegateSignature
	 */
	struct UWBP_ExpIncrease_C_OnExpSliderUpdeta__DelegateSignature_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZB6A[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWBP_ExpIncrease_C*                                  CallerDialg;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ExpIncrease.WBP_ExpIncrease_C.OnHide__DelegateSignature
	 */
	struct UWBP_ExpIncrease_C_OnHide__DelegateSignature_Params
	{
	public:
		ENumberInputDialogResult                                   InResult;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3H5E[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InNumber;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
