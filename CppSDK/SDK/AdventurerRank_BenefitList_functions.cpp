#pragma once

 

// Package: AdventurerRank_BenefitList

#include "Basic.hpp"

#include "AdventurerRank_BenefitList_classes.hpp"
#include "AdventurerRank_BenefitList_parameters.hpp"


namespace SDK
{

// Function AdventurerRank_BenefitList.AdventurerRank_BenefitList_C.SetTxtRankUpBenefits
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRank                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsRankup                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAdventurerRank_BenefitList_C::SetTxtRankUpBenefits(int32 InRank, bool IsRankup)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AdventurerRank_BenefitList_C", "SetTxtRankUpBenefits");

	Params::AdventurerRank_BenefitList_C_SetTxtRankUpBenefits Parms{};

	Parms.InRank = InRank;
	Parms.IsRankup = IsRankup;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AdventurerRank_BenefitList.AdventurerRank_BenefitList_C.AddTextBenefitList 
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UAdventurerRank_BenefitList_C::AddTextBenefitList_(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AdventurerRank_BenefitList_C", "AddTextBenefitList ");

	Params::AdventurerRank_BenefitList_C_AddTextBenefitList_ Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AdventurerRank_BenefitList.AdventurerRank_BenefitList_C.ResetBenefitList 
// (Public, BlueprintCallable, BlueprintEvent)

void UAdventurerRank_BenefitList_C::ResetBenefitList_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AdventurerRank_BenefitList_C", "ResetBenefitList ");

	UObject::ProcessEvent(Func, nullptr);
}

}

