#pragma once

 

// Package: KeyGuide_Mouse2

#include "Basic.hpp"

#include "KeyGuide_Mouse2_classes.hpp"
#include "KeyGuide_Mouse2_parameters.hpp"


namespace SDK
{

// Function KeyGuide_Mouse2.KeyGuide_Mouse2_C.ExecuteUbergraph_KeyGuide_Mouse2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyGuide_Mouse2_C::ExecuteUbergraph_KeyGuide_Mouse2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_Mouse2_C", "ExecuteUbergraph_KeyGuide_Mouse2");

	Params::KeyGuide_Mouse2_C_ExecuteUbergraph_KeyGuide_Mouse2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyGuide_Mouse2.KeyGuide_Mouse2_C.ApplyKeyConfigData
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBPlayerClassKeyConfigData      KeyConfigData                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UKeyGuide_Mouse2_C::ApplyKeyConfigData(const struct FSBPlayerClassKeyConfigData& KeyConfigData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_Mouse2_C", "ApplyKeyConfigData");

	Params::KeyGuide_Mouse2_C_ApplyKeyConfigData Parms{};

	Parms.KeyConfigData = std::move(KeyConfigData);

	UObject::ProcessEvent(Func, &Parms);
}

}

