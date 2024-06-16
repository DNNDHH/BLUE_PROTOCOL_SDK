#pragma once

 

// Package: QuestDetail_RewardItem

#include "Basic.hpp"

#include "QuestDetail_RewardItem_classes.hpp"
#include "QuestDetail_RewardItem_parameters.hpp"


namespace SDK
{

// Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.OnToggleCheck_Deligate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Property                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQuestRewardIcon_C*               ClickedObject                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestDetail_RewardItem_C::OnToggleCheck_Deligate__DelegateSignature(bool Property, class UQuestRewardIcon_C* ClickedObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_RewardItem_C", "OnToggleCheck_Deligate__DelegateSignature");

	Params::QuestDetail_RewardItem_C_OnToggleCheck_Deligate__DelegateSignature Parms{};

	Parms.Property = Property;
	Parms.ClickedObject = ClickedObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.ExecuteUbergraph_QuestDetail_RewardItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestDetail_RewardItem_C::ExecuteUbergraph_QuestDetail_RewardItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_RewardItem_C", "ExecuteUbergraph_QuestDetail_RewardItem");

	Params::QuestDetail_RewardItem_C_ExecuteUbergraph_QuestDetail_RewardItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.OnToggleChecked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQuestRewardIcon_C*               CheckedItem                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestDetail_RewardItem_C::OnToggleChecked(bool IsChecked, class UQuestRewardIcon_C* CheckedItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_RewardItem_C", "OnToggleChecked");

	Params::QuestDetail_RewardItem_C_OnToggleChecked Parms{};

	Parms.IsChecked = IsChecked;
	Parms.CheckedItem = CheckedItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestDetail_RewardItem_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_RewardItem_C", "PreConstruct");

	Params::QuestDetail_RewardItem_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.SetTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InTitleText                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestDetail_RewardItem_C::SetTitle(int32 InTitleText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_RewardItem_C", "SetTitle");

	Params::QuestDetail_RewardItem_C_SetTitle Parms{};

	Parms.InTitleText = InTitleText;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.SetRewardContent
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestMasterData                 InQuestMasterData                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    bInChoiceRewardSelectable                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bEnableHiddenReward                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestDetail_RewardItem_C::SetRewardContent(struct FQuestMasterData& InQuestMasterData, bool bInChoiceRewardSelectable, bool bEnableHiddenReward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_RewardItem_C", "SetRewardContent");

	Params::QuestDetail_RewardItem_C_SetRewardContent Parms{};

	Parms.InQuestMasterData = std::move(InQuestMasterData);
	Parms.bInChoiceRewardSelectable = bInChoiceRewardSelectable;
	Parms.bEnableHiddenReward = bEnableHiddenReward;

	UObject::ProcessEvent(Func, &Parms);

	InQuestMasterData = std::move(Parms.InQuestMasterData);
}


// Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.IsEmptyList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bIsEmpty                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestDetail_RewardItem_C::IsEmptyList(bool* bIsEmpty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_RewardItem_C", "IsEmptyList");

	Params::QuestDetail_RewardItem_C_IsEmptyList Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bIsEmpty != nullptr)
		*bIsEmpty = Parms.bIsEmpty;
}


// Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.DebugDumpRewardInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FRewardInfo>              InRewardInfo                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UQuestDetail_RewardItem_C::DebugDumpRewardInfo(TArray<struct FRewardInfo>& InRewardInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_RewardItem_C", "DebugDumpRewardInfo");

	Params::QuestDetail_RewardItem_C_DebugDumpRewardInfo Parms{};

	Parms.InRewardInfo = std::move(InRewardInfo);

	UObject::ProcessEvent(Func, &Parms);

	InRewardInfo = std::move(Parms.InRewardInfo);
}


// Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.IsExistAdditionalReward
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   InQuestIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestDetail_RewardItem_C::IsExistAdditionalReward(int32 InQuestIndex, bool* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_RewardItem_C", "IsExistAdditionalReward");

	Params::QuestDetail_RewardItem_C_IsExistAdditionalReward Parms{};

	Parms.InQuestIndex = InQuestIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.GetSpcifiedAdditionalReward
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InQuestIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InClearCount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FRewardInfo>              OutReward_Infos                                        (Parm, OutParm)
// int32                                   OutNextClearCount                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestDetail_RewardItem_C::GetSpcifiedAdditionalReward(int32 InQuestIndex, int32 InClearCount, TArray<struct FRewardInfo>* OutReward_Infos, int32* OutNextClearCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_RewardItem_C", "GetSpcifiedAdditionalReward");

	Params::QuestDetail_RewardItem_C_GetSpcifiedAdditionalReward Parms{};

	Parms.InQuestIndex = InQuestIndex;
	Parms.InClearCount = InClearCount;

	UObject::ProcessEvent(Func, &Parms);

	if (OutReward_Infos != nullptr)
		*OutReward_Infos = std::move(Parms.OutReward_Infos);

	if (OutNextClearCount != nullptr)
		*OutNextClearCount = Parms.OutNextClearCount;
}


// Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.SetCoomonRewardLabelString
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InLabelString                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UQuestDetail_RewardItem_C::SetCoomonRewardLabelString(const class FString& InLabelString)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_RewardItem_C", "SetCoomonRewardLabelString");

	Params::QuestDetail_RewardItem_C_SetCoomonRewardLabelString Parms{};

	Parms.InLabelString = std::move(InLabelString);

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.SetRewardContentByRewardId
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FRewardInfo>              RewardInfoList                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UQuestDetail_RewardItem_C::SetRewardContentByRewardId(TArray<struct FRewardInfo>& RewardInfoList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_RewardItem_C", "SetRewardContentByRewardId");

	Params::QuestDetail_RewardItem_C_SetRewardContentByRewardId Parms{};

	Parms.RewardInfoList = std::move(RewardInfoList);

	UObject::ProcessEvent(Func, &Parms);

	RewardInfoList = std::move(Parms.RewardInfoList);
}


// Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.ShouldAddCommonRewardList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FRewardInfo                      InRewardInfo                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UQuestDetail_RewardItem_C::ShouldAddCommonRewardList(struct FRewardInfo& InRewardInfo) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_RewardItem_C", "ShouldAddCommonRewardList");

	Params::QuestDetail_RewardItem_C_ShouldAddCommonRewardList Parms{};

	Parms.InRewardInfo = std::move(InRewardInfo);

	UObject::ProcessEvent(Func, &Parms);

	InRewardInfo = std::move(Parms.InRewardInfo);

	return Parms.ReturnValue;
}

}

