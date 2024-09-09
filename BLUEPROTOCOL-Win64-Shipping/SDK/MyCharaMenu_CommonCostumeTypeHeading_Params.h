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
	 * Function MyCharaMenu_CommonCostumeTypeHeading.MyCharaMenu_CommonCostumeTypeHeading_C.SetHeadingTitleText
	 */
	struct UMyCharaMenu_CommonCostumeTypeHeading_C_SetHeadingTitleText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MyCharaMenu_CommonCostumeTypeHeading.MyCharaMenu_CommonCostumeTypeHeading_C.SetHeadingTitleTextId
	 */
	struct UMyCharaMenu_CommonCostumeTypeHeading_C_SetHeadingTitleTextId_Params
	{
	public:
		int32_t                                                    InTextId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EWIM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MyCharaMenu_CommonCostumeTypeHeading.MyCharaMenu_CommonCostumeTypeHeading_C.SetHeadingTitleTextTable
	 */
	struct UMyCharaMenu_CommonCostumeTypeHeading_C_SetHeadingTitleTextTable_Params
	{
	public:
		class USBTextTableAsset*                                   InTextTable;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_CommonCostumeTypeHeading.MyCharaMenu_CommonCostumeTypeHeading_C.PreConstruct
	 */
	struct UMyCharaMenu_CommonCostumeTypeHeading_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_CommonCostumeTypeHeading.MyCharaMenu_CommonCostumeTypeHeading_C.ExecuteUbergraph_MyCharaMenu_CommonCostumeTypeHeading
	 */
	struct UMyCharaMenu_CommonCostumeTypeHeading_C_ExecuteUbergraph_MyCharaMenu_CommonCostumeTypeHeading_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
