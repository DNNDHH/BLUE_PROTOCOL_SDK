#pragma once

 

// Package: BuffGauge

#include "Basic.hpp"

#include "BuffGauge_classes.hpp"
#include "BuffGauge_parameters.hpp"


namespace SDK
{

// Function BuffGauge.BuffGauge_C.PlayAnim
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InStartTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InAnimSpeed                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuffGauge_C::PlayAnim(float InStartTime, float InAnimSpeed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuffGauge_C", "PlayAnim");

	Params::BuffGauge_C_PlayAnim Parms{};

	Parms.InStartTime = InStartTime;
	Parms.InAnimSpeed = InAnimSpeed;

	UObject::ProcessEvent(Func, &Parms);
}

}

