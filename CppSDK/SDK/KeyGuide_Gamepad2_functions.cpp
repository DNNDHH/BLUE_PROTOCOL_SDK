#pragma once

 

// Package: KeyGuide_Gamepad2

#include "Basic.hpp"

#include "KeyGuide_Gamepad2_classes.hpp"
#include "KeyGuide_Gamepad2_parameters.hpp"


namespace SDK
{

// Function KeyGuide_Gamepad2.KeyGuide_Gamepad2_C.ExecuteUbergraph_KeyGuide_Gamepad2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyGuide_Gamepad2_C::ExecuteUbergraph_KeyGuide_Gamepad2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_Gamepad2_C", "ExecuteUbergraph_KeyGuide_Gamepad2");

	Params::KeyGuide_Gamepad2_C_ExecuteUbergraph_KeyGuide_Gamepad2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyGuide_Gamepad2.KeyGuide_Gamepad2_C.ApplyKeyConfigData
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBPlayerClassKeyConfigData      KeyConfigData                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UKeyGuide_Gamepad2_C::ApplyKeyConfigData(const struct FSBPlayerClassKeyConfigData& KeyConfigData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_Gamepad2_C", "ApplyKeyConfigData");

	Params::KeyGuide_Gamepad2_C_ApplyKeyConfigData Parms{};

	Parms.KeyConfigData = std::move(KeyConfigData);

	UObject::ProcessEvent(Func, &Parms);
}

}

