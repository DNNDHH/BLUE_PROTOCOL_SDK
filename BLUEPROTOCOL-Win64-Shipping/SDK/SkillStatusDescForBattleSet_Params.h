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
	 * Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.CheckIsSkillTypeSelectable
	 */
	struct USkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable_Params
	{
	public:
		int32_t                                                    InSkillId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InSkillLevel;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OutIsSkillTypeSelectable;                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.GetTacticalSkillBaseInfo
	 */
	struct USkillStatusDescForBattleSet_C_GetTacticalSkillBaseInfo_Params
	{
	public:
		struct FSBSkillDataMasterData                              InSkillMasterData;                                       // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       IsTacticalSkill;                                         // 0x0058(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BZIY[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    OutBaseSkillId;                                          // 0x005C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OutBaseSkillLevel;                                       // 0x0060(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.CheckIfTacticalSkillIsEquppedAndItsSkillType
	 */
	struct USkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType_Params
	{
	public:
		int32_t                                                    InSkillId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OutIsEquipped;                                           // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_07XS[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    OutSkillType;                                            // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.SetWindowSize
	 */
	struct USkillStatusDescForBattleSet_C_SetWindowSize_Params
	{
	public:
		struct FVector2D                                           InWindowSize;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.SwitchStatusType
	 */
	struct USkillStatusDescForBattleSet_C_SwitchStatusType_Params
	{
	public:
		int32_t                                                    InStatusTypeId;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.SetClassAbilityRemoveBtnVisibility
	 */
	struct USkillStatusDescForBattleSet_C_SetClassAbilityRemoveBtnVisibility_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.SwitchBaseBgType
	 */
	struct USkillStatusDescForBattleSet_C_SwitchBaseBgType_Params
	{
	public:
		bool                                                       InIsNormalType;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.SetDescBlank
	 */
	struct USkillStatusDescForBattleSet_C_SetDescBlank_Params
	{
	public:
		bool                                                       InIsDescBlank;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.SetDefaultDescType
	 */
	struct USkillStatusDescForBattleSet_C_SetDefaultDescType_Params
	{
	public:
		E_BattleSetInfoType                                        InInfoType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIsSharedAbility;                                       // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.SetInfoType
	 */
	struct USkillStatusDescForBattleSet_C_SetInfoType_Params
	{
	public:
		E_BattleSetInfoType                                        InInfoType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.SwitchDescType
	 */
	struct USkillStatusDescForBattleSet_C_SwitchDescType_Params
	{
	public:
		bool                                                       InIsDescDefault;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.SetSkill
	 */
	struct USkillStatusDescForBattleSet_C_SetSkill_Params
	{
	public:
		int32_t                                                    InSkillId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.PreConstruct
	 */
	struct USkillStatusDescForBattleSet_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.BndEvt__EquipmentStatusDescForBattleSet_ImagineRemoveBtn_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 */
	struct USkillStatusDescForBattleSet_C_BndEvt__EquipmentStatusDescForBattleSet_ImagineRemoveBtn_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.BndEvt__SkillStatusDescForBattleSet_TacticalSkillInfo_K2Node_ComponentBoundEvent_1_OnSkillTypeRadioBtnSelected__DelegateSignature
	 */
	struct USkillStatusDescForBattleSet_C_BndEvt__SkillStatusDescForBattleSet_TacticalSkillInfo_K2Node_ComponentBoundEvent_1_OnSkillTypeRadioBtnSelected__DelegateSignature_Params
	{
	public:
		int32_t                                                    InSelectedSkillTypeId;                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InSelectedSkillId;                                       // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.ExecuteUbergraph_SkillStatusDescForBattleSet
	 */
	struct USkillStatusDescForBattleSet_C_ExecuteUbergraph_SkillStatusDescForBattleSet_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.OnTacticalSkillTypeSelected__DelegateSignature
	 */
	struct USkillStatusDescForBattleSet_C_OnTacticalSkillTypeSelected__DelegateSignature_Params
	{
	public:
		int32_t                                                    InSelectedSkillTypeId;                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InSelectedSkillId;                                       // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.OnClassAbilityRemoveBtnPressed__DelegateSignature
	 */
	struct USkillStatusDescForBattleSet_C_OnClassAbilityRemoveBtnPressed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
