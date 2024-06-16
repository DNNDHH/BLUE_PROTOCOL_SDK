#pragma once

 

// Package: MiniMapIconEnemyGate

#include "Basic.hpp"

#include "MiniMapIconEnemyGate_classes.hpp"
#include "MiniMapIconEnemyGate_parameters.hpp"


namespace SDK
{

// Function MiniMapIconEnemyGate.MiniMapIconEnemyGate_C.ExecuteUbergraph_MiniMapIconEnemyGate
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniMapIconEnemyGate_C::ExecuteUbergraph_MiniMapIconEnemyGate(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIconEnemyGate_C", "ExecuteUbergraph_MiniMapIconEnemyGate");

	Params::MiniMapIconEnemyGate_C_ExecuteUbergraph_MiniMapIconEnemyGate Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniMapIconEnemyGate.MiniMapIconEnemyGate_C.�������_0
// (BlueprintCallable, BlueprintEvent)

void UMiniMapIconEnemyGate_C::_________0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIconEnemyGate_C", "�������_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MiniMapIconEnemyGate.MiniMapIconEnemyGate_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMiniMapIconEnemyGate_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIconEnemyGate_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

