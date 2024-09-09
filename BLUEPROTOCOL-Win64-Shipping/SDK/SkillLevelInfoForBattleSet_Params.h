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
	 * Function SkillLevelInfoForBattleSet.SkillLevelInfoForBattleSet_C.SetSkillAbilityType
	 */
	struct USkillLevelInfoForBattleSet_C_SetSkillAbilityType_Params
	{
	public:
		ESBSkillAbilityType                                        InSkillAbilityType;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QFH4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SkillLevelInfoForBattleSet.SkillLevelInfoForBattleSet_C.SetSkillLevel
	 */
	struct USkillLevelInfoForBattleSet_C_SetSkillLevel_Params
	{
	public:
		int32_t                                                    InSkillLevel;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FYHT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SkillLevelInfoForBattleSet.SkillLevelInfoForBattleSet_C.PreConstruct
	 */
	struct USkillLevelInfoForBattleSet_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillLevelInfoForBattleSet.SkillLevelInfoForBattleSet_C.ExecuteUbergraph_SkillLevelInfoForBattleSet
	 */
	struct USkillLevelInfoForBattleSet_C_ExecuteUbergraph_SkillLevelInfoForBattleSet_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
