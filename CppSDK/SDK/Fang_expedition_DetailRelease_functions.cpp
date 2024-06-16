#pragma once

 

// Package: Fang_expedition_DetailRelease

#include "Basic.hpp"

#include "Fang_expedition_DetailRelease_classes.hpp"
#include "Fang_expedition_DetailRelease_parameters.hpp"


namespace SDK
{

// Function Fang_expedition_DetailRelease.Fang_expedition_DetailRelease_C.ExecuteUbergraph_Fang_expedition_DetailRelease
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DetailRelease_C::ExecuteUbergraph_Fang_expedition_DetailRelease(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailRelease_C", "ExecuteUbergraph_Fang_expedition_DetailRelease");

	Params::Fang_expedition_DetailRelease_C_ExecuteUbergraph_Fang_expedition_DetailRelease Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DetailRelease.Fang_expedition_DetailRelease_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFang_expedition_DetailRelease_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailRelease_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DetailRelease.Fang_expedition_DetailRelease_C.SetData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBFang_expeditionLimitData>LimitData                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    NG                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFang_expedition_DetailRelease_C::SetData(TArray<struct FSBFang_expeditionLimitData>& LimitData, bool* NG)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailRelease_C", "SetData");

	Params::Fang_expedition_DetailRelease_C_SetData Parms{};

	Parms.LimitData = std::move(LimitData);

	UObject::ProcessEvent(Func, &Parms);

	LimitData = std::move(Parms.LimitData);

	if (NG != nullptr)
		*NG = Parms.NG;
}


// Function Fang_expedition_DetailRelease.Fang_expedition_DetailRelease_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFang_expedition_DetailRelease_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailRelease_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}

}

