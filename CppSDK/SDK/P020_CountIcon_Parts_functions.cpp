#pragma once

 

// Package: P020_CountIcon_Parts

#include "Basic.hpp"

#include "P020_CountIcon_Parts_classes.hpp"
#include "P020_CountIcon_Parts_parameters.hpp"


namespace SDK
{

// Function P020_CountIcon_Parts.P020_CountIcon_Parts_C.ExecuteUbergraph_P020_CountIcon_Parts
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UP020_CountIcon_Parts_C::ExecuteUbergraph_P020_CountIcon_Parts(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P020_CountIcon_Parts_C", "ExecuteUbergraph_P020_CountIcon_Parts");

	Params::P020_CountIcon_Parts_C_ExecuteUbergraph_P020_CountIcon_Parts Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function P020_CountIcon_Parts.P020_CountIcon_Parts_C.OnSetONOFF
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bOn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UP020_CountIcon_Parts_C::OnSetONOFF(bool bOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P020_CountIcon_Parts_C", "OnSetONOFF");

	Params::P020_CountIcon_Parts_C_OnSetONOFF Parms{};

	Parms.bOn = bOn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function P020_CountIcon_Parts.P020_CountIcon_Parts_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UP020_CountIcon_Parts_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P020_CountIcon_Parts_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P020_CountIcon_Parts.P020_CountIcon_Parts_C.SetONOFF
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bOn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UP020_CountIcon_Parts_C::SetONOFF(bool bOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P020_CountIcon_Parts_C", "SetONOFF");

	Params::P020_CountIcon_Parts_C_SetONOFF Parms{};

	Parms.bOn = bOn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function P020_CountIcon_Parts.P020_CountIcon_Parts_C.EffectAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UP020_CountIcon_Parts_C::EffectAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P020_CountIcon_Parts_C", "EffectAnim");

	UObject::ProcessEvent(Func, nullptr);
}

}

