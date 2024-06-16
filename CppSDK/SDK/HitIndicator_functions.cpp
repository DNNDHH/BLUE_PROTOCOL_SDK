#pragma once

 

// Package: HitIndicator

#include "Basic.hpp"

#include "HitIndicator_classes.hpp"
#include "HitIndicator_parameters.hpp"


namespace SDK
{

// Function HitIndicator.HitIndicator_C.ExecuteUbergraph_HitIndicator
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHitIndicator_C::ExecuteUbergraph_HitIndicator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HitIndicator_C", "ExecuteUbergraph_HitIndicator");

	Params::HitIndicator_C_ExecuteUbergraph_HitIndicator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HitIndicator.HitIndicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHitIndicator_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HitIndicator_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HitIndicator.HitIndicator_C.AddMarker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHitIndicator_C::AddMarker(const struct FVector& HitLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HitIndicator_C", "AddMarker");

	Params::HitIndicator_C_AddMarker Parms{};

	Parms.HitLocation = std::move(HitLocation);

	UObject::ProcessEvent(Func, &Parms);
}

}

