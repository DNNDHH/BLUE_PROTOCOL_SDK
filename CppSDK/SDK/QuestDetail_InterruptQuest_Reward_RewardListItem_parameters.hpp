#pragma once

 

// Package: QuestDetail_InterruptQuest_Reward_RewardListItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function QuestDetail_InterruptQuest_Reward_RewardListItem.QuestDetail_InterruptQuest_Reward_RewardListItem_C.ExecuteUbergraph_QuestDetail_InterruptQuest_Reward_RewardListItem
// 0x0004 (0x0004 - 0x0000)
struct QuestDetail_InterruptQuest_Reward_RewardListItem_C_ExecuteUbergraph_QuestDetail_InterruptQuest_Reward_RewardListItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestDetail_InterruptQuest_Reward_RewardListItem_C_ExecuteUbergraph_QuestDetail_InterruptQuest_Reward_RewardListItem) == 0x000004, "Wrong alignment on QuestDetail_InterruptQuest_Reward_RewardListItem_C_ExecuteUbergraph_QuestDetail_InterruptQuest_Reward_RewardListItem");
static_assert(sizeof(QuestDetail_InterruptQuest_Reward_RewardListItem_C_ExecuteUbergraph_QuestDetail_InterruptQuest_Reward_RewardListItem) == 0x000004, "Wrong size on QuestDetail_InterruptQuest_Reward_RewardListItem_C_ExecuteUbergraph_QuestDetail_InterruptQuest_Reward_RewardListItem");
static_assert(offsetof(QuestDetail_InterruptQuest_Reward_RewardListItem_C_ExecuteUbergraph_QuestDetail_InterruptQuest_Reward_RewardListItem, EntryPoint) == 0x000000, "Member 'QuestDetail_InterruptQuest_Reward_RewardListItem_C_ExecuteUbergraph_QuestDetail_InterruptQuest_Reward_RewardListItem::EntryPoint' has a wrong offset!");

// Function QuestDetail_InterruptQuest_Reward_RewardListItem.QuestDetail_InterruptQuest_Reward_RewardListItem_C.SetPoint
// 0x0038 (0x0038 - 0x0000)
struct QuestDetail_InterruptQuest_Reward_RewardListItem_C_SetPoint final
{
public:
	struct FRewardInfo                            Reward;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	int32                                         InPoint;                                           // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8828[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0020(0x0018)()
};
static_assert(alignof(QuestDetail_InterruptQuest_Reward_RewardListItem_C_SetPoint) == 0x000008, "Wrong alignment on QuestDetail_InterruptQuest_Reward_RewardListItem_C_SetPoint");
static_assert(sizeof(QuestDetail_InterruptQuest_Reward_RewardListItem_C_SetPoint) == 0x000038, "Wrong size on QuestDetail_InterruptQuest_Reward_RewardListItem_C_SetPoint");
static_assert(offsetof(QuestDetail_InterruptQuest_Reward_RewardListItem_C_SetPoint, Reward) == 0x000000, "Member 'QuestDetail_InterruptQuest_Reward_RewardListItem_C_SetPoint::Reward' has a wrong offset!");
static_assert(offsetof(QuestDetail_InterruptQuest_Reward_RewardListItem_C_SetPoint, InPoint) == 0x000018, "Member 'QuestDetail_InterruptQuest_Reward_RewardListItem_C_SetPoint::InPoint' has a wrong offset!");
static_assert(offsetof(QuestDetail_InterruptQuest_Reward_RewardListItem_C_SetPoint, CallFunc_Conv_IntToText_ReturnValue) == 0x000020, "Member 'QuestDetail_InterruptQuest_Reward_RewardListItem_C_SetPoint::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

}

