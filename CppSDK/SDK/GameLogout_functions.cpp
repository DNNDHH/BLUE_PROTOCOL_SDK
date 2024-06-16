#pragma once

 

// Package: GameLogout

#include "Basic.hpp"

#include "GameLogout_classes.hpp"
#include "GameLogout_parameters.hpp"


namespace SDK
{

// Function GameLogout.GameLogout_C.ExecuteUbergraph_GameLogout
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameLogout_C::ExecuteUbergraph_GameLogout(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameLogout_C", "ExecuteUbergraph_GameLogout");

	Params::GameLogout_C_ExecuteUbergraph_GameLogout Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GameLogout.GameLogout_C.OnEndCountdown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECountdownResult                        Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameLogout_C::OnEndCountdown(ECountdownResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameLogout_C", "OnEndCountdown");

	Params::GameLogout_C_OnEndCountdown Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GameLogout.GameLogout_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameLogout_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameLogout_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

