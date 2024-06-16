#pragma once

 

// Package: ProbabilityDisplay_WeaponCraftKillerPerkListItem

#include "Basic.hpp"

#include "ProbabilityDisplay_WeaponCraftKillerPerkListItem_classes.hpp"
#include "ProbabilityDisplay_WeaponCraftKillerPerkListItem_parameters.hpp"


namespace SDK
{

// Function ProbabilityDisplay_WeaponCraftKillerPerkListItem.ProbabilityDisplay_WeaponCraftKillerPerkListItem_C.ExecuteUbergraph_ProbabilityDisplay_WeaponCraftKillerPerkListItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProbabilityDisplay_WeaponCraftKillerPerkListItem_C::ExecuteUbergraph_ProbabilityDisplay_WeaponCraftKillerPerkListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_WeaponCraftKillerPerkListItem_C", "ExecuteUbergraph_ProbabilityDisplay_WeaponCraftKillerPerkListItem");

	Params::ProbabilityDisplay_WeaponCraftKillerPerkListItem_C_ExecuteUbergraph_ProbabilityDisplay_WeaponCraftKillerPerkListItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProbabilityDisplay_WeaponCraftKillerPerkListItem.ProbabilityDisplay_WeaponCraftKillerPerkListItem_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   GreatNumBottom                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   GreatNumUpper                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SuccessNumBottom                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SuccessNumUpper                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Rate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsDispPercentage                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UProbabilityDisplay_WeaponCraftKillerPerkListItem_C::Setup(const class FString& Param_Name, int32 GreatNumBottom, int32 GreatNumUpper, int32 SuccessNumBottom, int32 SuccessNumUpper, float Rate, int32 Param_Index, bool IsDispPercentage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_WeaponCraftKillerPerkListItem_C", "Setup");

	Params::ProbabilityDisplay_WeaponCraftKillerPerkListItem_C_Setup Parms{};

	Parms.Param_Name = std::move(Param_Name);
	Parms.GreatNumBottom = GreatNumBottom;
	Parms.GreatNumUpper = GreatNumUpper;
	Parms.SuccessNumBottom = SuccessNumBottom;
	Parms.SuccessNumUpper = SuccessNumUpper;
	Parms.Rate = Rate;
	Parms.Param_Index = Param_Index;
	Parms.IsDispPercentage = IsDispPercentage;

	UObject::ProcessEvent(Func, &Parms);
}

}

