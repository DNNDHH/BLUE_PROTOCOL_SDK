#pragma once

 

// Package: BPI_PlayerController

#include "Basic.hpp"

#include "BPI_PlayerController_classes.hpp"
#include "BPI_PlayerController_parameters.hpp"


namespace SDK
{

// Function BPI_PlayerController.BPI_PlayerController_C.SetDebugMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDebugMenu_C*                     DebugMenu                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_PlayerController_C::SetDebugMenu(class UDebugMenu_C* DebugMenu)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_PlayerController_C", "SetDebugMenu");

	Params::BPI_PlayerController_C_SetDebugMenu Parms{};

	Parms.DebugMenu = DebugMenu;

	UObject::ProcessEvent(Func, &Parms);
}

}

