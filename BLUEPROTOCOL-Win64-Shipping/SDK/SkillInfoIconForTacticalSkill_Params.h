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
	 * Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.SetBtnForPadCursorMoveVisible
	 */
	struct USkillInfoIconForTacticalSkill_C_SetBtnForPadCursorMoveVisible_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.SwitchSkillBg
	 */
	struct USkillInfoIconForTacticalSkill_C_SwitchSkillBg_Params
	{
	public:
		bool                                                       bBehind;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bAnim;                                                   // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2KVO[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.SetTacticalSkillAbillityType
	 */
	struct USkillInfoIconForTacticalSkill_C_SetTacticalSkillAbillityType_Params
	{
	public:
		ESBSkillAbilityType                                        InSkillAbilityType;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.InitSkillStopUpdate
	 */
	struct USkillInfoIconForTacticalSkill_C_InitSkillStopUpdate_Params
	{
	public:
		ESkillActionPosition                                       InSAP;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.InitSkillEmptyColor
	 */
	struct USkillInfoIconForTacticalSkill_C_InitSkillEmptyColor_Params
	{
	public:
		ESkillActionPosition                                       InSAP;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_71GB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.UpdateTacticalSkillIcon
	 */
	struct USkillInfoIconForTacticalSkill_C_UpdateTacticalSkillIcon_Params
	{
	public:
		ESkillActionPosition                                       InSAP;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HCLM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InSkillId;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIsMastery;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3WSU[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.SetTacticalSkillButtonOff
	 */
	struct USkillInfoIconForTacticalSkill_C_SetTacticalSkillButtonOff_Params
	{	};

	/**
	 * Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.SetIsTacticalSkillEmpty
	 */
	struct USkillInfoIconForTacticalSkill_C_SetIsTacticalSkillEmpty_Params
	{
	public:
		ESkillActionPosition                                       InSAP;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIsEmpty;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.SetSkillButtonOffBase
	 */
	struct USkillInfoIconForTacticalSkill_C_SetSkillButtonOffBase_Params
	{
	public:
		bool                                                       InIsButtonOff;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.SetLevel
	 */
	struct USkillInfoIconForTacticalSkill_C_SetLevel_Params
	{
	public:
		int32_t                                                    InLevel;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InSkillId;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.SetSkillInfo
	 */
	struct USkillInfoIconForTacticalSkill_C_SetSkillInfo_Params
	{
	public:
		int32_t                                                    InSkillId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InSkillLevel;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIsInformationHidden;                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InIsSkillMastery;                                        // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.CreateTooltip
	 */
	struct USkillInfoIconForTacticalSkill_C_CreateTooltip_Params
	{
	public:
		bool                                                       InIsNotUseTooltip;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.Construct
	 */
	struct USkillInfoIconForTacticalSkill_C_Construct_Params
	{	};

	/**
	 * Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.BndEvt__MyCharaMenu_SkillInfoItemBaseForBattleSet_SBButtonForTacticalSkill1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct USkillInfoIconForTacticalSkill_C_BndEvt__MyCharaMenu_SkillInfoItemBaseForBattleSet_SBButtonForTacticalSkill1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.PreConstruct
	 */
	struct USkillInfoIconForTacticalSkill_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.ExecuteUbergraph_SkillInfoIconForTacticalSkill
	 */
	struct USkillInfoIconForTacticalSkill_C_ExecuteUbergraph_SkillInfoIconForTacticalSkill_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.OnTacticalSkillIconPressed__DelegateSignature
	 */
	struct USkillInfoIconForTacticalSkill_C_OnTacticalSkillIconPressed__DelegateSignature_Params
	{
	public:
		ESkillActionPosition                                       InTacticalSkillSAP;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LS9E[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InSkillId;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InSkillLevel;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
