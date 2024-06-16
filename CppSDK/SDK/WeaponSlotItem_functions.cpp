#pragma once

 

// Package: WeaponSlotItem

#include "Basic.hpp"

#include "WeaponSlotItem_classes.hpp"
#include "WeaponSlotItem_parameters.hpp"


namespace SDK
{

// Function WeaponSlotItem.WeaponSlotItem_C.ExecuteUbergraph_WeaponSlotItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSlotItem_C::ExecuteUbergraph_WeaponSlotItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSlotItem_C", "ExecuteUbergraph_WeaponSlotItem");

	Params::WeaponSlotItem_C_ExecuteUbergraph_WeaponSlotItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSlotItem.WeaponSlotItem_C.SetViewMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EWeaponSlotType                         ViewType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSlotItem_C::SetViewMode(EWeaponSlotType ViewType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSlotItem_C", "SetViewMode");

	Params::WeaponSlotItem_C_SetViewMode Parms{};

	Parms.ViewType = ViewType;

	UObject::ProcessEvent(Func, &Parms);
}

}

