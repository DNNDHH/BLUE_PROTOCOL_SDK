#pragma once

 

// Package: WeaponSynthePart_SlotIcon

#include "Basic.hpp"

#include "WeaponSynthePart_SlotIcon_classes.hpp"
#include "WeaponSynthePart_SlotIcon_parameters.hpp"


namespace SDK
{

// Function WeaponSynthePart_SlotIcon.WeaponSynthePart_SlotIcon_C.SetSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SlotNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_SlotIcon_C::SetSlot(int32 SlotNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_SlotIcon_C", "SetSlot");

	Params::WeaponSynthePart_SlotIcon_C_SetSlot Parms{};

	Parms.SlotNum = SlotNum;

	UObject::ProcessEvent(Func, &Parms);
}

}

