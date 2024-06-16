#pragma once

 

// Package: EngramCannonHUD_KeyHelp

#include "Basic.hpp"

#include "EngramCannonHUD_KeyHelp_classes.hpp"
#include "EngramCannonHUD_KeyHelp_parameters.hpp"


namespace SDK
{

// Function EngramCannonHUD_KeyHelp.EngramCannonHUD_KeyHelp_C.ExecuteUbergraph_EngramCannonHUD_KeyHelp
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEngramCannonHUD_KeyHelp_C::ExecuteUbergraph_EngramCannonHUD_KeyHelp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EngramCannonHUD_KeyHelp_C", "ExecuteUbergraph_EngramCannonHUD_KeyHelp");

	Params::EngramCannonHUD_KeyHelp_C_ExecuteUbergraph_EngramCannonHUD_KeyHelp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EngramCannonHUD_KeyHelp.EngramCannonHUD_KeyHelp_C.OnShot_Event
// (BlueprintCallable, BlueprintEvent)

void UEngramCannonHUD_KeyHelp_C::OnShot_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EngramCannonHUD_KeyHelp_C", "OnShot_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EngramCannonHUD_KeyHelp.EngramCannonHUD_KeyHelp_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEngramCannonHUD_KeyHelp_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EngramCannonHUD_KeyHelp_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EngramCannonHUD_KeyHelp.EngramCannonHUD_KeyHelp_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEngramCannonHUD_KeyHelp_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EngramCannonHUD_KeyHelp_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EngramCannonHUD_KeyHelp.EngramCannonHUD_KeyHelp_C.UpdateKeyText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UEngramCannonHUD_KeyHelp_C::UpdateKeyText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EngramCannonHUD_KeyHelp_C", "UpdateKeyText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EngramCannonHUD_KeyHelp.EngramCannonHUD_KeyHelp_C.SetEnableKeyHelp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEngramCannonHUD_KeyHelp_C::SetEnableKeyHelp(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EngramCannonHUD_KeyHelp_C", "SetEnableKeyHelp");

	Params::EngramCannonHUD_KeyHelp_C_SetEnableKeyHelp Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}

}

