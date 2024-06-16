#pragma once

 

// Package: UMG_MatchingImage_BestScore

#include "Basic.hpp"

#include "UMG_MatchingImage_BestScore_classes.hpp"
#include "UMG_MatchingImage_BestScore_parameters.hpp"


namespace SDK
{

// Function UMG_MatchingImage_BestScore.UMG_MatchingImage_BestScore_C.SetBestScore
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   BestScore                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ClearNum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             GameContentId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBClassType                            ClassType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingImage_BestScore_C::SetBestScore(int32 BestScore, int32 ClearNum, class FName GameContentId, ESBClassType ClassType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingImage_BestScore_C", "SetBestScore");

	Params::UMG_MatchingImage_BestScore_C_SetBestScore Parms{};

	Parms.BestScore = BestScore;
	Parms.ClearNum = ClearNum;
	Parms.GameContentId = GameContentId;
	Parms.ClassType = ClassType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingImage_BestScore.UMG_MatchingImage_BestScore_C.SetTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Cleared                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MatchingImage_BestScore_C::SetTime(int32 Time, bool Cleared)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingImage_BestScore_C", "SetTime");

	Params::UMG_MatchingImage_BestScore_C_SetTime Parms{};

	Parms.Time = Time;
	Parms.Cleared = Cleared;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingImage_BestScore.UMG_MatchingImage_BestScore_C.SetScore
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Score                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Cleared                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MatchingImage_BestScore_C::SetScore(int32 Score, bool Cleared)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingImage_BestScore_C", "SetScore");

	Params::UMG_MatchingImage_BestScore_C_SetScore Parms{};

	Parms.Score = Score;
	Parms.Cleared = Cleared;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingImage_BestScore.UMG_MatchingImage_BestScore_C.SetTower
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   FloorBest                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   FloorMax                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ClearNum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingImage_BestScore_C::SetTower(int32 FloorBest, int32 FloorMax, int32 ClearNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingImage_BestScore_C", "SetTower");

	Params::UMG_MatchingImage_BestScore_C_SetTower Parms{};

	Parms.FloorBest = FloorBest;
	Parms.FloorMax = FloorMax;
	Parms.ClearNum = ClearNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingImage_BestScore.UMG_MatchingImage_BestScore_C.SetRank
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   BestScore                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBClassType                            ClassType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             GameContentId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingImage_BestScore_C::SetRank(int32 BestScore, ESBClassType ClassType, class FName GameContentId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingImage_BestScore_C", "SetRank");

	Params::UMG_MatchingImage_BestScore_C_SetRank Parms{};

	Parms.BestScore = BestScore;
	Parms.ClassType = ClassType;
	Parms.GameContentId = GameContentId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingImage_BestScore.UMG_MatchingImage_BestScore_C.Pre Init Time Score Tower
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           GameMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUMG_MatchingImage_BestScore_C::Pre_Init_Time_Score_Tower(const class FString& GameMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingImage_BestScore_C", "Pre Init Time Score Tower");

	Params::UMG_MatchingImage_BestScore_C_Pre_Init_Time_Score_Tower Parms{};

	Parms.GameMode = std::move(GameMode);

	UObject::ProcessEvent(Func, &Parms);
}

}

