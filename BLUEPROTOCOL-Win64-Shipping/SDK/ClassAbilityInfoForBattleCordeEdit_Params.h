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
	 * Function ClassAbilityInfoForBattleCordeEdit.ClassAbilityInfoForBattleCordeEdit_C.Setup
	 */
	struct UClassAbilityInfoForBattleCordeEdit_C_Setup_Params
	{
	public:
		TArray<int32_t>                                            InClassAbilitySkillIds;                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       InSetupByCurrEquip;                                      // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ESBClassType                                               InClassType;                                             // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5J50[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ClassAbilityInfoForBattleCordeEdit.ClassAbilityInfoForBattleCordeEdit_C.Dest
	 */
	struct UClassAbilityInfoForBattleCordeEdit_C_Dest_Params
	{	};

	/**
	 * Function ClassAbilityInfoForBattleCordeEdit.ClassAbilityInfoForBattleCordeEdit_C.Const
	 */
	struct UClassAbilityInfoForBattleCordeEdit_C_Const_Params
	{	};

	/**
	 * Function ClassAbilityInfoForBattleCordeEdit.ClassAbilityInfoForBattleCordeEdit_C.PreConstruct
	 */
	struct UClassAbilityInfoForBattleCordeEdit_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ClassAbilityInfoForBattleCordeEdit.ClassAbilityInfoForBattleCordeEdit_C.Destruct
	 */
	struct UClassAbilityInfoForBattleCordeEdit_C_Destruct_Params
	{	};

	/**
	 * Function ClassAbilityInfoForBattleCordeEdit.ClassAbilityInfoForBattleCordeEdit_C.ExecuteUbergraph_ClassAbilityInfoForBattleCordeEdit
	 */
	struct UClassAbilityInfoForBattleCordeEdit_C_ExecuteUbergraph_ClassAbilityInfoForBattleCordeEdit_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ClassAbilityInfoForBattleCordeEdit.ClassAbilityInfoForBattleCordeEdit_C.OnClassAbilityIconClicked__DelegateSignature
	 */
	struct UClassAbilityInfoForBattleCordeEdit_C_OnClassAbilityIconClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    InSkillSlotId;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InSkillId;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
