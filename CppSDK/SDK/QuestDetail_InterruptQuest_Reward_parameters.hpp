#pragma once

 

// Package: QuestDetail_InterruptQuest_Reward

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function QuestDetail_InterruptQuest_Reward.QuestDetail_InterruptQuest_Reward_C.SetQuestInfo
// 0x0118 (0x0118 - 0x0000)
struct QuestDetail_InterruptQuest_Reward_C_SetQuestInfo final
{
public:
	struct FQuestMasterData                       QuestMasterData;                                   // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(QuestDetail_InterruptQuest_Reward_C_SetQuestInfo) == 0x000008, "Wrong alignment on QuestDetail_InterruptQuest_Reward_C_SetQuestInfo");
static_assert(sizeof(QuestDetail_InterruptQuest_Reward_C_SetQuestInfo) == 0x000118, "Wrong size on QuestDetail_InterruptQuest_Reward_C_SetQuestInfo");
static_assert(offsetof(QuestDetail_InterruptQuest_Reward_C_SetQuestInfo, QuestMasterData) == 0x000000, "Member 'QuestDetail_InterruptQuest_Reward_C_SetQuestInfo::QuestMasterData' has a wrong offset!");

// Function QuestDetail_InterruptQuest_Reward.QuestDetail_InterruptQuest_Reward_C.SetReward
// 0x0048 (0x0048 - 0x0000)
struct QuestDetail_InterruptQuest_Reward_C_SetReward final
{
public:
	class UQuestDetail_InterruptQuest_Reward_RewardListItem_C* OutRewardList;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FRewardInfo>                    Rewards;                                           // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	EQuestContributionRank                        Rank;                                              // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7462[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRewardInfo                            CallFunc_Array_Get_Item;                           // 0x0028(0x0018)(NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7463[0x1];                                     // 0x0043(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestDetail_InterruptQuest_Reward_C_SetReward) == 0x000008, "Wrong alignment on QuestDetail_InterruptQuest_Reward_C_SetReward");
static_assert(sizeof(QuestDetail_InterruptQuest_Reward_C_SetReward) == 0x000048, "Wrong size on QuestDetail_InterruptQuest_Reward_C_SetReward");
static_assert(offsetof(QuestDetail_InterruptQuest_Reward_C_SetReward, OutRewardList) == 0x000000, "Member 'QuestDetail_InterruptQuest_Reward_C_SetReward::OutRewardList' has a wrong offset!");
static_assert(offsetof(QuestDetail_InterruptQuest_Reward_C_SetReward, Rewards) == 0x000008, "Member 'QuestDetail_InterruptQuest_Reward_C_SetReward::Rewards' has a wrong offset!");
static_assert(offsetof(QuestDetail_InterruptQuest_Reward_C_SetReward, Rank) == 0x000018, "Member 'QuestDetail_InterruptQuest_Reward_C_SetReward::Rank' has a wrong offset!");
static_assert(offsetof(QuestDetail_InterruptQuest_Reward_C_SetReward, CallFunc_Array_Length_ReturnValue) == 0x00001C, "Member 'QuestDetail_InterruptQuest_Reward_C_SetReward::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_InterruptQuest_Reward_C_SetReward, Temp_int_Array_Index_Variable) == 0x000020, "Member 'QuestDetail_InterruptQuest_Reward_C_SetReward::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(QuestDetail_InterruptQuest_Reward_C_SetReward, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'QuestDetail_InterruptQuest_Reward_C_SetReward::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(QuestDetail_InterruptQuest_Reward_C_SetReward, CallFunc_Array_Get_Item) == 0x000028, "Member 'QuestDetail_InterruptQuest_Reward_C_SetReward::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(QuestDetail_InterruptQuest_Reward_C_SetReward, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'QuestDetail_InterruptQuest_Reward_C_SetReward::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_InterruptQuest_Reward_C_SetReward, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000041, "Member 'QuestDetail_InterruptQuest_Reward_C_SetReward::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_InterruptQuest_Reward_C_SetReward, CallFunc_BooleanAND_ReturnValue) == 0x000042, "Member 'QuestDetail_InterruptQuest_Reward_C_SetReward::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDetail_InterruptQuest_Reward_C_SetReward, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'QuestDetail_InterruptQuest_Reward_C_SetReward::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

}

