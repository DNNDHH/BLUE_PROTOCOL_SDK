#pragma once

 

// Package: P012HUDGlitter

#include "Basic.hpp"

#include "P012HUDGlitter_classes.hpp"
#include "P012HUDGlitter_parameters.hpp"


namespace SDK
{

// Function P012HUDGlitter.P012HUDGlitter_C.ExecuteUbergraph_P012HUDGlitter
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UP012HUDGlitter_C::ExecuteUbergraph_P012HUDGlitter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P012HUDGlitter_C", "ExecuteUbergraph_P012HUDGlitter");

	Params::P012HUDGlitter_C_ExecuteUbergraph_P012HUDGlitter Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function P012HUDGlitter.P012HUDGlitter_C.UnbindVisibleSetting
// (BlueprintCallable, BlueprintEvent)

void UP012HUDGlitter_C::UnbindVisibleSetting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P012HUDGlitter_C", "UnbindVisibleSetting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P012HUDGlitter.P012HUDGlitter_C.BindVisibleSetting
// (BlueprintCallable, BlueprintEvent)

void UP012HUDGlitter_C::BindVisibleSetting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P012HUDGlitter_C", "BindVisibleSetting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P012HUDGlitter.P012HUDGlitter_C.OnChangeUIVisibleSetting
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBUIType                               InUIType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInInstantly                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UP012HUDGlitter_C::OnChangeUIVisibleSetting(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P012HUDGlitter_C", "OnChangeUIVisibleSetting");

	Params::P012HUDGlitter_C_OnChangeUIVisibleSetting Parms{};

	Parms.InUIType = InUIType;
	Parms.bInVisibility = bInVisibility;
	Parms.bInInstantly = bInInstantly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function P012HUDGlitter.P012HUDGlitter_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   GaugeRatio                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Lv                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UP012HUDGlitter_C::Update(float GaugeRatio, int32 Lv)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P012HUDGlitter_C", "Update");

	Params::P012HUDGlitter_C_Update Parms{};

	Parms.GaugeRatio = GaugeRatio;
	Parms.Lv = Lv;

	UObject::ProcessEvent(Func, &Parms);
}


// Function P012HUDGlitter.P012HUDGlitter_C.SetGauge
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UP012HUDGlitter_C::SetGauge(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P012HUDGlitter_C", "SetGauge");

	Params::P012HUDGlitter_C_SetGauge Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function P012HUDGlitter.P012HUDGlitter_C.SetLv
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InLV                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UP012HUDGlitter_C::SetLv(int32 InLV)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P012HUDGlitter_C", "SetLv");

	Params::P012HUDGlitter_C_SetLv Parms{};

	Parms.InLV = InLV;

	UObject::ProcessEvent(Func, &Parms);
}


// Function P012HUDGlitter.P012HUDGlitter_C.OnBind
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP012HUDGlitter_C::OnBind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P012HUDGlitter_C", "OnBind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P012HUDGlitter.P012HUDGlitter_C.OnUnbind
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP012HUDGlitter_C::OnUnbind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P012HUDGlitter_C", "OnUnbind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P012HUDGlitter.P012HUDGlitter_C.OnInitialize
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP012HUDGlitter_C::OnInitialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P012HUDGlitter_C", "OnInitialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P012HUDGlitter.P012HUDGlitter_C.OnTerminate
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP012HUDGlitter_C::OnTerminate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P012HUDGlitter_C", "OnTerminate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P012HUDGlitter.P012HUDGlitter_C.OnSetEditMode
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsEdit                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UP012HUDGlitter_C::OnSetEditMode(bool InIsEdit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P012HUDGlitter_C", "OnSetEditMode");

	Params::P012HUDGlitter_C_OnSetEditMode Parms{};

	Parms.InIsEdit = InIsEdit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function P012HUDGlitter.P012HUDGlitter_C.PlayAnimForwardInOut
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP012HUDGlitter_C::PlayAnimForwardInOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P012HUDGlitter_C", "PlayAnimForwardInOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P012HUDGlitter.P012HUDGlitter_C.PlayAnimReverseInOut
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP012HUDGlitter_C::PlayAnimReverseInOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P012HUDGlitter_C", "PlayAnimReverseInOut");

	UObject::ProcessEvent(Func, nullptr);
}

}

