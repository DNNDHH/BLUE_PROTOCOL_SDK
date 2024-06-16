#pragma once

 

// Package: WBP_ShortPinView

#include "Basic.hpp"

#include "WBP_ShortPinView_classes.hpp"
#include "WBP_ShortPinView_parameters.hpp"


namespace SDK
{

// Function WBP_ShortPinView.WBP_ShortPinView_C.ExecuteUbergraph_WBP_ShortPinView
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShortPinView_C::ExecuteUbergraph_WBP_ShortPinView(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShortPinView_C", "ExecuteUbergraph_WBP_ShortPinView");

	Params::WBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ShortPinView.WBP_ShortPinView_C.SetUIVisible
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBUIType                               InUIType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInInstantly                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ShortPinView_C::SetUIVisible(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShortPinView_C", "SetUIVisible");

	Params::WBP_ShortPinView_C_SetUIVisible Parms{};

	Parms.InUIType = InUIType;
	Parms.bInVisibility = bInVisibility;
	Parms.bInInstantly = bInInstantly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ShortPinView.WBP_ShortPinView_C.UpdateKeyConfig
// (BlueprintCallable, BlueprintEvent)

void UWBP_ShortPinView_C::UpdateKeyConfig()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShortPinView_C", "UpdateKeyConfig");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ShortPinView.WBP_ShortPinView_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ShortPinView_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShortPinView_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ShortPinView.WBP_ShortPinView_C.IsReleaseRayButton
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ShortPinView_C::IsReleaseRayButton(bool* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShortPinView_C", "IsReleaseRayButton");

	Params::WBP_ShortPinView_C_IsReleaseRayButton Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function WBP_ShortPinView.WBP_ShortPinView_C.GetPlayerShortPinComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBPlayerShortPinComponent*       PlayerShortPinComponent                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShortPinView_C::GetPlayerShortPinComponent(class USBPlayerShortPinComponent** PlayerShortPinComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShortPinView_C", "GetPlayerShortPinComponent");

	Params::WBP_ShortPinView_C_GetPlayerShortPinComponent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PlayerShortPinComponent != nullptr)
		*PlayerShortPinComponent = Parms.PlayerShortPinComponent;
}


// Function WBP_ShortPinView.WBP_ShortPinView_C.SetPinPositionBP
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBShortPinWidget*                Pin                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShortPinView_C::SetPinPositionBP(class USBShortPinWidget* Pin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShortPinView_C", "SetPinPositionBP");

	Params::WBP_ShortPinView_C_SetPinPositionBP Parms{};

	Parms.Pin = Pin;

	UObject::ProcessEvent(Func, &Parms);
}

}

