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
	 * Function CommonToolTip_AbilityPerk.CommonToolTip_AbilityPerk_C.SetWeaponPerkData
	 */
	struct UCommonToolTip_AbilityPerk_C_SetWeaponPerkData_Params
	{
	public:
		struct FSBCharacterWeaponPerkData                          SBCharacterWeaponPerkData;                               // 0x0000(0x001C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function CommonToolTip_AbilityPerk.CommonToolTip_AbilityPerk_C.SetAbilityPerkID
	 */
	struct UCommonToolTip_AbilityPerk_C_SetAbilityPerkID_Params
	{
	public:
		int32_t                                                    PerkId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonToolTip_AbilityPerk.CommonToolTip_AbilityPerk_C.SetAbilityDescText
	 */
	struct UCommonToolTip_AbilityPerk_C_SetAbilityDescText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CommonToolTip_AbilityPerk.CommonToolTip_AbilityPerk_C.SetAbilityNameText
	 */
	struct UCommonToolTip_AbilityPerk_C_SetAbilityNameText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
