#pragma once

 

// Package: ImagineCraftAnim

#include "Basic.hpp"

#include "ImagineCraftAnim_classes.hpp"
#include "ImagineCraftAnim_parameters.hpp"


namespace SDK
{

// Function imagineCraftAnim.imagineCraftAnim_C.OnAnimFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UImagineCraftAnim_C::OnAnimFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("imagineCraftAnim_C", "OnAnimFinished__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function imagineCraftAnim.imagineCraftAnim_C.ExecuteUbergraph_imagineCraftAnim
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UImagineCraftAnim_C::ExecuteUbergraph_imagineCraftAnim(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("imagineCraftAnim_C", "ExecuteUbergraph_imagineCraftAnim");

	Params::ImagineCraftAnim_C_ExecuteUbergraph_imagineCraftAnim Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function imagineCraftAnim.imagineCraftAnim_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UImagineCraftAnim_C::WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("imagineCraftAnim_C", "WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function imagineCraftAnim.imagineCraftAnim_C.Play
// (BlueprintCallable, BlueprintEvent)

void UImagineCraftAnim_C::Play()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("imagineCraftAnim_C", "Play");

	UObject::ProcessEvent(Func, nullptr);
}


// Function imagineCraftAnim.imagineCraftAnim_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UImagineCraftAnim_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("imagineCraftAnim_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

