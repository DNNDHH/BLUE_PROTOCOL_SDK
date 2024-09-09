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
	 * Function UMG_SeasonPassQuestSeasonListItem.UMG_SeasonPassQuestSeasonListItem_C.Debug_SetQuestId
	 */
	struct UUMG_SeasonPassQuestSeasonListItem_C_Debug_SetQuestId_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestSeasonListItem.UMG_SeasonPassQuestSeasonListItem_C.SetParam
	 */
	struct UUMG_SeasonPassQuestSeasonListItem_C_SetParam_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestSeasonListItem.UMG_SeasonPassQuestSeasonListItem_C.UpdateParam
	 */
	struct UUMG_SeasonPassQuestSeasonListItem_C_UpdateParam_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestSeasonListItem.UMG_SeasonPassQuestSeasonListItem_C.SetData
	 */
	struct UUMG_SeasonPassQuestSeasonListItem_C_SetData_Params
	{
	public:
		struct FSBSeasonPassQuestItemData                          InData;                                                  // 0x0000(0x00D0)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UUMG_SeasonPassQuestMenu_C*                          InOwnerMenu;                                             // 0x00D0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestSeasonListItem.UMG_SeasonPassQuestSeasonListItem_C.Construct
	 */
	struct UUMG_SeasonPassQuestSeasonListItem_C_Construct_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestSeasonListItem.UMG_SeasonPassQuestSeasonListItem_C.Destruct
	 */
	struct UUMG_SeasonPassQuestSeasonListItem_C_Destruct_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestSeasonListItem.UMG_SeasonPassQuestSeasonListItem_C.GetReward_Event
	 */
	struct UUMG_SeasonPassQuestSeasonListItem_C_GetReward_Event_Params
	{
	public:
		class FString                                              QuestID;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              GroupId;                                                 // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestSeasonListItem.UMG_SeasonPassQuestSeasonListItem_C.Comprite_Event
	 */
	struct UUMG_SeasonPassQuestSeasonListItem_C_Comprite_Event_Params
	{
	public:
		struct FSBSeasonPassQuestListManager                       InQuestManager;                                          // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ESBAutoDeliveryRewardStatus                                RewardStatus;                                            // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RX4F[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnCode;                                              // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestSeasonListItem.UMG_SeasonPassQuestSeasonListItem_C.ExecuteUbergraph_UMG_SeasonPassQuestSeasonListItem
	 */
	struct UUMG_SeasonPassQuestSeasonListItem_C_ExecuteUbergraph_UMG_SeasonPassQuestSeasonListItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KDP2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
