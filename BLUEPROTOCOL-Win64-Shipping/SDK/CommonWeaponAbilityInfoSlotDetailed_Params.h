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
	 * Function CommonWeaponAbilityInfoSlotDetailed.CommonWeaponAbilityInfoSlotDetailed_C.SetIsSlotEmpty
	 */
	struct UCommonWeaponAbilityInfoSlotDetailed_C_SetIsSlotEmpty_Params
	{
	public:
		bool                                                       InIsEmpty;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonWeaponAbilityInfoSlotDetailed.CommonWeaponAbilityInfoSlotDetailed_C.GetAbilityPartsValueText
	 */
	struct UCommonWeaponAbilityInfoSlotDetailed_C_GetAbilityPartsValueText_Params
	{
	public:
		int32_t                                                    InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YOQ3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                OutText;                                                 // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function CommonWeaponAbilityInfoSlotDetailed.CommonWeaponAbilityInfoSlotDetailed_C.SetupAbilityInfo
	 */
	struct UCommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo_Params
	{
	public:
		struct FSBCharacterWeaponPerkData                          InWeaponPerkData;                                        // 0x0000(0x001C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function CommonWeaponAbilityInfoSlotDetailed.CommonWeaponAbilityInfoSlotDetailed_C.CreateEfficacyInfoItemList
	 */
	struct UCommonWeaponAbilityInfoSlotDetailed_C_CreateEfficacyInfoItemList_Params
	{	};

	/**
	 * Function CommonWeaponAbilityInfoSlotDetailed.CommonWeaponAbilityInfoSlotDetailed_C.PreConstruct
	 */
	struct UCommonWeaponAbilityInfoSlotDetailed_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonWeaponAbilityInfoSlotDetailed.CommonWeaponAbilityInfoSlotDetailed_C.ExecuteUbergraph_CommonWeaponAbilityInfoSlotDetailed
	 */
	struct UCommonWeaponAbilityInfoSlotDetailed_C_ExecuteUbergraph_CommonWeaponAbilityInfoSlotDetailed_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
