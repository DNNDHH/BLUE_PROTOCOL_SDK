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
	 * Function SkillTree_SkillIconTacticalAbility.SkillTree_SkillIconTacticalAbility_C.Construct
	 */
	struct USkillTree_SkillIconTacticalAbility_C_Construct_Params
	{	};

	/**
	 * Function SkillTree_SkillIconTacticalAbility.SkillTree_SkillIconTacticalAbility_C.SelectActiveAbility
	 */
	struct USkillTree_SkillIconTacticalAbility_C_SelectActiveAbility_Params
	{
	public:
		ESkillTreeAbilityType                                      AbilityType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillTree_SkillIconTacticalAbility.SkillTree_SkillIconTacticalAbility_C.ExecuteUbergraph_SkillTree_SkillIconTacticalAbility
	 */
	struct USkillTree_SkillIconTacticalAbility_C_ExecuteUbergraph_SkillTree_SkillIconTacticalAbility_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
