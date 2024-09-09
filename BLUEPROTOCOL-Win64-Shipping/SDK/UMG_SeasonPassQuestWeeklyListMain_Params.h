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
	 * Function UMG_SeasonPassQuestWeeklyListMain.UMG_SeasonPassQuestWeeklyListMain_C.SearchUpdateQuestItem
	 */
	struct UUMG_SeasonPassQuestWeeklyListMain_C_SearchUpdateQuestItem_Params
	{
	public:
		struct FSBSeasonPassQuestItemData                          ItemData;                                                // 0x0000(0x00D0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UMG_SeasonPassQuestWeeklyListMain.UMG_SeasonPassQuestWeeklyListMain_C.UpdateQuestList
	 */
	struct UUMG_SeasonPassQuestWeeklyListMain_C_UpdateQuestList_Params
	{
	public:
		struct FSBSeasonPassQuestListData                          ItemList;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UMG_SeasonPassQuestWeeklyListMain.UMG_SeasonPassQuestWeeklyListMain_C.SetDataFunc
	 */
	struct UUMG_SeasonPassQuestWeeklyListMain_C_SetDataFunc_Params
	{
	public:
		class USBSeasonPassQuestMenuListData*                      Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUMG_SeasonPassQuestMenu_C*                          OwnerMenu;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBSeasonPassQuestFilterType                               FilterType;                                              // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D2L9[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_SeasonPassQuestWeeklyListMain.UMG_SeasonPassQuestWeeklyListMain_C.ForceClearUpdate
	 */
	struct UUMG_SeasonPassQuestWeeklyListMain_C_ForceClearUpdate_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestWeeklyListMain.UMG_SeasonPassQuestWeeklyListMain_C.TryGetItem
	 */
	struct UUMG_SeasonPassQuestWeeklyListMain_C_TryGetItem_Params
	{
	public:
		class UUMG_SeasonPassQuestWeeklyListItem_C*                AsUMGSeasonPassQuestBonusListItem;                       // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestWeeklyListMain.UMG_SeasonPassQuestWeeklyListMain_C.ListInitialize
	 */
	struct UUMG_SeasonPassQuestWeeklyListMain_C_ListInitialize_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestWeeklyListMain.UMG_SeasonPassQuestWeeklyListMain_C.PreConstruct
	 */
	struct UUMG_SeasonPassQuestWeeklyListMain_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_SeasonPassQuestWeeklyListMain.UMG_SeasonPassQuestWeeklyListMain_C.SetData
	 */
	struct UUMG_SeasonPassQuestWeeklyListMain_C_SetData_Params
	{
	public:
		class USBSeasonPassQuestMenuListData*                      Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUMG_SeasonPassQuestMenu_C*                          OwnerMenu;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBSeasonPassQuestFilterType                               FilterType;                                              // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestWeeklyListMain.UMG_SeasonPassQuestWeeklyListMain_C.ExecuteUbergraph_UMG_SeasonPassQuestWeeklyListMain
	 */
	struct UUMG_SeasonPassQuestWeeklyListMain_C_ExecuteUbergraph_UMG_SeasonPassQuestWeeklyListMain_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1KPG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
