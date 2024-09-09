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
	 * Function ProbabilityDisplay_WeaponCraftSlotListItem.ProbabilityDisplay_WeaponCraftSlotListItem_C.Setup
	 */
	struct UProbabilityDisplay_WeaponCraftSlotListItem_C_Setup_Params
	{
	public:
		int32_t                                                    SlotNum;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    GreatSuccessRate;                                        // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SuccessRate;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ProbabilityDisplay_WeaponCraftSlotListItem.ProbabilityDisplay_WeaponCraftSlotListItem_C.ExecuteUbergraph_ProbabilityDisplay_WeaponCraftSlotListItem
	 */
	struct UProbabilityDisplay_WeaponCraftSlotListItem_C_ExecuteUbergraph_ProbabilityDisplay_WeaponCraftSlotListItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
