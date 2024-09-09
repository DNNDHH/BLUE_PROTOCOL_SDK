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
	 * Function UMG_SeasonPassQuestSeasonListIMain.UMG_SeasonPassQuestSeasonListIMain_C.SerachUpdateQuestItem
	 */
	struct UUMG_SeasonPassQuestSeasonListIMain_C_SerachUpdateQuestItem_Params
	{
	public:
		struct FSBSeasonPassQuestItemData                          ItemData;                                                // 0x0000(0x00D0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UMG_SeasonPassQuestSeasonListIMain.UMG_SeasonPassQuestSeasonListIMain_C.UpdateQuestList
	 */
	struct UUMG_SeasonPassQuestSeasonListIMain_C_UpdateQuestList_Params
	{
	public:
		struct FSBSeasonPassQuestListData                          ItemList;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UMG_SeasonPassQuestSeasonListIMain.UMG_SeasonPassQuestSeasonListIMain_C.SetDataFunc
	 */
	struct UUMG_SeasonPassQuestSeasonListIMain_C_SetDataFunc_Params
	{
	public:
		class USBSeasonPassQuestMenuListData*                      Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUMG_SeasonPassQuestMenu_C*                          OwnerMenu;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestSeasonListIMain.UMG_SeasonPassQuestSeasonListIMain_C.TryGetItem
	 */
	struct UUMG_SeasonPassQuestSeasonListIMain_C_TryGetItem_Params
	{
	public:
		class UUMG_SeasonPassQuestSeasonListItem_C*                AsUMGSeasonPassQuestSeasonListItem;                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestSeasonListIMain.UMG_SeasonPassQuestSeasonListIMain_C.ListInitialize
	 */
	struct UUMG_SeasonPassQuestSeasonListIMain_C_ListInitialize_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestSeasonListIMain.UMG_SeasonPassQuestSeasonListIMain_C.SetData
	 */
	struct UUMG_SeasonPassQuestSeasonListIMain_C_SetData_Params
	{
	public:
		class USBSeasonPassQuestMenuListData*                      Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUMG_SeasonPassQuestMenu_C*                          OwnerMenu;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestSeasonListIMain.UMG_SeasonPassQuestSeasonListIMain_C.PreConstruct
	 */
	struct UUMG_SeasonPassQuestSeasonListIMain_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_SeasonPassQuestSeasonListIMain.UMG_SeasonPassQuestSeasonListIMain_C.ExecuteUbergraph_UMG_SeasonPassQuestSeasonListIMain
	 */
	struct UUMG_SeasonPassQuestSeasonListIMain_C_ExecuteUbergraph_UMG_SeasonPassQuestSeasonListIMain_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XNF6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
