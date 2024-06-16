#pragma once

 

// Package: LoadingStatusDebug

#include "Basic.hpp"

#include "LoadingStatusDebug_classes.hpp"
#include "LoadingStatusDebug_parameters.hpp"


namespace SDK
{

// Function LoadingStatusDebug.LoadingStatusDebug_C.ExecuteUbergraph_LoadingStatusDebug
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoadingStatusDebug_C::ExecuteUbergraph_LoadingStatusDebug(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadingStatusDebug_C", "ExecuteUbergraph_LoadingStatusDebug");

	Params::LoadingStatusDebug_C_ExecuteUbergraph_LoadingStatusDebug Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LoadingStatusDebug.LoadingStatusDebug_C.BndEvt__LoadingStatusDebug_CmnClose01_93_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
// (BlueprintEvent)

void ULoadingStatusDebug_C::BndEvt__LoadingStatusDebug_CmnClose01_93_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadingStatusDebug_C", "BndEvt__LoadingStatusDebug_CmnClose01_93_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LoadingStatusDebug.LoadingStatusDebug_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoadingStatusDebug_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadingStatusDebug_C", "Tick");

	Params::LoadingStatusDebug_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LoadingStatusDebug.LoadingStatusDebug_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULoadingStatusDebug_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadingStatusDebug_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LoadingStatusDebug.LoadingStatusDebug_C.UpdateStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULoadingStatusDebug_C::UpdateStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadingStatusDebug_C", "UpdateStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LoadingStatusDebug.LoadingStatusDebug_C.UpdateVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void ULoadingStatusDebug_C::UpdateVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadingStatusDebug_C", "UpdateVisibility");

	UObject::ProcessEvent(Func, nullptr);
}

}

