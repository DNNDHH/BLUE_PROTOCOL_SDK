#pragma once

 

// Package: QuestDetail_ProgressListItem

#include "Basic.hpp"

#include "QuestDetail_ProgressListItem_classes.hpp"
#include "QuestDetail_ProgressListItem_parameters.hpp"


namespace SDK
{

// Function QuestDetail_ProgressListItem.QuestDetail_ProgressListItem_C.SetInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ConditionText                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           ProgressText                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    bClear                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestDetail_ProgressListItem_C::SetInfo(const class FString& ConditionText, const class FString& ProgressText, bool bClear)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_ProgressListItem_C", "SetInfo");

	Params::QuestDetail_ProgressListItem_C_SetInfo Parms{};

	Parms.ConditionText = std::move(ConditionText);
	Parms.ProgressText = std::move(ProgressText);
	Parms.bClear = bClear;

	UObject::ProcessEvent(Func, &Parms);
}

}

