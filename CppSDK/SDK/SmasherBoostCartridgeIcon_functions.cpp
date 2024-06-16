#pragma once

 

// Package: SmasherBoostCartridgeIcon

#include "Basic.hpp"

#include "SmasherBoostCartridgeIcon_classes.hpp"
#include "SmasherBoostCartridgeIcon_parameters.hpp"


namespace SDK
{

// Function SmasherBoostCartridgeIcon.SmasherBoostCartridgeIcon_C.ExecuteUbergraph_SmasherBoostCartridgeIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USmasherBoostCartridgeIcon_C::ExecuteUbergraph_SmasherBoostCartridgeIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SmasherBoostCartridgeIcon_C", "ExecuteUbergraph_SmasherBoostCartridgeIcon");

	Params::SmasherBoostCartridgeIcon_C_ExecuteUbergraph_SmasherBoostCartridgeIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SmasherBoostCartridgeIcon.SmasherBoostCartridgeIcon_C.SetCartridge
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECartridgeType                          ECartridgeType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USmasherBoostCartridgeIcon_C::SetCartridge(ECartridgeType ECartridgeType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SmasherBoostCartridgeIcon_C", "SetCartridge");

	Params::SmasherBoostCartridgeIcon_C_SetCartridge Parms{};

	Parms.ECartridgeType = ECartridgeType;

	UObject::ProcessEvent(Func, &Parms);
}

}

