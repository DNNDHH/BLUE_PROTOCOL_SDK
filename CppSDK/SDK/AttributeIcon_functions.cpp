#pragma once

 

// Package: AttributeIcon

#include "Basic.hpp"

#include "AttributeIcon_classes.hpp"
#include "AttributeIcon_parameters.hpp"


namespace SDK
{

// Function AttributeIcon.AttributeIcon_C.SetAttribute
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBAttribute                            InAttribute                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAttributeIcon_C::SetAttribute(ESBAttribute InAttribute)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AttributeIcon_C", "SetAttribute");

	Params::AttributeIcon_C_SetAttribute Parms{};

	Parms.InAttribute = InAttribute;

	UObject::ProcessEvent(Func, &Parms);
}

}

