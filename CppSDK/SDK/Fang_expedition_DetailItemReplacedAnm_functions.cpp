#pragma once

 

// Package: Fang_expedition_DetailItemReplacedAnm

#include "Basic.hpp"

#include "Fang_expedition_DetailItemReplacedAnm_classes.hpp"
#include "Fang_expedition_DetailItemReplacedAnm_parameters.hpp"


namespace SDK
{

// Function Fang_expedition_DetailItemReplacedAnm.Fang_expedition_DetailItemReplacedAnm_C.ExecuteUbergraph_Fang_expedition_DetailItemReplacedAnm
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DetailItemReplacedAnm_C::ExecuteUbergraph_Fang_expedition_DetailItemReplacedAnm(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailItemReplacedAnm_C", "ExecuteUbergraph_Fang_expedition_DetailItemReplacedAnm");

	Params::Fang_expedition_DetailItemReplacedAnm_C_ExecuteUbergraph_Fang_expedition_DetailItemReplacedAnm Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DetailItemReplacedAnm.Fang_expedition_DetailItemReplacedAnm_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFang_expedition_DetailItemReplacedAnm_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailItemReplacedAnm_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DetailItemReplacedAnm.Fang_expedition_DetailItemReplacedAnm_C.PlayAnm
// (Public, BlueprintCallable, BlueprintEvent)

void UFang_expedition_DetailItemReplacedAnm_C::PlayAnm()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailItemReplacedAnm_C", "PlayAnm");

	UObject::ProcessEvent(Func, nullptr);
}

}

