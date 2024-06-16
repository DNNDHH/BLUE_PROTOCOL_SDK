#pragma once

 

// Package: Attribute

#include "Basic.hpp"

#include "Attribute_classes.hpp"
#include "Attribute_parameters.hpp"


namespace SDK
{

// Function Attribute.Attribute_C.SetAttribute
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ImagineId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAttribute_C::SetAttribute(int32 ImagineId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Attribute_C", "SetAttribute");

	Params::Attribute_C_SetAttribute Parms{};

	Parms.ImagineId = ImagineId;

	UObject::ProcessEvent(Func, &Parms);
}

}

