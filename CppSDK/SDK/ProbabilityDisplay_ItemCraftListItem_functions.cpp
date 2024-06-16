#pragma once

 

// Package: ProbabilityDisplay_ItemCraftListItem

#include "Basic.hpp"

#include "ProbabilityDisplay_ItemCraftListItem_classes.hpp"
#include "ProbabilityDisplay_ItemCraftListItem_parameters.hpp"


namespace SDK
{

// Function ProbabilityDisplay_ItemCraftListItem.ProbabilityDisplay_ItemCraftListItem_C.ExecuteUbergraph_ProbabilityDisplay_ItemCraftListItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProbabilityDisplay_ItemCraftListItem_C::ExecuteUbergraph_ProbabilityDisplay_ItemCraftListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_ItemCraftListItem_C", "ExecuteUbergraph_ProbabilityDisplay_ItemCraftListItem");

	Params::ProbabilityDisplay_ItemCraftListItem_C_ExecuteUbergraph_ProbabilityDisplay_ItemCraftListItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProbabilityDisplay_ItemCraftListItem.ProbabilityDisplay_ItemCraftListItem_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NormalNum                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   GreatNumBottom                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   GreatNumUpper                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProbabilityDisplay_ItemCraftListItem_C::Setup(int32 NormalNum, int32 GreatNumBottom, int32 GreatNumUpper)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_ItemCraftListItem_C", "Setup");

	Params::ProbabilityDisplay_ItemCraftListItem_C_Setup Parms{};

	Parms.NormalNum = NormalNum;
	Parms.GreatNumBottom = GreatNumBottom;
	Parms.GreatNumUpper = GreatNumUpper;

	UObject::ProcessEvent(Func, &Parms);
}

}

