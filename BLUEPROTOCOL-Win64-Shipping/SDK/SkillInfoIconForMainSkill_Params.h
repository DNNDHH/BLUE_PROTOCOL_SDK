﻿#pragma once

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
	 * Function SkillInfoIconForMainSkill.SkillInfoIconForMainSkill_C.InitSkillEmptyColor
	 */
	struct USkillInfoIconForMainSkill_C_InitSkillEmptyColor_Params
	{	};

	/**
	 * Function SkillInfoIconForMainSkill.SkillInfoIconForMainSkill_C.SetIsSkillEmpty
	 */
	struct USkillInfoIconForMainSkill_C_SetIsSkillEmpty_Params
	{
	public:
		bool                                                       InIsEmpty;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoIconForMainSkill.SkillInfoIconForMainSkill_C.SetLevel
	 */
	struct USkillInfoIconForMainSkill_C_SetLevel_Params
	{
	public:
		int32_t                                                    InLevel;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillInfoIconForMainSkill.SkillInfoIconForMainSkill_C.SetSkillInfo
	 */
	struct USkillInfoIconForMainSkill_C_SetSkillInfo_Params
	{
	public:
		int32_t                                                    InSkillId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InSkillLevel;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIsInformationHidden;                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InIsSkillMastery;                                        // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoIconForMainSkill.SkillInfoIconForMainSkill_C.CreateTooltip
	 */
	struct USkillInfoIconForMainSkill_C_CreateTooltip_Params
	{
	public:
		bool                                                       InIsNotUseTooltip;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoIconForMainSkill.SkillInfoIconForMainSkill_C.Construct
	 */
	struct USkillInfoIconForMainSkill_C_Construct_Params
	{	};

	/**
	 * Function SkillInfoIconForMainSkill.SkillInfoIconForMainSkill_C.PreConstruct
	 */
	struct USkillInfoIconForMainSkill_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoIconForMainSkill.SkillInfoIconForMainSkill_C.ExecuteUbergraph_SkillInfoIconForMainSkill
	 */
	struct USkillInfoIconForMainSkill_C_ExecuteUbergraph_SkillInfoIconForMainSkill_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif