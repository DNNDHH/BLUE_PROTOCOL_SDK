#pragma once

 

// Package: QuestDetail_InterruptQuest_Reward

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass QuestDetail_InterruptQuest_Reward.QuestDetail_InterruptQuest_Reward_C
// 0x0040 (0x02B8 - 0x0278)
class UQuestDetail_InterruptQuest_Reward_C final : public UUserWidget
{
public:
	class UImage*                                 Image_0;                                           // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Label_RewardType;                                  // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Label_Title;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestDetail_InterruptQuest_Reward_RewardListItem_C* RewardList_Bronze;                                 // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestDetail_InterruptQuest_Reward_RewardListItem_C* RewardList_Gold;                                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestDetail_InterruptQuest_Reward_RewardListItem_C* RewardList_Silver;                                 // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TextBg;                                            // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetQuestInfo(struct FQuestMasterData& QuestMasterData);
	void SetReward(class UQuestDetail_InterruptQuest_Reward_RewardListItem_C* OutRewardList, TArray<struct FRewardInfo>& Rewards, EQuestContributionRank Rank);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuestDetail_InterruptQuest_Reward_C">();
	}
	static class UQuestDetail_InterruptQuest_Reward_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuestDetail_InterruptQuest_Reward_C>();
	}
};
static_assert(alignof(UQuestDetail_InterruptQuest_Reward_C) == 0x000008, "Wrong alignment on UQuestDetail_InterruptQuest_Reward_C");
static_assert(sizeof(UQuestDetail_InterruptQuest_Reward_C) == 0x0002B8, "Wrong size on UQuestDetail_InterruptQuest_Reward_C");
static_assert(offsetof(UQuestDetail_InterruptQuest_Reward_C, Image_0) == 0x000278, "Member 'UQuestDetail_InterruptQuest_Reward_C::Image_0' has a wrong offset!");
static_assert(offsetof(UQuestDetail_InterruptQuest_Reward_C, Image_1) == 0x000280, "Member 'UQuestDetail_InterruptQuest_Reward_C::Image_1' has a wrong offset!");
static_assert(offsetof(UQuestDetail_InterruptQuest_Reward_C, Label_RewardType) == 0x000288, "Member 'UQuestDetail_InterruptQuest_Reward_C::Label_RewardType' has a wrong offset!");
static_assert(offsetof(UQuestDetail_InterruptQuest_Reward_C, Label_Title) == 0x000290, "Member 'UQuestDetail_InterruptQuest_Reward_C::Label_Title' has a wrong offset!");
static_assert(offsetof(UQuestDetail_InterruptQuest_Reward_C, RewardList_Bronze) == 0x000298, "Member 'UQuestDetail_InterruptQuest_Reward_C::RewardList_Bronze' has a wrong offset!");
static_assert(offsetof(UQuestDetail_InterruptQuest_Reward_C, RewardList_Gold) == 0x0002A0, "Member 'UQuestDetail_InterruptQuest_Reward_C::RewardList_Gold' has a wrong offset!");
static_assert(offsetof(UQuestDetail_InterruptQuest_Reward_C, RewardList_Silver) == 0x0002A8, "Member 'UQuestDetail_InterruptQuest_Reward_C::RewardList_Silver' has a wrong offset!");
static_assert(offsetof(UQuestDetail_InterruptQuest_Reward_C, TextBg) == 0x0002B0, "Member 'UQuestDetail_InterruptQuest_Reward_C::TextBg' has a wrong offset!");

}

