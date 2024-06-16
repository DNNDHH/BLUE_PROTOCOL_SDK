#pragma once

 

// Package: AchievementRankIcon

#include "Basic.hpp"

#include "AchievementRankIcon_classes.hpp"
#include "AchievementRankIcon_parameters.hpp"


namespace SDK
{

// Function AchievementRankIcon.AchievementRankIcon_C.ExecuteUbergraph_AchievementRankIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAchievementRankIcon_C::ExecuteUbergraph_AchievementRankIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AchievementRankIcon_C", "ExecuteUbergraph_AchievementRankIcon");

	Params::AchievementRankIcon_C_ExecuteUbergraph_AchievementRankIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AchievementRankIcon.AchievementRankIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAchievementRankIcon_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AchievementRankIcon_C", "PreConstruct");

	Params::AchievementRankIcon_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AchievementRankIcon.AchievementRankIcon_C.SetRank
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_RankId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAchievementRankIcon_C::SetRank(int32 Param_RankId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AchievementRankIcon_C", "SetRank");

	Params::AchievementRankIcon_C_SetRank Parms{};

	Parms.Param_RankId = Param_RankId;

	UObject::ProcessEvent(Func, &Parms);
}

}

