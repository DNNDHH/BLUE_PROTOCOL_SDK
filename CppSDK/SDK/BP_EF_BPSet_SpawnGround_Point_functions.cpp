#pragma once

 

// Package: BP_EF_BPSet_SpawnGround_Point

#include "Basic.hpp"

#include "BP_EF_BPSet_SpawnGround_Point_classes.hpp"
#include "BP_EF_BPSet_SpawnGround_Point_parameters.hpp"


namespace SDK
{

// Function BP_EF_BPSet_SpawnGround_Point.BP_EF_BPSet_SpawnGround_Point_C.ExecuteUbergraph_BP_EF_BPSet_SpawnGround_Point
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EF_BPSet_SpawnGround_Point_C::ExecuteUbergraph_BP_EF_BPSet_SpawnGround_Point(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EF_BPSet_SpawnGround_Point_C", "ExecuteUbergraph_BP_EF_BPSet_SpawnGround_Point");

	Params::BP_EF_BPSet_SpawnGround_Point_C_ExecuteUbergraph_BP_EF_BPSet_SpawnGround_Point Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EF_BPSet_SpawnGround_Point.BP_EF_BPSet_SpawnGround_Point_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EF_BPSet_SpawnGround_Point_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EF_BPSet_SpawnGround_Point_C", "ReceiveTick");

	Params::BP_EF_BPSet_SpawnGround_Point_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EF_BPSet_SpawnGround_Point.BP_EF_BPSet_SpawnGround_Point_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_EF_BPSet_SpawnGround_Point_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EF_BPSet_SpawnGround_Point_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EF_BPSet_SpawnGround_Point.BP_EF_BPSet_SpawnGround_Point_C.2VectorDistance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          A                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          B                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EF_BPSet_SpawnGround_Point_C::TwoVectorDistance(const struct FVector& A, const struct FVector& B, float* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EF_BPSet_SpawnGround_Point_C", "2VectorDistance");

	Params::BP_EF_BPSet_SpawnGround_Point_C_TwoVectorDistance Parms{};

	Parms.A = std::move(A);
	Parms.B = std::move(B);

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}

}

