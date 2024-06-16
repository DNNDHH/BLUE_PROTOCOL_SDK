#pragma once

 

// Package: BP_PlayerSelectCaptureCharacter

#include "Basic.hpp"

#include "BP_PlayerSelectCaptureCharacter_classes.hpp"


namespace SDK
{

// Function BP_PlayerSelectCaptureCharacter.BP_PlayerSelectCaptureCharacter_C.NewFunction_0
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerSelectCaptureCharacter_C::NewFunction_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSelectCaptureCharacter_C", "NewFunction_0");

	UObject::ProcessEvent(Func, nullptr);
}

}

