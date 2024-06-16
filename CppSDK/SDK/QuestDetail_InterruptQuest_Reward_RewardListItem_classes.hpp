#pragma once

 

// Package: QuestDetail_InterruptQuest_Reward_RewardListItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass QuestDetail_InterruptQuest_Reward_RewardListItem.QuestDetail_InterruptQuest_Reward_RewardListItem_C
// 0x0020 (0x0298 - 0x0278)
class UQuestDetail_InterruptQuest_Reward_RewardListItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UInterruptQuestContributionIconM_C*     Icon_Rank;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label_Point;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EQuestContributionRank                        Rank;                                              // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_QuestDetail_InterruptQuest_Reward_RewardListItem(int32 EntryPoint);
	void Construct();
	void SetPoint(const struct FRewardInfo& Reward, int32 InPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuestDetail_InterruptQuest_Reward_RewardListItem_C">();
	}
	static class UQuestDetail_InterruptQuest_Reward_RewardListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuestDetail_InterruptQuest_Reward_RewardListItem_C>();
	}
};
static_assert(alignof(UQuestDetail_InterruptQuest_Reward_RewardListItem_C) == 0x000008, "Wrong alignment on UQuestDetail_InterruptQuest_Reward_RewardListItem_C");
static_assert(sizeof(UQuestDetail_InterruptQuest_Reward_RewardListItem_C) == 0x000298, "Wrong size on UQuestDetail_InterruptQuest_Reward_RewardListItem_C");
static_assert(offsetof(UQuestDetail_InterruptQuest_Reward_RewardListItem_C, UberGraphFrame) == 0x000278, "Member 'UQuestDetail_InterruptQuest_Reward_RewardListItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UQuestDetail_InterruptQuest_Reward_RewardListItem_C, Icon_Rank) == 0x000280, "Member 'UQuestDetail_InterruptQuest_Reward_RewardListItem_C::Icon_Rank' has a wrong offset!");
static_assert(offsetof(UQuestDetail_InterruptQuest_Reward_RewardListItem_C, Label_Point) == 0x000288, "Member 'UQuestDetail_InterruptQuest_Reward_RewardListItem_C::Label_Point' has a wrong offset!");
static_assert(offsetof(UQuestDetail_InterruptQuest_Reward_RewardListItem_C, Rank) == 0x000290, "Member 'UQuestDetail_InterruptQuest_Reward_RewardListItem_C::Rank' has a wrong offset!");

}

