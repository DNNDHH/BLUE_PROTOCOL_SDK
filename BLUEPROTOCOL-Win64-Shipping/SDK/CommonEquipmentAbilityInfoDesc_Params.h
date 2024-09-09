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
	 * Function CommonEquipmentAbilityInfoDesc.CommonEquipmentAbilityInfoDesc_C.GetAbilityPartsValueText
	 */
	struct UCommonEquipmentAbilityInfoDesc_C_GetAbilityPartsValueText_Params
	{
	public:
		int32_t                                                    InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H67D[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                OutText;                                                 // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function CommonEquipmentAbilityInfoDesc.CommonEquipmentAbilityInfoDesc_C.SetupAbilityInfo
	 */
	struct UCommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo_Params
	{
	public:
		int32_t                                                    InAbilityEffectId;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LH7G[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FOwnItemInfo                                        InOwnItemInfo;                                           // 0x0008(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CommonEquipmentAbilityInfoDesc.CommonEquipmentAbilityInfoDesc_C.CreateEfficacyInfoItemList
	 */
	struct UCommonEquipmentAbilityInfoDesc_C_CreateEfficacyInfoItemList_Params
	{	};

	/**
	 * Function CommonEquipmentAbilityInfoDesc.CommonEquipmentAbilityInfoDesc_C.PreConstruct
	 */
	struct UCommonEquipmentAbilityInfoDesc_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonEquipmentAbilityInfoDesc.CommonEquipmentAbilityInfoDesc_C.ExecuteUbergraph_CommonEquipmentAbilityInfoDesc
	 */
	struct UCommonEquipmentAbilityInfoDesc_C_ExecuteUbergraph_CommonEquipmentAbilityInfoDesc_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
