#pragma once

 

// Package: BP_ExtraFoothold

#include "Basic.hpp"

#include "BP_ExtraFoothold_classes.hpp"
#include "BP_ExtraFoothold_parameters.hpp"


namespace SDK
{

// Function BP_ExtraFoothold.BP_ExtraFoothold_C.ExecuteUbergraph_BP_ExtraFoothold
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExtraFoothold_C::ExecuteUbergraph_BP_ExtraFoothold(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExtraFoothold_C", "ExecuteUbergraph_BP_ExtraFoothold");

	Params::BP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ExtraFoothold.BP_ExtraFoothold_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ExtraFoothold_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExtraFoothold_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ExtraFoothold.BP_ExtraFoothold_C.DebugFlyinStatusChange
// (Event, Public, BlueprintEvent)

void ABP_ExtraFoothold_C::DebugFlyinStatusChange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExtraFoothold_C", "DebugFlyinStatusChange");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ExtraFoothold.BP_ExtraFoothold_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExtraFoothold_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExtraFoothold_C", "ReceiveTick");

	Params::BP_ExtraFoothold_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ExtraFoothold.BP_ExtraFoothold_C.CheckWarning
// (BlueprintCallable, BlueprintEvent)

void ABP_ExtraFoothold_C::CheckWarning()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExtraFoothold_C", "CheckWarning");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ExtraFoothold.BP_ExtraFoothold_C.SetStep
// (BlueprintCallable, BlueprintEvent)

void ABP_ExtraFoothold_C::SetStep()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExtraFoothold_C", "SetStep");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ExtraFoothold.BP_ExtraFoothold_C.HideStep
// (BlueprintCallable, BlueprintEvent)

void ABP_ExtraFoothold_C::HideStep()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExtraFoothold_C", "HideStep");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ExtraFoothold.BP_ExtraFoothold_C.GetLocalPlayer
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_PlayerCharacter_C*            LocalPlayerCharacter                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ExtraFoothold_C::GetLocalPlayer(class ABP_PlayerCharacter_C** LocalPlayerCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExtraFoothold_C", "GetLocalPlayer");

	Params::BP_ExtraFoothold_C_GetLocalPlayer Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (LocalPlayerCharacter != nullptr)
		*LocalPlayerCharacter = Parms.LocalPlayerCharacter;
}


// Function BP_ExtraFoothold.BP_ExtraFoothold_C.BadFallingSurvey
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    SetStep                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ExtraFoothold_C::BadFallingSurvey(bool* SetStep)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ExtraFoothold_C", "BadFallingSurvey");

	Params::BP_ExtraFoothold_C_BadFallingSurvey Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SetStep != nullptr)
		*SetStep = Parms.SetStep;
}

}

