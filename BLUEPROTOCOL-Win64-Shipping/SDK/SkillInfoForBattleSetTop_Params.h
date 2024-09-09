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
	 * Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.GetScoreInfoSwitcher
	 */
	struct USkillInfoForBattleSetTop_C_GetScoreInfoSwitcher_Params
	{
	public:
		class UBattleScoreInfoSwitcher_C*                          NewParam;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SetupTacticalSkillButtonEnable
	 */
	struct USkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable_Params
	{
	public:
		bool                                                       bInIsSkillPaletteGrp2AtFront;                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.BindTacticalSkillIconEvents
	 */
	struct USkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents_Params
	{
	public:
		bool                                                       bInUnbindEvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NAGD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SetSkillPaletteType
	 */
	struct USkillInfoForBattleSetTop_C_SetSkillPaletteType_Params
	{
	public:
		bool                                                       bInIsSubSkillPalette;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInIgnoreSwitchBtn;                                      // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SetupTacticalSkillPosition
	 */
	struct USkillInfoForBattleSetTop_C_SetupTacticalSkillPosition_Params
	{
	public:
		bool                                                       isSkillPaletteGrp2AtFront;                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SwitchTacticalSkillBg
	 */
	struct USkillInfoForBattleSetTop_C_SwitchTacticalSkillBg_Params
	{
	public:
		bool                                                       IsSubSkillPaletteAtFront;                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsAnimation;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5XYM[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.StartSkillPaletteGrpSwitchAnimation
	 */
	struct USkillInfoForBattleSetTop_C_StartSkillPaletteGrpSwitchAnimation_Params
	{
	public:
		bool                                                       InSwitchToSubSkillPalette;                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InIsAnimation;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T4ZL[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SetSkillPaletteGrpSwtichEnable
	 */
	struct USkillInfoForBattleSetTop_C_SetSkillPaletteGrpSwtichEnable_Params
	{
	public:
		bool                                                       InIsEnabled;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SetStorageMode
	 */
	struct USkillInfoForBattleSetTop_C_SetStorageMode_Params
	{
	public:
		bool                                                       InIsStorageMode;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SetupBattleImagine
	 */
	struct USkillInfoForBattleSetTop_C_SetupBattleImagine_Params
	{	};

	/**
	 * Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SetupMainSubULTSkill
	 */
	struct USkillInfoForBattleSetTop_C_SetupMainSubULTSkill_Params
	{	};

	/**
	 * Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SetupTacticalSkill
	 */
	struct USkillInfoForBattleSetTop_C_SetupTacticalSkill_Params
	{	};

	/**
	 * Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SetupAllSkill
	 */
	struct USkillInfoForBattleSetTop_C_SetupAllSkill_Params
	{	};

	/**
	 * Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.Construct
	 */
	struct USkillInfoForBattleSetTop_C_Construct_Params
	{	};

	/**
	 * Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.PreConstruct
	 */
	struct USkillInfoForBattleSetTop_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.BndEvt__SkillInfoForBattleSetTop_BattleImagine1a_K2Node_ComponentBoundEvent_6_OnBattleImagineIconPressed__DelegateSignature
	 */
	struct USkillInfoForBattleSetTop_C_BndEvt__SkillInfoForBattleSetTop_BattleImagine1a_K2Node_ComponentBoundEvent_6_OnBattleImagineIconPressed__DelegateSignature_Params
	{
	public:
		ESkillActionPosition                                       InBattleImagineSAP;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8MEV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InBattleImagineUniqueId;                                 // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.BndEvt__SkillInfoForBattleSetTop_BattleImagine2a_K2Node_ComponentBoundEvent_7_OnBattleImagineIconPressed__DelegateSignature
	 */
	struct USkillInfoForBattleSetTop_C_BndEvt__SkillInfoForBattleSetTop_BattleImagine2a_K2Node_ComponentBoundEvent_7_OnBattleImagineIconPressed__DelegateSignature_Params
	{
	public:
		ESkillActionPosition                                       InBattleImagineSAP;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_72J7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InBattleImagineUniqueId;                                 // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.BndEvt__SkillInfoForBattleSetTop_SkillPaletteSwitchBtn_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 */
	struct USkillInfoForBattleSetTop_C_BndEvt__SkillInfoForBattleSetTop_SkillPaletteSwitchBtn_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params
	{
	public:
		bool                                                       bInSwitchToSubSkillPalette;                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SetUIBlockerMostFrontEnable
	 */
	struct USkillInfoForBattleSetTop_C_SetUIBlockerMostFrontEnable_Params
	{
	public:
		bool                                                       InIsEnabled;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.OnAnimationFinished
	 */
	struct USkillInfoForBattleSetTop_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.OnTacticalSkillIconSelected
	 */
	struct USkillInfoForBattleSetTop_C_OnTacticalSkillIconSelected_Params
	{
	public:
		ESkillActionPosition                                       InTacticalSkillSAP;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MA9Q[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InSkillId;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InSkillLevel;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.Destruct
	 */
	struct USkillInfoForBattleSetTop_C_Destruct_Params
	{	};

	/**
	 * Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.ExecuteUbergraph_SkillInfoForBattleSetTop
	 */
	struct USkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.OnBattleImagineIconPresssed__DelegateSignature
	 */
	struct USkillInfoForBattleSetTop_C_OnBattleImagineIconPresssed__DelegateSignature_Params
	{
	public:
		ESkillActionPosition                                       InBattleImagineSAP;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2BUD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InBattleImagineUniqueId;                                 // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.OnTacticalSkillIconPressed__DelegateSignature
	 */
	struct USkillInfoForBattleSetTop_C_OnTacticalSkillIconPressed__DelegateSignature_Params
	{
	public:
		ESkillActionPosition                                       InTacticalSkillSAP;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XHMN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InSkillId;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InSkillLevel;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
