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
	 * Function WeaponButtonViewPerkListItem.WeaponButtonViewPerkListItem_C.Set EmptySlot
	 */
	struct UWeaponButtonViewPerkListItem_C_SetEmptySlot_Params
	{	};

	/**
	 * Function WeaponButtonViewPerkListItem.WeaponButtonViewPerkListItem_C.Set Perk Data
	 */
	struct UWeaponButtonViewPerkListItem_C_SetPerkData_Params
	{
	public:
		struct FSBCharacterWeaponPerkData                          PerkData;                                                // 0x0000(0x001C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		unsigned char                                              UnknownData_LBI9[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeaponButtonViewPerkListItem.WeaponButtonViewPerkListItem_C.ExecuteUbergraph_WeaponButtonViewPerkListItem
	 */
	struct UWeaponButtonViewPerkListItem_C_ExecuteUbergraph_WeaponButtonViewPerkListItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
