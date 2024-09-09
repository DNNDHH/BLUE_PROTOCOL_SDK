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
	 * Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.SetTerm
	 */
	struct UUMG_MatchingMenu_Reward_C_SetTerm_Params
	{
	public:
		class FName                                                RewardId;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.ShouldRankedRewardBeAdded
	 */
	struct UUMG_MatchingMenu_Reward_C_ShouldRankedRewardBeAdded_Params
	{
	public:
		ESBRewardSetType                                           RewardSetType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TBPG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBMasterDungeonRankedReward                        MasterDungeonRankedReward;                               // 0x0004(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       ShouldBeAdded;                                           // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.ShouldTheFirstRewardBeRemoved_Individually
	 */
	struct UUMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_Individually_Params
	{
	public:
		int32_t                                                    ClearLine;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ShouldBeRemoved;                                         // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.ShouldTheFirstRewardBeRemoved_All
	 */
	struct UUMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_All_Params
	{
	public:
		bool                                                       ShouldBeRemoved;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_33I2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.GetRewardList
	 */
	struct UUMG_MatchingMenu_Reward_C_GetRewardList_Params
	{
	public:
		class FName                                                RewardInfo;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FSBMasterRewardWithAmountRange>              OutRewardList;                                           // 0x0008(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.GetRewardAmountByLiquidMemory
	 */
	struct UUMG_MatchingMenu_Reward_C_GetRewardAmountByLiquidMemory_Params
	{
	public:
		struct FSBMasterRewardWithAmountRange                      MasterRewardWithAmountRange;                             // 0x0000(0x002C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AmountFixed;                                             // 0x002C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AmountLottery;                                           // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       AmountChanged;                                           // 0x0034(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_20DE[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.GetRewardAmountByNetworkCafe
	 */
	struct UUMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe_Params
	{
	public:
		struct FSBMasterRewardWithAmountRange                      MasterRewardWithAmountRange;                             // 0x0000(0x002C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AmountFixed;                                             // 0x002C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AmountLottery;                                           // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       AmountChanged;                                           // 0x0034(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y89U[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.GetRewardAmountByItem
	 */
	struct UUMG_MatchingMenu_Reward_C_GetRewardAmountByItem_Params
	{
	public:
		struct FSBMasterRewardWithAmountRange                      MasterRewardWithAmountRange;                             // 0x0000(0x002C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AmountFixed;                                             // 0x002C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AmountLottery;                                           // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       AmountChanged;                                           // 0x0034(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OCN9[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.GetAmountByRewardBoost
	 */
	struct UUMG_MatchingMenu_Reward_C_GetAmountByRewardBoost_Params
	{
	public:
		struct FSBMasterRewardWithAmountRange                      MasterRewardWithAmountRange;                             // 0x0000(0x002C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FSBRewardBoostMissionMasterData                     RewardBoostData;                                         // 0x002C(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       RewardBoostIsValid;                                      // 0x0054(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JPV6[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    AmountFixed;                                             // 0x0058(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AmountLottery;                                           // 0x005C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       AmountChanged;                                           // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NKOZ[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.GetRewardAmount
	 */
	struct UUMG_MatchingMenu_Reward_C_GetRewardAmount_Params
	{
	public:
		struct FSBMasterRewardWithAmountRange                      MasterRewardWithAmountRange;                             // 0x0000(0x002C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FSBRewardBoostMissionMasterData                     RewardBoostData;                                         // 0x002C(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       RewardBoostIsValid;                                      // 0x0054(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_71KO[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    AmountFixed;                                             // 0x0058(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AmountLottery;                                           // 0x005C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       AmountChanged;                                           // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.ConvertMaximumValueToTime
	 */
	struct UUMG_MatchingMenu_Reward_C_ConvertMaximumValueToTime_Params
	{
	public:
		int32_t                                                    MaximumValue;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_859I[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Text;                                                    // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.GetMasterDataDungeonRankedReward
	 */
	struct UUMG_MatchingMenu_Reward_C_GetMasterDataDungeonRankedReward_Params
	{
	public:
		bool                                                       bExist;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1TT0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBMasterDungeonRankedReward                        MasterDataDungeonRankedReward;                           // 0x0004(0x0018)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.Clear
	 */
	struct UUMG_MatchingMenu_Reward_C_Clear_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.SetClearLineScore
	 */
	struct UUMG_MatchingMenu_Reward_C_SetClearLineScore_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.SetClearLineTime
	 */
	struct UUMG_MatchingMenu_Reward_C_SetClearLineTime_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.SetCaption
	 */
	struct UUMG_MatchingMenu_Reward_C_SetCaption_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.SetRewardTower
	 */
	struct UUMG_MatchingMenu_Reward_C_SetRewardTower_Params
	{
	public:
		struct FSBRewardBoostMissionMasterData                     RewardBoostData;                                         // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       RewardBoostIsValid;                                      // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J1NB[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.SetRewardRanked
	 */
	struct UUMG_MatchingMenu_Reward_C_SetRewardRanked_Params
	{
	public:
		ESBRewardSetType                                           RewardSetType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YDNX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBRewardBoostMissionMasterData                     RewardBoostData;                                         // 0x0004(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       RewardBoostIsValid;                                      // 0x002C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3BJ6[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.SetReward2
	 */
	struct UUMG_MatchingMenu_Reward_C_SetReward2_Params
	{
	public:
		class FName                                                RewardInfo;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    FloorNum;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    FloorMax;                                                // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSBRewardBoostMissionMasterData                     RewardBoostData;                                         // 0x0010(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       RewardBoostIsValid;                                      // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2GH6[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.SetReward
	 */
	struct UUMG_MatchingMenu_Reward_C_SetReward_Params
	{
	public:
		class FName                                                RewardInfo;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    FloorNum;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    FloorMax;                                                // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSBRewardBoostMissionMasterData                     RewardBoostData;                                         // 0x0010(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       RewardBoostIsValid;                                      // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0Y0N[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.Setup
	 */
	struct UUMG_MatchingMenu_Reward_C_Setup_Params
	{
	public:
		class FString                                              GameMode;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FName                                                MapId;                                                   // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.OnClickIconEvent
	 */
	struct UUMG_MatchingMenu_Reward_C_OnClickIconEvent_Params
	{
	public:
		class UQuestRewardIcon_C*                                  Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.ExecuteUbergraph_UMG_MatchingMenu_Reward
	 */
	struct UUMG_MatchingMenu_Reward_C_ExecuteUbergraph_UMG_MatchingMenu_Reward_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SZJR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.OnClickIcon__DelegateSignature
	 */
	struct UUMG_MatchingMenu_Reward_C_OnClickIcon__DelegateSignature_Params
	{
	public:
		class UQuestRewardIcon_C*                                  Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
