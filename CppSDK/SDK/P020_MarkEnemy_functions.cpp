#pragma once

 

// Package: P020_MarkEnemy

#include "Basic.hpp"

#include "P020_MarkEnemy_classes.hpp"
#include "P020_MarkEnemy_parameters.hpp"


namespace SDK
{

// Function P020_MarkEnemy.P020_MarkEnemy_C.ExecuteUbergraph_P020_MarkEnemy
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UP020_MarkEnemy_C::ExecuteUbergraph_P020_MarkEnemy(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P020_MarkEnemy_C", "ExecuteUbergraph_P020_MarkEnemy");

	Params::P020_MarkEnemy_C_ExecuteUbergraph_P020_MarkEnemy Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function P020_MarkEnemy.P020_MarkEnemy_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UP020_MarkEnemy_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P020_MarkEnemy_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

