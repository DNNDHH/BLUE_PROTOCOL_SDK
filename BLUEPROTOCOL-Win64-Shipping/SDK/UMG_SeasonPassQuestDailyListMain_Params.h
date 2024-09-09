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
	 * Function UMG_SeasonPassQuestDailyListMain.UMG_SeasonPassQuestDailyListMain_C.SearchUpdateQuestItem
	 */
	struct UUMG_SeasonPassQuestDailyListMain_C_SearchUpdateQuestItem_Params
	{
	public:
		struct FSBSeasonPassQuestItemData                          InQuestItem;                                             // 0x0000(0x00D0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UMG_SeasonPassQuestDailyListMain.UMG_SeasonPassQuestDailyListMain_C.UpdateQuestItemList
	 */
	struct UUMG_SeasonPassQuestDailyListMain_C_UpdateQuestItemList_Params
	{
	public:
		struct FSBSeasonPassQuestListData                          ItemList;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UMG_SeasonPassQuestDailyListMain.UMG_SeasonPassQuestDailyListMain_C.SetDataFunc
	 */
	struct UUMG_SeasonPassQuestDailyListMain_C_SetDataFunc_Params
	{
	public:
		class USBSeasonPassQuestMenuListData*                      Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUMG_SeasonPassQuestMenu_C*                          OwnerMenu;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestDailyListMain.UMG_SeasonPassQuestDailyListMain_C.UpdateQuest
	 */
	struct UUMG_SeasonPassQuestDailyListMain_C_UpdateQuest_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestDailyListMain.UMG_SeasonPassQuestDailyListMain_C.ForceClearUpdate
	 */
	struct UUMG_SeasonPassQuestDailyListMain_C_ForceClearUpdate_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestDailyListMain.UMG_SeasonPassQuestDailyListMain_C.TryGetItem
	 */
	struct UUMG_SeasonPassQuestDailyListMain_C_TryGetItem_Params
	{
	public:
		class UUMG_SeasonPassQuestDailyListItem_C*                 AsUMGSeasonPassQuestBonusListItem;                       // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestDailyListMain.UMG_SeasonPassQuestDailyListMain_C.ListInitialize
	 */
	struct UUMG_SeasonPassQuestDailyListMain_C_ListInitialize_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestDailyListMain.UMG_SeasonPassQuestDailyListMain_C.PreConstruct
	 */
	struct UUMG_SeasonPassQuestDailyListMain_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_SeasonPassQuestDailyListMain.UMG_SeasonPassQuestDailyListMain_C.SetData
	 */
	struct UUMG_SeasonPassQuestDailyListMain_C_SetData_Params
	{
	public:
		class USBSeasonPassQuestMenuListData*                      Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUMG_SeasonPassQuestMenu_C*                          OwnerMenu;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestDailyListMain.UMG_SeasonPassQuestDailyListMain_C.ExecuteUbergraph_UMG_SeasonPassQuestDailyListMain
	 */
	struct UUMG_SeasonPassQuestDailyListMain_C_ExecuteUbergraph_UMG_SeasonPassQuestDailyListMain_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T9MN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
