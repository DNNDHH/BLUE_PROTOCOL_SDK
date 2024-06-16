#pragma once

 

// Package: MiniMapIconDxBattleGateBarrier

#include "Basic.hpp"

#include "MiniMapIconDxBattleGateBarrier_classes.hpp"
#include "MiniMapIconDxBattleGateBarrier_parameters.hpp"


namespace SDK
{

// Function MiniMapIconDxBattleGateBarrier.MiniMapIconDxBattleGateBarrier_C.ExecuteUbergraph_MiniMapIconDxBattleGateBarrier
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniMapIconDxBattleGateBarrier_C::ExecuteUbergraph_MiniMapIconDxBattleGateBarrier(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIconDxBattleGateBarrier_C", "ExecuteUbergraph_MiniMapIconDxBattleGateBarrier");

	Params::MiniMapIconDxBattleGateBarrier_C_ExecuteUbergraph_MiniMapIconDxBattleGateBarrier Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniMapIconDxBattleGateBarrier.MiniMapIconDxBattleGateBarrier_C.�������_0
// (BlueprintCallable, BlueprintEvent)

void UMiniMapIconDxBattleGateBarrier_C::_________0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIconDxBattleGateBarrier_C", "�������_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MiniMapIconDxBattleGateBarrier.MiniMapIconDxBattleGateBarrier_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMiniMapIconDxBattleGateBarrier_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniMapIconDxBattleGateBarrier_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

