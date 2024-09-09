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
	 * Function SkillInfoIconULTSkill.SkillInfoIconULTSkill_C.UpdateSkillIcon
	 */
	struct USkillInfoIconULTSkill_C_UpdateSkillIcon_Params
	{
	public:
		bool                                                       InIsMastery;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoIconULTSkill.SkillInfoIconULTSkill_C.InitSkillStopUpdate
	 */
	struct USkillInfoIconULTSkill_C_InitSkillStopUpdate_Params
	{	};

	/**
	 * Function SkillInfoIconULTSkill.SkillInfoIconULTSkill_C.SetIsSkillEmpty
	 */
	struct USkillInfoIconULTSkill_C_SetIsSkillEmpty_Params
	{
	public:
		bool                                                       InIsEmpty;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoIconULTSkill.SkillInfoIconULTSkill_C.SetLevel
	 */
	struct USkillInfoIconULTSkill_C_SetLevel_Params
	{
	public:
		int32_t                                                    InLevel;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillInfoIconULTSkill.SkillInfoIconULTSkill_C.SetSkillInfo
	 */
	struct USkillInfoIconULTSkill_C_SetSkillInfo_Params
	{
	public:
		int32_t                                                    InSkillId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InSkillLevel;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBClassType                                               InClassType;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIsSkillMastery;                                        // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InIsInformationHidden;                                   // 0x000A(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoIconULTSkill.SkillInfoIconULTSkill_C.CreateTooltip
	 */
	struct USkillInfoIconULTSkill_C_CreateTooltip_Params
	{
	public:
		bool                                                       InIsNotUseTooltip;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InIsSkillMastered;                                       // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_08QE[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SkillInfoIconULTSkill.SkillInfoIconULTSkill_C.Construct
	 */
	struct USkillInfoIconULTSkill_C_Construct_Params
	{	};

	/**
	 * Function SkillInfoIconULTSkill.SkillInfoIconULTSkill_C.PreConstruct
	 */
	struct USkillInfoIconULTSkill_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoIconULTSkill.SkillInfoIconULTSkill_C.ExecuteUbergraph_SkillInfoIconULTSkill
	 */
	struct USkillInfoIconULTSkill_C_ExecuteUbergraph_SkillInfoIconULTSkill_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
