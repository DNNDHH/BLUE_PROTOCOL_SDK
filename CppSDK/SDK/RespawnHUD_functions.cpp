#pragma once

 

// Package: RespawnHUD

#include "Basic.hpp"

#include "RespawnHUD_classes.hpp"
#include "RespawnHUD_parameters.hpp"


namespace SDK
{

// Function RespawnHUD.RespawnHUD_C.ExecuteUbergraph_RespawnHUD
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URespawnHUD_C::ExecuteUbergraph_RespawnHUD(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RespawnHUD_C", "ExecuteUbergraph_RespawnHUD");

	Params::RespawnHUD_C_ExecuteUbergraph_RespawnHUD Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RespawnHUD.RespawnHUD_C.OnUpdateGauge
// (Event, Protected, BlueprintEvent)

void URespawnHUD_C::OnUpdateGauge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RespawnHUD_C", "OnUpdateGauge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RespawnHUD.RespawnHUD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void URespawnHUD_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RespawnHUD_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RespawnHUD.RespawnHUD_C.ShowBattleAreaDialog_Event
// (BlueprintCallable, BlueprintEvent)

void URespawnHUD_C::ShowBattleAreaDialog_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RespawnHUD_C", "ShowBattleAreaDialog_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RespawnHUD.RespawnHUD_C.EndCounddownDynamicDlegate_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECountdownResult                        Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URespawnHUD_C::EndCounddownDynamicDlegate_Event(ECountdownResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RespawnHUD_C", "EndCounddownDynamicDlegate_Event");

	Params::RespawnHUD_C_EndCounddownDynamicDlegate_Event Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RespawnHUD.RespawnHUD_C.ShowCountDownDialog_Event
// (BlueprintCallable, BlueprintEvent)

void URespawnHUD_C::ShowCountDownDialog_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RespawnHUD_C", "ShowCountDownDialog_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RespawnHUD.RespawnHUD_C.ShowRespawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InTime                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URespawnHUD_C::ShowRespawn(float InTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RespawnHUD_C", "ShowRespawn");

	Params::RespawnHUD_C_ShowRespawn Parms{};

	Parms.InTime = InTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RespawnHUD.RespawnHUD_C.BattleAreaDisableMessage
// (Public, BlueprintCallable, BlueprintEvent)

void URespawnHUD_C::BattleAreaDisableMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RespawnHUD_C", "BattleAreaDisableMessage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RespawnHUD.RespawnHUD_C.GetResurrectionRemainTimeRate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   Rate                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URespawnHUD_C::GetResurrectionRemainTimeRate(float* Rate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RespawnHUD_C", "GetResurrectionRemainTimeRate");

	Params::RespawnHUD_C_GetResurrectionRemainTimeRate Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Rate != nullptr)
		*Rate = Parms.Rate;
}


// Function RespawnHUD.RespawnHUD_C.UpdateRespawnGauge
// (Public, BlueprintCallable, BlueprintEvent)

void URespawnHUD_C::UpdateRespawnGauge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RespawnHUD_C", "UpdateRespawnGauge");

	UObject::ProcessEvent(Func, nullptr);
}

}

