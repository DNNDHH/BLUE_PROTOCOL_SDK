#pragma once

 

// Package: BP_levelSequence_SP

#include "Basic.hpp"

#include "BP_levelSequence_SP_classes.hpp"
#include "BP_levelSequence_SP_parameters.hpp"


namespace SDK
{

// Function BP_levelSequence_SP.BP_LevelSequence_SP_C.ExecuteUbergraph_BP_LevelSequence_SP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LevelSequence_SP_C::ExecuteUbergraph_BP_LevelSequence_SP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LevelSequence_SP_C", "ExecuteUbergraph_BP_LevelSequence_SP");

	Params::BP_LevelSequence_SP_C_ExecuteUbergraph_BP_LevelSequence_SP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_levelSequence_SP.BP_LevelSequence_SP_C.ReceiveOnStop
// (Event, Public, BlueprintEvent)

void ABP_LevelSequence_SP_C::ReceiveOnStop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LevelSequence_SP_C", "ReceiveOnStop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_levelSequence_SP.BP_LevelSequence_SP_C.ReceiveOnPlay
// (Event, Public, BlueprintEvent)

void ABP_LevelSequence_SP_C::ReceiveOnPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LevelSequence_SP_C", "ReceiveOnPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

