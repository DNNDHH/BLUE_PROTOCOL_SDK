#pragma once

 

// Package: ProbabilityDisplay_ImagineCraftListItem

#include "Basic.hpp"

#include "ProbabilityDisplay_ImagineCraftListItem_classes.hpp"
#include "ProbabilityDisplay_ImagineCraftListItem_parameters.hpp"


namespace SDK
{

// Function ProbabilityDisplay_ImagineCraftListItem.ProbabilityDisplay_ImagineCraftListItem_C.ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProbabilityDisplay_ImagineCraftListItem_C::ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_ImagineCraftListItem_C", "ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem");

	Params::ProbabilityDisplay_ImagineCraftListItem_C_ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProbabilityDisplay_ImagineCraftListItem.ProbabilityDisplay_ImagineCraftListItem_C.SetupA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PerkId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Rate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProbabilityDisplay_ImagineCraftListItem_C::SetupA(int32 PerkId, float Rate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_ImagineCraftListItem_C", "SetupA");

	Params::ProbabilityDisplay_ImagineCraftListItem_C_SetupA Parms{};

	Parms.PerkId = PerkId;
	Parms.Rate = Rate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProbabilityDisplay_ImagineCraftListItem.ProbabilityDisplay_ImagineCraftListItem_C.Setup
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PickId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Rate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Num                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProbabilityDisplay_ImagineCraftListItem_C::Setup(int32 PickId, float Rate, int32 Param_Index, int32* Num)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_ImagineCraftListItem_C", "Setup");

	Params::ProbabilityDisplay_ImagineCraftListItem_C_Setup Parms{};

	Parms.PickId = PickId;
	Parms.Rate = Rate;
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);

	if (Num != nullptr)
		*Num = Parms.Num;
}

}

