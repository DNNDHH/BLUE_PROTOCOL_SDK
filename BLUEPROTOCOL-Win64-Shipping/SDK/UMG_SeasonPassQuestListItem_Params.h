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
	 * Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.UpdateReloadBtn
	 */
	struct UUMG_SeasonPassQuestListItem_C_UpdateReloadBtn_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.GetProgressStatusText
	 */
	struct UUMG_SeasonPassQuestListItem_C_GetProgressStatusText_Params
	{
	public:
		class FString                                              OutStatusText;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.ProgressSelect
	 */
	struct UUMG_SeasonPassQuestListItem_C_ProgressSelect_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.GetTokenName
	 */
	struct UUMG_SeasonPassQuestListItem_C_GetTokenName_Params
	{
	public:
		int32_t                                                    InTokenId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IIYK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              OutTokenName;                                            // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.GetRloadTokenPossession
	 */
	struct UUMG_SeasonPassQuestListItem_C_GetRloadTokenPossession_Params
	{
	public:
		int32_t                                                    OutTokenCount;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.GetForceAchievedTokenPossession
	 */
	struct UUMG_SeasonPassQuestListItem_C_GetForceAchievedTokenPossession_Params
	{
	public:
		int32_t                                                    OutTokenCount;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.GetTokenReloadMsg
	 */
	struct UUMG_SeasonPassQuestListItem_C_GetTokenReloadMsg_Params
	{
	public:
		int32_t                                                    InTokenId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InTokenCount;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              OutMassage;                                              // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       OutGetTokenData;                                         // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J693[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.GetForceAchievedMsg
	 */
	struct UUMG_SeasonPassQuestListItem_C_GetForceAchievedMsg_Params
	{
	public:
		int32_t                                                    InTokenId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InTokenCount;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              OutMassage;                                              // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       OutSuccess;                                              // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_66A7[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.GetWeekCount
	 */
	struct UUMG_SeasonPassQuestListItem_C_GetWeekCount_Params
	{
	public:
		int32_t                                                    OutWeekCount;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.IsSubscribed
	 */
	struct UUMG_SeasonPassQuestListItem_C_IsSubscribed_Params
	{
	public:
		bool                                                       OutIsSubscribed;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.UpdateItemData
	 */
	struct UUMG_SeasonPassQuestListItem_C_UpdateItemData_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.RewardItemSet
	 */
	struct UUMG_SeasonPassQuestListItem_C_RewardItemSet_Params
	{
	public:
		struct FSBSeasonPassQuestItemData                          InItemData;                                              // 0x0000(0x00D0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.InitRewardIcon
	 */
	struct UUMG_SeasonPassQuestListItem_C_InitRewardIcon_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.SetQuestDitailTextGuide
	 */
	struct UUMG_SeasonPassQuestListItem_C_SetQuestDitailTextGuide_Params
	{
	public:
		int32_t                                                    InQuestRank;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SIVR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.Reload
	 */
	struct UUMG_SeasonPassQuestListItem_C_Reload_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.Clear
	 */
	struct UUMG_SeasonPassQuestListItem_C_Clear_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.RewardPoint
	 */
	struct UUMG_SeasonPassQuestListItem_C_RewardPoint_Params
	{
	public:
		struct FSBSeasonPassQuestItemData                          InItemListData;                                          // 0x0000(0x00D0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.UpdateReceiveButton
	 */
	struct UUMG_SeasonPassQuestListItem_C_UpdateReceiveButton_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.Set Quest Type UI
	 */
	struct UUMG_SeasonPassQuestListItem_C_SetQuestTypeUI_Params
	{
	public:
		ESBSeasonPassQuestCycleType                                InQuestType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.Set Quest Dital Text Bonus
	 */
	struct UUMG_SeasonPassQuestListItem_C_SetQuestDitalTextBonus_Params
	{
	public:
		ESBSeasonPassQuestType                                     IsQuestType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BSKM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDateTime                                           InDateTime;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.SetQuestDitailText_Normal
	 */
	struct UUMG_SeasonPassQuestListItem_C_SetQuestDitailText_Normal_Params
	{
	public:
		ESBSeasonPassQuestPlanState                                InPlamType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBSeasonPassQuestCycleType                                ICycleType;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6114[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.IsShowReloadButton
	 */
	struct UUMG_SeasonPassQuestListItem_C_IsShowReloadButton_Params
	{
	public:
		bool                                                       OutReloadUse;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.IsAchieved
	 */
	struct UUMG_SeasonPassQuestListItem_C_IsAchieved_Params
	{
	public:
		bool                                                       OutAchieved;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.Construct
	 */
	struct UUMG_SeasonPassQuestListItem_C_Construct_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.SetData
	 */
	struct UUMG_SeasonPassQuestListItem_C_SetData_Params
	{
	public:
		struct FSBSeasonPassQuestItemData                          InData;                                                  // 0x0000(0x00D0)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class USBSeasonPassQuestMenuListData*                      InOwner;                                                 // 0x00D0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             InOwnerMenu;                                             // 0x00D8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBSeasonPassQuestCycleType                                InCycleType;                                             // 0x00E0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIsNowWeek;                                             // 0x00E1(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.BndEvt__SBButton_Reload_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_SeasonPassQuestListItem_C_BndEvt__SBButton_Reload_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.BndEvt__SBButton_Receive_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_SeasonPassQuestListItem_C_BndEvt__SBButton_Receive_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.ReloadSelect
	 */
	struct UUMG_SeasonPassQuestListItem_C_ReloadSelect_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.Reload_PointUse
	 */
	struct UUMG_SeasonPassQuestListItem_C_Reload_PointUse_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.Reload_PointUse_Select
	 */
	struct UUMG_SeasonPassQuestListItem_C_Reload_PointUse_Select_Params
	{
	public:
		EYesNoDialogResult                                         Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.Destruct
	 */
	struct UUMG_SeasonPassQuestListItem_C_Destruct_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.OnReloadSeasonPassQuestDelegete_イベント_1
	 */
	struct UUMG_SeasonPassQuestListItem_C_OnReloadSeasonPassQuestDelegete__1_Params
	{
	public:
		struct FSBSeasonPassQuestItemData                          QuestData;                                               // 0x0000(0x00D0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ESBAutoDeliveryQuestReloadType                             Type;                                                    // 0x00D0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x00D1(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C0T8[0x2];                                   // 0x00D2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnCode;                                              // 0x00D4(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.CompleteQuest
	 */
	struct UUMG_SeasonPassQuestListItem_C_CompleteQuest_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.CompleteQuestRet
	 */
	struct UUMG_SeasonPassQuestListItem_C_CompleteQuestRet_Params
	{
	public:
		struct FSBSeasonPassQuestListManager                       InQuestManager;                                          // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ESBAutoDeliveryRewardStatus                                RewardStatus;                                            // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V6P7[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnCode;                                              // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.ForceAchieved
	 */
	struct UUMG_SeasonPassQuestListItem_C_ForceAchieved_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.ForceAchieved_exect
	 */
	struct UUMG_SeasonPassQuestListItem_C_ForceAchieved_exect_Params
	{
	public:
		struct FSBSeasonPassQuestListManager                       InQuestManager;                                          // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ESBAutoDeliveryRewardStatus                                RewardStatus;                                            // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EWZH[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnCode;                                              // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.ForceAchieved_select
	 */
	struct UUMG_SeasonPassQuestListItem_C_ForceAchieved_select_Params
	{
	public:
		EYesNoDialogResult                                         Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.BndEvt__UMG_SeasonPassQuestListItem_SBButton_Clear_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_SeasonPassQuestListItem_C_BndEvt__UMG_SeasonPassQuestListItem_SBButton_Clear_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.BndEvt__UMG_SeasonPassQuestListItem_SBButton_Clear_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUMG_SeasonPassQuestListItem_C_BndEvt__UMG_SeasonPassQuestListItem_SBButton_Clear_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.BndEvt__UMG_SeasonPassQuestListItem_SBButton_Clear_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUMG_SeasonPassQuestListItem_C_BndEvt__UMG_SeasonPassQuestListItem_SBButton_Clear_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.ExecuteUbergraph_UMG_SeasonPassQuestListItem
	 */
	struct UUMG_SeasonPassQuestListItem_C_ExecuteUbergraph_UMG_SeasonPassQuestListItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AO2U[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
