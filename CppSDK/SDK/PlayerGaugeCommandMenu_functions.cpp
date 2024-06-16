#pragma once

 

// Package: PlayerGaugeCommandMenu

#include "Basic.hpp"

#include "PlayerGaugeCommandMenu_classes.hpp"
#include "PlayerGaugeCommandMenu_parameters.hpp"


namespace SDK
{

// Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.ExecuteUbergraph_PlayerGaugeCommandMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerGaugeCommandMenu_C::ExecuteUbergraph_PlayerGaugeCommandMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerGaugeCommandMenu_C", "ExecuteUbergraph_PlayerGaugeCommandMenu");

	Params::PlayerGaugeCommandMenu_C_ExecuteUbergraph_PlayerGaugeCommandMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerGaugeCommandMenu_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerGaugeCommandMenu_C", "PreConstruct");

	Params::PlayerGaugeCommandMenu_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerGaugeCommandMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerGaugeCommandMenu_C", "Tick");

	Params::PlayerGaugeCommandMenu_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerGaugeCommandMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerGaugeCommandMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.AdjustHPGaugeSize
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerGaugeCommandMenu_C::AdjustHPGaugeSize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerGaugeCommandMenu_C", "AdjustHPGaugeSize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.SetCurrHpGaugeWidth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InHpGaugeWidth                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerGaugeCommandMenu_C::SetCurrHpGaugeWidth(float InHpGaugeWidth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerGaugeCommandMenu_C", "SetCurrHpGaugeWidth");

	Params::PlayerGaugeCommandMenu_C_SetCurrHpGaugeWidth Parms{};

	Parms.InHpGaugeWidth = InHpGaugeWidth;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.UpdateHPLossGaunge
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerGaugeCommandMenu_C::UpdateHPLossGaunge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerGaugeCommandMenu_C", "UpdateHPLossGaunge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.UpdateHpGauge
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InCurrHp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InMaxHp                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerGaugeCommandMenu_C::UpdateHpGauge(int32 InCurrHp, int32 InMaxHp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerGaugeCommandMenu_C", "UpdateHpGauge");

	Params::PlayerGaugeCommandMenu_C_UpdateHpGauge Parms{};

	Parms.InCurrHp = InCurrHp;
	Parms.InMaxHp = InMaxHp;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.UpdateStGauge
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InCurrSt                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InMaxSt                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerGaugeCommandMenu_C::UpdateStGauge(int32 InCurrSt, int32 InMaxSt)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerGaugeCommandMenu_C", "UpdateStGauge");

	Params::PlayerGaugeCommandMenu_C_UpdateStGauge Parms{};

	Parms.InCurrSt = InCurrSt;
	Parms.InMaxSt = InMaxSt;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.SetDhcBattleTopMenuMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsDhcBattleTopMenuMode                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerGaugeCommandMenu_C::SetDhcBattleTopMenuMode(bool InIsDhcBattleTopMenuMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerGaugeCommandMenu_C", "SetDhcBattleTopMenuMode");

	Params::PlayerGaugeCommandMenu_C_SetDhcBattleTopMenuMode Parms{};

	Parms.InIsDhcBattleTopMenuMode = InIsDhcBattleTopMenuMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerGaugeCommandMenu.PlayerGaugeCommandMenu_C.GetDefaultHpGaugeWidth
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   OutHpGaugeWidth                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerGaugeCommandMenu_C::GetDefaultHpGaugeWidth(float* OutHpGaugeWidth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerGaugeCommandMenu_C", "GetDefaultHpGaugeWidth");

	Params::PlayerGaugeCommandMenu_C_GetDefaultHpGaugeWidth Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutHpGaugeWidth != nullptr)
		*OutHpGaugeWidth = Parms.OutHpGaugeWidth;
}

}

