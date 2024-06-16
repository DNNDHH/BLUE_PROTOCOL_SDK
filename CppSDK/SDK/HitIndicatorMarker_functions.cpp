#pragma once

 

// Package: HitIndicatorMarker

#include "Basic.hpp"

#include "HitIndicatorMarker_classes.hpp"
#include "HitIndicatorMarker_parameters.hpp"


namespace SDK
{

// Function HitIndicatorMarker.HitIndicatorMarker_C.ExecuteUbergraph_HitIndicatorMarker
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHitIndicatorMarker_C::ExecuteUbergraph_HitIndicatorMarker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HitIndicatorMarker_C", "ExecuteUbergraph_HitIndicatorMarker");

	Params::HitIndicatorMarker_C_ExecuteUbergraph_HitIndicatorMarker Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HitIndicatorMarker.HitIndicatorMarker_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHitIndicatorMarker_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HitIndicatorMarker_C", "OnAnimationFinished");

	Params::HitIndicatorMarker_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HitIndicatorMarker.HitIndicatorMarker_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHitIndicatorMarker_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HitIndicatorMarker_C", "Tick");

	Params::HitIndicatorMarker_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HitIndicatorMarker.HitIndicatorMarker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHitIndicatorMarker_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HitIndicatorMarker_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HitIndicatorMarker.HitIndicatorMarker_C.UpdateDirection
// (Public, BlueprintCallable, BlueprintEvent)

void UHitIndicatorMarker_C::UpdateDirection()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HitIndicatorMarker_C", "UpdateDirection");

	UObject::ProcessEvent(Func, nullptr);
}

}

