#pragma once

 

// Package: ComboHUD

#include "Basic.hpp"

#include "ComboHUD_classes.hpp"
#include "ComboHUD_parameters.hpp"


namespace SDK
{

// Function ComboHUD.ComboHUD_C.ShowCombo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Combo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBClassType                            ClassType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComboHUD_C::ShowCombo(int32 Combo, ESBClassType ClassType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ComboHUD_C", "ShowCombo");

	Params::ComboHUD_C_ShowCombo Parms{};

	Parms.Combo = Combo;
	Parms.ClassType = ClassType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ComboHUD.ComboHUD_C.SetColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                      InColor                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UComboHUD_C::SetColor(const struct FSlateColor& InColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ComboHUD_C", "SetColor");

	Params::ComboHUD_C_SetColor Parms{};

	Parms.InColor = std::move(InColor);

	UObject::ProcessEvent(Func, &Parms);
}

}

