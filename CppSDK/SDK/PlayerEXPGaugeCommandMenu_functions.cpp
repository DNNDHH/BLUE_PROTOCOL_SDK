#pragma once

 

// Package: PlayerEXPGaugeCommandMenu

#include "Basic.hpp"

#include "PlayerEXPGaugeCommandMenu_classes.hpp"
#include "PlayerEXPGaugeCommandMenu_parameters.hpp"


namespace SDK
{

// Function PlayerEXPGaugeCommandMenu.PlayerEXPGaugeCommandMenu_C.ExecuteUbergraph_PlayerEXPGaugeCommandMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerEXPGaugeCommandMenu_C::ExecuteUbergraph_PlayerEXPGaugeCommandMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerEXPGaugeCommandMenu_C", "ExecuteUbergraph_PlayerEXPGaugeCommandMenu");

	Params::PlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerEXPGaugeCommandMenu.PlayerEXPGaugeCommandMenu_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerEXPGaugeCommandMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerEXPGaugeCommandMenu_C", "Tick");

	Params::PlayerEXPGaugeCommandMenu_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerEXPGaugeCommandMenu.PlayerEXPGaugeCommandMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerEXPGaugeCommandMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerEXPGaugeCommandMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerEXPGaugeCommandMenu.PlayerEXPGaugeCommandMenu_C.SetGaugeUpdateStop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsUpdateStop                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerEXPGaugeCommandMenu_C::SetGaugeUpdateStop(bool InIsUpdateStop)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerEXPGaugeCommandMenu_C", "SetGaugeUpdateStop");

	Params::PlayerEXPGaugeCommandMenu_C_SetGaugeUpdateStop Parms{};

	Parms.InIsUpdateStop = InIsUpdateStop;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerEXPGaugeCommandMenu.PlayerEXPGaugeCommandMenu_C.SetExpOverflowMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInIsExpOverflowMode                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerEXPGaugeCommandMenu_C::SetExpOverflowMode(bool bInIsExpOverflowMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerEXPGaugeCommandMenu_C", "SetExpOverflowMode");

	Params::PlayerEXPGaugeCommandMenu_C_SetExpOverflowMode Parms{};

	Parms.bInIsExpOverflowMode = bInIsExpOverflowMode;

	UObject::ProcessEvent(Func, &Parms);
}

}

