#pragma once

 

// Package: QuestDetail_CheckIcon

#include "Basic.hpp"

#include "QuestDetail_CheckIcon_classes.hpp"
#include "QuestDetail_CheckIcon_parameters.hpp"


namespace SDK
{

// Function QuestDetail_CheckIcon.QuestDetail_CheckIcon_C.SetCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bFlag                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestDetail_CheckIcon_C::SetCheck(bool bFlag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestDetail_CheckIcon_C", "SetCheck");

	Params::QuestDetail_CheckIcon_C_SetCheck Parms{};

	Parms.bFlag = bFlag;

	UObject::ProcessEvent(Func, &Parms);
}

}

