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
	 * Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.SetScoreInfoSwitcher
	 */
	struct UPassiveImagineInfoUnitForBattleSet_C_SetScoreInfoSwitcher_Params
	{
	public:
		class UBattleScoreInfoSwitcher_C*                          InSwitcher;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.SetPassiveImagineForDhcBattle
	 */
	struct UPassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineForDhcBattle_Params
	{
	public:
		struct FSBDhcBattlePlayerEquipImagineInfo                  InImagineInfo;                                           // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FOwnItemInfo                                        InOwnItemInfo;                                           // 0x0030(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ESBClassType                                               InClassType;                                             // 0x0180(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.SetDhcBattleTopMenuMode
	 */
	struct UPassiveImagineInfoUnitForBattleSet_C_SetDhcBattleTopMenuMode_Params
	{
	public:
		bool                                                       InIsDhcBattleTopMenuMode;                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.ForcePassiveImagineIconLevelSyncOff
	 */
	struct UPassiveImagineInfoUnitForBattleSet_C_ForcePassiveImagineIconLevelSyncOff_Params
	{
	public:
		bool                                                       bInForceLevelSyncOff;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.SetButtonOff
	 */
	struct UPassiveImagineInfoUnitForBattleSet_C_SetButtonOff_Params
	{	};

	/**
	 * Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.SetPassiveImagineIconAlertVisibility
	 */
	struct UPassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineIconAlertVisibility_Params
	{
	public:
		bool                                                       InIsAlertVisible;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.SetPassiveImagineIconEmpty
	 */
	struct UPassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineIconEmpty_Params
	{
	public:
		bool                                                       InIsEmpty;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.SetPassiveImagineByOwnItemInfo
	 */
	struct UPassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineByOwnItemInfo_Params
	{
	public:
		struct FOwnItemInfo                                        InOwnItemInfo;                                           // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ESBClassType                                               InClassType;                                             // 0x0150(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.GetImagineSlotType
	 */
	struct UPassiveImagineInfoUnitForBattleSet_C_GetImagineSlotType_Params
	{
	public:
		ESBPlayerPassiveImagineSlotType                            OutImagineSlotType;                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.SetImagineSlotType
	 */
	struct UPassiveImagineInfoUnitForBattleSet_C_SetImagineSlotType_Params
	{
	public:
		ESBPlayerPassiveImagineSlotType                            InImagineSlotType;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LKV5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.PreConstruct
	 */
	struct UPassiveImagineInfoUnitForBattleSet_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.BndEvt__PassiveImagineInfoUnitForBattleSet_PassiveImagineIconBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UPassiveImagineInfoUnitForBattleSet_C_BndEvt__PassiveImagineInfoUnitForBattleSet_PassiveImagineIconBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{
	public:
		ESBPlayerPassiveImagineSlotType                            InPassiveImagineSlotType;                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZG1A[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InPassiveImagineItemId;                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.ExecuteUbergraph_PassiveImagineInfoUnitForBattleSet
	 */
	struct UPassiveImagineInfoUnitForBattleSet_C_ExecuteUbergraph_PassiveImagineInfoUnitForBattleSet_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.OnImagineIconBtnClicked__DelegateSignature
	 */
	struct UPassiveImagineInfoUnitForBattleSet_C_OnImagineIconBtnClicked__DelegateSignature_Params
	{
	public:
		ESBPlayerPassiveImagineSlotType                            InPassiveImagineSlotType;                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GDVA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InPassiveImagineItemId;                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
