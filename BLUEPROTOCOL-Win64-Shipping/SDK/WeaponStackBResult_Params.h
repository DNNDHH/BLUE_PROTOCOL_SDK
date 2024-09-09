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
	 * Function WeaponStackBResult.WeaponStackBResult_C.SetAfterData
	 */
	struct UWeaponStackBResult_C_SetAfterData_Params
	{
	public:
		struct FOwnItemInfo                                        afterData;                                               // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WeaponStackBResult.WeaponStackBResult_C.SetBeforeData
	 */
	struct UWeaponStackBResult_C_SetBeforeData_Params
	{
	public:
		struct FOwnItemInfo                                        beforeData;                                              // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
