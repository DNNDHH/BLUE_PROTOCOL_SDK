#pragma once

 

// Package: DamageUI_Number

#include "Basic.hpp"

#include "DamageUI_Number_classes.hpp"
#include "DamageUI_Number_parameters.hpp"


namespace SDK
{

// Function DamageUI_Number.DamageUI_Number_C.ExecuteUbergraph_DamageUI_Number
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDamageUI_Number_C::ExecuteUbergraph_DamageUI_Number(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DamageUI_Number_C", "ExecuteUbergraph_DamageUI_Number");

	Params::DamageUI_Number_C_ExecuteUbergraph_DamageUI_Number Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DamageUI_Number.DamageUI_Number_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDamageUI_Number_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DamageUI_Number_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

