#pragma once

 

// Package: BP_InteractionWarpGoal

#include "Basic.hpp"

#include "BP_InteractionWarpGoal_classes.hpp"
#include "BP_InteractionWarpGoal_parameters.hpp"


namespace SDK
{

// Function BP_InteractionWarpGoal.BP_InteractionWarpGoal_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_InteractionWarpGoal_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_InteractionWarpGoal_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

