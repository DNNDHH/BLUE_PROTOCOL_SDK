#pragma once

 

// Package: QuestDetail_ReceiveConditionItem

#include "Basic.hpp"

#include "QuestDetail_ReceiveConditionItem_classes.hpp"
#include "QuestDetail_ReceiveConditionItem_parameters.hpp"


namespace SDK
{

// Function QuestDetail_ReceiveConditionItem.QuestDetail_ReceiveConditionItem_C.SetCondition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InCondition                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    bIsSatisfied                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestDetail_ReceiveConditionItem_C::SetCondition(const class FText& InCondition, bool bIsSatisfied)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_ReceiveConditionItem_C", "SetCondition");

	Params::QuestDetail_ReceiveConditionItem_C_SetCondition Parms{};

	Parms.InCondition = std::move(InCondition);
	Parms.bIsSatisfied = bIsSatisfied;

	UObject::ProcessEvent(Func, &Parms);
}

}

