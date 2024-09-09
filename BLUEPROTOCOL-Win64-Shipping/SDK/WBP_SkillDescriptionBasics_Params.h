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
	 * Function WBP_SkillDescriptionBasics.WBP_SkillDescriptionBasics_C.GetToolTipWidget_1
	 */
	struct UWBP_SkillDescriptionBasics_C_GetToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_SkillDescriptionBasics.WBP_SkillDescriptionBasics_C.BuffIconsCollapsed
	 */
	struct UWBP_SkillDescriptionBasics_C_BuffIconsCollapsed_Params
	{	};

	/**
	 * Function WBP_SkillDescriptionBasics.WBP_SkillDescriptionBasics_C.Set Skill
	 */
	struct UWBP_SkillDescriptionBasics_C_SetSkill_Params
	{
	public:
		int32_t                                                    SkillId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SkillLevel;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
