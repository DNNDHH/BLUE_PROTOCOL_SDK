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
	 * Function WBP_CommonWeaponSpecialMainSlot.WBP_CommonWeaponSpecialMainSlot_C.SetTagAbility2
	 */
	struct UWBP_CommonWeaponSpecialMainSlot_C_SetTagAbility2_Params
	{
	public:
		int32_t                                                    InDelta;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CommonWeaponSpecialMainSlot.WBP_CommonWeaponSpecialMainSlot_C.SetTagAbility1
	 */
	struct UWBP_CommonWeaponSpecialMainSlot_C_SetTagAbility1_Params
	{
	public:
		int32_t                                                    InDelta;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CommonWeaponSpecialMainSlot.WBP_CommonWeaponSpecialMainSlot_C.SetTagEffect
	 */
	struct UWBP_CommonWeaponSpecialMainSlot_C_SetTagEffect_Params
	{
	public:
		int32_t                                                    InDelta;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CommonWeaponSpecialMainSlot.WBP_CommonWeaponSpecialMainSlot_C.InitTag
	 */
	struct UWBP_CommonWeaponSpecialMainSlot_C_InitTag_Params
	{	};

	/**
	 * Function WBP_CommonWeaponSpecialMainSlot.WBP_CommonWeaponSpecialMainSlot_C.Setup
	 */
	struct UWBP_CommonWeaponSpecialMainSlot_C_Setup_Params
	{
	public:
		struct FOwnItemInfo                                        OwnItemInfo;                                             // 0x0000(0x0150)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
