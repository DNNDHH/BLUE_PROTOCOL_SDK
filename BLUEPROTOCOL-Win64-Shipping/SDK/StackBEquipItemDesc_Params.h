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
	 * Function StackBEquipItemDesc.StackBEquipItemDesc_C.SetMainAbilityTextColor
	 */
	struct UStackBEquipItemDesc_C_SetMainAbilityTextColor_Params
	{
	public:
		bool                                                       bIsMax;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StackBEquipItemDesc.StackBEquipItemDesc_C.ApplyImagineStatus
	 */
	struct UStackBEquipItemDesc_C_ApplyImagineStatus_Params
	{
	public:
		struct FOwnItemInfo                                        OwnItemInfo;                                             // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function StackBEquipItemDesc.StackBEquipItemDesc_C.ApplyWeaponStatus
	 */
	struct UStackBEquipItemDesc_C_ApplyWeaponStatus_Params
	{
	public:
		struct FOwnItemInfo                                        OwnItemInfo;                                             // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function StackBEquipItemDesc.StackBEquipItemDesc_C.Set OwnItemData
	 */
	struct UStackBEquipItemDesc_C_SetOwnItemData_Params
	{
	public:
		struct FOwnItemInfo                                        OwnItemInfo;                                             // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function StackBEquipItemDesc.StackBEquipItemDesc_C.ExecuteUbergraph_StackBEquipItemDesc
	 */
	struct UStackBEquipItemDesc_C_ExecuteUbergraph_StackBEquipItemDesc_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T2NB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
