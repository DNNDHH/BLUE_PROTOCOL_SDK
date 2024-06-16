#pragma once

 

// Package: AdventurerRank_BenefitListItem

#include "Basic.hpp"

#include "AdventurerRank_BenefitListItem_classes.hpp"
#include "AdventurerRank_BenefitListItem_parameters.hpp"


namespace SDK
{

// Function AdventurerRank_BenefitListItem.AdventurerRank_BenefitListItem_C.SetBenefitText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UAdventurerRank_BenefitListItem_C::SetBenefitText(const class FString& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AdventurerRank_BenefitListItem_C", "SetBenefitText");

	Params::AdventurerRank_BenefitListItem_C_SetBenefitText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}

}

