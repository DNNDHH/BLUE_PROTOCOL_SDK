#pragma once

 

// Package: ShortcutRing_KeyGuidePlate

#include "Basic.hpp"

#include "ShortcutRing_KeyGuidePlate_classes.hpp"
#include "ShortcutRing_KeyGuidePlate_parameters.hpp"


namespace SDK
{

// Function ShortcutRing_KeyGuidePlate.ShortcutRing_KeyGuidePlate_C.OnSetup
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UShortcutRing_KeyGuidePlate_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_KeyGuidePlate_C", "OnSetup");

	UObject::ProcessEvent(Func, nullptr);
}

}

