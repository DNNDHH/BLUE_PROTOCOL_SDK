#pragma once

 

// Package: EngramCannonHUD_Base

#include "Basic.hpp"

#include "EngramCannonHUD_Base_classes.hpp"
#include "EngramCannonHUD_Base_parameters.hpp"


namespace SDK
{

// Function EngramCannonHUD_Base.EngramCannonHUD_Base_C.ExecuteUbergraph_EngramCannonHUD_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEngramCannonHUD_Base_C::ExecuteUbergraph_EngramCannonHUD_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EngramCannonHUD_Base_C", "ExecuteUbergraph_EngramCannonHUD_Base");

	Params::EngramCannonHUD_Base_C_ExecuteUbergraph_EngramCannonHUD_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EngramCannonHUD_Base.EngramCannonHUD_Base_C.FinishedNoiseAnimation
// (BlueprintCallable, BlueprintEvent)

void UEngramCannonHUD_Base_C::FinishedNoiseAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EngramCannonHUD_Base_C", "FinishedNoiseAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EngramCannonHUD_Base.EngramCannonHUD_Base_C.WidgetAnimationEvt_NoiseAnime_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UEngramCannonHUD_Base_C::WidgetAnimationEvt_NoiseAnime_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EngramCannonHUD_Base_C", "WidgetAnimationEvt_NoiseAnime_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EngramCannonHUD_Base.EngramCannonHUD_Base_C.PlayNoiseAnime
// (BlueprintCallable, BlueprintEvent)

void UEngramCannonHUD_Base_C::PlayNoiseAnime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EngramCannonHUD_Base_C", "PlayNoiseAnime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EngramCannonHUD_Base.EngramCannonHUD_Base_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEngramCannonHUD_Base_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EngramCannonHUD_Base_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EngramCannonHUD_Base.EngramCannonHUD_Base_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEngramCannonHUD_Base_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EngramCannonHUD_Base_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

