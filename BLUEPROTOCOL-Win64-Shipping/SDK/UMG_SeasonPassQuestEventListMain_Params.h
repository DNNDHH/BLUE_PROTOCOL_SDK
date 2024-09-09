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
	 * Function UMG_SeasonPassQuestEventListMain.UMG_SeasonPassQuestEventListMain_C.GetEventTokenName
	 */
	struct UUMG_SeasonPassQuestEventListMain_C_GetEventTokenName_Params
	{
	public:
		class FString                                              OutTokenName;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestEventListMain.UMG_SeasonPassQuestEventListMain_C.UpdateSubMenuExclamationIcon
	 */
	struct UUMG_SeasonPassQuestEventListMain_C_UpdateSubMenuExclamationIcon_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestEventListMain.UMG_SeasonPassQuestEventListMain_C.CheckReward
	 */
	struct UUMG_SeasonPassQuestEventListMain_C_CheckReward_Params
	{
	public:
		bool                                                       OutAchieved;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GQG0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_SeasonPassQuestEventListMain.UMG_SeasonPassQuestEventListMain_C.CreateQuestList
	 */
	struct UUMG_SeasonPassQuestEventListMain_C_CreateQuestList_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestEventListMain.UMG_SeasonPassQuestEventListMain_C.SetEndDate
	 */
	struct UUMG_SeasonPassQuestEventListMain_C_SetEndDate_Params
	{
	public:
		class USBNaEventData*                                      EventData;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestEventListMain.UMG_SeasonPassQuestEventListMain_C.SearchUpdateQuestItem
	 */
	struct UUMG_SeasonPassQuestEventListMain_C_SearchUpdateQuestItem_Params
	{
	public:
		struct FSBSeasonPassQuestItemData                          ItemData;                                                // 0x0000(0x00D0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UMG_SeasonPassQuestEventListMain.UMG_SeasonPassQuestEventListMain_C.UpdateQuestItem
	 */
	struct UUMG_SeasonPassQuestEventListMain_C_UpdateQuestItem_Params
	{
	public:
		struct FSBSeasonPassQuestListData                          ItemList;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UMG_SeasonPassQuestEventListMain.UMG_SeasonPassQuestEventListMain_C.TryGetItem
	 */
	struct UUMG_SeasonPassQuestEventListMain_C_TryGetItem_Params
	{
	public:
		class UUMG_SeasonPassQuestEventListItem_C*                 AsUMGSeasonPassQuestEventListItem;                       // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestEventListMain.UMG_SeasonPassQuestEventListMain_C.ListInitialize
	 */
	struct UUMG_SeasonPassQuestEventListMain_C_ListInitialize_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestEventListMain.UMG_SeasonPassQuestEventListMain_C.PreConstruct
	 */
	struct UUMG_SeasonPassQuestEventListMain_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_SeasonPassQuestEventListMain.UMG_SeasonPassQuestEventListMain_C.SetData
	 */
	struct UUMG_SeasonPassQuestEventListMain_C_SetData_Params
	{
	public:
		class USBNaEventData*                                      EventData;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestEventListMain.UMG_SeasonPassQuestEventListMain_C.CustomEvent_1
	 */
	struct UUMG_SeasonPassQuestEventListMain_C_CustomEvent_1_Params
	{
	public:
		int32_t                                                    ReturnCode;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestEventListMain.UMG_SeasonPassQuestEventListMain_C.QuestDataLoad
	 */
	struct UUMG_SeasonPassQuestEventListMain_C_QuestDataLoad_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestEventListMain.UMG_SeasonPassQuestEventListMain_C.Request_QuestDataLoad
	 */
	struct UUMG_SeasonPassQuestEventListMain_C_Request_QuestDataLoad_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestEventListMain.UMG_SeasonPassQuestEventListMain_C.Request_QuestComplete
	 */
	struct UUMG_SeasonPassQuestEventListMain_C_Request_QuestComplete_Params
	{
	public:
		int32_t                                                    InEventId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestEventListMain.UMG_SeasonPassQuestEventListMain_C.OnCompleteAutoDeliveryEventQuestDataDelegete_イベント_1
	 */
	struct UUMG_SeasonPassQuestEventListMain_C_OnCompleteAutoDeliveryEventQuestDataDelegete__1_Params
	{
	public:
		struct FSBSeasonPassQuestListData                          InQuestList;                                             // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ESBAutoDeliveryRewardStatus                                RewardStatus;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5U6H[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnCode;                                              // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestEventListMain.UMG_SeasonPassQuestEventListMain_C.ExecuteUbergraph_UMG_SeasonPassQuestEventListMain
	 */
	struct UUMG_SeasonPassQuestEventListMain_C_ExecuteUbergraph_UMG_SeasonPassQuestEventListMain_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
