#pragma once

 

// Package: MouseCursorModeIcon

#include "Basic.hpp"

#include "MouseCursorModeIcon_classes.hpp"
#include "MouseCursorModeIcon_parameters.hpp"


namespace SDK
{

// Function MouseCursorModeIcon.MouseCursorModeIcon_C.SetSwitch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMouseCursorModeIcon_C::SetSwitch(int32 ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MouseCursorModeIcon_C", "SetSwitch");

	Params::MouseCursorModeIcon_C_SetSwitch Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);
}

}

