#pragma once

 

// Package: ShopMenu_CommonAbility

#include "Basic.hpp"

#include "ShopMenu_CommonAbility_classes.hpp"
#include "ShopMenu_CommonAbility_parameters.hpp"


namespace SDK
{

// Function ShopMenu_CommonAbility.ShopMenu_CommonAbility_C.SetPerkText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UShopMenu_CommonAbility_C::SetPerkText(const class FString& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenu_CommonAbility_C", "SetPerkText");

	Params::ShopMenu_CommonAbility_C_SetPerkText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenu_CommonAbility.ShopMenu_CommonAbility_C.SetPerkTextVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShopMenu_CommonAbility_C::SetPerkTextVisibility(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenu_CommonAbility_C", "SetPerkTextVisibility");

	Params::ShopMenu_CommonAbility_C_SetPerkTextVisibility Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}

}

