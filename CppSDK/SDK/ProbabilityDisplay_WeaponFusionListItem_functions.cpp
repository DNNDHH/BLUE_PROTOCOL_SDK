#pragma once

 

// Package: ProbabilityDisplay_WeaponFusionListItem

#include "Basic.hpp"

#include "ProbabilityDisplay_WeaponFusionListItem_classes.hpp"
#include "ProbabilityDisplay_WeaponFusionListItem_parameters.hpp"


namespace SDK
{

// Function ProbabilityDisplay_WeaponFusionListItem.ProbabilityDisplay_WeaponFusionListItem_C.ExecuteUbergraph_ProbabilityDisplay_WeaponFusionListItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProbabilityDisplay_WeaponFusionListItem_C::ExecuteUbergraph_ProbabilityDisplay_WeaponFusionListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_WeaponFusionListItem_C", "ExecuteUbergraph_ProbabilityDisplay_WeaponFusionListItem");

	Params::ProbabilityDisplay_WeaponFusionListItem_C_ExecuteUbergraph_ProbabilityDisplay_WeaponFusionListItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProbabilityDisplay_WeaponFusionListItem.ProbabilityDisplay_WeaponFusionListItem_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBMasterFusionItem              FusionItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UProbabilityDisplay_WeaponFusionListItem_C::Setup(int32 Param_Index, const struct FSBMasterFusionItem& FusionItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_WeaponFusionListItem_C", "Setup");

	Params::ProbabilityDisplay_WeaponFusionListItem_C_Setup Parms{};

	Parms.Param_Index = Param_Index;
	Parms.FusionItem = std::move(FusionItem);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProbabilityDisplay_WeaponFusionListItem.ProbabilityDisplay_WeaponFusionListItem_C.SetupFusionItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBMasterFusionItem              FusionItem                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UProbabilityDisplay_WeaponFusionListItem_C::SetupFusionItem(int32 Param_Index, const struct FSBMasterFusionItem& FusionItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_WeaponFusionListItem_C", "SetupFusionItem");

	Params::ProbabilityDisplay_WeaponFusionListItem_C_SetupFusionItem Parms{};

	Parms.Param_Index = Param_Index;
	Parms.FusionItem = std::move(FusionItem);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProbabilityDisplay_WeaponFusionListItem.ProbabilityDisplay_WeaponFusionListItem_C.SetupTuning
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBSyntheAbilityData             SBSyntheAbilityData                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// float                                   Rate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProbabilityDisplay_WeaponFusionListItem_C::SetupTuning(int32 Param_Index, const struct FSBSyntheAbilityData& SBSyntheAbilityData, float Rate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_WeaponFusionListItem_C", "SetupTuning");

	Params::ProbabilityDisplay_WeaponFusionListItem_C_SetupTuning Parms{};

	Parms.Param_Index = Param_Index;
	Parms.SBSyntheAbilityData = std::move(SBSyntheAbilityData);
	Parms.Rate = Rate;

	UObject::ProcessEvent(Func, &Parms);
}

}

