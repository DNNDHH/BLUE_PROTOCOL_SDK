#pragma once

 

// Package: WeaponSynthePart_BG

#include "Basic.hpp"

#include "WeaponSynthePart_BG_classes.hpp"
#include "WeaponSynthePart_BG_parameters.hpp"


namespace SDK
{

// Function WeaponSynthePart_BG.WeaponSynthePart_BG_C.ExecuteUbergraph_WeaponSynthePart_BG
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_BG_C::ExecuteUbergraph_WeaponSynthePart_BG(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_BG_C", "ExecuteUbergraph_WeaponSynthePart_BG");

	Params::WeaponSynthePart_BG_C_ExecuteUbergraph_WeaponSynthePart_BG Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_BG.WeaponSynthePart_BG_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthePart_BG_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_BG_C", "PreConstruct");

	Params::WeaponSynthePart_BG_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

