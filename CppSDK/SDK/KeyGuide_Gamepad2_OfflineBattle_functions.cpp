#pragma once

 

// Package: KeyGuide_Gamepad2_OfflineBattle

#include "Basic.hpp"

#include "KeyGuide_Gamepad2_OfflineBattle_classes.hpp"
#include "KeyGuide_Gamepad2_OfflineBattle_parameters.hpp"


namespace SDK
{

// Function KeyGuide_Gamepad2_OfflineBattle.KeyGuide_Gamepad2_OfflineBattle_C.ExecuteUbergraph_KeyGuide_Gamepad2_OfflineBattle
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyGuide_Gamepad2_OfflineBattle_C::ExecuteUbergraph_KeyGuide_Gamepad2_OfflineBattle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_Gamepad2_OfflineBattle_C", "ExecuteUbergraph_KeyGuide_Gamepad2_OfflineBattle");

	Params::KeyGuide_Gamepad2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Gamepad2_OfflineBattle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyGuide_Gamepad2_OfflineBattle.KeyGuide_Gamepad2_OfflineBattle_C.ApplyKeyConfigData
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBPlayerClassKeyConfigData      KeyConfigData                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UKeyGuide_Gamepad2_OfflineBattle_C::ApplyKeyConfigData(const struct FSBPlayerClassKeyConfigData& KeyConfigData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_Gamepad2_OfflineBattle_C", "ApplyKeyConfigData");

	Params::KeyGuide_Gamepad2_OfflineBattle_C_ApplyKeyConfigData Parms{};

	Parms.KeyConfigData = std::move(KeyConfigData);

	UObject::ProcessEvent(Func, &Parms);
}

}

