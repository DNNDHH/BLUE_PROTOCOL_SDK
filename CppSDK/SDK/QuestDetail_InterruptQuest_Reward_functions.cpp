#pragma once

 

// Package: QuestDetail_InterruptQuest_Reward

#include "Basic.hpp"

#include "QuestDetail_InterruptQuest_Reward_classes.hpp"
#include "QuestDetail_InterruptQuest_Reward_parameters.hpp"


namespace SDK
{

// Function QuestDetail_InterruptQuest_Reward.QuestDetail_InterruptQuest_Reward_C.SetQuestInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestMasterData                 QuestMasterData                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UQuestDetail_InterruptQuest_Reward_C::SetQuestInfo(struct FQuestMasterData& QuestMasterData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_InterruptQuest_Reward_C", "SetQuestInfo");

	Params::QuestDetail_InterruptQuest_Reward_C_SetQuestInfo Parms{};

	Parms.QuestMasterData = std::move(QuestMasterData);

	UObject::ProcessEvent(Func, &Parms);

	QuestMasterData = std::move(Parms.QuestMasterData);
}


// Function QuestDetail_InterruptQuest_Reward.QuestDetail_InterruptQuest_Reward_C.SetReward
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuestDetail_InterruptQuest_Reward_RewardListItem_C*OutRewardList                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FRewardInfo>              Rewards                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// EQuestContributionRank                  Rank                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestDetail_InterruptQuest_Reward_C::SetReward(class UQuestDetail_InterruptQuest_Reward_RewardListItem_C* OutRewardList, TArray<struct FRewardInfo>& Rewards, EQuestContributionRank Rank)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_InterruptQuest_Reward_C", "SetReward");

	Params::QuestDetail_InterruptQuest_Reward_C_SetReward Parms{};

	Parms.OutRewardList = OutRewardList;
	Parms.Rewards = std::move(Rewards);
	Parms.Rank = Rank;

	UObject::ProcessEvent(Func, &Parms);

	Rewards = std::move(Parms.Rewards);
}

}

