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
	 * Function CommonWeaponAbilityInfoSlot.CommonWeaponAbilityInfoSlot_C.SetSlotWidth
	 */
	struct UCommonWeaponAbilityInfoSlot_C_SetSlotWidth_Params
	{
	public:
		float                                                      InSlotWidth;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonWeaponAbilityInfoSlot.CommonWeaponAbilityInfoSlot_C.SetPerkRarity
	 */
	struct UCommonWeaponAbilityInfoSlot_C_SetPerkRarity_Params
	{
	public:
		int32_t                                                    InRarity;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonWeaponAbilityInfoSlot.CommonWeaponAbilityInfoSlot_C.SetFusionItemName
	 */
	struct UCommonWeaponAbilityInfoSlot_C_SetFusionItemName_Params
	{
	public:
		class FString                                              InName;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonWeaponAbilityInfoSlot.CommonWeaponAbilityInfoSlot_C.SetSlotOccupancy
	 */
	struct UCommonWeaponAbilityInfoSlot_C_SetSlotOccupancy_Params
	{
	public:
		int32_t                                                    InOccupancyNum;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonWeaponAbilityInfoSlot.CommonWeaponAbilityInfoSlot_C.SetIsSlotEmpty
	 */
	struct UCommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty_Params
	{
	public:
		bool                                                       InIsEmpty;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B22Z[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommonWeaponAbilityInfoSlot.CommonWeaponAbilityInfoSlot_C.PreConstruct
	 */
	struct UCommonWeaponAbilityInfoSlot_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonWeaponAbilityInfoSlot.CommonWeaponAbilityInfoSlot_C.ExecuteUbergraph_CommonWeaponAbilityInfoSlot
	 */
	struct UCommonWeaponAbilityInfoSlot_C_ExecuteUbergraph_CommonWeaponAbilityInfoSlot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
