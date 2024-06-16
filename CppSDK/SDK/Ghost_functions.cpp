#pragma once

 

// Package: Ghost

#include "Basic.hpp"

#include "Ghost_classes.hpp"
#include "Ghost_parameters.hpp"


namespace SDK
{

// Function Ghost.Ghost_C.ExecuteUbergraph_Ghost
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGhost_C::ExecuteUbergraph_Ghost(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ghost_C", "ExecuteUbergraph_Ghost");

	Params::Ghost_C_ExecuteUbergraph_Ghost Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Ghost.Ghost_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGhost_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ghost_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

