#pragma once

 

// Package: BP_TreasureBoxAuthor

#include "Basic.hpp"

#include "BP_TreasureBoxAuthor_classes.hpp"
#include "BP_TreasureBoxAuthor_parameters.hpp"


namespace SDK
{

// Function BP_TreasureBoxAuthor.BP_TreasureBoxAuthor_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_TreasureBoxAuthor_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TreasureBoxAuthor_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

