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
	 * Function UMG_SeasonPassQuestBonusListItem.UMG_SeasonPassQuestBonusListItem_C.UpdateSubMenuExclation
	 */
	struct UUMG_SeasonPassQuestBonusListItem_C_UpdateSubMenuExclation_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestBonusListItem.UMG_SeasonPassQuestBonusListItem_C.Debug_SetQuestId
	 */
	struct UUMG_SeasonPassQuestBonusListItem_C_Debug_SetQuestId_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestBonusListItem.UMG_SeasonPassQuestBonusListItem_C.GetData
	 */
	struct UUMG_SeasonPassQuestBonusListItem_C_GetData_Params
	{
	public:
		TArray<class UQuestRewardIcon_C*>                          OutIconList;                                             // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function UMG_SeasonPassQuestBonusListItem.UMG_SeasonPassQuestBonusListItem_C.SetReceived
	 */
	struct UUMG_SeasonPassQuestBonusListItem_C_SetReceived_Params
	{
	public:
		bool                                                       IsReceived;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_D98S[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_SeasonPassQuestBonusListItem.UMG_SeasonPassQuestBonusListItem_C.GetRewarCount
	 */
	struct UUMG_SeasonPassQuestBonusListItem_C_GetRewarCount_Params
	{
	public:
		int32_t                                                    OutCount;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestBonusListItem.UMG_SeasonPassQuestBonusListItem_C.UpdateParam
	 */
	struct UUMG_SeasonPassQuestBonusListItem_C_UpdateParam_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestBonusListItem.UMG_SeasonPassQuestBonusListItem_C.SetParam
	 */
	struct UUMG_SeasonPassQuestBonusListItem_C_SetParam_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestBonusListItem.UMG_SeasonPassQuestBonusListItem_C.SetData
	 */
	struct UUMG_SeasonPassQuestBonusListItem_C_SetData_Params
	{
	public:
		struct FSBSeasonPassQuestItemData                          InData;                                                  // 0x0000(0x00D0)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UUMG_SeasonPassBonusQuestMenu_C*                     OwnerMenu;                                               // 0x00D0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestBonusListItem.UMG_SeasonPassQuestBonusListItem_C.BndEvt__UMG_SeasonPassQuestBonusListItem_SBButton_Receive_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_SeasonPassQuestBonusListItem_C_BndEvt__UMG_SeasonPassQuestBonusListItem_SBButton_Receive_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestBonusListItem.UMG_SeasonPassQuestBonusListItem_C.Compite_Event
	 */
	struct UUMG_SeasonPassQuestBonusListItem_C_Compite_Event_Params
	{
	public:
		struct FSBSeasonPassQuestListManager                       InQuestManager;                                          // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ESBAutoDeliveryRewardStatus                                RewardStatus;                                            // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AQNR[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnCode;                                              // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestBonusListItem.UMG_SeasonPassQuestBonusListItem_C.ExecuteUbergraph_UMG_SeasonPassQuestBonusListItem
	 */
	struct UUMG_SeasonPassQuestBonusListItem_C_ExecuteUbergraph_UMG_SeasonPassQuestBonusListItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HDGG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
