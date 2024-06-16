#pragma once

 

// Package: EquipLevelView

#include "Basic.hpp"

#include "EquipLevelView_classes.hpp"
#include "EquipLevelView_parameters.hpp"


namespace SDK
{

// Function EquipLevelView.EquipLevelView_C.ExecuteUbergraph_EquipLevelView
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipLevelView_C::ExecuteUbergraph_EquipLevelView(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipLevelView_C", "ExecuteUbergraph_EquipLevelView");

	Params::EquipLevelView_C_ExecuteUbergraph_EquipLevelView Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipLevelView.EquipLevelView_C.SetOwnItemData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     ItemData                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UEquipLevelView_C::SetOwnItemData(const struct FOwnItemInfo& ItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipLevelView_C", "SetOwnItemData");

	Params::EquipLevelView_C_SetOwnItemData Parms{};

	Parms.ItemData = std::move(ItemData);

	UObject::ProcessEvent(Func, &Parms);
}

}

