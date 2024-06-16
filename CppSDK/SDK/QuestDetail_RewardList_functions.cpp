#pragma once

 

// Package: QuestDetail_RewardList

#include "Basic.hpp"

#include "QuestDetail_RewardList_classes.hpp"
#include "QuestDetail_RewardList_parameters.hpp"


namespace SDK
{

// Function QuestDetail_RewardList.QuestDetail_RewardList_C.ExecuteUbergraph_QuestDetail_RewardList
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestDetail_RewardList_C::ExecuteUbergraph_QuestDetail_RewardList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_RewardList_C", "ExecuteUbergraph_QuestDetail_RewardList");

	Params::QuestDetail_RewardList_C_ExecuteUbergraph_QuestDetail_RewardList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestDetail_RewardList.QuestDetail_RewardList_C.OnClosedAdditionalRewards
// (BlueprintCallable, BlueprintEvent)

void UQuestDetail_RewardList_C::OnClosedAdditionalRewards()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_RewardList_C", "OnClosedAdditionalRewards");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestDetail_RewardList.QuestDetail_RewardList_C.BndEvt__QuestDetail_RewardList_AdditionalRewardBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UQuestDetail_RewardList_C::BndEvt__QuestDetail_RewardList_AdditionalRewardBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_RewardList_C", "BndEvt__QuestDetail_RewardList_AdditionalRewardBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestDetail_RewardList.QuestDetail_RewardList_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestDetail_RewardList_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_RewardList_C", "PreConstruct");

	Params::QuestDetail_RewardList_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestDetail_RewardList.QuestDetail_RewardList_C.AddReward
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRewardInfo                      InRewardInfo                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                                    bInSelectRewardSelectable                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bEnableHiddenReward                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                      OutWidget                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestDetail_RewardList_C::AddReward(struct FRewardInfo& InRewardInfo, bool bInSelectRewardSelectable, bool bEnableHiddenReward, class UUserWidget** OutWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_RewardList_C", "AddReward");

	Params::QuestDetail_RewardList_C_AddReward Parms{};

	Parms.InRewardInfo = std::move(InRewardInfo);
	Parms.bInSelectRewardSelectable = bInSelectRewardSelectable;
	Parms.bEnableHiddenReward = bEnableHiddenReward;

	UObject::ProcessEvent(Func, &Parms);

	InRewardInfo = std::move(Parms.InRewardInfo);

	if (OutWidget != nullptr)
		*OutWidget = Parms.OutWidget;
}


// Function QuestDetail_RewardList.QuestDetail_RewardList_C.ClearReward
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestDetail_RewardList_C::ClearReward()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_RewardList_C", "ClearReward");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestDetail_RewardList.QuestDetail_RewardList_C.GetRewardNum
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Num                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestDetail_RewardList_C::GetRewardNum(int32* Num)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_RewardList_C", "GetRewardNum");

	Params::QuestDetail_RewardList_C_GetRewardNum Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Num != nullptr)
		*Num = Parms.Num;
}


// Function QuestDetail_RewardList.QuestDetail_RewardList_C.SetEnableAdditionalButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Flag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestDetail_RewardList_C::SetEnableAdditionalButton(bool Flag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_RewardList_C", "SetEnableAdditionalButton");

	Params::QuestDetail_RewardList_C_SetEnableAdditionalButton Parms{};

	Parms.Flag = Flag;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestDetail_RewardList.QuestDetail_RewardList_C.SetQuestIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InQuestIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestDetail_RewardList_C::SetQuestIndex(int32 InQuestIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_RewardList_C", "SetQuestIndex");

	Params::QuestDetail_RewardList_C_SetQuestIndex Parms{};

	Parms.InQuestIndex = InQuestIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestDetail_RewardList.QuestDetail_RewardList_C.SetAdditionalRewardCompleted
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestDetail_RewardList_C::SetAdditionalRewardCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_RewardList_C", "SetAdditionalRewardCompleted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestDetail_RewardList.QuestDetail_RewardList_C.SetAdditionalRewardNotice
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InClearCount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestDetail_RewardList_C::SetAdditionalRewardNotice(int32 InClearCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_RewardList_C", "SetAdditionalRewardNotice");

	Params::QuestDetail_RewardList_C_SetAdditionalRewardNotice Parms{};

	Parms.InClearCount = InClearCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestDetail_RewardList.QuestDetail_RewardList_C.SetRewardTypeName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InLabelString                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UQuestDetail_RewardList_C::SetRewardTypeName(const class FString& InLabelString)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_RewardList_C", "SetRewardTypeName");

	Params::QuestDetail_RewardList_C_SetRewardTypeName Parms{};

	Parms.InLabelString = std::move(InLabelString);

	UObject::ProcessEvent(Func, &Parms);
}

}

