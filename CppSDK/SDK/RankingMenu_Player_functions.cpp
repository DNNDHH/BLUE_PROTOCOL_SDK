#pragma once

 

// Package: RankingMenu_Player

#include "Basic.hpp"

#include "RankingMenu_Player_classes.hpp"
#include "RankingMenu_Player_parameters.hpp"


namespace SDK
{

// Function RankingMenu_Player.RankingMenu_Player_C.ExecuteUbergraph_RankingMenu_Player
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URankingMenu_Player_C::ExecuteUbergraph_RankingMenu_Player(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_Player_C", "ExecuteUbergraph_RankingMenu_Player");

	Params::RankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RankingMenu_Player.RankingMenu_Player_C.OnIsGetPlayerProfileDetailMenuDataDelegate_Event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasSuccessful                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPlayerProfileMenuDetailData     PlayerProfileDetailMenuData                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URankingMenu_Player_C::OnIsGetPlayerProfileDetailMenuDataDelegate_Event(const bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_Player_C", "OnIsGetPlayerProfileDetailMenuDataDelegate_Event");

	Params::RankingMenu_Player_C_OnIsGetPlayerProfileDetailMenuDataDelegate_Event Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.PlayerProfileDetailMenuData = std::move(PlayerProfileDetailMenuData);
	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RankingMenu_Player.RankingMenu_Player_C.OnClose_Event
// (BlueprintCallable, BlueprintEvent)

void URankingMenu_Player_C::OnClose_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_Player_C", "OnClose_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RankingMenu_Player.RankingMenu_Player_C.BndEvt__SBButton_C_59_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void URankingMenu_Player_C::BndEvt__SBButton_C_59_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_Player_C", "BndEvt__SBButton_C_59_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RankingMenu_Player.RankingMenu_Player_C.DownLoadFaceImage_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           URL                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void URankingMenu_Player_C::DownLoadFaceImage_Event(const class FString& URL)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_Player_C", "DownLoadFaceImage_Event");

	Params::RankingMenu_Player_C_DownLoadFaceImage_Event Parms{};

	Parms.URL = std::move(URL);

	UObject::ProcessEvent(Func, &Parms);
}


// Function RankingMenu_Player.RankingMenu_Player_C.SetRankingData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CategoryRank                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRankingData                     RankingData                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    IsTimeAttack                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URankingMenu_Player_C::SetRankingData(int32 CategoryRank, const struct FRankingData& RankingData, bool IsTimeAttack)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_Player_C", "SetRankingData");

	Params::RankingMenu_Player_C_SetRankingData Parms{};

	Parms.CategoryRank = CategoryRank;
	Parms.RankingData = std::move(RankingData);
	Parms.IsTimeAttack = IsTimeAttack;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RankingMenu_Player.RankingMenu_Player_C.Set My Rank Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CategoryRank                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRankingData                     RankingData                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    IsTimeAttack                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsOutOfRank                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsRankingAggregation                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URankingMenu_Player_C::Set_My_Rank_Data(int32 CategoryRank, const struct FRankingData& RankingData, bool IsTimeAttack, bool IsOutOfRank, bool IsRankingAggregation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_Player_C", "Set My Rank Data");

	Params::RankingMenu_Player_C_Set_My_Rank_Data Parms{};

	Parms.CategoryRank = CategoryRank;
	Parms.RankingData = std::move(RankingData);
	Parms.IsTimeAttack = IsTimeAttack;
	Parms.IsOutOfRank = IsOutOfRank;
	Parms.IsRankingAggregation = IsRankingAggregation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RankingMenu_Player.RankingMenu_Player_C.SetEmptyMyRank
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void URankingMenu_Player_C::SetEmptyMyRank()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_Player_C", "SetEmptyMyRank");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RankingMenu_Player.RankingMenu_Player_C.GetShotID
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Short_Id                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void URankingMenu_Player_C::GetShotID(class FString* Short_Id)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingMenu_Player_C", "GetShotID");

	Params::RankingMenu_Player_C_GetShotID Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Short_Id != nullptr)
		*Short_Id = std::move(Parms.Short_Id);
}

}

