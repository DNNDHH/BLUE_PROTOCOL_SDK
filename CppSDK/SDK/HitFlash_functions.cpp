#pragma once

 

// Package: HitFlash

#include "Basic.hpp"

#include "HitFlash_classes.hpp"
#include "HitFlash_parameters.hpp"


namespace SDK
{

// Function HitFlash.HitFlash_C.GetVisibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UHitFlash_C::GetVisibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HitFlash_C", "GetVisibility_0");

	Params::HitFlash_C_GetVisibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

