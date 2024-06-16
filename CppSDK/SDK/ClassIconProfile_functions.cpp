#pragma once

 

// Package: ClassIconProfile

#include "Basic.hpp"

#include "ClassIconProfile_classes.hpp"
#include "ClassIconProfile_parameters.hpp"


namespace SDK
{

// Function ClassIconProfile.ClassIconProfile_C.GetIconTexture
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UTexture2D*                       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UTexture2D* UClassIconProfile_C::GetIconTexture() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClassIconProfile_C", "GetIconTexture");

	Params::ClassIconProfile_C_GetIconTexture Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

