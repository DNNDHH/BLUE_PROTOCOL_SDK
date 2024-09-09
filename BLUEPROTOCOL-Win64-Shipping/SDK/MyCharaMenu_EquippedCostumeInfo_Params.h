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
	 * Function MyCharaMenu_EquippedCostumeInfo.MyCharaMenu_EquippedCostumeInfo_C.GetRingEquippedHand
	 */
	struct UMyCharaMenu_EquippedCostumeInfo_C_GetRingEquippedHand_Params
	{
	public:
		ESBCharaEquipType                                          InRingEquipType;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OutIsLeftFinger;                                         // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_EquippedCostumeInfo.MyCharaMenu_EquippedCostumeInfo_C.UpdateEquippedCostumeInfo
	 */
	struct UMyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo_Params
	{
	public:
		E_MyCharaMenu_EquippedCostumeType                          InEquippedCostumeType;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_X1WI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FCharaEquipInfo                                     InCharaEquipInfo;                                        // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
		TArray<ECharaPartsLocation>                                InGrayOutCharaPartsLocations;                            // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MyCharaMenu_EquippedCostumeInfo.MyCharaMenu_EquippedCostumeInfo_C.PreConstruct
	 */
	struct UMyCharaMenu_EquippedCostumeInfo_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_EquippedCostumeInfo.MyCharaMenu_EquippedCostumeInfo_C.ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfo
	 */
	struct UMyCharaMenu_EquippedCostumeInfo_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
