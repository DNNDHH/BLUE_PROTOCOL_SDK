#pragma once

 

// Package: P007HUD

#include "Basic.hpp"

#include "P007HUD_classes.hpp"
#include "P007HUD_parameters.hpp"


namespace SDK
{

// Function P007HUD.P007HUD_C.ExecuteUbergraph_P007HUD
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UP007HUD_C::ExecuteUbergraph_P007HUD(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P007HUD_C", "ExecuteUbergraph_P007HUD");

	Params::P007HUD_C_ExecuteUbergraph_P007HUD Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function P007HUD.P007HUD_C.OnChangeUIVisibleSetting
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBUIType                               InUIType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInInstantly                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UP007HUD_C::OnChangeUIVisibleSetting(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P007HUD_C", "OnChangeUIVisibleSetting");

	Params::P007HUD_C_OnChangeUIVisibleSetting Parms{};

	Parms.InUIType = InUIType;
	Parms.bInVisibility = bInVisibility;
	Parms.bInInstantly = bInInstantly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function P007HUD.P007HUD_C.UnbindVisibleSetting
// (BlueprintCallable, BlueprintEvent)

void UP007HUD_C::UnbindVisibleSetting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P007HUD_C", "UnbindVisibleSetting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P007HUD.P007HUD_C.BindVisibleSetting
// (BlueprintCallable, BlueprintEvent)

void UP007HUD_C::BindVisibleSetting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P007HUD_C", "BindVisibleSetting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P007HUD.P007HUD_C.OnUpdateGauge
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UP007HUD_C::OnUpdateGauge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P007HUD_C", "OnUpdateGauge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P007HUD.P007HUD_C.OnBind
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP007HUD_C::OnBind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P007HUD_C", "OnBind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P007HUD.P007HUD_C.OnUnbind
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP007HUD_C::OnUnbind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P007HUD_C", "OnUnbind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P007HUD.P007HUD_C.OnInitialize
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP007HUD_C::OnInitialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P007HUD_C", "OnInitialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P007HUD.P007HUD_C.OnTerminate
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP007HUD_C::OnTerminate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P007HUD_C", "OnTerminate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P007HUD.P007HUD_C.OnTick
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP007HUD_C::OnTick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P007HUD_C", "OnTick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P007HUD.P007HUD_C.OnSetEditMode
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsEdit                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UP007HUD_C::OnSetEditMode(bool InIsEdit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P007HUD_C", "OnSetEditMode");

	Params::P007HUD_C_OnSetEditMode Parms{};

	Parms.InIsEdit = InIsEdit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function P007HUD.P007HUD_C.PlayAnimForwardInOut
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP007HUD_C::PlayAnimForwardInOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P007HUD_C", "PlayAnimForwardInOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P007HUD.P007HUD_C.PlayAnimReverseInOut
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP007HUD_C::PlayAnimReverseInOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P007HUD_C", "PlayAnimReverseInOut");

	UObject::ProcessEvent(Func, nullptr);
}

}

