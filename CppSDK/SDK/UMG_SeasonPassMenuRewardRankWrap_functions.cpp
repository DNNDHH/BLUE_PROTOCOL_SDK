#pragma once

 

// Package: UMG_SeasonPassMenuRewardRankWrap

#include "Basic.hpp"

#include "UMG_SeasonPassMenuRewardRankWrap_classes.hpp"
#include "UMG_SeasonPassMenuRewardRankWrap_parameters.hpp"


namespace SDK
{

// Function UMG_SeasonPassMenuRewardRankWrap.UMG_SeasonPassMenuRewardRankWrap_C.OnClickItemIcon__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBSeasonPassMenuRewardItemData*  RewardItemData                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassMenuRewardRankWrap_C::OnClickItemIcon__DelegateSignature(class USBSeasonPassMenuRewardItemData* RewardItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuRewardRankWrap_C", "OnClickItemIcon__DelegateSignature");

	Params::UMG_SeasonPassMenuRewardRankWrap_C_OnClickItemIcon__DelegateSignature Parms{};

	Parms.RewardItemData = RewardItemData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassMenuRewardRankWrap.UMG_SeasonPassMenuRewardRankWrap_C.ExecuteUbergraph_UMG_SeasonPassMenuRewardRankWrap
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassMenuRewardRankWrap_C::ExecuteUbergraph_UMG_SeasonPassMenuRewardRankWrap(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuRewardRankWrap_C", "ExecuteUbergraph_UMG_SeasonPassMenuRewardRankWrap");

	Params::UMG_SeasonPassMenuRewardRankWrap_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardRankWrap Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassMenuRewardRankWrap.UMG_SeasonPassMenuRewardRankWrap_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_SeasonPassMenuRewardRankWrap_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuRewardRankWrap_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassMenuRewardRankWrap.UMG_SeasonPassMenuRewardRankWrap_C.OnUpdateData
// (BlueprintCallable, BlueprintEvent)

void UUMG_SeasonPassMenuRewardRankWrap_C::OnUpdateData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuRewardRankWrap_C", "OnUpdateData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassMenuRewardRankWrap.UMG_SeasonPassMenuRewardRankWrap_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBSeasonPassMenuRewardItemData*  RewardItemData                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassMenuRewardRankWrap_C::CustomEvent_0(class USBSeasonPassMenuRewardItemData* RewardItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuRewardRankWrap_C", "CustomEvent_0");

	Params::UMG_SeasonPassMenuRewardRankWrap_C_CustomEvent_0 Parms{};

	Parms.RewardItemData = RewardItemData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassMenuRewardRankWrap.UMG_SeasonPassMenuRewardRankWrap_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBSeasonPassMenuRewardRankData*  Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Duration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassMenuRewardRankWrap_C::SetData(class USBSeasonPassMenuRewardRankData* Data, float Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuRewardRankWrap_C", "SetData");

	Params::UMG_SeasonPassMenuRewardRankWrap_C_SetData Parms{};

	Parms.Data = Data;
	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);
}

}

