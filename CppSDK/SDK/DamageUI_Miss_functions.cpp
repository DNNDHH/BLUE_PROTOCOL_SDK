#pragma once

 

// Package: DamageUI_Miss

#include "Basic.hpp"

#include "DamageUI_Miss_classes.hpp"
#include "DamageUI_Miss_parameters.hpp"


namespace SDK
{

// Function DamageUI_Miss.DamageUI_Miss_C.ExecuteUbergraph_DamageUI_Miss
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDamageUI_Miss_C::ExecuteUbergraph_DamageUI_Miss(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DamageUI_Miss_C", "ExecuteUbergraph_DamageUI_Miss");

	Params::DamageUI_Miss_C_ExecuteUbergraph_DamageUI_Miss Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DamageUI_Miss.DamageUI_Miss_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDamageUI_Miss_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DamageUI_Miss_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

