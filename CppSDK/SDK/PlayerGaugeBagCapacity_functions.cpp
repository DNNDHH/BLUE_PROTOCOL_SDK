#pragma once

 

// Package: PlayerGaugeBagCapacity

#include "Basic.hpp"

#include "PlayerGaugeBagCapacity_classes.hpp"
#include "PlayerGaugeBagCapacity_parameters.hpp"


namespace SDK
{

// Function PlayerGaugeBagCapacity.PlayerGaugeBagCapacity_C.ExecuteUbergraph_PlayerGaugeBagCapacity
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerGaugeBagCapacity_C::ExecuteUbergraph_PlayerGaugeBagCapacity(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerGaugeBagCapacity_C", "ExecuteUbergraph_PlayerGaugeBagCapacity");

	Params::PlayerGaugeBagCapacity_C_ExecuteUbergraph_PlayerGaugeBagCapacity Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerGaugeBagCapacity.PlayerGaugeBagCapacity_C.CustomEvent_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRetCode                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSBLiquidMemoryInfo>      InUpdatedLiquidMemoryInfos                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPlayerGaugeBagCapacity_C::CustomEvent_0(const int32 InRetCode, const TArray<struct FSBLiquidMemoryInfo>& InUpdatedLiquidMemoryInfos)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerGaugeBagCapacity_C", "CustomEvent_0");

	Params::PlayerGaugeBagCapacity_C_CustomEvent_0 Parms{};

	Parms.InRetCode = InRetCode;
	Parms.InUpdatedLiquidMemoryInfos = std::move(InUpdatedLiquidMemoryInfos);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerGaugeBagCapacity.PlayerGaugeBagCapacity_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)

void UPlayerGaugeBagCapacity_C::CustomEvent_2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerGaugeBagCapacity_C", "CustomEvent_2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerGaugeBagCapacity.PlayerGaugeBagCapacity_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerGaugeBagCapacity_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerGaugeBagCapacity_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerGaugeBagCapacity.PlayerGaugeBagCapacity_C.Update_Internal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPlayerGaugeBagCapacity_C::Update_Internal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerGaugeBagCapacity_C", "Update_Internal");

	UObject::ProcessEvent(Func, nullptr);
}

}

