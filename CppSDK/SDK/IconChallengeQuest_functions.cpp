#pragma once

 

// Package: IconChallengeQuest

#include "Basic.hpp"

#include "IconChallengeQuest_classes.hpp"
#include "IconChallengeQuest_parameters.hpp"


namespace SDK
{

// Function IconChallengeQuest.IconChallengeQuest_C.Setup
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   QuestIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIconChallengeQuest_C::Setup(int32 QuestIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconChallengeQuest_C", "Setup");

	Params::IconChallengeQuest_C_Setup Parms{};

	Parms.QuestIndex = QuestIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IconChallengeQuest.IconChallengeQuest_C.OnSetInside
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsInSide                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UIconChallengeQuest_C::OnSetInside(bool IsInSide)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconChallengeQuest_C", "OnSetInside");

	Params::IconChallengeQuest_C_OnSetInside Parms{};

	Parms.IsInSide = IsInSide;

	UObject::ProcessEvent(Func, &Parms);
}

}

