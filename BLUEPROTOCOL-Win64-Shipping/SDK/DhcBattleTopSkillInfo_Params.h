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
	 * Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.GetScoreInfoSwitcher
	 */
	struct UDhcBattleTopSkillInfo_C_GetScoreInfoSwitcher_Params
	{
	public:
		class UBattleScoreInfoSwitcher_C*                          OutSwitcher;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.SetSkillPaletteType
	 */
	struct UDhcBattleTopSkillInfo_C_SetSkillPaletteType_Params
	{
	public:
		bool                                                       bInIsSubSkillPalette;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInIgnoreSwitchBtn;                                      // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.SetupTacticalSkillPosition
	 */
	struct UDhcBattleTopSkillInfo_C_SetupTacticalSkillPosition_Params
	{
	public:
		bool                                                       bInIsSkillPaletteGrp2AtFront;                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A8OY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.SwitchTacticalSkillBg
	 */
	struct UDhcBattleTopSkillInfo_C_SwitchTacticalSkillBg_Params
	{
	public:
		bool                                                       bInIsSubSkillPaletteAtFront;                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInIsAnimation;                                          // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.StartSkillPaletteGrpSwitchAnimation
	 */
	struct UDhcBattleTopSkillInfo_C_StartSkillPaletteGrpSwitchAnimation_Params
	{
	public:
		bool                                                       bInSwitchToSubSkillPalette;                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInIsAnimation;                                          // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.SetSkillPaletteGrpSwtichEnable
	 */
	struct UDhcBattleTopSkillInfo_C_SetSkillPaletteGrpSwtichEnable_Params
	{
	public:
		bool                                                       bInIsEnabled;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.SetupBattleImagine
	 */
	struct UDhcBattleTopSkillInfo_C_SetupBattleImagine_Params
	{
	public:
		TArray<struct FSBDhcBattlePlayerEquipImagineInfo>          InBattleImagineInfos;                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ESBClassType                                               InClassType;                                             // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_X1LN[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InClassLevel;                                            // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.SetupRegularAndULTSkill
	 */
	struct UDhcBattleTopSkillInfo_C_SetupRegularAndULTSkill_Params
	{
	public:
		TArray<int32_t>                                            InRegularSkillIds;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    InULTSkillId;                                            // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InClassLevel;                                            // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.SetupTacticalSkill
	 */
	struct UDhcBattleTopSkillInfo_C_SetupTacticalSkill_Params
	{
	public:
		TArray<int32_t>                                            InTacticalSkillIds;                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ESBClassType                                               InClassType;                                             // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U1VQ[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InClassLevel;                                            // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.Setup
	 */
	struct UDhcBattleTopSkillInfo_C_Setup_Params
	{
	public:
		TArray<struct FSBDhcBattlePlayerEquipImagineInfo>          InEquipBattleImagineInfo;                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FSBDhcBattlePlayerEquipArtsInfo>             InEquipArtsInfo;                                         // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ESBClassType                                               InClassType;                                             // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UJCH[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InClassLevel;                                            // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.PreConstruct
	 */
	struct UDhcBattleTopSkillInfo_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.Construct
	 */
	struct UDhcBattleTopSkillInfo_C_Construct_Params
	{	};

	/**
	 * Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.BndEvt__DhcBattleTopSkillInfo_SkillPaletteGrpSwitchBtn_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 */
	struct UDhcBattleTopSkillInfo_C_BndEvt__DhcBattleTopSkillInfo_SkillPaletteGrpSwitchBtn_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params
	{
	public:
		bool                                                       bInSwitchToSubSkillPalette;                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.SetUIBlockerMostFrontEnable
	 */
	struct UDhcBattleTopSkillInfo_C_SetUIBlockerMostFrontEnable_Params
	{
	public:
		bool                                                       InIsEnabled;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.OnAnimationFinished
	 */
	struct UDhcBattleTopSkillInfo_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.ExecuteUbergraph_DhcBattleTopSkillInfo
	 */
	struct UDhcBattleTopSkillInfo_C_ExecuteUbergraph_DhcBattleTopSkillInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
