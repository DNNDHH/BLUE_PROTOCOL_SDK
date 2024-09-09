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
	 * Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.SetBtnForPadCursorMoveVisible
	 */
	struct UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetBtnForPadCursorMoveVisible_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.CreateUnopenedTooltip
	 */
	struct UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateUnopenedTooltip_Params
	{
	public:
		ESBSkillType                                               InSkillType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBSkillAbilityType                                        InSkillAbilityType;                                      // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBClassType                                               InClassType;                                             // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PYT3[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InReleaseLevel;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.CreateTooltip
	 */
	struct UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C_CreateTooltip_Params
	{
	public:
		bool                                                       InNoTooltip;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ESPK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InSkillId;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InSkillLevel;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.SetUnopened
	 */
	struct UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetUnopened_Params
	{
	public:
		ESBSkillType                                               InSkillType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBSkillAbilityType                                        InSkillAbilityType;                                      // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBClassType                                               InClassType;                                             // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NDEO[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InReleaseLevel;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.SetIsEmpty
	 */
	struct UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIsEmpty_Params
	{
	public:
		bool                                                       InIsEmpty;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NKSJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.SetButtonOff
	 */
	struct UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetButtonOff_Params
	{
	public:
		bool                                                       InIsButtonOff;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G6KG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.SetIconTexture
	 */
	struct UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetIconTexture_Params
	{
	public:
		class UTexture2D*                                          InIconTexture;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIsPassive2;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.SetLevel
	 */
	struct UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetLevel_Params
	{
	public:
		int32_t                                                    InLevel;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.SetSkill
	 */
	struct UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C_SetSkill_Params
	{
	public:
		int32_t                                                    InSkillId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InSkillLevel;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.PreConstruct
	 */
	struct UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.BndEvt__MyCharaMenu_ClassAbilityIconBtnForBattleSet_Passive1IconBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C_BndEvt__MyCharaMenu_ClassAbilityIconBtnForBattleSet_Passive1IconBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.BndEvt__MyCharaMenu_ClassAbilityIconBtnForBattleSet_Passive12conBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C_BndEvt__MyCharaMenu_ClassAbilityIconBtnForBattleSet_Passive12conBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.BndEvt__MyCharaMenu_ClassAbilityIconBtnForBattleSet_BtnForEmpty_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C_BndEvt__MyCharaMenu_ClassAbilityIconBtnForBattleSet_BtnForEmpty_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.Destruct
	 */
	struct UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C_Destruct_Params
	{	};

	/**
	 * Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.ExecuteUbergraph_MyCharaMenu_ClassAbilityIconBtnForBattleSet
	 */
	struct UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C_ExecuteUbergraph_MyCharaMenu_ClassAbilityIconBtnForBattleSet_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_ClassAbilityIconBtnForBattleSet.MyCharaMenu_ClassAbilityIconBtnForBattleSet_C.OnIconClicked__DelegateSignature
	 */
	struct UMyCharaMenu_ClassAbilityIconBtnForBattleSet_C_OnIconClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    InClassAbilityId;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
