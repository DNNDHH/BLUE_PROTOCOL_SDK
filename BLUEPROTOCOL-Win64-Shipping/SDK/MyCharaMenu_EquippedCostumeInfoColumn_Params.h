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
	 * Function MyCharaMenu_EquippedCostumeInfoColumn.MyCharaMenu_EquippedCostumeInfoColumn_C.UpdateEquippedCostumeInfos
	 */
	struct UMyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos_Params
	{
	public:
		struct FCharaEquipInfo                                     InCharaEquipInfo;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ESBCharacterGender                                         InCharacterGender;                                       // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_EquippedCostumeInfoColumn.MyCharaMenu_EquippedCostumeInfoColumn_C.PreConstruct
	 */
	struct UMyCharaMenu_EquippedCostumeInfoColumn_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_EquippedCostumeInfoColumn.MyCharaMenu_EquippedCostumeInfoColumn_C.ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn
	 */
	struct UMyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
