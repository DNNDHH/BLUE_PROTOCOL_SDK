#pragma once

 

// Package: Desc_WeaponSynthe

#include "Basic.hpp"

#include "Desc_WeaponSynthe_classes.hpp"
#include "Desc_WeaponSynthe_parameters.hpp"


namespace SDK
{

// Function Desc_WeaponSynthe.Desc_WeaponSynthe_C.SetWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     WeaponInfos                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UDesc_WeaponSynthe_C::SetWeapon(const struct FOwnItemInfo& WeaponInfos)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Desc_WeaponSynthe_C", "SetWeapon");

	Params::Desc_WeaponSynthe_C_SetWeapon Parms{};

	Parms.WeaponInfos = std::move(WeaponInfos);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Desc_WeaponSynthe.Desc_WeaponSynthe_C.SetFusionItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDesc_WeaponSynthe_C::SetFusionItem(int32 ItemId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Desc_WeaponSynthe_C", "SetFusionItem");

	Params::Desc_WeaponSynthe_C_SetFusionItem Parms{};

	Parms.ItemId = ItemId;

	UObject::ProcessEvent(Func, &Parms);
}

}

