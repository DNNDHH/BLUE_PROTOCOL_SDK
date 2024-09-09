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
	 * Function CmnWeaponSpecialMainRare.CmnWeaponSpecialMainRare_C.GetRarity
	 */
	struct UCmnWeaponSpecialMainRare_C_GetRarity_Params
	{
	public:
		ESBWeaponPerkRarity                                        Rarity;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CmnWeaponSpecialMainRare.CmnWeaponSpecialMainRare_C.SetData
	 */
	struct UCmnWeaponSpecialMainRare_C_SetData_Params
	{
	public:
		ESBWeaponPerkRarity                                        Selection;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
