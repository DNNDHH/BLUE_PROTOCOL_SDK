#pragma once

 

// Package: QuestDetail_ReceiveCondition

#include "Basic.hpp"

#include "QuestDetail_ReceiveCondition_classes.hpp"
#include "QuestDetail_ReceiveCondition_parameters.hpp"


namespace SDK
{

// Function QuestDetail_ReceiveCondition.QuestDetail_ReceiveCondition_C.ExecuteUbergraph_QuestDetail_ReceiveCondition
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestDetail_ReceiveCondition_C::ExecuteUbergraph_QuestDetail_ReceiveCondition(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_ReceiveCondition_C", "ExecuteUbergraph_QuestDetail_ReceiveCondition");

	Params::QuestDetail_ReceiveCondition_C_ExecuteUbergraph_QuestDetail_ReceiveCondition Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestDetail_ReceiveCondition.QuestDetail_ReceiveCondition_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuestDetail_ReceiveCondition_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_ReceiveCondition_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestDetail_ReceiveCondition.QuestDetail_ReceiveCondition_C.SetCondition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBQuestPreconditionUIInfo>InConditions                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UQuestDetail_ReceiveCondition_C::SetCondition(TArray<struct FSBQuestPreconditionUIInfo>& InConditions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_ReceiveCondition_C", "SetCondition");

	Params::QuestDetail_ReceiveCondition_C_SetCondition Parms{};

	Parms.InConditions = std::move(InConditions);

	UObject::ProcessEvent(Func, &Parms);

	InConditions = std::move(Parms.InConditions);
}


// Function QuestDetail_ReceiveCondition.QuestDetail_ReceiveCondition_C.SelectCautionText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsProceeding                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestDetail_ReceiveCondition_C::SelectCautionText(bool IsProceeding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_ReceiveCondition_C", "SelectCautionText");

	Params::QuestDetail_ReceiveCondition_C_SelectCautionText Parms{};

	Parms.IsProceeding = IsProceeding;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestDetail_ReceiveCondition.QuestDetail_ReceiveCondition_C.SetConditionForNextMainQuest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBQuestPreconditionUIInfo       InInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UQuestDetail_ReceiveCondition_C::SetConditionForNextMainQuest(const struct FSBQuestPreconditionUIInfo& InInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_ReceiveCondition_C", "SetConditionForNextMainQuest");

	Params::QuestDetail_ReceiveCondition_C_SetConditionForNextMainQuest Parms{};

	Parms.InInfo = std::move(InInfo);

	UObject::ProcessEvent(Func, &Parms);
}

}

