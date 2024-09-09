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
	 * Function WBP_SkillTreeHorizonLevelBG.WBP_SkillTreeHorizonLevelBG_C.Init
	 */
	struct UWBP_SkillTreeHorizonLevelBG_C_Init_Params
	{
	public:
		bool                                                       IsSelect;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X99Q[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Level;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_SkillTreeHorizonLevelBG.WBP_SkillTreeHorizonLevelBG_C.PreConstruct
	 */
	struct UWBP_SkillTreeHorizonLevelBG_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_SkillTreeHorizonLevelBG.WBP_SkillTreeHorizonLevelBG_C.ExecuteUbergraph_WBP_SkillTreeHorizonLevelBG
	 */
	struct UWBP_SkillTreeHorizonLevelBG_C_ExecuteUbergraph_WBP_SkillTreeHorizonLevelBG_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
