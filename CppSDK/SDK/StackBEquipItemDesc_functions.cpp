#pragma once

 

// Package: StackBEquipItemDesc

#include "Basic.hpp"

#include "StackBEquipItemDesc_classes.hpp"
#include "StackBEquipItemDesc_parameters.hpp"


namespace SDK
{

// Function StackBEquipItemDesc.StackBEquipItemDesc_C.ExecuteUbergraph_StackBEquipItemDesc
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStackBEquipItemDesc_C::ExecuteUbergraph_StackBEquipItemDesc(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackBEquipItemDesc_C", "ExecuteUbergraph_StackBEquipItemDesc");

	Params::StackBEquipItemDesc_C_ExecuteUbergraph_StackBEquipItemDesc Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StackBEquipItemDesc.StackBEquipItemDesc_C.Set OwnItemData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     OwnItemInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UStackBEquipItemDesc_C::Set_OwnItemData(const struct FOwnItemInfo& OwnItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackBEquipItemDesc_C", "Set OwnItemData");

	Params::StackBEquipItemDesc_C_Set_OwnItemData Parms{};

	Parms.OwnItemInfo = std::move(OwnItemInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function StackBEquipItemDesc.StackBEquipItemDesc_C.ApplyWeaponStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     OwnItemInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UStackBEquipItemDesc_C::ApplyWeaponStatus(const struct FOwnItemInfo& OwnItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackBEquipItemDesc_C", "ApplyWeaponStatus");

	Params::StackBEquipItemDesc_C_ApplyWeaponStatus Parms{};

	Parms.OwnItemInfo = std::move(OwnItemInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function StackBEquipItemDesc.StackBEquipItemDesc_C.ApplyImagineStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     OwnItemInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UStackBEquipItemDesc_C::ApplyImagineStatus(const struct FOwnItemInfo& OwnItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackBEquipItemDesc_C", "ApplyImagineStatus");

	Params::StackBEquipItemDesc_C_ApplyImagineStatus Parms{};

	Parms.OwnItemInfo = std::move(OwnItemInfo);

	UObject::ProcessEvent(Func, &Parms);
}

}

