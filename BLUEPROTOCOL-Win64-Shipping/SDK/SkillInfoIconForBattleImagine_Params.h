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
	 * Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.SetScoreInfoSwitcher
	 */
	struct USkillInfoIconForBattleImagine_C_SetScoreInfoSwitcher_Params
	{
	public:
		class UBattleScoreInfoSwitcher_C*                          InSwitcher;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.SetBattleImagineInfoForDhcBattle
	 */
	struct USkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle_Params
	{
	public:
		struct FSBDhcBattlePlayerEquipImagineInfo                  InBattleImagineInfo;                                     // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		ESBClassType                                               InClassType;                                             // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YUSL[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InClassLevel;                                            // 0x0034(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.SetBtnForPadCursorMoveVisible
	 */
	struct USkillInfoIconForBattleImagine_C_SetBtnForPadCursorMoveVisible_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.SetStackBIconByOwnItemInfo
	 */
	struct USkillInfoIconForBattleImagine_C_SetStackBIconByOwnItemInfo_Params
	{
	public:
		struct FOwnItemInfo                                        InOwnItemInfo;                                           // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.InitSkillStopUpdate
	 */
	struct USkillInfoIconForBattleImagine_C_InitSkillStopUpdate_Params
	{
	public:
		ESkillActionPosition                                       InSkillActionPosition;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.InitSkillEmptyColor
	 */
	struct USkillInfoIconForBattleImagine_C_InitSkillEmptyColor_Params
	{
	public:
		ESkillActionPosition                                       InSkillActionPosition;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8W3W[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.UpdateBattleImagineIcon
	 */
	struct USkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon_Params
	{
	public:
		ESkillActionPosition                                       InSkillActionPosition;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2CHO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InImagineId;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              inImagineUniqueId;                                       // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    InStackBNum;                                             // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InStackBMax;                                             // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIsTermLimited;                                         // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.SetBattleImagineAlertIconVisibility
	 */
	struct USkillInfoIconForBattleImagine_C_SetBattleImagineAlertIconVisibility_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.SetBattleImagineLevelVisibility
	 */
	struct USkillInfoIconForBattleImagine_C_SetBattleImagineLevelVisibility_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.SetBattleImagineLevel
	 */
	struct USkillInfoIconForBattleImagine_C_SetBattleImagineLevel_Params
	{
	public:
		int32_t                                                    InLevel;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WAFC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              inImagineUniqueId;                                       // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESBClassType                                               InClassType;                                             // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InForceLevelSyncOff;                                     // 0x0019(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.SetBattleImagineButtonOff
	 */
	struct USkillInfoIconForBattleImagine_C_SetBattleImagineButtonOff_Params
	{	};

	/**
	 * Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.SetIsBattleImagineEmpty
	 */
	struct USkillInfoIconForBattleImagine_C_SetIsBattleImagineEmpty_Params
	{
	public:
		ESkillActionPosition                                       InSkillActionPosition;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIsEmpty;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.SetBattleImagineInfo
	 */
	struct USkillInfoIconForBattleImagine_C_SetBattleImagineInfo_Params
	{
	public:
		class FString                                              inImagineUniqueId;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       InIsInformationHidden;                                   // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InIsStorageMode;                                         // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InIsImagineIconActive;                                   // 0x0012(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ESBClassType                                               InClassType;                                             // 0x0013(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InDontDisplayAlertIcon;                                  // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InForceLevelSyncOff;                                     // 0x0015(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.CreateTooltipForBattleImagine
	 */
	struct USkillInfoIconForBattleImagine_C_CreateTooltipForBattleImagine_Params
	{
	public:
		struct FST_ToolTipInfo                                     InImagineTooltipInfo;                                    // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		bool                                                       InIsNotUseTooltip;                                       // 0x0078(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.Construct
	 */
	struct USkillInfoIconForBattleImagine_C_Construct_Params
	{	};

	/**
	 * Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.BndEvt__MyCharaMenu_SkillInfoItemBaseForBattleSet_SBButtonForBattleImagine1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct USkillInfoIconForBattleImagine_C_BndEvt__MyCharaMenu_SkillInfoItemBaseForBattleSet_SBButtonForBattleImagine1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.PreConstruct
	 */
	struct USkillInfoIconForBattleImagine_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.ExecuteUbergraph_SkillInfoIconForBattleImagine
	 */
	struct USkillInfoIconForBattleImagine_C_ExecuteUbergraph_SkillInfoIconForBattleImagine_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.OnBattleImagineIconPressed__DelegateSignature
	 */
	struct USkillInfoIconForBattleImagine_C_OnBattleImagineIconPressed__DelegateSignature_Params
	{
	public:
		ESkillActionPosition                                       InBattleImagineSAP;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0GA1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InBattleImagineUniqueId;                                 // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
