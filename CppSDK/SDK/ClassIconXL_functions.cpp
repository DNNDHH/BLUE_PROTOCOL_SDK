#pragma once

 

// Package: ClassIconXL

#include "Basic.hpp"

#include "ClassIconXL_classes.hpp"
#include "ClassIconXL_parameters.hpp"


namespace SDK
{

// Function ClassIconXL.ClassIconXL_C.GetIconTexture
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UTexture2D*                       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UTexture2D* UClassIconXL_C::GetIconTexture() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClassIconXL_C", "GetIconTexture");

	Params::ClassIconXL_C_GetIconTexture Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

