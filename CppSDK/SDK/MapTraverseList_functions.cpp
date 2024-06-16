#pragma once

 

// Package: MapTraverseList

#include "Basic.hpp"

#include "MapTraverseList_classes.hpp"
#include "MapTraverseList_parameters.hpp"


namespace SDK
{

// Function MapTraverseList.MapTraverseList_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMapTraverseList_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapTraverseList_C", "Setup");

	UObject::ProcessEvent(Func, nullptr);
}

}

