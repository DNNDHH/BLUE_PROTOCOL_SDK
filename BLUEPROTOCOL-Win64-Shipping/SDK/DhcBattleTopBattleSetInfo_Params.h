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
	 * Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.GetScoreInfoSwitcher
	 */
	struct UDhcBattleTopBattleSetInfo_C_GetScoreInfoSwitcher_Params
	{
	public:
		class UBattleScoreInfoSwitcher_C*                          OutSwitcher;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.ResetSkillInfoSubPalette
	 */
	struct UDhcBattleTopBattleSetInfo_C_ResetSkillInfoSubPalette_Params
	{
	public:
		bool                                                       bInIsSubPaletteReleased;                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.GetClassTypeFromWeaponId
	 */
	struct UDhcBattleTopBattleSetInfo_C_GetClassTypeFromWeaponId_Params
	{
	public:
		int32_t                                                    InWeaponID;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBClassType                                               OutClassType;                                            // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.GetRegularAndULTSkillIdByClassType
	 */
	struct UDhcBattleTopBattleSetInfo_C_GetRegularAndULTSkillIdByClassType_Params
	{
	public:
		ESBClassType                                               InClassType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_44A3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    OutRegularMainSkillId;                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OutRegularSubSkillId;                                    // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OutULTSkillId;                                           // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.GetIsWeaponLost
	 */
	struct UDhcBattleTopBattleSetInfo_C_GetIsWeaponLost_Params
	{
	public:
		bool                                                       OutIsWeaponLost;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.GetClassAbilitySlotCnt
	 */
	struct UDhcBattleTopBattleSetInfo_C_GetClassAbilitySlotCnt_Params
	{
	public:
		int32_t                                                    OutSlotCnt;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.GetTacticalSkillSlotCnt
	 */
	struct UDhcBattleTopBattleSetInfo_C_GetTacticalSkillSlotCnt_Params
	{
	public:
		int32_t                                                    OutSlotCnt;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.GetRegularSkillSlotCnt
	 */
	struct UDhcBattleTopBattleSetInfo_C_GetRegularSkillSlotCnt_Params
	{
	public:
		int32_t                                                    OutSlotCnt;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.GetInnerImagineSlotCnt
	 */
	struct UDhcBattleTopBattleSetInfo_C_GetInnerImagineSlotCnt_Params
	{
	public:
		int32_t                                                    OutSlotCnt;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.GetBattleImagineSlotCnt
	 */
	struct UDhcBattleTopBattleSetInfo_C_GetBattleImagineSlotCnt_Params
	{
	public:
		int32_t                                                    OutSlotCnt;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C.SetupInfo
	 */
	struct UDhcBattleTopBattleSetInfo_C_SetupInfo_Params
	{
	public:
		struct FSBDhcBattleHighScoreInfo                           InScoreInfo;                                             // 0x0000(0x00F8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
