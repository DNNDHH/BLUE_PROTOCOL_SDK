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
	 * Function UMG_SeasonPassQuestBonusListMain.UMG_SeasonPassQuestBonusListMain_C.SearchUpdateQuestItem
	 */
	struct UUMG_SeasonPassQuestBonusListMain_C_SearchUpdateQuestItem_Params
	{
	public:
		struct FSBSeasonPassQuestItemData                          ItemData;                                                // 0x0000(0x00D0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UMG_SeasonPassQuestBonusListMain.UMG_SeasonPassQuestBonusListMain_C.UpdateQuestItem
	 */
	struct UUMG_SeasonPassQuestBonusListMain_C_UpdateQuestItem_Params
	{
	public:
		struct FSBSeasonPassQuestListData                          ItemList;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UMG_SeasonPassQuestBonusListMain.UMG_SeasonPassQuestBonusListMain_C.SetDataFunc
	 */
	struct UUMG_SeasonPassQuestBonusListMain_C_SetDataFunc_Params
	{
	public:
		class USBSeasonPassQuestMenuListData*                      Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUMG_SeasonPassBonusQuestMenu_C*                     OwnerMenu;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestBonusListMain.UMG_SeasonPassQuestBonusListMain_C.TryGetItem
	 */
	struct UUMG_SeasonPassQuestBonusListMain_C_TryGetItem_Params
	{
	public:
		class UUMG_SeasonPassQuestBonusListItem_C*                 AsUMGSeasonPassQuestBonusListItem;                       // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestBonusListMain.UMG_SeasonPassQuestBonusListMain_C.ListInitialize
	 */
	struct UUMG_SeasonPassQuestBonusListMain_C_ListInitialize_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestBonusListMain.UMG_SeasonPassQuestBonusListMain_C.PreConstruct
	 */
	struct UUMG_SeasonPassQuestBonusListMain_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_SeasonPassQuestBonusListMain.UMG_SeasonPassQuestBonusListMain_C.SetData
	 */
	struct UUMG_SeasonPassQuestBonusListMain_C_SetData_Params
	{
	public:
		class USBSeasonPassQuestMenuListData*                      Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUMG_SeasonPassBonusQuestMenu_C*                     OwnerMenu;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestBonusListMain.UMG_SeasonPassQuestBonusListMain_C.ExecuteUbergraph_UMG_SeasonPassQuestBonusListMain
	 */
	struct UUMG_SeasonPassQuestBonusListMain_C_ExecuteUbergraph_UMG_SeasonPassQuestBonusListMain_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FODY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
