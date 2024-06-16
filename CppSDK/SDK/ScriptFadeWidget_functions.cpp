#pragma once

 

// Package: ScriptFadeWidget

#include "Basic.hpp"

#include "ScriptFadeWidget_classes.hpp"
#include "ScriptFadeWidget_parameters.hpp"


namespace SDK
{

// Function ScriptFadeWidget.ScriptFadeWidget_C.OnFadeEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UScriptFadeWidget_C::OnFadeEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScriptFadeWidget_C", "OnFadeEnd__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ScriptFadeWidget.ScriptFadeWidget_C.ExecuteUbergraph_ScriptFadeWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScriptFadeWidget_C::ExecuteUbergraph_ScriptFadeWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScriptFadeWidget_C", "ExecuteUbergraph_ScriptFadeWidget");

	Params::ScriptFadeWidget_C_ExecuteUbergraph_ScriptFadeWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ScriptFadeWidget.ScriptFadeWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScriptFadeWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScriptFadeWidget_C", "Tick");

	Params::ScriptFadeWidget_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ScriptFadeWidget.ScriptFadeWidget_C.FadeIn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InFadeTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bResult                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UScriptFadeWidget_C::FadeIn(float InFadeTime, bool* bResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScriptFadeWidget_C", "FadeIn");

	Params::ScriptFadeWidget_C_FadeIn Parms{};

	Parms.InFadeTime = InFadeTime;

	UObject::ProcessEvent(Func, &Parms);

	if (bResult != nullptr)
		*bResult = Parms.bResult;
}


// Function ScriptFadeWidget.ScriptFadeWidget_C.FadeOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InFadeTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     InFadeColor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InMaxAlpha                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScriptFadeWidget_C::FadeOut(float InFadeTime, const struct FLinearColor& InFadeColor, float InMaxAlpha)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScriptFadeWidget_C", "FadeOut");

	Params::ScriptFadeWidget_C_FadeOut Parms{};

	Parms.InFadeTime = InFadeTime;
	Parms.InFadeColor = std::move(InFadeColor);
	Parms.InMaxAlpha = InMaxAlpha;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ScriptFadeWidget.ScriptFadeWidget_C.Update_Internal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScriptFadeWidget_C::Update_Internal(float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScriptFadeWidget_C", "Update_Internal");

	Params::ScriptFadeWidget_C_Update_Internal Parms{};

	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

