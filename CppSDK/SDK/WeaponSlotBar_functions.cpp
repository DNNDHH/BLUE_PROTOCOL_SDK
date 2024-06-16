#pragma once

 

// Package: WeaponSlotBar

#include "Basic.hpp"

#include "WeaponSlotBar_classes.hpp"
#include "WeaponSlotBar_parameters.hpp"


namespace SDK
{

// Function WeaponSlotBar.WeaponSlotBar_C.ExecuteUbergraph_WeaponSlotBar
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSlotBar_C::ExecuteUbergraph_WeaponSlotBar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSlotBar_C", "ExecuteUbergraph_WeaponSlotBar");

	Params::WeaponSlotBar_C_ExecuteUbergraph_WeaponSlotBar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSlotBar.WeaponSlotBar_C.SetSlotData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_OpenSlot                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_UseSlot                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSlotBar_C::SetSlotData(int32 Param_OpenSlot, int32 Param_UseSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSlotBar_C", "SetSlotData");

	Params::WeaponSlotBar_C_SetSlotData Parms{};

	Parms.Param_OpenSlot = Param_OpenSlot;
	Parms.Param_UseSlot = Param_UseSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSlotBar.WeaponSlotBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWeaponSlotBar_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSlotBar_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

