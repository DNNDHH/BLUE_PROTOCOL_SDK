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
	 * Function MyCharaMenu_AchievementList_Item_Tooltip.MyCharaMenu_AchievementList_Item_Tooltip_C.GetText
	 */
	struct UMyCharaMenu_AchievementList_Item_Tooltip_C_GetText_Params
	{
	public:
		class FText                                                OutText;                                                 // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function MyCharaMenu_AchievementList_Item_Tooltip.MyCharaMenu_AchievementList_Item_Tooltip_C.SetText
	 */
	struct UMyCharaMenu_AchievementList_Item_Tooltip_C_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
