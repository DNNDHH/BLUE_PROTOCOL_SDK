#pragma once

 

// Package: CommonToolTip_AbilityPerk

#include "Basic.hpp"

#include "CommonToolTip_AbilityPerk_classes.hpp"
#include "CommonToolTip_AbilityPerk_parameters.hpp"


namespace SDK
{

// Function CommonToolTip_AbilityPerk.CommonToolTip_AbilityPerk_C.SetAbilityNameText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommonToolTip_AbilityPerk_C::SetAbilityNameText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonToolTip_AbilityPerk_C", "SetAbilityNameText");

	Params::CommonToolTip_AbilityPerk_C_SetAbilityNameText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonToolTip_AbilityPerk.CommonToolTip_AbilityPerk_C.SetAbilityDescText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommonToolTip_AbilityPerk_C::SetAbilityDescText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonToolTip_AbilityPerk_C", "SetAbilityDescText");

	Params::CommonToolTip_AbilityPerk_C_SetAbilityDescText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonToolTip_AbilityPerk.CommonToolTip_AbilityPerk_C.SetAbilityPerkID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PerkId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonToolTip_AbilityPerk_C::SetAbilityPerkID(int32 PerkId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonToolTip_AbilityPerk_C", "SetAbilityPerkID");

	Params::CommonToolTip_AbilityPerk_C_SetAbilityPerkID Parms{};

	Parms.PerkId = PerkId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonToolTip_AbilityPerk.CommonToolTip_AbilityPerk_C.SetWeaponPerkData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBCharacterWeaponPerkData       SBCharacterWeaponPerkData                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UCommonToolTip_AbilityPerk_C::SetWeaponPerkData(const struct FSBCharacterWeaponPerkData& SBCharacterWeaponPerkData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonToolTip_AbilityPerk_C", "SetWeaponPerkData");

	Params::CommonToolTip_AbilityPerk_C_SetWeaponPerkData Parms{};

	Parms.SBCharacterWeaponPerkData = std::move(SBCharacterWeaponPerkData);

	UObject::ProcessEvent(Func, &Parms);
}

}

