﻿#pragma once

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
	 * Function CommonEquipmentAbilityEfficacyInfoItem.CommonEquipmentAbilityEfficacyInfoItem_C.SetValueText
	 */
	struct UCommonEquipmentAbilityEfficacyInfoItem_C_SetValueText_Params
	{
	public:
		ESBAbilityUIAttribute                                      InUIAttribute;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_99S7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InValue;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInIsValueMax;                                           // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonEquipmentAbilityEfficacyInfoItem.CommonEquipmentAbilityEfficacyInfoItem_C.ConvertValueToPercentageNotation
	 */
	struct UCommonEquipmentAbilityEfficacyInfoItem_C_ConvertValueToPercentageNotation_Params
	{
	public:
		int32_t                                                    InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_G4BL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              OutConvertedValue;                                       // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonEquipmentAbilityEfficacyInfoItem.CommonEquipmentAbilityEfficacyInfoItem_C.SetUnderlineVisibility
	 */
	struct UCommonEquipmentAbilityEfficacyInfoItem_C_SetUnderlineVisibility_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonEquipmentAbilityEfficacyInfoItem.CommonEquipmentAbilityEfficacyInfoItem_C.SetAbilityEfficacyInfo
	 */
	struct UCommonEquipmentAbilityEfficacyInfoItem_C_SetAbilityEfficacyInfo_Params
	{
	public:
		struct FSBAbilityConfig                                    InAbilityConfig;                                         // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                InEfficacyDesc;                                          // 0x0038(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    InEfficacyValue;                                         // 0x0050(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInIsMaxValue;                                           // 0x0054(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif