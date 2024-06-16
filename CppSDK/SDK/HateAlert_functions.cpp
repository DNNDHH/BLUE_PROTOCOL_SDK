#pragma once

 

// Package: HateAlert

#include "Basic.hpp"

#include "HateAlert_classes.hpp"
#include "HateAlert_parameters.hpp"


namespace SDK
{

// Function HateAlert.HateAlert_C.ExecuteUbergraph_HateAlert
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHateAlert_C::ExecuteUbergraph_HateAlert(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HateAlert_C", "ExecuteUbergraph_HateAlert");

	Params::HateAlert_C_ExecuteUbergraph_HateAlert Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HateAlert.HateAlert_C.OnIsTrainingBattleState
// (Event, Public, BlueprintEvent)

void UHateAlert_C::OnIsTrainingBattleState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HateAlert_C", "OnIsTrainingBattleState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HateAlert.HateAlert_C.OnFindByEnemy
// (Event, Public, BlueprintEvent)

void UHateAlert_C::OnFindByEnemy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HateAlert_C", "OnFindByEnemy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HateAlert.HateAlert_C.OnEnemyTarget
// (Event, Public, BlueprintEvent)

void UHateAlert_C::OnEnemyTarget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HateAlert_C", "OnEnemyTarget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HateAlert.HateAlert_C.OnHide
// (Event, Public, BlueprintEvent)

void UHateAlert_C::OnHide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HateAlert_C", "OnHide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HateAlert.HateAlert_C.ParentsCallTick
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHateAlert_C::ParentsCallTick(float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HateAlert_C", "ParentsCallTick");

	Params::HateAlert_C_ParentsCallTick Parms{};

	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

