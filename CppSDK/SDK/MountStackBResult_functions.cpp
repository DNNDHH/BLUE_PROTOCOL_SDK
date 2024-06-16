#pragma once

 

// Package: MountStackBResult

#include "Basic.hpp"

#include "MountStackBResult_classes.hpp"
#include "MountStackBResult_parameters.hpp"


namespace SDK
{

// Function MountStackBResult.MountStackBResult_C.SetImagineData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UMountStackBResult_C::SetImagineData(const struct FOwnItemInfo& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountStackBResult_C", "SetImagineData");

	Params::MountStackBResult_C_SetImagineData Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}

}

