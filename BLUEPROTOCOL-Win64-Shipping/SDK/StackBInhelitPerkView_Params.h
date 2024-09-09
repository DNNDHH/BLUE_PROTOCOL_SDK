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
	 * Function StackBInhelitPerkView.StackBInhelitPerkView_C.SetDiff
	 */
	struct UStackBInhelitPerkView_C_SetDiff_Params
	{
	public:
		struct FOwnItemInfo                                        Prev;                                                    // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FOwnItemInfo                                        After;                                                   // 0x0150(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function StackBInhelitPerkView.StackBInhelitPerkView_C.SetPerk
	 */
	struct UStackBInhelitPerkView_C_SetPerk_Params
	{
	public:
		struct FOwnItemInfo                                        ItemInfo;                                                // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
