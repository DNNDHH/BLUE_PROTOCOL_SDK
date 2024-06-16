#pragma once

 

// Package: PlayerSTGauge

#include "Basic.hpp"

#include "PlayerSTGauge_classes.hpp"
#include "PlayerSTGauge_parameters.hpp"


namespace SDK
{

// Function PlayerSTGauge.PlayerSTGauge_C.ExecuteUbergraph_PlayerSTGauge
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSTGauge_C::ExecuteUbergraph_PlayerSTGauge(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSTGauge_C", "ExecuteUbergraph_PlayerSTGauge");

	Params::PlayerSTGauge_C_ExecuteUbergraph_PlayerSTGauge Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerSTGauge.PlayerSTGauge_C.OnInAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bForward                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerSTGauge_C::OnInAnimation(bool bForward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSTGauge_C", "OnInAnimation");

	Params::PlayerSTGauge_C_OnInAnimation Parms{};

	Parms.bForward = bForward;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerSTGauge.PlayerSTGauge_C.WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UPlayerSTGauge_C::WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSTGauge_C", "WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerSTGauge.PlayerSTGauge_C.OnAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Forward                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerSTGauge_C::OnAnimation(bool Forward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSTGauge_C", "OnAnimation");

	Params::PlayerSTGauge_C_OnAnimation Parms{};

	Parms.Forward = Forward;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerSTGauge.PlayerSTGauge_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerSTGauge_C::CustomEvent_1(bool Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSTGauge_C", "CustomEvent_1");

	Params::PlayerSTGauge_C_CustomEvent_1 Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerSTGauge.PlayerSTGauge_C.PlayerBind
// (BlueprintCallable, BlueprintEvent)

void UPlayerSTGauge_C::PlayerBind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSTGauge_C", "PlayerBind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerSTGauge.PlayerSTGauge_C.OnChangeShowAlwaysHUD_event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsShow                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerSTGauge_C::OnChangeShowAlwaysHUD_event(const bool bIsShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSTGauge_C", "OnChangeShowAlwaysHUD_event");

	Params::PlayerSTGauge_C_OnChangeShowAlwaysHUD_event Parms{};

	Parms.bIsShow = bIsShow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerSTGauge.PlayerSTGauge_C.UnbindShowAlwaysHUDDelegate
// (BlueprintCallable, BlueprintEvent)

void UPlayerSTGauge_C::UnbindShowAlwaysHUDDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSTGauge_C", "UnbindShowAlwaysHUDDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerSTGauge.PlayerSTGauge_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerSTGauge_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSTGauge_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerSTGauge.PlayerSTGauge_C.UnbindStaminaRecoveredDelegate
// (BlueprintCallable, BlueprintEvent)

void UPlayerSTGauge_C::UnbindStaminaRecoveredDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSTGauge_C", "UnbindStaminaRecoveredDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerSTGauge.PlayerSTGauge_C.SetEditMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsEdit                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerSTGauge_C::SetEditMode(bool bIsEdit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSTGauge_C", "SetEditMode");

	Params::PlayerSTGauge_C_SetEditMode Parms{};

	Parms.bIsEdit = bIsEdit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerSTGauge.PlayerSTGauge_C.OnStaminaRecovery
// (BlueprintCallable, BlueprintEvent)

void UPlayerSTGauge_C::OnStaminaRecovery()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSTGauge_C", "OnStaminaRecovery");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerSTGauge.PlayerSTGauge_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSTGauge_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSTGauge_C", "Tick");

	Params::PlayerSTGauge_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerSTGauge.PlayerSTGauge_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerSTGauge_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSTGauge_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerSTGauge.PlayerSTGauge_C.SetBgVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerSTGauge_C::SetBgVisibility(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSTGauge_C", "SetBgVisibility");

	Params::PlayerSTGauge_C_SetBgVisibility Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerSTGauge.PlayerSTGauge_C.PlaySTGaugeRecoverAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerSTGauge_C::PlaySTGaugeRecoverAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerSTGauge_C", "PlaySTGaugeRecoverAnim");

	UObject::ProcessEvent(Func, nullptr);
}

}

