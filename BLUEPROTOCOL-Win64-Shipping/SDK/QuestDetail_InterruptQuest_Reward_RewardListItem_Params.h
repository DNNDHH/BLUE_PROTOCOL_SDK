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
	 * Function QuestDetail_InterruptQuest_Reward_RewardListItem.QuestDetail_InterruptQuest_Reward_RewardListItem_C.SetPoint
	 */
	struct UQuestDetail_InterruptQuest_Reward_RewardListItem_C_SetPoint_Params
	{
	public:
		struct FRewardInfo                                         Reward;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		int32_t                                                    InPoint;                                                 // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XX9Q[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function QuestDetail_InterruptQuest_Reward_RewardListItem.QuestDetail_InterruptQuest_Reward_RewardListItem_C.Construct
	 */
	struct UQuestDetail_InterruptQuest_Reward_RewardListItem_C_Construct_Params
	{	};

	/**
	 * Function QuestDetail_InterruptQuest_Reward_RewardListItem.QuestDetail_InterruptQuest_Reward_RewardListItem_C.ExecuteUbergraph_QuestDetail_InterruptQuest_Reward_RewardListItem
	 */
	struct UQuestDetail_InterruptQuest_Reward_RewardListItem_C_ExecuteUbergraph_QuestDetail_InterruptQuest_Reward_RewardListItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
