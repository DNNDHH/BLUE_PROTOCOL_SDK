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
	 * Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.SetSkillTypeRadioBtnEnable
	 */
	struct UTacticalSkillInfoForBattleSet_C_SetSkillTypeRadioBtnEnable_Params
	{
	public:
		class UTacticalSkillTypeRadioBtn_C*                        InSkillTypeRadioBtn;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIsEnabled;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DMRW[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.CheckAbilityMastery
	 */
	struct UTacticalSkillInfoForBattleSet_C_CheckAbilityMastery_Params
	{
	public:
		int32_t                                                    InAbilitySkillId;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OutIsMastery;                                            // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6NAW[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.GetAbilitySkillId
	 */
	struct UTacticalSkillInfoForBattleSet_C_GetAbilitySkillId_Params
	{
	public:
		int32_t                                                    InBaseSkillId;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OutAbilityAlphaSkillId;                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OutAbilityBetaSkillId;                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XOD3[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.SetSkillTypeSelectMode
	 */
	struct UTacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode_Params
	{
	public:
		bool                                                       InIsSelectMode;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YLT5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InEquippedSkillTypeId;                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.UpdateSkillTypeRadioBtn
	 */
	struct UTacticalSkillInfoForBattleSet_C_UpdateSkillTypeRadioBtn_Params
	{
	public:
		int32_t                                                    InSkillTypeId;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EGXH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.SetInfoType
	 */
	struct UTacticalSkillInfoForBattleSet_C_SetInfoType_Params
	{
	public:
		bool                                                       InIsSkillTypeSelectableLevel;                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InIsSkillTypeSelectMode;                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2A2X[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InEquippedSkillTypeId;                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.SetSkill
	 */
	struct UTacticalSkillInfoForBattleSet_C_SetSkill_Params
	{
	public:
		int32_t                                                    InSkillId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InSkillLevel;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIsSkillTypeSelectableLevel;                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InIsSkillTypeSelectMode;                                 // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L0RY[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InEquippedSkillTypeId;                                   // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InSelectedSkillTypeId;                                   // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.PreConstruct
	 */
	struct UTacticalSkillInfoForBattleSet_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.Construct
	 */
	struct UTacticalSkillInfoForBattleSet_C_Construct_Params
	{	};

	/**
	 * Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.Destruct
	 */
	struct UTacticalSkillInfoForBattleSet_C_Destruct_Params
	{	};

	/**
	 * Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.OnRadioBtnSelected
	 */
	struct UTacticalSkillInfoForBattleSet_C_OnRadioBtnSelected_Params
	{
	public:
		int32_t                                                    InSkillTypeId;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.ExecuteUbergraph_TacticalSkillInfoForBattleSet
	 */
	struct UTacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.OnSkillTypeRadioBtnSelected__DelegateSignature
	 */
	struct UTacticalSkillInfoForBattleSet_C_OnSkillTypeRadioBtnSelected__DelegateSignature_Params
	{
	public:
		int32_t                                                    InSelectedSkillTypeId;                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InSelectedSkillId;                                       // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
