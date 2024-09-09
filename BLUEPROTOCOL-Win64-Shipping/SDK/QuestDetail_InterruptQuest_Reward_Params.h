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
	 * Function QuestDetail_InterruptQuest_Reward.QuestDetail_InterruptQuest_Reward_C.SetReward
	 */
	struct UQuestDetail_InterruptQuest_Reward_C_SetReward_Params
	{
	public:
		class UQuestDetail_InterruptQuest_Reward_RewardListItem_C* OutRewardList;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FRewardInfo>                                 Rewards;                                                 // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		EQuestContributionRank                                     Rank;                                                    // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FRG9[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function QuestDetail_InterruptQuest_Reward.QuestDetail_InterruptQuest_Reward_C.SetQuestInfo
	 */
	struct UQuestDetail_InterruptQuest_Reward_C_SetQuestInfo_Params
	{
	public:
		struct FQuestMasterData                                    QuestMasterData;                                         // 0x0000(0x0118)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
