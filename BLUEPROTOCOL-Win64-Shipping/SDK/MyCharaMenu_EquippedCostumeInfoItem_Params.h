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
	 * Function MyCharaMenu_EquippedCostumeInfoItem.MyCharaMenu_EquippedCostumeInfoItem_C.SetIsGrayOut
	 */
	struct UMyCharaMenu_EquippedCostumeInfoItem_C_SetIsGrayOut_Params
	{
	public:
		bool                                                       InIsGrayOut;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_EquippedCostumeInfoItem.MyCharaMenu_EquippedCostumeInfoItem_C.SetText
	 */
	struct UMyCharaMenu_EquippedCostumeInfoItem_C_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
