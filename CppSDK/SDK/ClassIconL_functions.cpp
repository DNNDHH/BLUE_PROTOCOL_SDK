#pragma once

 

// Package: ClassIconL

#include "Basic.hpp"

#include "ClassIconL_classes.hpp"
#include "ClassIconL_parameters.hpp"


namespace SDK
{

// Function ClassIconL.ClassIconL_C.UpdateShadow
// (Private, BlueprintCallable, BlueprintEvent)

void UClassIconL_C::UpdateShadow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClassIconL_C", "UpdateShadow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ClassIconL.ClassIconL_C.OnUpdateClassIcon
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UClassIconL_C::OnUpdateClassIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClassIconL_C", "OnUpdateClassIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ClassIconL.ClassIconL_C.GetIconTexture
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UTexture2D*                       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UTexture2D* UClassIconL_C::GetIconTexture() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ClassIconL_C", "GetIconTexture");

	Params::ClassIconL_C_GetIconTexture Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

