#pragma once

 

// Package: CommonBattleImagineUniqueStatusSets

#include "Basic.hpp"

#include "CommonBattleImagineUniqueStatusSets_classes.hpp"
#include "CommonBattleImagineUniqueStatusSets_parameters.hpp"


namespace SDK
{

// Function CommonBattleImagineUniqueStatusSets.CommonBattleImagineUniqueStatusSets_C.ExecuteUbergraph_CommonBattleImagineUniqueStatusSets
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonBattleImagineUniqueStatusSets_C::ExecuteUbergraph_CommonBattleImagineUniqueStatusSets(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonBattleImagineUniqueStatusSets_C", "ExecuteUbergraph_CommonBattleImagineUniqueStatusSets");

	Params::CommonBattleImagineUniqueStatusSets_C_ExecuteUbergraph_CommonBattleImagineUniqueStatusSets Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonBattleImagineUniqueStatusSets.CommonBattleImagineUniqueStatusSets_C.SetPossessionInfoVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonBattleImagineUniqueStatusSets_C::SetPossessionInfoVisibility(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonBattleImagineUniqueStatusSets_C", "SetPossessionInfoVisibility");

	Params::CommonBattleImagineUniqueStatusSets_C_SetPossessionInfoVisibility Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonBattleImagineUniqueStatusSets.CommonBattleImagineUniqueStatusSets_C.SetMasterData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterImagine                 SBMasterImagine                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                           UniqueId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCommonBattleImagineUniqueStatusSets_C::SetMasterData(const struct FSBMasterImagine& SBMasterImagine, const class FString& UniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonBattleImagineUniqueStatusSets_C", "SetMasterData");

	Params::CommonBattleImagineUniqueStatusSets_C_SetMasterData Parms{};

	Parms.SBMasterImagine = std::move(SBMasterImagine);
	Parms.UniqueId = std::move(UniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonBattleImagineUniqueStatusSets.CommonBattleImagineUniqueStatusSets_C.SetMasterDataById
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonBattleImagineUniqueStatusSets_C::SetMasterDataById(int32 ItemIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonBattleImagineUniqueStatusSets_C", "SetMasterDataById");

	Params::CommonBattleImagineUniqueStatusSets_C_SetMasterDataById Parms{};

	Parms.ItemIndex = ItemIndex;

	UObject::ProcessEvent(Func, &Parms);
}

}

