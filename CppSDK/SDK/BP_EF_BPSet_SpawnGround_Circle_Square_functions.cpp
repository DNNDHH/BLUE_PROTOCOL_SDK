#pragma once

 

// Package: BP_EF_BPSet_SpawnGround_Circle_Square

#include "Basic.hpp"

#include "BP_EF_BPSet_SpawnGround_Circle_Square_classes.hpp"
#include "BP_EF_BPSet_SpawnGround_Circle_Square_parameters.hpp"


namespace SDK
{

// Function BP_EF_BPSet_SpawnGround_Circle_Square.BP_EF_BPSet_SpawnGround_Circle_Square_C.NewEventDispatcher_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_EF_BPSet_SpawnGround_Circle_Square_C::NewEventDispatcher_0__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EF_BPSet_SpawnGround_Circle_Square_C", "NewEventDispatcher_0__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EF_BPSet_SpawnGround_Circle_Square.BP_EF_BPSet_SpawnGround_Circle_Square_C.ExecuteUbergraph_BP_EF_BPSet_SpawnGround_Circle_Square
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EF_BPSet_SpawnGround_Circle_Square_C::ExecuteUbergraph_BP_EF_BPSet_SpawnGround_Circle_Square(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EF_BPSet_SpawnGround_Circle_Square_C", "ExecuteUbergraph_BP_EF_BPSet_SpawnGround_Circle_Square");

	Params::BP_EF_BPSet_SpawnGround_Circle_Square_C_ExecuteUbergraph_BP_EF_BPSet_SpawnGround_Circle_Square Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EF_BPSet_SpawnGround_Circle_Square.BP_EF_BPSet_SpawnGround_Circle_Square_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EF_BPSet_SpawnGround_Circle_Square_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EF_BPSet_SpawnGround_Circle_Square_C", "ReceiveTick");

	Params::BP_EF_BPSet_SpawnGround_Circle_Square_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EF_BPSet_SpawnGround_Circle_Square.BP_EF_BPSet_SpawnGround_Circle_Square_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_EF_BPSet_SpawnGround_Circle_Square_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EF_BPSet_SpawnGround_Circle_Square_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EF_BPSet_SpawnGround_Circle_Square.BP_EF_BPSet_SpawnGround_Circle_Square_C.GroundHit_Circle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Range                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Param_SpawnCount                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EF_BPSet_SpawnGround_Circle_Square_C::GroundHit_Circle(float Range, float Param_SpawnCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EF_BPSet_SpawnGround_Circle_Square_C", "GroundHit_Circle");

	Params::BP_EF_BPSet_SpawnGround_Circle_Square_C_GroundHit_Circle Parms{};

	Parms.Range = Range;
	Parms.Param_SpawnCount = Param_SpawnCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EF_BPSet_SpawnGround_Circle_Square.BP_EF_BPSet_SpawnGround_Circle_Square_C.GroundHit_Square
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Range                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Param_SpawnCount                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EF_BPSet_SpawnGround_Circle_Square_C::GroundHit_Square(float Range, float Param_SpawnCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EF_BPSet_SpawnGround_Circle_Square_C", "GroundHit_Square");

	Params::BP_EF_BPSet_SpawnGround_Circle_Square_C_GroundHit_Square Parms{};

	Parms.Range = Range;
	Parms.Param_SpawnCount = Param_SpawnCount;

	UObject::ProcessEvent(Func, &Parms);
}

}

