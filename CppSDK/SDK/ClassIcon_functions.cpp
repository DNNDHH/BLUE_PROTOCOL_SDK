#pragma once

 

// Package: ClassIcon

#include "Basic.hpp"

#include "ClassIcon_classes.hpp"
#include "ClassIcon_parameters.hpp"


namespace SDK
{

// Function ClassIcon.ClassIcon_C.GetIconTexture
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UTexture2D*                       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UTexture2D* UClassIcon_C::GetIconTexture() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClassIcon_C", "GetIconTexture");

	Params::ClassIcon_C_GetIconTexture Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

