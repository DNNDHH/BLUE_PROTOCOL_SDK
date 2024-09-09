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
	 * Function UMG_SeasonPassQuestWeeklyListItem.UMG_SeasonPassQuestWeeklyListItem_C.IsRewardItem
	 */
	struct UUMG_SeasonPassQuestWeeklyListItem_C_IsRewardItem_Params
	{
	public:
		bool                                                       OutIsRewardItem;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_SeasonPassQuestWeeklyListItem.UMG_SeasonPassQuestWeeklyListItem_C.Debug_SetQuestId
	 */
	struct UUMG_SeasonPassQuestWeeklyListItem_C_Debug_SetQuestId_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestWeeklyListItem.UMG_SeasonPassQuestWeeklyListItem_C.SetParam
	 */
	struct UUMG_SeasonPassQuestWeeklyListItem_C_SetParam_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestWeeklyListItem.UMG_SeasonPassQuestWeeklyListItem_C.UpdateParam
	 */
	struct UUMG_SeasonPassQuestWeeklyListItem_C_UpdateParam_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestWeeklyListItem.UMG_SeasonPassQuestWeeklyListItem_C.UpdateForceClearBtn
	 */
	struct UUMG_SeasonPassQuestWeeklyListItem_C_UpdateForceClearBtn_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestWeeklyListItem.UMG_SeasonPassQuestWeeklyListItem_C.SetWeekCount
	 */
	struct UUMG_SeasonPassQuestWeeklyListItem_C_SetWeekCount_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestWeeklyListItem.UMG_SeasonPassQuestWeeklyListItem_C.BndEvt__UMG_SeasonPassQuestDailyListItem_SBButton_Clear_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_SeasonPassQuestWeeklyListItem_C_BndEvt__UMG_SeasonPassQuestDailyListItem_SBButton_Clear_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestWeeklyListItem.UMG_SeasonPassQuestWeeklyListItem_C.SetData
	 */
	struct UUMG_SeasonPassQuestWeeklyListItem_C_SetData_Params
	{
	public:
		struct FSBSeasonPassQuestItemData                          InData;                                                  // 0x0000(0x00D0)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UUMG_SeasonPassQuestMenu_C*                          OwnerMenu;                                               // 0x00D0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestWeeklyListItem.UMG_SeasonPassQuestWeeklyListItem_C.ForceClear_Event
	 */
	struct UUMG_SeasonPassQuestWeeklyListItem_C_ForceClear_Event_Params
	{
	public:
		EYesNoDialogResult                                         Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestWeeklyListItem.UMG_SeasonPassQuestWeeklyListItem_C.ForceClearComplete_Event
	 */
	struct UUMG_SeasonPassQuestWeeklyListItem_C_ForceClearComplete_Event_Params
	{
	public:
		struct FSBSeasonPassQuestListManager                       InQuestManager;                                          // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ESBAutoDeliveryRewardStatus                                RewardStatus;                                            // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6B69[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnCode;                                              // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestWeeklyListItem.UMG_SeasonPassQuestWeeklyListItem_C.Construct
	 */
	struct UUMG_SeasonPassQuestWeeklyListItem_C_Construct_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestWeeklyListItem.UMG_SeasonPassQuestWeeklyListItem_C.Destruct
	 */
	struct UUMG_SeasonPassQuestWeeklyListItem_C_Destruct_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestWeeklyListItem.UMG_SeasonPassQuestWeeklyListItem_C.GetReward_Event
	 */
	struct UUMG_SeasonPassQuestWeeklyListItem_C_GetReward_Event_Params
	{
	public:
		class FString                                              QuestID;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              GroupId;                                                 // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestWeeklyListItem.UMG_SeasonPassQuestWeeklyListItem_C.Comprite_Event
	 */
	struct UUMG_SeasonPassQuestWeeklyListItem_C_Comprite_Event_Params
	{
	public:
		struct FSBSeasonPassQuestListManager                       InQuestManager;                                          // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ESBAutoDeliveryRewardStatus                                RewardStatus;                                            // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MRPQ[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnCode;                                              // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestWeeklyListItem.UMG_SeasonPassQuestWeeklyListItem_C.ExecuteUbergraph_UMG_SeasonPassQuestWeeklyListItem
	 */
	struct UUMG_SeasonPassQuestWeeklyListItem_C_ExecuteUbergraph_UMG_SeasonPassQuestWeeklyListItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
