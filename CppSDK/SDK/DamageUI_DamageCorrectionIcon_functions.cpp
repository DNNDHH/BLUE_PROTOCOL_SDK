#pragma once

 

// Package: DamageUI_DamageCorrectionIcon

#include "Basic.hpp"

#include "DamageUI_DamageCorrectionIcon_classes.hpp"
#include "DamageUI_DamageCorrectionIcon_parameters.hpp"


namespace SDK
{

// Function DamageUI_DamageCorrectionIcon.DamageUI_DamageCorrectionIcon_C.ExecuteUbergraph_DamageUI_DamageCorrectionIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDamageUI_DamageCorrectionIcon_C::ExecuteUbergraph_DamageUI_DamageCorrectionIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DamageUI_DamageCorrectionIcon_C", "ExecuteUbergraph_DamageUI_DamageCorrectionIcon");

	Params::DamageUI_DamageCorrectionIcon_C_ExecuteUbergraph_DamageUI_DamageCorrectionIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DamageUI_DamageCorrectionIcon.DamageUI_DamageCorrectionIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDamageUI_DamageCorrectionIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DamageUI_DamageCorrectionIcon_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

