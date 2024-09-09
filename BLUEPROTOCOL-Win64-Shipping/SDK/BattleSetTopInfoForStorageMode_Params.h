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
	 * Function BattleSetTopInfoForStorageMode.BattleSetTopInfoForStorageMode_C.GetScoreInfoSwitcher
	 */
	struct UBattleSetTopInfoForStorageMode_C_GetScoreInfoSwitcher_Params
	{
	public:
		class UBattleScoreInfoSwitcher_C*                          NewParam;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleSetTopInfoForStorageMode.BattleSetTopInfoForStorageMode_C.GetClassTypeFromWeaponId
	 */
	struct UBattleSetTopInfoForStorageMode_C_GetClassTypeFromWeaponId_Params
	{
	public:
		int32_t                                                    InWeaponID;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBClassType                                               OutClassType;                                            // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleSetTopInfoForStorageMode.BattleSetTopInfoForStorageMode_C.GetRegularAndULTSkillIdByClassType
	 */
	struct UBattleSetTopInfoForStorageMode_C_GetRegularAndULTSkillIdByClassType_Params
	{
	public:
		ESBClassType                                               InClassType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W8A2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    OutRegularMainSkillId;                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OutRegularSubSkillId;                                    // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OutULTSkillId;                                           // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleSetTopInfoForStorageMode.BattleSetTopInfoForStorageMode_C.GetIsWeaponLost
	 */
	struct UBattleSetTopInfoForStorageMode_C_GetIsWeaponLost_Params
	{
	public:
		bool                                                       OutIsWeaponLost;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BattleSetTopInfoForStorageMode.BattleSetTopInfoForStorageMode_C.GetClassAbilitySlotCnt
	 */
	struct UBattleSetTopInfoForStorageMode_C_GetClassAbilitySlotCnt_Params
	{
	public:
		int32_t                                                    OutSlotCnt;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleSetTopInfoForStorageMode.BattleSetTopInfoForStorageMode_C.GetTacticalSkillSlotCnt
	 */
	struct UBattleSetTopInfoForStorageMode_C_GetTacticalSkillSlotCnt_Params
	{
	public:
		int32_t                                                    OutSlotCnt;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleSetTopInfoForStorageMode.BattleSetTopInfoForStorageMode_C.GetRegularSkillSlotCnt
	 */
	struct UBattleSetTopInfoForStorageMode_C_GetRegularSkillSlotCnt_Params
	{
	public:
		int32_t                                                    OutSlotCnt;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleSetTopInfoForStorageMode.BattleSetTopInfoForStorageMode_C.GetInnerImagineSlotCnt
	 */
	struct UBattleSetTopInfoForStorageMode_C_GetInnerImagineSlotCnt_Params
	{
	public:
		int32_t                                                    OutSlotCnt;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleSetTopInfoForStorageMode.BattleSetTopInfoForStorageMode_C.GetBattleImagineSlotCnt
	 */
	struct UBattleSetTopInfoForStorageMode_C_GetBattleImagineSlotCnt_Params
	{
	public:
		int32_t                                                    OutSlotCnt;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleSetTopInfoForStorageMode.BattleSetTopInfoForStorageMode_C.SetupBattleCordeInfo
	 */
	struct UBattleSetTopInfoForStorageMode_C_SetupBattleCordeInfo_Params
	{
	public:
		int32_t                                                    InCordeId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InSetupByCurrentEquip;                                   // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InIsStorageMode;                                         // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
