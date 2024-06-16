#pragma once

 

// Package: VSpacer

#include "Basic.hpp"

#include "VSpacer_classes.hpp"
#include "VSpacer_parameters.hpp"


namespace SDK
{

// Function VSpacer.VSpacer_C.SetSpace
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   YOffset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVSpacer_C::SetSpace(float YOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VSpacer_C", "SetSpace");

	Params::VSpacer_C_SetSpace Parms{};

	Parms.YOffset = YOffset;

	UObject::ProcessEvent(Func, &Parms);
}

}

