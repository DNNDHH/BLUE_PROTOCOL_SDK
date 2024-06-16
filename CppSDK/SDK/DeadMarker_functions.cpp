#pragma once

 

// Package: DeadMarker

#include "Basic.hpp"

#include "DeadMarker_classes.hpp"
#include "DeadMarker_parameters.hpp"


namespace SDK
{

// Function DeadMarker.DeadMarker_C.ExecuteUbergraph_DeadMarker
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDeadMarker_C::ExecuteUbergraph_DeadMarker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DeadMarker_C", "ExecuteUbergraph_DeadMarker");

	Params::DeadMarker_C_ExecuteUbergraph_DeadMarker Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DeadMarker.DeadMarker_C.SetAutoRespawnRemainTime
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   RemainTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDeadMarker_C::SetAutoRespawnRemainTime(float RemainTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DeadMarker_C", "SetAutoRespawnRemainTime");

	Params::DeadMarker_C_SetAutoRespawnRemainTime Parms{};

	Parms.RemainTime = RemainTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DeadMarker.DeadMarker_C.DeadMarkerVisibility
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bVisibility                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDeadMarker_C::DeadMarkerVisibility(bool bVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DeadMarker_C", "DeadMarkerVisibility");

	Params::DeadMarker_C_DeadMarkerVisibility Parms{};

	Parms.bVisibility = bVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DeadMarker.DeadMarker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDeadMarker_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DeadMarker_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DeadMarker.DeadMarker_C.Set Auto Respawn Remain Time Internal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   RemainTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDeadMarker_C::Set_Auto_Respawn_Remain_Time_Internal(float RemainTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DeadMarker_C", "Set Auto Respawn Remain Time Internal");

	Params::DeadMarker_C_Set_Auto_Respawn_Remain_Time_Internal Parms{};

	Parms.RemainTime = RemainTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DeadMarker.DeadMarker_C.Dead Marker Visibility Internal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bVisibility                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDeadMarker_C::Dead_Marker_Visibility_Internal(bool bVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DeadMarker_C", "Dead Marker Visibility Internal");

	Params::DeadMarker_C_Dead_Marker_Visibility_Internal Parms{};

	Parms.bVisibility = bVisibility;

	UObject::ProcessEvent(Func, &Parms);
}

}

