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
	 * Function ResultRewardList.ResultRewardList_C.IsIgnoreReward
	 */
	struct UResultRewardList_C_IsIgnoreReward_Params
	{
	public:
		struct FSBMasterReward                                     SBMasterReward;                                          // 0x0000(0x0014)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CCXA[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ResultRewardList.ResultRewardList_C.IsGC
	 */
	struct UResultRewardList_C_IsGC_Params
	{
	public:
		ESBRewardItemType                                          InType;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EIXZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InId;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ResultRewardList.ResultRewardList_C.GetTeamBonusPercentForRewardID
	 */
	struct UResultRewardList_C_GetTeamBonusPercentForRewardID_Params
	{
	public:
		class FName                                                InRewardId;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WO6T[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Percent;                                                 // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ResultRewardList.ResultRewardList_C.GetTeamBonusPercentForItemID
	 */
	struct UResultRewardList_C_GetTeamBonusPercentForItemID_Params
	{
	public:
		int32_t                                                    InItemID;                                                // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IS8O[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Percent;                                                 // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ResultRewardList.ResultRewardList_C.GetTeamBonusPercentForType
	 */
	struct UResultRewardList_C_GetTeamBonusPercentForType_Params
	{
	public:
		ESBRewardItemType                                          InType;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5ZA9[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Percent;                                                 // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ResultRewardList.ResultRewardList_C.GetTeamBonus
	 */
	struct UResultRewardList_C_GetTeamBonus_Params
	{
	public:
		TArray<struct FSBMasterGuildBonus>                         TeamBonus;                                               // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function ResultRewardList.ResultRewardList_C.SetTeamBonus
	 */
	struct UResultRewardList_C_SetTeamBonus_Params
	{
	public:
		TArray<struct FSBMasterGuildBonus>                         InTeamBonus;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ResultRewardList.ResultRewardList_C.IsBuffBonusToken
	 */
	struct UResultRewardList_C_IsBuffBonusToken_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J6E7[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ResultRewardList.ResultRewardList_C.IsBuffBonusGC
	 */
	struct UResultRewardList_C_IsBuffBonusGC_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ResultRewardList.ResultRewardList_C.IsBuffBonusEXP
	 */
	struct UResultRewardList_C_IsBuffBonusEXP_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ResultRewardList.ResultRewardList_C.IsBuffBonusLuno
	 */
	struct UResultRewardList_C_IsBuffBonusLuno_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ResultRewardList.ResultRewardList_C.SetBuffBonus
	 */
	struct UResultRewardList_C_SetBuffBonus_Params
	{
	public:
		bool                                                       InIsBuffItemBonusLuno;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InIsBuffItemBonusEXP;                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InIsBuffItemBonusGC;                                     // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SIPM[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<int32_t>                                            InIsBuffTokenIDList;                                     // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ResultRewardList.ResultRewardList_C.IsRewardControlMaterialRate
	 */
	struct UResultRewardList_C_IsRewardControlMaterialRate_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7XB6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ResultRewardList.ResultRewardList_C.IsRewardControlMaterialAmountAdd
	 */
	struct UResultRewardList_C_IsRewardControlMaterialAmountAdd_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UA2M[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ResultRewardList.ResultRewardList_C.IsRewardControlMaterialAmountMulti
	 */
	struct UResultRewardList_C_IsRewardControlMaterialAmountMulti_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JW5V[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ResultRewardList.ResultRewardList_C.IsRewardControlEXPMulti
	 */
	struct UResultRewardList_C_IsRewardControlEXPMulti_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EJP0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ResultRewardList.ResultRewardList_C.IsRewardControlLunoMulti
	 */
	struct UResultRewardList_C_IsRewardControlLunoMulti_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U8ID[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ResultRewardList.ResultRewardList_C.GetRewardControl
	 */
	struct UResultRewardList_C_GetRewardControl_Params
	{
	public:
		struct FSBMasterRewardControl                              RewardControl;                                           // 0x0000(0x0014)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ResultRewardList.ResultRewardList_C.SetRewardControl
	 */
	struct UResultRewardList_C_SetRewardControl_Params
	{
	public:
		struct FSBMasterRewardControl                              InRewardControl;                                         // 0x0000(0x0014)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function ResultRewardList.ResultRewardList_C.IsShowDetailWindow
	 */
	struct UResultRewardList_C_IsShowDetailWindow_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AXCW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ResultRewardList.ResultRewardList_C.FindOwnItemInfo
	 */
	struct UResultRewardList_C_FindOwnItemInfo_Params
	{
	public:
		class FString                                              InUniqueId;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JJQ3[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FOwnItemInfo                                        ItemInfo;                                                // 0x0018(0x0150)  (Parm, OutParm)
	};

	/**
	 * Function ResultRewardList.ResultRewardList_C.GetOwnItemInfo
	 */
	struct UResultRewardList_C_GetOwnItemInfo_Params
	{
	public:
		TArray<struct FOwnItemInfo>                                OwnItemInfo;                                             // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function ResultRewardList.ResultRewardList_C.SetOwnItemInfo
	 */
	struct UResultRewardList_C_SetOwnItemInfo_Params
	{
	public:
		TArray<struct FOwnItemInfo>                                OwnItemInfo;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ResultRewardList.ResultRewardList_C.Build
	 */
	struct UResultRewardList_C_Build_Params
	{	};

	/**
	 * Function ResultRewardList.ResultRewardList_C.SetOverLimit
	 */
	struct UResultRewardList_C_SetOverLimit_Params
	{
	public:
		struct FSBOverLimit                                        SBOverLimit;                                             // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ResultRewardList.ResultRewardList_C.SetMedal
	 */
	struct UResultRewardList_C_SetMedal_Params
	{
	public:
		TArray<int32_t>                                            InId;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ResultRewardList.ResultRewardList_C.SetTokens
	 */
	struct UResultRewardList_C_SetTokens_Params
	{
	public:
		TArray<struct FSBRewardToken>                              InTokenInfo;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ResultRewardList.ResultRewardList_C.SetToken
	 */
	struct UResultRewardList_C_SetToken_Params
	{
	public:
		int32_t                                                    InId;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InAmount;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ResultRewardList.ResultRewardList_C.SetRoseOrb
	 */
	struct UResultRewardList_C_SetRoseOrb_Params
	{
	public:
		int32_t                                                    InAmount;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ResultRewardList.ResultRewardList_C.Debug Dump Lottery Groups Rewards
	 */
	struct UResultRewardList_C_DebugDumpLotteryGroupsRewards_Params
	{
	public:
		class FName                                                RewardId;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FSBMasterRewardLotteryGroupsRewards>         Rewards;                                                 // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ResultRewardList.ResultRewardList_C.Debug Dump Integer Array
	 */
	struct UResultRewardList_C_DebugDumpIntegerArray_Params
	{
	public:
		TArray<int32_t>                                            inArray;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ResultRewardList.ResultRewardList_C.Debug Dump Own Item Info
	 */
	struct UResultRewardList_C_DebugDumpOwnItemInfo_Params
	{	};

	/**
	 * Function ResultRewardList.ResultRewardList_C.SetVisibleIconBG
	 */
	struct UResultRewardList_C_SetVisibleIconBG_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P1BY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ResultRewardList.ResultRewardList_C.SetAmountColorType
	 */
	struct UResultRewardList_C_SetAmountColorType_Params
	{
	public:
		class FString                                              ColorName;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ResultRewardList.ResultRewardList_C.SetAlertIcon
	 */
	struct UResultRewardList_C_SetAlertIcon_Params
	{
	public:
		bool                                                       IsYellow;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsVisible;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HTFA[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ResultRewardList.ResultRewardList_C.GetIconNum
	 */
	struct UResultRewardList_C_GetIconNum_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ResultRewardList.ResultRewardList_C.DeleteIcon
	 */
	struct UResultRewardList_C_DeleteIcon_Params
	{	};

	/**
	 * Function ResultRewardList.ResultRewardList_C.SetSkill
	 */
	struct UResultRewardList_C_SetSkill_Params
	{
	public:
		TArray<struct FSBSkillParam>                               InSkillParam;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ResultRewardList.ResultRewardList_C.CreateIcon
	 */
	struct UResultRewardList_C_CreateIcon_Params
	{
	public:
		bool                                                       bIsClickToShowDetail;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S8OZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UQuestRewardIcon_C*                                  OutIcon;                                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ResultRewardList.ResultRewardList_C.IsBonus
	 */
	struct UResultRewardList_C_IsBonus_Params
	{
	public:
		struct FQuestRewardIconInfo                                InInfo;                                                  // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RQ00[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ResultRewardList.ResultRewardList_C.AddIcon
	 */
	struct UResultRewardList_C_AddIcon_Params
	{	};

	/**
	 * Function ResultRewardList.ResultRewardList_C.IsMargeType
	 */
	struct UResultRewardList_C_IsMargeType_Params
	{
	public:
		ESBRewardItemType                                          Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ResultRewardList.ResultRewardList_C.ClearInfo
	 */
	struct UResultRewardList_C_ClearInfo_Params
	{	};

	/**
	 * Function ResultRewardList.ResultRewardList_C.AddInfo
	 */
	struct UResultRewardList_C_AddInfo_Params
	{
	public:
		class FString                                              InUniqueId;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    InAmount;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InId;                                                    // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InStorageNumber;                                         // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBRewardItemType                                          InType;                                                  // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D0JL[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    IsTeamBonusPercent;                                      // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D8Q4[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ResultRewardList.ResultRewardList_C.SetReward
	 */
	struct UResultRewardList_C_SetReward_Params
	{
	public:
		TArray<class FName>                                        InReawrdIDList;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ResultRewardList.ResultRewardList_C.SetSkyCoin
	 */
	struct UResultRewardList_C_SetSkyCoin_Params
	{
	public:
		int32_t                                                    InAmount;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ResultRewardList.ResultRewardList_C.SetItem
	 */
	struct UResultRewardList_C_SetItem_Params
	{
	public:
		TArray<struct FOwnItemInfo>                                InOwnItems;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ResultRewardList.ResultRewardList_C.SetGC
	 */
	struct UResultRewardList_C_SetGC_Params
	{
	public:
		int32_t                                                    InAmount;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ResultRewardList.ResultRewardList_C.SetExp
	 */
	struct UResultRewardList_C_SetExp_Params
	{
	public:
		int32_t                                                    InAmount;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ResultRewardList.ResultRewardList_C.SetMoney
	 */
	struct UResultRewardList_C_SetMoney_Params
	{
	public:
		int32_t                                                    InAmount;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ResultRewardList.ResultRewardList_C.Clear
	 */
	struct UResultRewardList_C_Clear_Params
	{	};

	/**
	 * Function ResultRewardList.ResultRewardList_C.Construct
	 */
	struct UResultRewardList_C_Construct_Params
	{	};

	/**
	 * Function ResultRewardList.ResultRewardList_C.ExecuteUbergraph_ResultRewardList
	 */
	struct UResultRewardList_C_ExecuteUbergraph_ResultRewardList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
