#pragma once

 

// Package: StackBSuccessAnimation

#include "Basic.hpp"

#include "StackBSuccessAnimation_classes.hpp"
#include "StackBSuccessAnimation_parameters.hpp"


namespace SDK
{

// Function StackBSuccessAnimation.StackBSuccessAnimation_C.OnAnimPlayed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UStackBSuccessAnimation_C::OnAnimPlayed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackBSuccessAnimation_C", "OnAnimPlayed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StackBSuccessAnimation.StackBSuccessAnimation_C.ExecuteUbergraph_StackBSuccessAnimation
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStackBSuccessAnimation_C::ExecuteUbergraph_StackBSuccessAnimation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackBSuccessAnimation_C", "ExecuteUbergraph_StackBSuccessAnimation");

	Params::StackBSuccessAnimation_C_ExecuteUbergraph_StackBSuccessAnimation Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StackBSuccessAnimation.StackBSuccessAnimation_C.Play
// (BlueprintCallable, BlueprintEvent)

void UStackBSuccessAnimation_C::Play()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackBSuccessAnimation_C", "Play");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StackBSuccessAnimation.StackBSuccessAnimation_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStackBSuccessAnimation_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackBSuccessAnimation_C", "OnAnimationFinished");

	Params::StackBSuccessAnimation_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StackBSuccessAnimation.StackBSuccessAnimation_C.AnimaterinComplete
// (BlueprintCallable, BlueprintEvent)

void UStackBSuccessAnimation_C::AnimaterinComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackBSuccessAnimation_C", "AnimaterinComplete");

	UObject::ProcessEvent(Func, nullptr);
}

}

