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
	 * Function DhcBattleTop.DhcBattleTop_C.SetGoToDhcMapBtnTextId
	 */
	struct UDhcBattleTop_C_SetGoToDhcMapBtnTextId_Params
	{
	public:
		int32_t                                                    InTextId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DhcBattleTop.DhcBattleTop_C.SetSelectedClassTypeAndScore
	 */
	struct UDhcBattleTop_C_SetSelectedClassTypeAndScore_Params
	{
	public:
		ESBClassType                                               InClassType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NQ1C[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBDhcBattleHighScoreInfo                           InScoreInfo;                                             // 0x0008(0x00F8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       InIsScoreInfoEmpty;                                      // 0x0100(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DhcBattleTop.DhcBattleTop_C.SetLayout
	 */
	struct UDhcBattleTop_C_SetLayout_Params
	{
	public:
		bool                                                       InIsScoreMeasured;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DhcBattleTop.DhcBattleTop_C.SetupInfo
	 */
	struct UDhcBattleTop_C_SetupInfo_Params
	{
	public:
		struct FSBDhcBattleInfo                                    InInfo;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function DhcBattleTop.DhcBattleTop_C.Close
	 */
	struct UDhcBattleTop_C_Close_Params
	{	};

	/**
	 * Function DhcBattleTop.DhcBattleTop_C.Open
	 */
	struct UDhcBattleTop_C_Open_Params
	{	};

	/**
	 * Function DhcBattleTop.DhcBattleTop_C.Construct
	 */
	struct UDhcBattleTop_C_Construct_Params
	{	};

	/**
	 * Function DhcBattleTop.DhcBattleTop_C.BndEvt__DPSCheckerTop_CmnBtnBack_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature
	 */
	struct UDhcBattleTop_C_BndEvt__DPSCheckerTop_CmnBtnBack_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature_Params
	{	};

	/**
	 * Function DhcBattleTop.DhcBattleTop_C.OnPress_Cancel
	 */
	struct UDhcBattleTop_C_OnPress_Cancel_Params
	{	};

	/**
	 * Function DhcBattleTop.DhcBattleTop_C.OnLoadHighScoreInfoDelegate
	 */
	struct UDhcBattleTop_C_OnLoadHighScoreInfoDelegate_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5OX3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBDhcBattleInfo                                    InInfo;                                                  // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function DhcBattleTop.DhcBattleTop_C.ActivateUIBlockerFrontRow
	 */
	struct UDhcBattleTop_C_ActivateUIBlockerFrontRow_Params
	{
	public:
		bool                                                       InActivate;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DhcBattleTop.DhcBattleTop_C.Destruct
	 */
	struct UDhcBattleTop_C_Destruct_Params
	{	};

	/**
	 * Function DhcBattleTop.DhcBattleTop_C.BindOnLoadHighScoreInfoDelegate
	 */
	struct UDhcBattleTop_C_BindOnLoadHighScoreInfoDelegate_Params
	{	};

	/**
	 * Function DhcBattleTop.DhcBattleTop_C.UnbindOnLoadHighScoreInfoDelegate
	 */
	struct UDhcBattleTop_C_UnbindOnLoadHighScoreInfoDelegate_Params
	{	};

	/**
	 * Function DhcBattleTop.DhcBattleTop_C.BndEvt__DhcBattleTop_GotoDhcMapBtn_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 */
	struct UDhcBattleTop_C_BndEvt__DhcBattleTop_GotoDhcMapBtn_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function DhcBattleTop.DhcBattleTop_C.BndEvt__DhcBattleTop_BackBtn_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
	 */
	struct UDhcBattleTop_C_BndEvt__DhcBattleTop_BackBtn_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function DhcBattleTop.DhcBattleTop_C.BndEvt__DhcBattleTop_ScorePerClassTypeList_K2Node_ComponentBoundEvent_3_OnClassTypeListItemSelected__DelegateSignature
	 */
	struct UDhcBattleTop_C_BndEvt__DhcBattleTop_ScorePerClassTypeList_K2Node_ComponentBoundEvent_3_OnClassTypeListItemSelected__DelegateSignature_Params
	{
	public:
		ESBClassType                                               InClassType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VQQ5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBDhcBattleHighScoreInfo                           InScoreInfo;                                             // 0x0008(0x00F8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       InIsScoreInfoEmpty;                                      // 0x0100(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DhcBattleTop.DhcBattleTop_C.OnSelectDialogResult
	 */
	struct UDhcBattleTop_C_OnSelectDialogResult_Params
	{
	public:
		int32_t                                                    SelectIndex;                                             // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DhcBattleTop.DhcBattleTop_C.UpdateClassTypeListItemSelected
	 */
	struct UDhcBattleTop_C_UpdateClassTypeListItemSelected_Params
	{
	public:
		ESBClassType                                               InClassType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H2Y2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBDhcBattleHighScoreInfo                           InScoreInfo;                                             // 0x0008(0x00F8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       InIsScoreInfoEmpty;                                      // 0x0100(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DhcBattleTop.DhcBattleTop_C.BndEvt__DhcBattleTop_PlayerStatusParam_K2Node_ComponentBoundEvent_4_OnDetailedStatusClicked__DelegateSignature
	 */
	struct UDhcBattleTop_C_BndEvt__DhcBattleTop_PlayerStatusParam_K2Node_ComponentBoundEvent_4_OnDetailedStatusClicked__DelegateSignature_Params
	{	};

	/**
	 * Function DhcBattleTop.DhcBattleTop_C.ActivateBtnFullScreenForDetailedAttrResistStatus
	 */
	struct UDhcBattleTop_C_ActivateBtnFullScreenForDetailedAttrResistStatus_Params
	{
	public:
		bool                                                       InActivate;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DhcBattleTop.DhcBattleTop_C.OnCloseDetailedAttrResistStatus
	 */
	struct UDhcBattleTop_C_OnCloseDetailedAttrResistStatus_Params
	{	};

	/**
	 * Function DhcBattleTop.DhcBattleTop_C.BndEvt__DhcBattleTop_BtnFullScreenForDetailedAttrResistStatus_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct UDhcBattleTop_C_BndEvt__DhcBattleTop_BtnFullScreenForDetailedAttrResistStatus_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DhcBattleTop.DhcBattleTop_C.EscDetailedStatus
	 */
	struct UDhcBattleTop_C_EscDetailedStatus_Params
	{	};

	/**
	 * Function DhcBattleTop.DhcBattleTop_C.UnbindDetailedAttrResistStatusEvents
	 */
	struct UDhcBattleTop_C_UnbindDetailedAttrResistStatusEvents_Params
	{	};

	/**
	 * Function DhcBattleTop.DhcBattleTop_C.WarpEnd
	 */
	struct UDhcBattleTop_C_WarpEnd_Params
	{	};

	/**
	 * Function DhcBattleTop.DhcBattleTop_C.PartyWarpEndEvent
	 */
	struct UDhcBattleTop_C_PartyWarpEndEvent_Params
	{	};

	/**
	 * Function DhcBattleTop.DhcBattleTop_C.ExecuteUbergraph_DhcBattleTop
	 */
	struct UDhcBattleTop_C_ExecuteUbergraph_DhcBattleTop_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DhcBattleTop.DhcBattleTop_C.OnClose__DelegateSignature
	 */
	struct UDhcBattleTop_C_OnClose__DelegateSignature_Params
	{
	public:
		bool                                                       InGoToNext;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
