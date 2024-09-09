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
	 * Function CommonWeaponAbilityInfoSlotListDetailed.CommonWeaponAbilityInfoSlotListDetailed_C.SetSlotOccupancy
	 */
	struct UCommonWeaponAbilityInfoSlotListDetailed_C_SetSlotOccupancy_Params
	{
	public:
		int32_t                                                    InSlotId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InOccupancyNum;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonWeaponAbilityInfoSlotListDetailed.CommonWeaponAbilityInfoSlotListDetailed_C.SetSlotEmpty
	 */
	struct UCommonWeaponAbilityInfoSlotListDetailed_C_SetSlotEmpty_Params
	{
	public:
		int32_t                                                    InSlotId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIsEmpty;                                               // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AXQ1[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommonWeaponAbilityInfoSlotListDetailed.CommonWeaponAbilityInfoSlotListDetailed_C.SetSlotInfo
	 */
	struct UCommonWeaponAbilityInfoSlotListDetailed_C_SetSlotInfo_Params
	{
	public:
		struct FSBWeaponItemData                                   InWeaponItemData;                                        // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CommonWeaponAbilityInfoSlotListDetailed.CommonWeaponAbilityInfoSlotListDetailed_C.GetSlot
	 */
	struct UCommonWeaponAbilityInfoSlotListDetailed_C_GetSlot_Params
	{
	public:
		int32_t                                                    InSlotId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsValid;                                                 // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_41QP[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCommonWeaponAbilityInfoSlotDetailed_C*              OutSlot;                                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonWeaponAbilityInfoSlotListDetailed.CommonWeaponAbilityInfoSlotListDetailed_C.InitAllSlot
	 */
	struct UCommonWeaponAbilityInfoSlotListDetailed_C_InitAllSlot_Params
	{	};

	/**
	 * Function CommonWeaponAbilityInfoSlotListDetailed.CommonWeaponAbilityInfoSlotListDetailed_C.PreConstruct
	 */
	struct UCommonWeaponAbilityInfoSlotListDetailed_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonWeaponAbilityInfoSlotListDetailed.CommonWeaponAbilityInfoSlotListDetailed_C.ExecuteUbergraph_CommonWeaponAbilityInfoSlotListDetailed
	 */
	struct UCommonWeaponAbilityInfoSlotListDetailed_C_ExecuteUbergraph_CommonWeaponAbilityInfoSlotListDetailed_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
