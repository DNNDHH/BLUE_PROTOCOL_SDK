#pragma once

 

// Package: P006HUD

#include "Basic.hpp"

#include "P006HUD_classes.hpp"
#include "P006HUD_parameters.hpp"


namespace SDK
{

// Function P006HUD.P006HUD_C.ExecuteUbergraph_P006HUD
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UP006HUD_C::ExecuteUbergraph_P006HUD(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P006HUD_C", "ExecuteUbergraph_P006HUD");

	Params::P006HUD_C_ExecuteUbergraph_P006HUD Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function P006HUD.P006HUD_C.UnbindVisibleSetting
// (BlueprintCallable, BlueprintEvent)

void UP006HUD_C::UnbindVisibleSetting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P006HUD_C", "UnbindVisibleSetting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P006HUD.P006HUD_C.BindVisibleSetting
// (BlueprintCallable, BlueprintEvent)

void UP006HUD_C::BindVisibleSetting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P006HUD_C", "BindVisibleSetting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P006HUD.P006HUD_C.OnChangeUIVisibleSetting
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBUIType                               InUIType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInInstantly                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UP006HUD_C::OnChangeUIVisibleSetting(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P006HUD_C", "OnChangeUIVisibleSetting");

	Params::P006HUD_C_OnChangeUIVisibleSetting Parms{};

	Parms.InUIType = InUIType;
	Parms.bInVisibility = bInVisibility;
	Parms.bInInstantly = bInInstantly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function P006HUD.P006HUD_C.OnUpdateGauge
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UP006HUD_C::OnUpdateGauge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P006HUD_C", "OnUpdateGauge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P006HUD.P006HUD_C.PlayAnimForwardInOut
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP006HUD_C::PlayAnimForwardInOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P006HUD_C", "PlayAnimForwardInOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P006HUD.P006HUD_C.PlayAnimReverseInOut
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP006HUD_C::PlayAnimReverseInOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P006HUD_C", "PlayAnimReverseInOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P006HUD.P006HUD_C.OnBind
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP006HUD_C::OnBind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P006HUD_C", "OnBind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P006HUD.P006HUD_C.OnUnbind
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP006HUD_C::OnUnbind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P006HUD_C", "OnUnbind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P006HUD.P006HUD_C.OnInitialize
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP006HUD_C::OnInitialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P006HUD_C", "OnInitialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P006HUD.P006HUD_C.OnTerminate
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP006HUD_C::OnTerminate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P006HUD_C", "OnTerminate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P006HUD.P006HUD_C.OnTick
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP006HUD_C::OnTick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P006HUD_C", "OnTick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P006HUD.P006HUD_C.OnSetEditMode
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsEdit                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UP006HUD_C::OnSetEditMode(bool InIsEdit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P006HUD_C", "OnSetEditMode");

	Params::P006HUD_C_OnSetEditMode Parms{};

	Parms.InIsEdit = InIsEdit;

	UObject::ProcessEvent(Func, &Parms);
}

}

