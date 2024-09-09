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
	 * Function SkillInfoForBattleCordeEdit.SkillInfoForBattleCordeEdit_C.GetScoreInfoSwitcher
	 */
	struct USkillInfoForBattleCordeEdit_C_GetScoreInfoSwitcher_Params
	{
	public:
		class UBattleScoreInfoSwitcher_C*                          OutSwitcher;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillInfoForBattleCordeEdit.SkillInfoForBattleCordeEdit_C.IsSubPaletteReleased
	 */
	struct USkillInfoForBattleCordeEdit_C_IsSubPaletteReleased_Params
	{
	public:
		bool                                                       OutIsReleased;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DZC1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SkillInfoForBattleCordeEdit.SkillInfoForBattleCordeEdit_C.SetSkillPaletteType
	 */
	struct USkillInfoForBattleCordeEdit_C_SetSkillPaletteType_Params
	{
	public:
		bool                                                       bInIsSubSkillPalette;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInIgnoreSwitchBtn;                                      // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoForBattleCordeEdit.SkillInfoForBattleCordeEdit_C.SetupTacticalSkillPosition
	 */
	struct USkillInfoForBattleCordeEdit_C_SetupTacticalSkillPosition_Params
	{
	public:
		bool                                                       isSkillPaletteGrp2AtFront;                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoForBattleCordeEdit.SkillInfoForBattleCordeEdit_C.SwitchTacticalSkillBg
	 */
	struct USkillInfoForBattleCordeEdit_C_SwitchTacticalSkillBg_Params
	{
	public:
		bool                                                       isSkillPaletteGrp2AtFront;                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsAnimation;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoForBattleCordeEdit.SkillInfoForBattleCordeEdit_C.StartSkillPaletteGrpSwitchAnimation
	 */
	struct USkillInfoForBattleCordeEdit_C_StartSkillPaletteGrpSwitchAnimation_Params
	{
	public:
		bool                                                       InSwitchToSubSkillPalette;                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InIsAnimation;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SA3P[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SkillInfoForBattleCordeEdit.SkillInfoForBattleCordeEdit_C.SetSkillPaletteGrpSwtichEnable
	 */
	struct USkillInfoForBattleCordeEdit_C_SetSkillPaletteGrpSwtichEnable_Params
	{
	public:
		bool                                                       InIsEnabled;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoForBattleCordeEdit.SkillInfoForBattleCordeEdit_C.SetStorageMode
	 */
	struct USkillInfoForBattleCordeEdit_C_SetStorageMode_Params
	{
	public:
		bool                                                       InIsStorageMode;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoForBattleCordeEdit.SkillInfoForBattleCordeEdit_C.SetupBattleImagine
	 */
	struct USkillInfoForBattleCordeEdit_C_SetupBattleImagine_Params
	{
	public:
		TArray<class FString>                                      InBattleImagineUniqueIds;                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       InSetupByCurrEquip;                                      // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ESBClassType                                               InClassType;                                             // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillInfoForBattleCordeEdit.SkillInfoForBattleCordeEdit_C.SetupRegularAndULTSkill
	 */
	struct USkillInfoForBattleCordeEdit_C_SetupRegularAndULTSkill_Params
	{
	public:
		TArray<int32_t>                                            InRegularSkillIds;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    InULTSkillId;                                            // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InSetupByCurrEquip;                                      // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoForBattleCordeEdit.SkillInfoForBattleCordeEdit_C.SetupTacticalSkill
	 */
	struct USkillInfoForBattleCordeEdit_C_SetupTacticalSkill_Params
	{
	public:
		TArray<int32_t>                                            InTacticalSkillIds;                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       InSetupByCurrEquip;                                      // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InIsSubPaletteReleased;                                  // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoForBattleCordeEdit.SkillInfoForBattleCordeEdit_C.Setup
	 */
	struct USkillInfoForBattleCordeEdit_C_Setup_Params
	{
	public:
		TArray<int32_t>                                            InTacticalSkillIds;                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            InRegularSkillIds;                                       // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    InULTSkillId;                                            // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T7F9[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      InBattleImagineUniqueIds;                                // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       InSetupByCurrEquip;                                      // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ESBClassType                                               InClassType;                                             // 0x0039(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillInfoForBattleCordeEdit.SkillInfoForBattleCordeEdit_C.PreConstruct
	 */
	struct USkillInfoForBattleCordeEdit_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoForBattleCordeEdit.SkillInfoForBattleCordeEdit_C.BndEvt__SkillInfoForBattleCordeEdit_SkillPaletteFrontBackSwitchBtn_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 */
	struct USkillInfoForBattleCordeEdit_C_BndEvt__SkillInfoForBattleCordeEdit_SkillPaletteFrontBackSwitchBtn_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params
	{
	public:
		bool                                                       bInSwitchToSubSkillPalette;                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoForBattleCordeEdit.SkillInfoForBattleCordeEdit_C.SetUIBlockerMostFrontEnable
	 */
	struct USkillInfoForBattleCordeEdit_C_SetUIBlockerMostFrontEnable_Params
	{
	public:
		bool                                                       InIsEnabled;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoForBattleCordeEdit.SkillInfoForBattleCordeEdit_C.Construct
	 */
	struct USkillInfoForBattleCordeEdit_C_Construct_Params
	{	};

	/**
	 * Function SkillInfoForBattleCordeEdit.SkillInfoForBattleCordeEdit_C.OnAnimationFinished
	 */
	struct USkillInfoForBattleCordeEdit_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillInfoForBattleCordeEdit.SkillInfoForBattleCordeEdit_C.ExecuteUbergraph_SkillInfoForBattleCordeEdit
	 */
	struct USkillInfoForBattleCordeEdit_C_ExecuteUbergraph_SkillInfoForBattleCordeEdit_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
