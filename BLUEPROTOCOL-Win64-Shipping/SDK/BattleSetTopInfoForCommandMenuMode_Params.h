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
	 * Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.GetScoreInfoSwitcher
	 */
	struct UBattleSetTopInfoForCommandMenuMode_C_GetScoreInfoSwitcher_Params
	{
	public:
		class UBattleScoreInfoSwitcher_C*                          NewParam;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.ResetSkillInfoSubPalette
	 */
	struct UBattleSetTopInfoForCommandMenuMode_C_ResetSkillInfoSubPalette_Params
	{
	public:
		bool                                                       bInIsSubPaletteReleased;                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.SetupInnerImagineInfo
	 */
	struct UBattleSetTopInfoForCommandMenuMode_C_SetupInnerImagineInfo_Params
	{	};

	/**
	 * Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.SetupClassAbilityInfo
	 */
	struct UBattleSetTopInfoForCommandMenuMode_C_SetupClassAbilityInfo_Params
	{	};

	/**
	 * Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.SetupTacticalSkillInfo
	 */
	struct UBattleSetTopInfoForCommandMenuMode_C_SetupTacticalSkillInfo_Params
	{	};

	/**
	 * Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.SetupBattleImagineInfo
	 */
	struct UBattleSetTopInfoForCommandMenuMode_C_SetupBattleImagineInfo_Params
	{	};

	/**
	 * Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.SetupAllSkillInfo
	 */
	struct UBattleSetTopInfoForCommandMenuMode_C_SetupAllSkillInfo_Params
	{	};

	/**
	 * Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.SetupWeaponInfo
	 */
	struct UBattleSetTopInfoForCommandMenuMode_C_SetupWeaponInfo_Params
	{	};

	/**
	 * Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.BndEvt__BattleSetTopInfoBase_WeaponInfoForBattleSetTop_K2Node_ComponentBoundEvent_5_OnWeaponIconClicked__DelegateSignature
	 */
	struct UBattleSetTopInfoForCommandMenuMode_C_BndEvt__BattleSetTopInfoBase_WeaponInfoForBattleSetTop_K2Node_ComponentBoundEvent_5_OnWeaponIconClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.BndEvt__BattleSetTopInfoBase_SkillInfoForBattleSetTop_K2Node_ComponentBoundEvent_6_OnTacticalSkillIconPressed__DelegateSignature
	 */
	struct UBattleSetTopInfoForCommandMenuMode_C_BndEvt__BattleSetTopInfoBase_SkillInfoForBattleSetTop_K2Node_ComponentBoundEvent_6_OnTacticalSkillIconPressed__DelegateSignature_Params
	{
	public:
		ESkillActionPosition                                       InTacticalSkillSAP;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_27TS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InSkillId;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InSkillLevel;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.BndEvt__BattleSetTopInfoBase_SkillInfoForBattleSetTop_K2Node_ComponentBoundEvent_7_OnBattleImagineIconPresssed__DelegateSignature
	 */
	struct UBattleSetTopInfoForCommandMenuMode_C_BndEvt__BattleSetTopInfoBase_SkillInfoForBattleSetTop_K2Node_ComponentBoundEvent_7_OnBattleImagineIconPresssed__DelegateSignature_Params
	{
	public:
		ESkillActionPosition                                       InBattleImagineSAP;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7LYM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InBattleImagineUniqueId;                                 // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.BndEvt__BattleSetTopInfoBase_ClassAbilityInfoForBattleSetTop_K2Node_ComponentBoundEvent_8_OnClassAbilityIconClicked__DelegateSignature
	 */
	struct UBattleSetTopInfoForCommandMenuMode_C_BndEvt__BattleSetTopInfoBase_ClassAbilityInfoForBattleSetTop_K2Node_ComponentBoundEvent_8_OnClassAbilityIconClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    InSkillSlotId;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InSkillId;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.BndEvt__BattleSetTopInfoBase_InnerImagineInfoForBattleSetTop_K2Node_ComponentBoundEvent_9_OnIconBtnPressed__DelegateSignature
	 */
	struct UBattleSetTopInfoForCommandMenuMode_C_BndEvt__BattleSetTopInfoBase_InnerImagineInfoForBattleSetTop_K2Node_ComponentBoundEvent_9_OnIconBtnPressed__DelegateSignature_Params
	{
	public:
		ESBPlayerPassiveImagineSlotType                            InInnerImagineSlotType;                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4CSS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InImagineId;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.ExecuteUbergraph_BattleSetTopInfoForCommandMenuMode
	 */
	struct UBattleSetTopInfoForCommandMenuMode_C_ExecuteUbergraph_BattleSetTopInfoForCommandMenuMode_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.OnTopInfoInnerImagineIconPressed__DelegateSignature
	 */
	struct UBattleSetTopInfoForCommandMenuMode_C_OnTopInfoInnerImagineIconPressed__DelegateSignature_Params
	{
	public:
		ESBPlayerPassiveImagineSlotType                            InInnerImagineSlotType;                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2FQQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InImagineId;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.OnTopInfoClassAbilityIconPressed__DelegateSignature
	 */
	struct UBattleSetTopInfoForCommandMenuMode_C_OnTopInfoClassAbilityIconPressed__DelegateSignature_Params
	{
	public:
		int32_t                                                    InSkillSlotId;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InSkillId;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.OnTopInfoBattleImagineIconPressed__DelegateSignature
	 */
	struct UBattleSetTopInfoForCommandMenuMode_C_OnTopInfoBattleImagineIconPressed__DelegateSignature_Params
	{
	public:
		ESkillActionPosition                                       InBattleImagineSAP;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8OM3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InBattleImagineUniqueId;                                 // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.OnTopInfoTacticalSkillIconPressed__DelegateSignature
	 */
	struct UBattleSetTopInfoForCommandMenuMode_C_OnTopInfoTacticalSkillIconPressed__DelegateSignature_Params
	{
	public:
		ESkillActionPosition                                       InTacticalSkillSAP;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4F3P[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InSkillId;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InSkillLevel;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.OnTopInfoWeaponIconClicked__DelegateSignature
	 */
	struct UBattleSetTopInfoForCommandMenuMode_C_OnTopInfoWeaponIconClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
