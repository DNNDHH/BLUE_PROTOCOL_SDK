#pragma once

 

// Package: P020_Strengthen

#include "Basic.hpp"

#include "P020_Strengthen_classes.hpp"
#include "P020_Strengthen_parameters.hpp"


namespace SDK
{

// Function P020_Strengthen.P020_Strengthen_C.ExecuteUbergraph_P020_Strengthen
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UP020_Strengthen_C::ExecuteUbergraph_P020_Strengthen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P020_Strengthen_C", "ExecuteUbergraph_P020_Strengthen");

	Params::P020_Strengthen_C_ExecuteUbergraph_P020_Strengthen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function P020_Strengthen.P020_Strengthen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UP020_Strengthen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P020_Strengthen_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P020_Strengthen.P020_Strengthen_C.SetStNum
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InNum                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UP020_Strengthen_C::SetStNum(int32 InNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P020_Strengthen_C", "SetStNum");

	Params::P020_Strengthen_C_SetStNum Parms{};

	Parms.InNum = InNum;

	UObject::ProcessEvent(Func, &Parms);
}

}

