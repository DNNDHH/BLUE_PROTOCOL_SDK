#pragma once

 

// Package: EngramCannonHUD_TargetSite

#include "Basic.hpp"

#include "EngramCannonHUD_TargetSite_classes.hpp"
#include "EngramCannonHUD_TargetSite_parameters.hpp"


namespace SDK
{

// Function EngramCannonHUD_TargetSite.EngramCannonHUD_TargetSite_C.ExecuteUbergraph_EngramCannonHUD_TargetSite
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEngramCannonHUD_TargetSite_C::ExecuteUbergraph_EngramCannonHUD_TargetSite(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EngramCannonHUD_TargetSite_C", "ExecuteUbergraph_EngramCannonHUD_TargetSite");

	Params::EngramCannonHUD_TargetSite_C_ExecuteUbergraph_EngramCannonHUD_TargetSite Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EngramCannonHUD_TargetSite.EngramCannonHUD_TargetSite_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEngramCannonHUD_TargetSite_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EngramCannonHUD_TargetSite_C", "Tick");

	Params::EngramCannonHUD_TargetSite_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EngramCannonHUD_TargetSite.EngramCannonHUD_TargetSite_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEngramCannonHUD_TargetSite_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EngramCannonHUD_TargetSite_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EngramCannonHUD_TargetSite.EngramCannonHUD_TargetSite_C.Get Camera Foward Point
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Distance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector UEngramCannonHUD_TargetSite_C::Get_Camera_Foward_Point(float Distance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EngramCannonHUD_TargetSite_C", "Get Camera Foward Point");

	Params::EngramCannonHUD_TargetSite_C_Get_Camera_Foward_Point Parms{};

	Parms.Distance = Distance;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function EngramCannonHUD_TargetSite.EngramCannonHUD_TargetSite_C.InitPoint
// (Public, BlueprintCallable, BlueprintEvent)

void UEngramCannonHUD_TargetSite_C::InitPoint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EngramCannonHUD_TargetSite_C", "InitPoint");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EngramCannonHUD_TargetSite.EngramCannonHUD_TargetSite_C.UpdatePoint
// (Public, BlueprintCallable, BlueprintEvent)

void UEngramCannonHUD_TargetSite_C::UpdatePoint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EngramCannonHUD_TargetSite_C", "UpdatePoint");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EngramCannonHUD_TargetSite.EngramCannonHUD_TargetSite_C.UpdateWidgetLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          WidgetObject                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Delta_Time                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Move_Speed                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEngramCannonHUD_TargetSite_C::UpdateWidgetLocation(class UWidget* WidgetObject, const struct FVector& Location, float Delta_Time, float Move_Speed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EngramCannonHUD_TargetSite_C", "UpdateWidgetLocation");

	Params::EngramCannonHUD_TargetSite_C_UpdateWidgetLocation Parms{};

	Parms.WidgetObject = WidgetObject;
	Parms.Location = std::move(Location);
	Parms.Delta_Time = Delta_Time;
	Parms.Move_Speed = Move_Speed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EngramCannonHUD_TargetSite.EngramCannonHUD_TargetSite_C.UpdateArrowVisible
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UEngramCannonHUD_TargetSite_C::UpdateArrowVisible()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EngramCannonHUD_TargetSite_C", "UpdateArrowVisible");

	UObject::ProcessEvent(Func, nullptr);
}

}

