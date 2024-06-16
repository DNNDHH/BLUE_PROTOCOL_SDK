#pragma once

 

// Package: TensionTagIcon

#include "Basic.hpp"

#include "TensionTagIcon_classes.hpp"
#include "TensionTagIcon_parameters.hpp"


namespace SDK
{

// Function TensionTagIcon.TensionTagIcon_C.SetTensionTag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBTensionTagType                       InTensionTagId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTensionTagIcon_C::SetTensionTag(ESBTensionTagType InTensionTagId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TensionTagIcon_C", "SetTensionTag");

	Params::TensionTagIcon_C_SetTensionTag Parms{};

	Parms.InTensionTagId = InTensionTagId;

	UObject::ProcessEvent(Func, &Parms);
}

}

