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
	 * Function PerkRarityItem.PerkRarityItem_C.IsShowFilled
	 */
	struct UPerkRarityItem_C_IsShowFilled_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7Q5G[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PerkRarityItem.PerkRarityItem_C.IsShowEmpty
	 */
	struct UPerkRarityItem_C_IsShowEmpty_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J0FO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PerkRarityItem.PerkRarityItem_C.Show Question
	 */
	struct UPerkRarityItem_C_ShowQuestion_Params
	{	};

	/**
	 * Function PerkRarityItem.PerkRarityItem_C.Show Filled
	 */
	struct UPerkRarityItem_C_ShowFilled_Params
	{	};

	/**
	 * Function PerkRarityItem.PerkRarityItem_C.Show Empty
	 */
	struct UPerkRarityItem_C_ShowEmpty_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
