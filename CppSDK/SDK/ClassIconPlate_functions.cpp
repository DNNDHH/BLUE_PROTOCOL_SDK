#pragma once

 

// Package: ClassIconPlate

#include "Basic.hpp"

#include "ClassIconPlate_classes.hpp"
#include "ClassIconPlate_parameters.hpp"


namespace SDK
{

// Function ClassIconPlate.ClassIconPlate_C.GetIconTexture
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UTexture2D*                       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UTexture2D* UClassIconPlate_C::GetIconTexture() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClassIconPlate_C", "GetIconTexture");

	Params::ClassIconPlate_C_GetIconTexture Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

