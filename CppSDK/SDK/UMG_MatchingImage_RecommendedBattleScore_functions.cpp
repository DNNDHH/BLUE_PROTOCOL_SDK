#pragma once

 

// Package: UMG_MatchingImage_RecommendedBattleScore

#include "Basic.hpp"

#include "UMG_MatchingImage_RecommendedBattleScore_classes.hpp"
#include "UMG_MatchingImage_RecommendedBattleScore_parameters.hpp"


namespace SDK
{

// Function UMG_MatchingImage_RecommendedBattleScore.UMG_MatchingImage_RecommendedBattleScore_C.SetRecommendedBattleScore
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RecommendedBattleScore                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingImage_RecommendedBattleScore_C::SetRecommendedBattleScore(int32 RecommendedBattleScore)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingImage_RecommendedBattleScore_C", "SetRecommendedBattleScore");

	Params::UMG_MatchingImage_RecommendedBattleScore_C_SetRecommendedBattleScore Parms{};

	Parms.RecommendedBattleScore = RecommendedBattleScore;

	UObject::ProcessEvent(Func, &Parms);
}

}

