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
	 * Function UMG_SeasonPassQuestList.UMG_SeasonPassQuestList_C.SetNoQuestText
	 */
	struct UUMG_SeasonPassQuestList_C_SetNoQuestText_Params
	{
	public:
		bool                                                       bIsEnableBlankText;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5W6W[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_SeasonPassQuestList.UMG_SeasonPassQuestList_C.ChangeQuestListActive
	 */
	struct UUMG_SeasonPassQuestList_C_ChangeQuestListActive_Params
	{
	public:
		ESBSeasonPassQuestType                                     InQuestType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIsActive;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_SeasonPassQuestList.UMG_SeasonPassQuestList_C.SetListYSize
	 */
	struct UUMG_SeasonPassQuestList_C_SetListYSize_Params
	{
	public:
		float                                                      InYsize;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I8QS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_SeasonPassQuestList.UMG_SeasonPassQuestList_C.ChangeWeeklyListActive
	 */
	struct UUMG_SeasonPassQuestList_C_ChangeWeeklyListActive_Params
	{
	public:
		int32_t                                                    InWeekCount;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIsActive;                                              // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_SeasonPassQuestList.UMG_SeasonPassQuestList_C.ClearListItem
	 */
	struct UUMG_SeasonPassQuestList_C_ClearListItem_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestList.UMG_SeasonPassQuestList_C.CreateFilterList
	 */
	struct UUMG_SeasonPassQuestList_C_CreateFilterList_Params
	{
	public:
		TArray<int32_t>                                            InTextIdList;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class FString>                                      OutStringList;                                           // 0x0010(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function UMG_SeasonPassQuestList.UMG_SeasonPassQuestList_C.GetFilterList
	 */
	struct UUMG_SeasonPassQuestList_C_GetFilterList_Params
	{
	public:
		ESBSeasonPassQuestCycleType                                InCycle;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TQLA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<ESBSeasonPassQuestFilterType>                       OutStringList;                                           // 0x0008(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function UMG_SeasonPassQuestList.UMG_SeasonPassQuestList_C.Set Owner Menu
	 */
	struct UUMG_SeasonPassQuestList_C_SetOwnerMenu_Params
	{
	public:
		class UObject*                                             InOwnerMenu;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestList.UMG_SeasonPassQuestList_C.CreateWeeklyListItem
	 */
	struct UUMG_SeasonPassQuestList_C_CreateWeeklyListItem_Params
	{
	public:
		class USBSeasonPassQuestMenuListData*                      Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBSeasonPassQuestFilterType                               InFilterType;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q97B[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_SeasonPassQuestList.UMG_SeasonPassQuestList_C.CreateDailyHeader
	 */
	struct UUMG_SeasonPassQuestList_C_CreateDailyHeader_Params
	{
	public:
		ESBSeasonPassQuestType                                     QuestType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RY6Q[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_SeasonPassQuestList.UMG_SeasonPassQuestList_C.Create List Item
	 */
	struct UUMG_SeasonPassQuestList_C_CreateListItem_Params
	{
	public:
		class USBSeasonPassQuestMenuListData*                      InOwner;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FSBSeasonPassQuestItemData>                  InDataList;                                              // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ESBSeasonPassQuestCycleType                                InCycleType;                                             // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIsNowWeek;                                             // 0x0019(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O85W[0x2];                                   // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_SeasonPassQuestList.UMG_SeasonPassQuestList_C.SetData
	 */
	struct UUMG_SeasonPassQuestList_C_SetData_Params
	{
	public:
		class USBSeasonPassQuestMenuListData*                      Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBSeasonPassQuestFilterType                               InFilterType;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestList.UMG_SeasonPassQuestList_C.ExecuteUbergraph_UMG_SeasonPassQuestList
	 */
	struct UUMG_SeasonPassQuestList_C_ExecuteUbergraph_UMG_SeasonPassQuestList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
