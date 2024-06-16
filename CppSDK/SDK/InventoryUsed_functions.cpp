#pragma once

 

// Package: InventoryUsed

#include "Basic.hpp"

#include "InventoryUsed_classes.hpp"
#include "InventoryUsed_parameters.hpp"


namespace SDK
{

// Function InventoryUsed.InventoryUsed_C.SetUsed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bUsed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryUsed_C::SetUsed(bool bUsed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventoryUsed_C", "SetUsed");

	Params::InventoryUsed_C_SetUsed Parms{};

	Parms.bUsed = bUsed;

	UObject::ProcessEvent(Func, &Parms);
}

}

