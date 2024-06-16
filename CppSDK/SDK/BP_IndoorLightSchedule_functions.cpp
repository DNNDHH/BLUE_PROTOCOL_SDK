#pragma once

 

// Package: BP_IndoorLightSchedule

#include "Basic.hpp"

#include "BP_IndoorLightSchedule_classes.hpp"
#include "BP_IndoorLightSchedule_parameters.hpp"


namespace SDK
{

// Function BP_IndoorLightSchedule.BP_IndoorLightSchedule_C.ExecuteUbergraph_BP_IndoorLightSchedule
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IndoorLightSchedule_C::ExecuteUbergraph_BP_IndoorLightSchedule(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IndoorLightSchedule_C", "ExecuteUbergraph_BP_IndoorLightSchedule");

	Params::BP_IndoorLightSchedule_C_ExecuteUbergraph_BP_IndoorLightSchedule Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_IndoorLightSchedule.BP_IndoorLightSchedule_C.InitTickInterval
// (BlueprintCallable, BlueprintEvent)

void ABP_IndoorLightSchedule_C::InitTickInterval()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IndoorLightSchedule_C", "InitTickInterval");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_IndoorLightSchedule.BP_IndoorLightSchedule_C.InDoorTickIntervalSet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBDebugMenuType                        MenuType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             RowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IndoorLightSchedule_C::InDoorTickIntervalSet(ESBDebugMenuType MenuType, class FName RowName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IndoorLightSchedule_C", "InDoorTickIntervalSet");

	Params::BP_IndoorLightSchedule_C_InDoorTickIntervalSet Parms{};

	Parms.MenuType = MenuType;
	Parms.RowName = RowName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_IndoorLightSchedule.BP_IndoorLightSchedule_C.InitEditorPreview
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Sw                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IndoorLightSchedule_C::InitEditorPreview(bool Sw)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IndoorLightSchedule_C", "InitEditorPreview");

	Params::BP_IndoorLightSchedule_C_InitEditorPreview Parms{};

	Parms.Sw = Sw;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_IndoorLightSchedule.BP_IndoorLightSchedule_C.PreviewTest
// (BlueprintCallable, BlueprintEvent)

void ABP_IndoorLightSchedule_C::PreviewTest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IndoorLightSchedule_C", "PreviewTest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_IndoorLightSchedule.BP_IndoorLightSchedule_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IndoorLightSchedule_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IndoorLightSchedule_C", "ReceiveTick");

	Params::BP_IndoorLightSchedule_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_IndoorLightSchedule.BP_IndoorLightSchedule_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_IndoorLightSchedule_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IndoorLightSchedule_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_IndoorLightSchedule.BP_IndoorLightSchedule_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_IndoorLightSchedule_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IndoorLightSchedule_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

