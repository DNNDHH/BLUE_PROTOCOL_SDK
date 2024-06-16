#pragma once

 

// Package: WeaponSynthePart_TagChange

#include "Basic.hpp"

#include "WeaponSynthePart_TagChange_classes.hpp"
#include "WeaponSynthePart_TagChange_parameters.hpp"


namespace SDK
{

// Function WeaponSynthePart_TagChange.WeaponSynthePart_TagChange_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlotDataChangeType                     Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_TagChange_C::Setup(ESlotDataChangeType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_TagChange_C", "Setup");

	Params::WeaponSynthePart_TagChange_C_Setup Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}

}

