#pragma once

 

// Package: StackBFailedAnimation

#include "Basic.hpp"

#include "StackBFailedAnimation_classes.hpp"
#include "StackBFailedAnimation_parameters.hpp"


namespace SDK
{

// Function StackBFailedAnimation.StackBFailedAnimation_C.OnAnimPlayed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UStackBFailedAnimation_C::OnAnimPlayed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackBFailedAnimation_C", "OnAnimPlayed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StackBFailedAnimation.StackBFailedAnimation_C.ExecuteUbergraph_StackBFailedAnimation
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStackBFailedAnimation_C::ExecuteUbergraph_StackBFailedAnimation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackBFailedAnimation_C", "ExecuteUbergraph_StackBFailedAnimation");

	Params::StackBFailedAnimation_C_ExecuteUbergraph_StackBFailedAnimation Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StackBFailedAnimation.StackBFailedAnimation_C.Play
// (BlueprintCallable, BlueprintEvent)

void UStackBFailedAnimation_C::Play()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackBFailedAnimation_C", "Play");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StackBFailedAnimation.StackBFailedAnimation_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStackBFailedAnimation_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackBFailedAnimation_C", "OnAnimationFinished");

	Params::StackBFailedAnimation_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StackBFailedAnimation.StackBFailedAnimation_C.AnimaterinComplete
// (BlueprintCallable, BlueprintEvent)

void UStackBFailedAnimation_C::AnimaterinComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackBFailedAnimation_C", "AnimaterinComplete");

	UObject::ProcessEvent(Func, nullptr);
}

}

