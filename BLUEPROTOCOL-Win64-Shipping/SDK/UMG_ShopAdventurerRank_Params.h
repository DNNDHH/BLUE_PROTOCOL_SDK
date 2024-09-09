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
	 * Function UMG_ShopAdventurerRank.UMG_ShopAdventurerRank_C.InAnimation
	 */
	struct UUMG_ShopAdventurerRank_C_InAnimation_Params
	{	};

	/**
	 * Function UMG_ShopAdventurerRank.UMG_ShopAdventurerRank_C.Construct
	 */
	struct UUMG_ShopAdventurerRank_C_Construct_Params
	{	};

	/**
	 * Function UMG_ShopAdventurerRank.UMG_ShopAdventurerRank_C.Destruct
	 */
	struct UUMG_ShopAdventurerRank_C_Destruct_Params
	{	};

	/**
	 * Function UMG_ShopAdventurerRank.UMG_ShopAdventurerRank_C.BndEvt__CmnBtnBack_1_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature
	 */
	struct UUMG_ShopAdventurerRank_C_BndEvt__CmnBtnBack_1_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_ShopAdventurerRank.UMG_ShopAdventurerRank_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
	 */
	struct UUMG_ShopAdventurerRank_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function UMG_ShopAdventurerRank.UMG_ShopAdventurerRank_C.OnPress_Cancel
	 */
	struct UUMG_ShopAdventurerRank_C_OnPress_Cancel_Params
	{	};

	/**
	 * Function UMG_ShopAdventurerRank.UMG_ShopAdventurerRank_C.Close
	 */
	struct UUMG_ShopAdventurerRank_C_Close_Params
	{	};

	/**
	 * Function UMG_ShopAdventurerRank.UMG_ShopAdventurerRank_C.OnGuideMessageVisibility_Event
	 */
	struct UUMG_ShopAdventurerRank_C_OnGuideMessageVisibility_Event_Params
	{
	public:
		bool                                                       InVisibility;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_ShopAdventurerRank.UMG_ShopAdventurerRank_C.BndEvt__UMG_ShopAdventurerRank_BattleStartBtn_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
	 */
	struct UUMG_ShopAdventurerRank_C_BndEvt__UMG_ShopAdventurerRank_BattleStartBtn_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_ShopAdventurerRank.UMG_ShopAdventurerRank_C.OnClose_Event_3
	 */
	struct UUMG_ShopAdventurerRank_C_OnClose_Event_3_Params
	{
	public:
		class UUMG_MatchingMenu_C*                                 Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ShopAdventurerRank.UMG_ShopAdventurerRank_C.PartyRecruitCancel
	 */
	struct UUMG_ShopAdventurerRank_C_PartyRecruitCancel_Params
	{	};

	/**
	 * Function UMG_ShopAdventurerRank.UMG_ShopAdventurerRank_C.StartBattle
	 */
	struct UUMG_ShopAdventurerRank_C_StartBattle_Params
	{	};

	/**
	 * Function UMG_ShopAdventurerRank.UMG_ShopAdventurerRank_C.PartyRecruitCancel_YesNoDialog
	 */
	struct UUMG_ShopAdventurerRank_C_PartyRecruitCancel_YesNoDialog_Params
	{
	public:
		EYesNoDialogResult                                         Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ShopAdventurerRank.UMG_ShopAdventurerRank_C.OnCancelRecruit
	 */
	struct UUMG_ShopAdventurerRank_C_OnCancelRecruit_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JNWR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    iRetCode;                                                // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ShopAdventurerRank.UMG_ShopAdventurerRank_C.ExecuteUbergraph_UMG_ShopAdventurerRank
	 */
	struct UUMG_ShopAdventurerRank_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ORPB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_ShopAdventurerRank.UMG_ShopAdventurerRank_C.OnBattleStart__DelegateSignature
	 */
	struct UUMG_ShopAdventurerRank_C_OnBattleStart__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_ShopAdventurerRank.UMG_ShopAdventurerRank_C.OnClose__DelegateSignature
	 */
	struct UUMG_ShopAdventurerRank_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
