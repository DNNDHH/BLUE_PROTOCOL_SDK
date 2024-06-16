#pragma once

 

// Package: IconFacility

#include "Basic.hpp"

#include "IconFacility_classes.hpp"
#include "IconFacility_parameters.hpp"


namespace SDK
{

// Function IconFacility.IconFacility_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UIconFacility_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IconFacility_C", "OnSetup");

	UObject::ProcessEvent(Func, nullptr);
}

}

