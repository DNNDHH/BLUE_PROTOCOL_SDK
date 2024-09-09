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
	 * Function UMG_SeasonPassQuestEventListItem.UMG_SeasonPassQuestEventListItem_C.Debug_SetQuestId
	 */
	struct UUMG_SeasonPassQuestEventListItem_C_Debug_SetQuestId_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestEventListItem.UMG_SeasonPassQuestEventListItem_C.GetData
	 */
	struct UUMG_SeasonPassQuestEventListItem_C_GetData_Params
	{
	public:
		TArray<class UQuestRewardIcon_C*>                          OutIconList;                                             // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function UMG_SeasonPassQuestEventListItem.UMG_SeasonPassQuestEventListItem_C.SetReceived
	 */
	struct UUMG_SeasonPassQuestEventListItem_C_SetReceived_Params
	{
	public:
		bool                                                       IsReceived;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3KKL[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_SeasonPassQuestEventListItem.UMG_SeasonPassQuestEventListItem_C.GetRewarCount
	 */
	struct UUMG_SeasonPassQuestEventListItem_C_GetRewarCount_Params
	{
	public:
		int32_t                                                    OutCount;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestEventListItem.UMG_SeasonPassQuestEventListItem_C.UpdateParam
	 */
	struct UUMG_SeasonPassQuestEventListItem_C_UpdateParam_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestEventListItem.UMG_SeasonPassQuestEventListItem_C.SetParam
	 */
	struct UUMG_SeasonPassQuestEventListItem_C_SetParam_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestEventListItem.UMG_SeasonPassQuestEventListItem_C.SetData
	 */
	struct UUMG_SeasonPassQuestEventListItem_C_SetData_Params
	{
	public:
		struct FSBSeasonPassQuestItemData                          InData;                                                  // 0x0000(0x00D0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UMG_SeasonPassQuestEventListItem.UMG_SeasonPassQuestEventListItem_C.ExecuteUbergraph_UMG_SeasonPassQuestEventListItem
	 */
	struct UUMG_SeasonPassQuestEventListItem_C_ExecuteUbergraph_UMG_SeasonPassQuestEventListItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZHRO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
