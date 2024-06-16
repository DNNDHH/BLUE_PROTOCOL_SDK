#pragma once

 

// Package: RankingMenu_List

#include "Basic.hpp"

#include "RankingMenu_List_classes.hpp"
#include "RankingMenu_List_parameters.hpp"


namespace SDK
{

// Function RankingMenu_List.RankingMenu_List_C.Set Solo Ranking List
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FRankingData>             InRankingList                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ESBClassType                            InClassType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InLastIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIsTimeAttack                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Active                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URankingMenu_List_C::Set_Solo_Ranking_List(TArray<struct FRankingData>& InRankingList, ESBClassType InClassType, int32 InLastIndex, bool InIsTimeAttack, bool* Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_List_C", "Set Solo Ranking List");

	Params::RankingMenu_List_C_Set_Solo_Ranking_List Parms{};

	Parms.InRankingList = std::move(InRankingList);
	Parms.InClassType = InClassType;
	Parms.InLastIndex = InLastIndex;
	Parms.InIsTimeAttack = InIsTimeAttack;

	UObject::ProcessEvent(Func, &Parms);

	InRankingList = std::move(Parms.InRankingList);

	if (Active != nullptr)
		*Active = Parms.Active;
}


// Function RankingMenu_List.RankingMenu_List_C.ChangePageSoloRankingList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TopIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MaxNum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBClassType                            ClassType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URankingMenu_List_C::ChangePageSoloRankingList(int32 TopIndex, int32 MaxNum, ESBClassType ClassType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_List_C", "ChangePageSoloRankingList");

	Params::RankingMenu_List_C_ChangePageSoloRankingList Parms{};

	Parms.TopIndex = TopIndex;
	Parms.MaxNum = MaxNum;
	Parms.ClassType = ClassType;

	UObject::ProcessEvent(Func, &Parms);
}

}

