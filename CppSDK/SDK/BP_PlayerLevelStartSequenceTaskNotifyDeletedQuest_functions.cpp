#pragma once

 

// Package: BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest

#include "Basic.hpp"

#include "BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_classes.hpp"
#include "BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_parameters.hpp"


namespace SDK
{

// Function BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest.BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C::ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C", "ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest");

	Params::BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest.BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C.Start
// (Event, Public, BlueprintEvent)

void UBP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C::Start()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C", "Start");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest.BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C.Make Quest Name Array
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                           QuestList                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class FText>                     QuestNames                                             (Parm, OutParm)

void UBP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C::Make_Quest_Name_Array(TArray<int32>& QuestList, TArray<class FText>* QuestNames)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C", "Make Quest Name Array");

	Params::BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array Parms{};

	Parms.QuestList = std::move(QuestList);

	UObject::ProcessEvent(Func, &Parms);

	QuestList = std::move(Parms.QuestList);

	if (QuestNames != nullptr)
		*QuestNames = std::move(Parms.QuestNames);
}

}

