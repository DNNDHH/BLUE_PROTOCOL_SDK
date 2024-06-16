#pragma once

 

// Package: WeaponButtonViewPerkListItem

#include "Basic.hpp"

#include "WeaponButtonViewPerkListItem_classes.hpp"
#include "WeaponButtonViewPerkListItem_parameters.hpp"


namespace SDK
{

// Function WeaponButtonViewPerkListItem.WeaponButtonViewPerkListItem_C.ExecuteUbergraph_WeaponButtonViewPerkListItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponButtonViewPerkListItem_C::ExecuteUbergraph_WeaponButtonViewPerkListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponButtonViewPerkListItem_C", "ExecuteUbergraph_WeaponButtonViewPerkListItem");

	Params::WeaponButtonViewPerkListItem_C_ExecuteUbergraph_WeaponButtonViewPerkListItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponButtonViewPerkListItem.WeaponButtonViewPerkListItem_C.Set Perk Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBCharacterWeaponPerkData       PerkData                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWeaponButtonViewPerkListItem_C::Set_Perk_Data(const struct FSBCharacterWeaponPerkData& PerkData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponButtonViewPerkListItem_C", "Set Perk Data");

	Params::WeaponButtonViewPerkListItem_C_Set_Perk_Data Parms{};

	Parms.PerkData = std::move(PerkData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponButtonViewPerkListItem.WeaponButtonViewPerkListItem_C.Set EmptySlot
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponButtonViewPerkListItem_C::Set_EmptySlot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponButtonViewPerkListItem_C", "Set EmptySlot");

	UObject::ProcessEvent(Func, nullptr);
}

}

