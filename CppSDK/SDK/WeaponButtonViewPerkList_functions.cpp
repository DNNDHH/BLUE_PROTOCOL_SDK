#pragma once

 

// Package: WeaponButtonViewPerkList

#include "Basic.hpp"

#include "WeaponButtonViewPerkList_classes.hpp"
#include "WeaponButtonViewPerkList_parameters.hpp"


namespace SDK
{

// Function WeaponButtonViewPerkList.WeaponButtonViewPerkList_C.SetPerkData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBWeaponItemData                WeaponData                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWeaponButtonViewPerkList_C::SetPerkData(const struct FSBWeaponItemData& WeaponData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponButtonViewPerkList_C", "SetPerkData");

	Params::WeaponButtonViewPerkList_C_SetPerkData Parms{};

	Parms.WeaponData = std::move(WeaponData);

	UObject::ProcessEvent(Func, &Parms);
}

}

