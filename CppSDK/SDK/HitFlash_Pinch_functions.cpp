#pragma once

 

// Package: HitFlash_Pinch

#include "Basic.hpp"

#include "HitFlash_Pinch_classes.hpp"
#include "HitFlash_Pinch_parameters.hpp"


namespace SDK
{

// Function HitFlash_Pinch.HitFlash_Pinch_C.ExecuteUbergraph_HitFlash_Pinch
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHitFlash_Pinch_C::ExecuteUbergraph_HitFlash_Pinch(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HitFlash_Pinch_C", "ExecuteUbergraph_HitFlash_Pinch");

	Params::HitFlash_Pinch_C_ExecuteUbergraph_HitFlash_Pinch Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HitFlash_Pinch.HitFlash_Pinch_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHitFlash_Pinch_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HitFlash_Pinch_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

