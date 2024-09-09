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
	 * Function Dialog_TacticalAbilityLearning.Dialog_TacticalAbilityLearning_C.SetEnableButtonClose
	 */
	struct UDialog_TacticalAbilityLearning_C_SetEnableButtonClose_Params
	{
	public:
		bool                                                       bInIsEnabled;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dialog_TacticalAbilityLearning.Dialog_TacticalAbilityLearning_C.SetEnableButtonFullScreen
	 */
	struct UDialog_TacticalAbilityLearning_C_SetEnableButtonFullScreen_Params
	{
	public:
		bool                                                       bInIsEnabled;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dialog_TacticalAbilityLearning.Dialog_TacticalAbilityLearning_C.SetEnableButtonDecide
	 */
	struct UDialog_TacticalAbilityLearning_C_SetEnableButtonDecide_Params
	{
	public:
		bool                                                       bInIsEnabled;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dialog_TacticalAbilityLearning.Dialog_TacticalAbilityLearning_C.SetEnableButton
	 */
	struct UDialog_TacticalAbilityLearning_C_SetEnableButton_Params
	{
	public:
		bool                                                       bInIsEnabled;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dialog_TacticalAbilityLearning.Dialog_TacticalAbilityLearning_C.SetDecideTextTable
	 */
	struct UDialog_TacticalAbilityLearning_C_SetDecideTextTable_Params
	{
	public:
		class USBTextTableAsset*                                   InTextTable;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InTextId;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Dialog_TacticalAbilityLearning.Dialog_TacticalAbilityLearning_C.SetDecideText
	 */
	struct UDialog_TacticalAbilityLearning_C_SetDecideText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Dialog_TacticalAbilityLearning.Dialog_TacticalAbilityLearning_C.SetDetailTextTable
	 */
	struct UDialog_TacticalAbilityLearning_C_SetDetailTextTable_Params
	{
	public:
		class USBTextTableAsset*                                   InTextTable;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InTextId;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Dialog_TacticalAbilityLearning.Dialog_TacticalAbilityLearning_C.SetDetailText
	 */
	struct UDialog_TacticalAbilityLearning_C_SetDetailText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Dialog_TacticalAbilityLearning.Dialog_TacticalAbilityLearning_C.SetTitleTextTable
	 */
	struct UDialog_TacticalAbilityLearning_C_SetTitleTextTable_Params
	{
	public:
		class USBTextTableAsset*                                   InTextTable;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InTextId;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Dialog_TacticalAbilityLearning.Dialog_TacticalAbilityLearning_C.SetTitleText
	 */
	struct UDialog_TacticalAbilityLearning_C_SetTitleText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Dialog_TacticalAbilityLearning.Dialog_TacticalAbilityLearning_C.PlayAnimationOut
	 */
	struct UDialog_TacticalAbilityLearning_C_PlayAnimationOut_Params
	{	};

	/**
	 * Function Dialog_TacticalAbilityLearning.Dialog_TacticalAbilityLearning_C.PlayAnimationIn
	 */
	struct UDialog_TacticalAbilityLearning_C_PlayAnimationIn_Params
	{	};

	/**
	 * Function Dialog_TacticalAbilityLearning.Dialog_TacticalAbilityLearning_C.Closed
	 */
	struct UDialog_TacticalAbilityLearning_C_Closed_Params
	{	};

	/**
	 * Function Dialog_TacticalAbilityLearning.Dialog_TacticalAbilityLearning_C.Close
	 */
	struct UDialog_TacticalAbilityLearning_C_Close_Params
	{	};

	/**
	 * Function Dialog_TacticalAbilityLearning.Dialog_TacticalAbilityLearning_C.Opened
	 */
	struct UDialog_TacticalAbilityLearning_C_Opened_Params
	{	};

	/**
	 * Function Dialog_TacticalAbilityLearning.Dialog_TacticalAbilityLearning_C.Open
	 */
	struct UDialog_TacticalAbilityLearning_C_Open_Params
	{	};

	/**
	 * Function Dialog_TacticalAbilityLearning.Dialog_TacticalAbilityLearning_C.CreateSkillIcon
	 */
	struct UDialog_TacticalAbilityLearning_C_CreateSkillIcon_Params
	{
	public:
		int32_t                                                    InSkillId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InSkillLV;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InRow;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InColumn;                                                // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Dialog_TacticalAbilityLearning.Dialog_TacticalAbilityLearning_C.Setup
	 */
	struct UDialog_TacticalAbilityLearning_C_Setup_Params
	{
	public:
		TArray<struct FSBSkillParam>                               InSkillParam;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Dialog_TacticalAbilityLearning.Dialog_TacticalAbilityLearning_C.BindEscapeKey
	 */
	struct UDialog_TacticalAbilityLearning_C_BindEscapeKey_Params
	{	};

	/**
	 * Function Dialog_TacticalAbilityLearning.Dialog_TacticalAbilityLearning_C.UnbindEscapeKey
	 */
	struct UDialog_TacticalAbilityLearning_C_UnbindEscapeKey_Params
	{	};

	/**
	 * Function Dialog_TacticalAbilityLearning.Dialog_TacticalAbilityLearning_C.CustomEvent
	 */
	struct UDialog_TacticalAbilityLearning_C_CustomEvent_Params
	{	};

	/**
	 * Function Dialog_TacticalAbilityLearning.Dialog_TacticalAbilityLearning_C.BndEvt__TacticalAbilityLearningDialog_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
	 */
	struct UDialog_TacticalAbilityLearning_C_BndEvt__TacticalAbilityLearningDialog_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function Dialog_TacticalAbilityLearning.Dialog_TacticalAbilityLearning_C.OnAnimationFinished
	 */
	struct UDialog_TacticalAbilityLearning_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Dialog_TacticalAbilityLearning.Dialog_TacticalAbilityLearning_C.BndEvt__TacticalAbilityLearningDialog_Btn_Decide_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UDialog_TacticalAbilityLearning_C_BndEvt__TacticalAbilityLearningDialog_Btn_Decide_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Dialog_TacticalAbilityLearning.Dialog_TacticalAbilityLearning_C.BndEvt__TacticalAbilityLearningDialog_Btn_FullScreen_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UDialog_TacticalAbilityLearning_C_BndEvt__TacticalAbilityLearningDialog_Btn_FullScreen_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Dialog_TacticalAbilityLearning.Dialog_TacticalAbilityLearning_C.Construct
	 */
	struct UDialog_TacticalAbilityLearning_C_Construct_Params
	{	};

	/**
	 * Function Dialog_TacticalAbilityLearning.Dialog_TacticalAbilityLearning_C.OnPressEsc
	 */
	struct UDialog_TacticalAbilityLearning_C_OnPressEsc_Params
	{	};

	/**
	 * Function Dialog_TacticalAbilityLearning.Dialog_TacticalAbilityLearning_C.BndEvt__Dialog_TacticalAbilityLearning_Btn_Decide_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UDialog_TacticalAbilityLearning_C_BndEvt__Dialog_TacticalAbilityLearning_Btn_Decide_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Dialog_TacticalAbilityLearning.Dialog_TacticalAbilityLearning_C.BndEvt__Dialog_TacticalAbilityLearning_Btn_Decide_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UDialog_TacticalAbilityLearning_C_BndEvt__Dialog_TacticalAbilityLearning_Btn_Decide_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Dialog_TacticalAbilityLearning.Dialog_TacticalAbilityLearning_C.Destruct
	 */
	struct UDialog_TacticalAbilityLearning_C_Destruct_Params
	{	};

	/**
	 * Function Dialog_TacticalAbilityLearning.Dialog_TacticalAbilityLearning_C.ExecuteUbergraph_Dialog_TacticalAbilityLearning
	 */
	struct UDialog_TacticalAbilityLearning_C_ExecuteUbergraph_Dialog_TacticalAbilityLearning_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Dialog_TacticalAbilityLearning.Dialog_TacticalAbilityLearning_C.EndAnimOut__DelegateSignature
	 */
	struct UDialog_TacticalAbilityLearning_C_EndAnimOut__DelegateSignature_Params
	{	};

	/**
	 * Function Dialog_TacticalAbilityLearning.Dialog_TacticalAbilityLearning_C.EndAnimIn__DelegateSignature
	 */
	struct UDialog_TacticalAbilityLearning_C_EndAnimIn__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
