#pragma once

 

// Package: WeaponSynthePart_MoneyWindow

#include "Basic.hpp"

#include "WeaponSynthePart_MoneyWindow_classes.hpp"
#include "WeaponSynthePart_MoneyWindow_parameters.hpp"


namespace SDK
{

// Function WeaponSynthePart_MoneyWindow.WeaponSynthePart_MoneyWindow_C.SetMoney
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_MoneyWindow_C::SetMoney(int32 InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_MoneyWindow_C", "SetMoney");

	Params::WeaponSynthePart_MoneyWindow_C_SetMoney Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_MoneyWindow.WeaponSynthePart_MoneyWindow_C.SetColorMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsLackChangeColor                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthePart_MoneyWindow_C::SetColorMode(bool bIsLackChangeColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_MoneyWindow_C", "SetColorMode");

	Params::WeaponSynthePart_MoneyWindow_C_SetColorMode Parms{};

	Parms.bIsLackChangeColor = bIsLackChangeColor;

	UObject::ProcessEvent(Func, &Parms);
}

}

