#pragma once

 

// Package: PlayerEGauge

#include "Basic.hpp"

#include "PlayerEGauge_classes.hpp"
#include "PlayerEGauge_parameters.hpp"


namespace SDK
{

// Function PlayerEGauge.PlayerEGauge_C.ExecuteUbergraph_PlayerEGauge
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerEGauge_C::ExecuteUbergraph_PlayerEGauge(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerEGauge_C", "ExecuteUbergraph_PlayerEGauge");

	Params::PlayerEGauge_C_ExecuteUbergraph_PlayerEGauge Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerEGauge.PlayerEGauge_C.WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UPlayerEGauge_C::WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerEGauge_C", "WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerEGauge.PlayerEGauge_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerEGauge_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerEGauge_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerEGauge.PlayerEGauge_C.SetEditMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsEdit                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerEGauge_C::SetEditMode(bool bIsEdit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerEGauge_C", "SetEditMode");

	Params::PlayerEGauge_C_SetEditMode Parms{};

	Parms.bIsEdit = bIsEdit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerEGauge.PlayerEGauge_C.OnInAnimation
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bForward                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerEGauge_C::OnInAnimation(bool bForward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerEGauge_C", "OnInAnimation");

	Params::PlayerEGauge_C_OnInAnimation Parms{};

	Parms.bForward = bForward;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerEGauge.PlayerEGauge_C.PlayAnim
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUMGSequencePlayMode                    PlayMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   PlaybackSpeed                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerEGauge_C::PlayAnim(EUMGSequencePlayMode PlayMode, float PlaybackSpeed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerEGauge_C", "PlayAnim");

	Params::PlayerEGauge_C_PlayAnim Parms{};

	Parms.PlayMode = PlayMode;
	Parms.PlaybackSpeed = PlaybackSpeed;

	UObject::ProcessEvent(Func, &Parms);
}

}

