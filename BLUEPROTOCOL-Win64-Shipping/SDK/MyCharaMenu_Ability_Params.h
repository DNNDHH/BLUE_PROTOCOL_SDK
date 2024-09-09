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
	 * Function MyCharaMenu_Ability.MyCharaMenu_Ability_C.GenerateSpecialSub
	 */
	struct UMyCharaMenu_Ability_C_GenerateSpecialSub_Params
	{
	public:
		struct FOwnItemInfo                                        OwnItemInfo;                                             // 0x0000(0x0150)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ESBCharaEquipType                                          EquipPosition;                                           // 0x0150(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D6NT[0x7];                                   // 0x0151(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MyCharaMenu_Ability.MyCharaMenu_Ability_C.GenerateSpecialMain
	 */
	struct UMyCharaMenu_Ability_C_GenerateSpecialMain_Params
	{
	public:
		struct FOwnItemInfo                                        WeaponData1;                                             // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MyCharaMenu_Ability.MyCharaMenu_Ability_C.Construct
	 */
	struct UMyCharaMenu_Ability_C_Construct_Params
	{	};

	/**
	 * Function MyCharaMenu_Ability.MyCharaMenu_Ability_C.Collect Unique Ids
	 */
	struct UMyCharaMenu_Ability_C_CollectUniqueIds_Params
	{	};

	/**
	 * Function MyCharaMenu_Ability.MyCharaMenu_Ability_C.Generate Passive Skill
	 */
	struct UMyCharaMenu_Ability_C_GeneratePassiveSkill_Params
	{	};

	/**
	 * Function MyCharaMenu_Ability.MyCharaMenu_Ability_C.Generate Weapons
	 */
	struct UMyCharaMenu_Ability_C_GenerateWeapons_Params
	{	};

	/**
	 * Function MyCharaMenu_Ability.MyCharaMenu_Ability_C.Generate Imagines
	 */
	struct UMyCharaMenu_Ability_C_GenerateImagines_Params
	{	};

	/**
	 * Function MyCharaMenu_Ability.MyCharaMenu_Ability_C.Generate Base Skill
	 */
	struct UMyCharaMenu_Ability_C_GenerateBaseSkill_Params
	{	};

	/**
	 * Function MyCharaMenu_Ability.MyCharaMenu_Ability_C.ExecuteUbergraph_MyCharaMenu_Ability
	 */
	struct UMyCharaMenu_Ability_C_ExecuteUbergraph_MyCharaMenu_Ability_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LTW9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
