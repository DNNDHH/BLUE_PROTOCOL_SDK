#pragma once

 

// Package: InterruptQuestContributionIconM

#include "Basic.hpp"

#include "InterruptQuestContributionIconM_classes.hpp"
#include "InterruptQuestContributionIconM_parameters.hpp"


namespace SDK
{

// Function InterruptQuestContributionIconM.InterruptQuestContributionIconM_C.SetRank
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EQuestContributionRank                  InRank                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInterruptQuestContributionIconM_C::SetRank(EQuestContributionRank InRank)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InterruptQuestContributionIconM_C", "SetRank");

	Params::InterruptQuestContributionIconM_C_SetRank Parms{};

	Parms.InRank = InRank;

	UObject::ProcessEvent(Func, &Parms);
}

}

