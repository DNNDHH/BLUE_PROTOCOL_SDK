#pragma once

 

// Package: PartyInfoWindow

#include "Basic.hpp"

#include "PartyInfoWindow_classes.hpp"
#include "PartyInfoWindow_parameters.hpp"


namespace SDK
{

// Function PartyInfoWindow.PartyInfoWindow_C.SetEditMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    EditMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartyInfoWindow_C::SetEditMode(bool EditMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyInfoWindow_C", "SetEditMode");

	Params::PartyInfoWindow_C_SetEditMode Parms{};

	Parms.EditMode = EditMode;

	UObject::ProcessEvent(Func, &Parms);
}

}

