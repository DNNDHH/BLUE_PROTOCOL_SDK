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
	 * Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetScoreInfoSwitcher
	 */
	struct UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetScoreInfoSwitcher_Params
	{
	public:
		class UBattleScoreInfoSwitcher_C*                          InSwitcher;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetPassiveImagineForDhcBattle
	 */
	struct UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineForDhcBattle_Params
	{
	public:
		struct FSBDhcBattlePlayerEquipImagineInfo                  InImagineInfo;                                           // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FOwnItemInfo                                        InOwnItemInfo;                                           // 0x0030(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ESBClassType                                               InClassType;                                             // 0x0180(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NOTR[0x3];                                   // 0x0181(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetIconTooltipEnable
	 */
	struct UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconTooltipEnable_Params
	{
	public:
		bool                                                       InIsEnable;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.CreateTooltipForBtnPadCursorMoveDhcBattle
	 */
	struct UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMoveDhcBattle_Params
	{
	public:
		bool                                                       InNoTooltip;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JT4A[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InClassLevel;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSBDhcBattlePlayerEquipImagineInfo                  InPassiveImagineInfo;                                    // 0x0008(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.CreateTooltipForBtnPadCursorMove
	 */
	struct UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C_CreateTooltipForBtnPadCursorMove_Params
	{
	public:
		bool                                                       InNoTooltip;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EJ6G[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FOwnItemInfo                                        InOwnItemInfo;                                           // 0x0008(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetBtnForPadCursorMoveVisible
	 */
	struct UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetBtnForPadCursorMoveVisible_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetDhcBattleTopMenuMode
	 */
	struct UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetDhcBattleTopMenuMode_Params
	{
	public:
		bool                                                       InIsDhcBattleTopMenuMode;                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetForceLevelSyncOff
	 */
	struct UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetForceLevelSyncOff_Params
	{
	public:
		bool                                                       bInForceLevelSyncOff;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetPassiveImagineBlankIconStyle
	 */
	struct UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineBlankIconStyle_Params
	{
	public:
		ESBPlayerPassiveImagineSlotType                            InPassiveImagineSlotType;                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetAlertIconVisibility
	 */
	struct UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetAlertIconVisibility_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetButtonOff
	 */
	struct UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetButtonOff_Params
	{	};

	/**
	 * Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetIconEmpty
	 */
	struct UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetIconEmpty_Params
	{
	public:
		bool                                                       InIsEmpty;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetPassiveImagineByOwnItemInfo
	 */
	struct UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineByOwnItemInfo_Params
	{
	public:
		struct FOwnItemInfo                                        InOwnItemInfo;                                           // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ESBClassType                                               InClassType;                                             // 0x0150(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GHHS[0x3];                                   // 0x0151(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.GetPassiveImagineSlotType
	 */
	struct UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C_GetPassiveImagineSlotType_Params
	{
	public:
		ESBPlayerPassiveImagineSlotType                            OutSlotType;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.SetPassiveImagineSlotType
	 */
	struct UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C_SetPassiveImagineSlotType_Params
	{
	public:
		ESBPlayerPassiveImagineSlotType                            InSlotType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BB0P[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.PreConstruct
	 */
	struct UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.Construct
	 */
	struct UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C_Construct_Params
	{	};

	/**
	 * Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.BndEvt__MyCharaMenu_PassiveImagineIconBtnForBattleSet_ItemIconBtn_K2Node_ComponentBoundEvent_2_OnSelect__DelegateSignature
	 */
	struct UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C_BndEvt__MyCharaMenu_PassiveImagineIconBtnForBattleSet_ItemIconBtn_K2Node_ComponentBoundEvent_2_OnSelect__DelegateSignature_Params
	{
	public:
		class UItemIconBtn_C*                                      SelectItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.BndEvt__MyCharaMenu_PassiveImagineIconBtnForBattleSet_BlankIconBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C_BndEvt__MyCharaMenu_PassiveImagineIconBtnForBattleSet_BlankIconBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.Destruct
	 */
	struct UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C_Destruct_Params
	{	};

	/**
	 * Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.ExecuteUbergraph_MyCharaMenu_PassiveImagineIconBtnForBattleSet
	 */
	struct UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C_ExecuteUbergraph_MyCharaMenu_PassiveImagineIconBtnForBattleSet_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_PassiveImagineIconBtnForBattleSet.MyCharaMenu_PassiveImagineIconBtnForBattleSet_C.OnClicked__DelegateSignature
	 */
	struct UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C_OnClicked__DelegateSignature_Params
	{
	public:
		ESBPlayerPassiveImagineSlotType                            InPassiveImagineSlotType;                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B8OD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InPassiveImagineItemId;                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
