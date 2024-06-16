#pragma once

 

// Package: PlayerHPGauge

#include "Basic.hpp"

#include "PlayerHPGauge_classes.hpp"
#include "PlayerHPGauge_parameters.hpp"


namespace SDK
{

// Function PlayerHPGauge.PlayerHPGauge_C.ExecuteUbergraph_PlayerHPGauge
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerHPGauge_C::ExecuteUbergraph_PlayerHPGauge(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerHPGauge_C", "ExecuteUbergraph_PlayerHPGauge");

	Params::PlayerHPGauge_C_ExecuteUbergraph_PlayerHPGauge Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerHPGauge.PlayerHPGauge_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerHPGauge_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerHPGauge_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerHPGauge.PlayerHPGauge_C.WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UPlayerHPGauge_C::WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerHPGauge_C", "WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerHPGauge.PlayerHPGauge_C.OnAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Forward                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerHPGauge_C::OnAnimation(bool Forward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerHPGauge_C", "OnAnimation");

	Params::PlayerHPGauge_C_OnAnimation Parms{};

	Parms.Forward = Forward;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerHPGauge.PlayerHPGauge_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerHPGauge_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerHPGauge_C", "Tick");

	Params::PlayerHPGauge_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerHPGauge.PlayerHPGauge_C.OnInAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bForward                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerHPGauge_C::OnInAnimation(bool bForward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerHPGauge_C", "OnInAnimation");

	Params::PlayerHPGauge_C_OnInAnimation Parms{};

	Parms.bForward = bForward;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerHPGauge.PlayerHPGauge_C.OnChangeShowAlwaysHUD_event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsShow                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerHPGauge_C::OnChangeShowAlwaysHUD_event(const bool bIsShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerHPGauge_C", "OnChangeShowAlwaysHUD_event");

	Params::PlayerHPGauge_C_OnChangeShowAlwaysHUD_event Parms{};

	Parms.bIsShow = bIsShow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerHPGauge.PlayerHPGauge_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerHPGauge_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerHPGauge_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerHPGauge.PlayerHPGauge_C.SetEditMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsEdit                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerHPGauge_C::SetEditMode(bool bIsEdit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerHPGauge_C", "SetEditMode");

	Params::PlayerHPGauge_C_SetEditMode Parms{};

	Parms.bIsEdit = bIsEdit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerHPGauge.PlayerHPGauge_C.�������_1
// (BlueprintCallable, BlueprintEvent)

void UPlayerHPGauge_C::_________1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerHPGauge_C", "�������_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerHPGauge.PlayerHPGauge_C.SetBgVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerHPGauge_C::SetBgVisibility(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerHPGauge_C", "SetBgVisibility");

	Params::PlayerHPGauge_C_SetBgVisibility Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerHPGauge.PlayerHPGauge_C.AdjustHPGaugeSize
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerHPGauge_C::AdjustHPGaugeSize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerHPGauge_C", "AdjustHPGaugeSize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerHPGauge.PlayerHPGauge_C.UpdatePrevHP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerHPGauge_C::UpdatePrevHP(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerHPGauge_C", "UpdatePrevHP");

	Params::PlayerHPGauge_C_UpdatePrevHP Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerHPGauge.PlayerHPGauge_C.UpdateHPLossGaunge
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerHPGauge_C::UpdateHPLossGaunge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerHPGauge_C", "UpdateHPLossGaunge");

	UObject::ProcessEvent(Func, nullptr);
}

}

