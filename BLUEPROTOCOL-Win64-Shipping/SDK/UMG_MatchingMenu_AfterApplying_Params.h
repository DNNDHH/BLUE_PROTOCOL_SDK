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
	 * Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.GetRewardSearchName
	 */
	struct UUMG_MatchingMenu_AfterApplying_C_GetRewardSearchName_Params
	{
	public:
		int32_t                                                    ModeId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                SearchName;                                              // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.GetHelpMatchingRequiredInfo
	 */
	struct UUMG_MatchingMenu_AfterApplying_C_GetHelpMatchingRequiredInfo_Params
	{
	public:
		int32_t                                                    ModeId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    BattleScore;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ClassLevel;                                              // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.MakeHelpModeInfo
	 */
	struct UUMG_MatchingMenu_AfterApplying_C_MakeHelpModeInfo_Params
	{
	public:
		int32_t                                                    ModeId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.SetTerm
	 */
	struct UUMG_MatchingMenu_AfterApplying_C_SetTerm_Params
	{
	public:
		class FName                                                EventTerm;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.SetDungeonInfo
	 */
	struct UUMG_MatchingMenu_AfterApplying_C_SetDungeonInfo_Params
	{
	public:
		class FName                                                GameContentId;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    HelpMatchingModeId;                                      // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.SetCommandMenuMode
	 */
	struct UUMG_MatchingMenu_AfterApplying_C_SetCommandMenuMode_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.SetHUDMode
	 */
	struct UUMG_MatchingMenu_AfterApplying_C_SetHUDMode_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.ConfirmOut
	 */
	struct UUMG_MatchingMenu_AfterApplying_C_ConfirmOut_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.WaitOut
	 */
	struct UUMG_MatchingMenu_AfterApplying_C_WaitOut_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.OutCancel
	 */
	struct UUMG_MatchingMenu_AfterApplying_C_OutCancel_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.OutClose
	 */
	struct UUMG_MatchingMenu_AfterApplying_C_OutClose_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.Out
	 */
	struct UUMG_MatchingMenu_AfterApplying_C_Out_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.ConfirmIn
	 */
	struct UUMG_MatchingMenu_AfterApplying_C_ConfirmIn_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.WaitIn
	 */
	struct UUMG_MatchingMenu_AfterApplying_C_WaitIn_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.Construct
	 */
	struct UUMG_MatchingMenu_AfterApplying_C_Construct_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.BndEvt__UMG_MatchingMenu_AfterApplying_UMG_MatchingMenu_Headder_K2Node_ComponentBoundEvent_0_OnCloseButtonClicked__DelegateSignature
	 */
	struct UUMG_MatchingMenu_AfterApplying_C_BndEvt__UMG_MatchingMenu_AfterApplying_UMG_MatchingMenu_Headder_K2Node_ComponentBoundEvent_0_OnCloseButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.OnAnimationFinished
	 */
	struct UUMG_MatchingMenu_AfterApplying_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.Destruct
	 */
	struct UUMG_MatchingMenu_AfterApplying_C_Destruct_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.BndEvt__UMG_MatchingMenu_AfterApplying_ButtonDetail_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_MatchingMenu_AfterApplying_C_BndEvt__UMG_MatchingMenu_AfterApplying_ButtonDetail_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.WidgetAnimationEvt_AnimDetailHide_K2Node_WidgetAnimationEvent_1
	 */
	struct UUMG_MatchingMenu_AfterApplying_C_WidgetAnimationEvt_AnimDetailHide_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.WidgetAnimationEvt_AnimDetailShow_K2Node_WidgetAnimationEvent_2
	 */
	struct UUMG_MatchingMenu_AfterApplying_C_WidgetAnimationEvt_AnimDetailShow_K2Node_WidgetAnimationEvent_2_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.BndEvt__UMG_MatchingMenu_AfterApplying_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature
	 */
	struct UUMG_MatchingMenu_AfterApplying_C_BndEvt__UMG_MatchingMenu_AfterApplying_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature_Params
	{
	public:
		struct FSBDungeonSupply                                    DungeonSupply;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.BndEvt__UMG_MatchingMenu_AfterApplying_UMG_MatchingMenu_Confirm_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature
	 */
	struct UUMG_MatchingMenu_AfterApplying_C_BndEvt__UMG_MatchingMenu_AfterApplying_UMG_MatchingMenu_Confirm_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.ExecuteUbergraph_UMG_MatchingMenu_AfterApplying
	 */
	struct UUMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.OnClickSupplyIcon__DelegateSignature
	 */
	struct UUMG_MatchingMenu_AfterApplying_C_OnClickSupplyIcon__DelegateSignature_Params
	{
	public:
		struct FSBDungeonSupply                                    DungeonSupply;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.OnCancel__DelegateSignature
	 */
	struct UUMG_MatchingMenu_AfterApplying_C_OnCancel__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.OnClose__DelegateSignature
	 */
	struct UUMG_MatchingMenu_AfterApplying_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
