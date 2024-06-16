#pragma once

 

// Package: CraftedWeaponLIstitem

#include "Basic.hpp"

#include "CraftedWeaponLIstitem_classes.hpp"
#include "CraftedWeaponLIstitem_parameters.hpp"


namespace SDK
{

// Function CraftedWeaponLIstitem.CraftedWeaponLIstitem_C.ExecuteUbergraph_CraftedWeaponLIstitem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCraftedWeaponLIstitem_C::ExecuteUbergraph_CraftedWeaponLIstitem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftedWeaponLIstitem_C", "ExecuteUbergraph_CraftedWeaponLIstitem");

	Params::CraftedWeaponLIstitem_C_ExecuteUbergraph_CraftedWeaponLIstitem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftedWeaponLIstitem.CraftedWeaponLIstitem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCraftedWeaponLIstitem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftedWeaponLIstitem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftedWeaponLIstitem.CraftedWeaponLIstitem_C.Update All Text Critical Color
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCraftedWeaponLIstitem_C::Update_All_Text_Critical_Color()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftedWeaponLIstitem_C", "Update All Text Critical Color");

	UObject::ProcessEvent(Func, nullptr);
}

}

