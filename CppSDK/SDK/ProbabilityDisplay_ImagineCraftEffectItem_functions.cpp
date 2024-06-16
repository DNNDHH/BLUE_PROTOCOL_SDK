#pragma once

 

// Package: ProbabilityDisplay_ImagineCraftEffectItem

#include "Basic.hpp"

#include "ProbabilityDisplay_ImagineCraftEffectItem_classes.hpp"
#include "ProbabilityDisplay_ImagineCraftEffectItem_parameters.hpp"


namespace SDK
{

// Function ProbabilityDisplay_ImagineCraftEffectItem.ProbabilityDisplay_ImagineCraftEffectItem_C.ExecuteUbergraph_ProbabilityDisplay_ImagineCraftEffectItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProbabilityDisplay_ImagineCraftEffectItem_C::ExecuteUbergraph_ProbabilityDisplay_ImagineCraftEffectItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_ImagineCraftEffectItem_C", "ExecuteUbergraph_ProbabilityDisplay_ImagineCraftEffectItem");

	Params::ProbabilityDisplay_ImagineCraftEffectItem_C_ExecuteUbergraph_ProbabilityDisplay_ImagineCraftEffectItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProbabilityDisplay_ImagineCraftEffectItem.ProbabilityDisplay_ImagineCraftEffectItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UProbabilityDisplay_ImagineCraftEffectItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_ImagineCraftEffectItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

