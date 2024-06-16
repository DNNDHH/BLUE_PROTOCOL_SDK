#pragma once

 

// Package: PlaceGuide

#include "Basic.hpp"

#include "PlaceGuide_classes.hpp"
#include "PlaceGuide_parameters.hpp"


namespace SDK
{

// Function PlaceGuide.PlaceGuide_C.ExecuteUbergraph_PlaceGuide
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlaceGuide_C::ExecuteUbergraph_PlaceGuide(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlaceGuide_C", "ExecuteUbergraph_PlaceGuide");

	Params::PlaceGuide_C_ExecuteUbergraph_PlaceGuide Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlaceGuide.PlaceGuide_C.OnPlayEnd_Event_0
// (BlueprintCallable, BlueprintEvent)

void UPlaceGuide_C::OnPlayEnd_Event_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlaceGuide_C", "OnPlayEnd_Event_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlaceGuide.PlaceGuide_C.ShowRequestDemo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InLocationID                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlaceGuide_C::ShowRequestDemo(class FName InLocationID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlaceGuide_C", "ShowRequestDemo");

	Params::PlaceGuide_C_ShowRequestDemo Parms{};

	Parms.InLocationID = InLocationID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlaceGuide.PlaceGuide_C.BndEvt__ContentWidget_K2Node_ComponentBoundEvent_0_OnPlayEnd__DelegateSignature
// (BlueprintEvent)

void UPlaceGuide_C::BndEvt__ContentWidget_K2Node_ComponentBoundEvent_0_OnPlayEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlaceGuide_C", "BndEvt__ContentWidget_K2Node_ComponentBoundEvent_0_OnPlayEnd__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlaceGuide.PlaceGuide_C.ShowRequest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             LocationId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Priority                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlaceGuide_C::ShowRequest(class FName LocationId, int32 Param_Priority)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlaceGuide_C", "ShowRequest");

	Params::PlaceGuide_C_ShowRequest Parms{};

	Parms.LocationId = LocationId;
	Parms.Param_Priority = Param_Priority;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlaceGuide.PlaceGuide_C.HideRequest
// (Public, BlueprintCallable, BlueprintEvent)

void UPlaceGuide_C::HideRequest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlaceGuide_C", "HideRequest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlaceGuide.PlaceGuide_C.CheckRequest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPlaceGuide_C::CheckRequest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlaceGuide_C", "CheckRequest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlaceGuide.PlaceGuide_C.HideRequestDemo
// (Public, BlueprintCallable, BlueprintEvent)

void UPlaceGuide_C::HideRequestDemo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlaceGuide_C", "HideRequestDemo");

	UObject::ProcessEvent(Func, nullptr);
}

}

