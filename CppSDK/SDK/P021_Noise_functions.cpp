#pragma once

 

// Package: P021_Noise

#include "Basic.hpp"

#include "P021_Noise_classes.hpp"
#include "P021_Noise_parameters.hpp"


namespace SDK
{

// Function P021_Noise.P021_Noise_C.ExecuteUbergraph_P021_Noise
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UP021_Noise_C::ExecuteUbergraph_P021_Noise(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P021_Noise_C", "ExecuteUbergraph_P021_Noise");

	Params::P021_Noise_C_ExecuteUbergraph_P021_Noise Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function P021_Noise.P021_Noise_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UP021_Noise_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P021_Noise_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P021_Noise.P021_Noise_C.PlayAnimForwardNoise
// (Public, BlueprintCallable, BlueprintEvent)

void UP021_Noise_C::PlayAnimForwardNoise()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P021_Noise_C", "PlayAnimForwardNoise");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P021_Noise.P021_Noise_C.PlayAnimReverseNoise
// (Public, BlueprintCallable, BlueprintEvent)

void UP021_Noise_C::PlayAnimReverseNoise()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P021_Noise_C", "PlayAnimReverseNoise");

	UObject::ProcessEvent(Func, nullptr);
}

}

