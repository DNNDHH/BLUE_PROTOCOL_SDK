#pragma once

 

// Package: QuestDetail_StatusIcon

#include "Basic.hpp"

#include "QuestDetail_StatusIcon_classes.hpp"
#include "QuestDetail_StatusIcon_parameters.hpp"


namespace SDK
{

// Function QuestDetail_StatusIcon.QuestDetail_StatusIcon_C.SetStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EQuestStatus                            InStatus                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestDetail_StatusIcon_C::SetStatus(EQuestStatus InStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_StatusIcon_C", "SetStatus");

	Params::QuestDetail_StatusIcon_C_SetStatus Parms{};

	Parms.InStatus = InStatus;

	UObject::ProcessEvent(Func, &Parms);
}

}

