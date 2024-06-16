#pragma once

 

// Package: DamageUI

#include "Basic.hpp"

#include "DamageUI_classes.hpp"
#include "DamageUI_parameters.hpp"


namespace SDK
{

// Function DamageUI.DamageUI_C.ExecuteUbergraph_DamageUI
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDamageUI_C::ExecuteUbergraph_DamageUI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DamageUI_C", "ExecuteUbergraph_DamageUI");

	Params::DamageUI_C_ExecuteUbergraph_DamageUI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DamageUI.DamageUI_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDamageUI_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DamageUI_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DamageUI.DamageUI_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDamageUI_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DamageUI_C", "OnAnimationFinished");

	Params::DamageUI_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DamageUI.DamageUI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDamageUI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DamageUI_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DamageUI.DamageUI_C.UnbindUIVisibleSettingDelegate
// (BlueprintCallable, BlueprintEvent)

void UDamageUI_C::UnbindUIVisibleSettingDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DamageUI_C", "UnbindUIVisibleSettingDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DamageUI.DamageUI_C.BindUIVisibleSettingDelegate
// (BlueprintCallable, BlueprintEvent)

void UDamageUI_C::BindUIVisibleSettingDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DamageUI_C", "BindUIVisibleSettingDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DamageUI.DamageUI_C.UIVisibleSettingChangeDelegate_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBUIType                               InUIType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInInstantly                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDamageUI_C::UIVisibleSettingChangeDelegate_Event_0(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DamageUI_C", "UIVisibleSettingChangeDelegate_Event_0");

	Params::DamageUI_C_UIVisibleSettingChangeDelegate_Event_0 Parms{};

	Parms.InUIType = InUIType;
	Parms.bInVisibility = bInVisibility;
	Parms.bInInstantly = bInInstantly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DamageUI.DamageUI_C.SetMiss
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UDamageUI_C::SetMiss()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DamageUI_C", "SetMiss");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DamageUI.DamageUI_C.SetNumber
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UDamageUI_C::SetNumber()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DamageUI_C", "SetNumber");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DamageUI.DamageUI_C.SetDamageCorrectionIcon
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UDamageUI_C::SetDamageCorrectionIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DamageUI_C", "SetDamageCorrectionIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DamageUI.DamageUI_C.PlayAnim
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UDamageUI_C::PlayAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DamageUI_C", "PlayAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DamageUI.DamageUI_C.SetBorderAlignment
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UDamageUI_C::SetBorderAlignment()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DamageUI_C", "SetBorderAlignment");

	UObject::ProcessEvent(Func, nullptr);
}

}

