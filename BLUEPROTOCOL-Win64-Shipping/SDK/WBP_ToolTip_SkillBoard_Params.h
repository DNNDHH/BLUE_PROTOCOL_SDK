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
	 * Function WBP_ToolTip_SkillBoard.WBP_ToolTip_SkillBoard_C.GetSkillDataText
	 */
	struct UWBP_ToolTip_SkillBoard_C_GetSkillDataText_Params
	{
	public:
		struct FSBSkillDataMasterData                              InSkillData;                                             // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    InLevel;                                                 // 0x0058(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_57UF[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                OutText;                                                 // 0x0060(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function WBP_ToolTip_SkillBoard.WBP_ToolTip_SkillBoard_C.Set Skill
	 */
	struct UWBP_ToolTip_SkillBoard_C_SetSkill_Params
	{
	public:
		int32_t                                                    SkillId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SkillLevel;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
