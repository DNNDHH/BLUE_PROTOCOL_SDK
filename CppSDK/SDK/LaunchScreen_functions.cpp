#pragma once

 

// Package: LaunchScreen

#include "Basic.hpp"

#include "LaunchScreen_classes.hpp"
#include "LaunchScreen_parameters.hpp"


namespace SDK
{

// Function LaunchScreen.LaunchScreen_C.UpdateAspectRate
// (Public, BlueprintCallable, BlueprintEvent)

void ULaunchScreen_C::UpdateAspectRate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LaunchScreen_C", "UpdateAspectRate");

	UObject::ProcessEvent(Func, nullptr);
}

}

