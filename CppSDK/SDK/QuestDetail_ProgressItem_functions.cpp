#pragma once

 

// Package: QuestDetail_ProgressItem

#include "Basic.hpp"

#include "QuestDetail_ProgressItem_classes.hpp"
#include "QuestDetail_ProgressItem_parameters.hpp"


namespace SDK
{

// Function QuestDetail_ProgressItem.QuestDetail_ProgressItem_C.SetProgress
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InQuestIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInCompleted                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestDetail_ProgressItem_C::SetProgress(int32 InQuestIndex, bool bInCompleted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_ProgressItem_C", "SetProgress");

	Params::QuestDetail_ProgressItem_C_SetProgress Parms{};

	Parms.InQuestIndex = InQuestIndex;
	Parms.bInCompleted = bInCompleted;

	UObject::ProcessEvent(Func, &Parms);
}

}

