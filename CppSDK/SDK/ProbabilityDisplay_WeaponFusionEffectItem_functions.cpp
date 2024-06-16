#pragma once

 

// Package: ProbabilityDisplay_WeaponFusionEffectItem

#include "Basic.hpp"

#include "ProbabilityDisplay_WeaponFusionEffectItem_classes.hpp"
#include "ProbabilityDisplay_WeaponFusionEffectItem_parameters.hpp"


namespace SDK
{

// Function ProbabilityDisplay_WeaponFusionEffectItem.ProbabilityDisplay_WeaponFusionEffectItem_C.ExecuteUbergraph_ProbabilityDisplay_WeaponFusionEffectItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProbabilityDisplay_WeaponFusionEffectItem_C::ExecuteUbergraph_ProbabilityDisplay_WeaponFusionEffectItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_WeaponFusionEffectItem_C", "ExecuteUbergraph_ProbabilityDisplay_WeaponFusionEffectItem");

	Params::ProbabilityDisplay_WeaponFusionEffectItem_C_ExecuteUbergraph_ProbabilityDisplay_WeaponFusionEffectItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProbabilityDisplay_WeaponFusionEffectItem.ProbabilityDisplay_WeaponFusionEffectItem_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_EffectName                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   Param_EffectValue                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsDispPercentage                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UProbabilityDisplay_WeaponFusionEffectItem_C::Setup(const class FString& Param_EffectName, int32 Param_EffectValue, int32 Param_Index, bool IsDispPercentage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_WeaponFusionEffectItem_C", "Setup");

	Params::ProbabilityDisplay_WeaponFusionEffectItem_C_Setup Parms{};

	Parms.Param_EffectName = std::move(Param_EffectName);
	Parms.Param_EffectValue = Param_EffectValue;
	Parms.Param_Index = Param_Index;
	Parms.IsDispPercentage = IsDispPercentage;

	UObject::ProcessEvent(Func, &Parms);
}

}

