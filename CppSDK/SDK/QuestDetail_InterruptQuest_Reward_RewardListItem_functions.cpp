#pragma once

 

// Package: QuestDetail_InterruptQuest_Reward_RewardListItem

#include "Basic.hpp"

#include "QuestDetail_InterruptQuest_Reward_RewardListItem_classes.hpp"
#include "QuestDetail_InterruptQuest_Reward_RewardListItem_parameters.hpp"


namespace SDK
{

// Function QuestDetail_InterruptQuest_Reward_RewardListItem.QuestDetail_InterruptQuest_Reward_RewardListItem_C.ExecuteUbergraph_QuestDetail_InterruptQuest_Reward_RewardListItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestDetail_InterruptQuest_Reward_RewardListItem_C::ExecuteUbergraph_QuestDetail_InterruptQuest_Reward_RewardListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_InterruptQuest_Reward_RewardListItem_C", "ExecuteUbergraph_QuestDetail_InterruptQuest_Reward_RewardListItem");

	Params::QuestDetail_InterruptQuest_Reward_RewardListItem_C_ExecuteUbergraph_QuestDetail_InterruptQuest_Reward_RewardListItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestDetail_InterruptQuest_Reward_RewardListItem.QuestDetail_InterruptQuest_Reward_RewardListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuestDetail_InterruptQuest_Reward_RewardListItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_InterruptQuest_Reward_RewardListItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestDetail_InterruptQuest_Reward_RewardListItem.QuestDetail_InterruptQuest_Reward_RewardListItem_C.SetPoint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRewardInfo                      Reward                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// int32                                   InPoint                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestDetail_InterruptQuest_Reward_RewardListItem_C::SetPoint(const struct FRewardInfo& Reward, int32 InPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_InterruptQuest_Reward_RewardListItem_C", "SetPoint");

	Params::QuestDetail_InterruptQuest_Reward_RewardListItem_C_SetPoint Parms{};

	Parms.Reward = std::move(Reward);
	Parms.InPoint = InPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

