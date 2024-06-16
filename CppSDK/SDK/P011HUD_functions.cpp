#pragma once

 

// Package: P011HUD

#include "Basic.hpp"

#include "P011HUD_classes.hpp"
#include "P011HUD_parameters.hpp"


namespace SDK
{

// Function P011HUD.P011HUD_C.ExecuteUbergraph_P011HUD
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UP011HUD_C::ExecuteUbergraph_P011HUD(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P011HUD_C", "ExecuteUbergraph_P011HUD");

	Params::P011HUD_C_ExecuteUbergraph_P011HUD Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function P011HUD.P011HUD_C.UnbindVisibleSetting
// (BlueprintCallable, BlueprintEvent)

void UP011HUD_C::UnbindVisibleSetting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P011HUD_C", "UnbindVisibleSetting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P011HUD.P011HUD_C.OnUIVisibleSettingChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBUIType                               InUIType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInInstantly                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UP011HUD_C::OnUIVisibleSettingChange(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P011HUD_C", "OnUIVisibleSettingChange");

	Params::P011HUD_C_OnUIVisibleSettingChange Parms{};

	Parms.InUIType = InUIType;
	Parms.bInVisibility = bInVisibility;
	Parms.bInInstantly = bInInstantly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function P011HUD.P011HUD_C.BindVisibleSetting
// (BlueprintCallable, BlueprintEvent)

void UP011HUD_C::BindVisibleSetting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P011HUD_C", "BindVisibleSetting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P011HUD.P011HUD_C.OnSetGaugeValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UP011HUD_C::OnSetGaugeValue(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P011HUD_C", "OnSetGaugeValue");

	Params::P011HUD_C_OnSetGaugeValue Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function P011HUD.P011HUD_C.OnSetMpValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UP011HUD_C::OnSetMpValue(float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P011HUD_C", "OnSetMpValue");

	Params::P011HUD_C_OnSetMpValue Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function P011HUD.P011HUD_C.OnBind
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP011HUD_C::OnBind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P011HUD_C", "OnBind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P011HUD.P011HUD_C.OnUnbind
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP011HUD_C::OnUnbind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P011HUD_C", "OnUnbind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P011HUD.P011HUD_C.OnInitialize
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP011HUD_C::OnInitialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P011HUD_C", "OnInitialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P011HUD.P011HUD_C.OnTerminate
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP011HUD_C::OnTerminate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P011HUD_C", "OnTerminate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P011HUD.P011HUD_C.OnSetEditMode
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsEdit                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UP011HUD_C::OnSetEditMode(bool InIsEdit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P011HUD_C", "OnSetEditMode");

	Params::P011HUD_C_OnSetEditMode Parms{};

	Parms.InIsEdit = InIsEdit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function P011HUD.P011HUD_C.PlayAnimForwardInOut
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP011HUD_C::PlayAnimForwardInOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P011HUD_C", "PlayAnimForwardInOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P011HUD.P011HUD_C.PlayAnimReverseInOut
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP011HUD_C::PlayAnimReverseInOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P011HUD_C", "PlayAnimReverseInOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P011HUD.P011HUD_C.SetInspirationIconRenderOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    TrueIsVisible                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UP011HUD_C::SetInspirationIconRenderOpacity(bool TrueIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P011HUD_C", "SetInspirationIconRenderOpacity");

	Params::P011HUD_C_SetInspirationIconRenderOpacity Parms{};

	Parms.TrueIsVisible = TrueIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}

}

