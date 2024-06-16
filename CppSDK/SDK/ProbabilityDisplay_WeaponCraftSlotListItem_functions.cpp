#pragma once

 

// Package: ProbabilityDisplay_WeaponCraftSlotListItem

#include "Basic.hpp"

#include "ProbabilityDisplay_WeaponCraftSlotListItem_classes.hpp"
#include "ProbabilityDisplay_WeaponCraftSlotListItem_parameters.hpp"


namespace SDK
{

// Function ProbabilityDisplay_WeaponCraftSlotListItem.ProbabilityDisplay_WeaponCraftSlotListItem_C.ExecuteUbergraph_ProbabilityDisplay_WeaponCraftSlotListItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProbabilityDisplay_WeaponCraftSlotListItem_C::ExecuteUbergraph_ProbabilityDisplay_WeaponCraftSlotListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_WeaponCraftSlotListItem_C", "ExecuteUbergraph_ProbabilityDisplay_WeaponCraftSlotListItem");

	Params::ProbabilityDisplay_WeaponCraftSlotListItem_C_ExecuteUbergraph_ProbabilityDisplay_WeaponCraftSlotListItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProbabilityDisplay_WeaponCraftSlotListItem.ProbabilityDisplay_WeaponCraftSlotListItem_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SlotNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   GreatSuccessRate                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SuccessRate                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProbabilityDisplay_WeaponCraftSlotListItem_C::Setup(int32 SlotNum, int32 GreatSuccessRate, int32 SuccessRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_WeaponCraftSlotListItem_C", "Setup");

	Params::ProbabilityDisplay_WeaponCraftSlotListItem_C_Setup Parms{};

	Parms.SlotNum = SlotNum;
	Parms.GreatSuccessRate = GreatSuccessRate;
	Parms.SuccessRate = SuccessRate;

	UObject::ProcessEvent(Func, &Parms);
}

}

