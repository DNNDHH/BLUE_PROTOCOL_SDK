#pragma once

 

// Package: Startup

#include "Basic.hpp"

#include "Startup_classes.hpp"
#include "Startup_parameters.hpp"


namespace SDK
{

// Function Startup.Startup_C.OnFinish__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UStartup_C::OnFinish__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Startup_C", "OnFinish__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Startup.Startup_C.ExecuteUbergraph_Startup
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStartup_C::ExecuteUbergraph_Startup(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Startup_C", "ExecuteUbergraph_Startup");

	Params::Startup_C_ExecuteUbergraph_Startup Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Startup.Startup_C.TryRemove
// (BlueprintCallable, BlueprintEvent)

void UStartup_C::TryRemove()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Startup_C", "TryRemove");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Startup.Startup_C.TerminationRequest
// (BlueprintCallable, BlueprintEvent)

void UStartup_C::TerminationRequest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Startup_C", "TerminationRequest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Startup.Startup_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)

void UStartup_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Startup_C", "CustomEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Startup.Startup_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStartup_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Startup_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Startup.Startup_C.OnAnimationStarted
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStartup_C::OnAnimationStarted(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Startup_C", "OnAnimationStarted");

	Params::Startup_C_OnAnimationStarted Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Startup.Startup_C.RequestBGM
// (BlueprintCallable, BlueprintEvent)

void UStartup_C::RequestBGM()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Startup_C", "RequestBGM");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Startup.Startup_C.BndEvt__AllowSkip_K2Node_ComponentBoundEvent_75_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UStartup_C::BndEvt__AllowSkip_K2Node_ComponentBoundEvent_75_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Startup_C", "BndEvt__AllowSkip_K2Node_ComponentBoundEvent_75_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Startup.Startup_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void UStartup_C::CustomEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Startup_C", "CustomEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Startup.Startup_C.CallFinish
// (BlueprintCallable, BlueprintEvent)

void UStartup_C::CallFinish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Startup_C", "CallFinish");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Startup.Startup_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStartup_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Startup_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Startup.Startup_C.AnimFinished
// (BlueprintCallable, BlueprintEvent)

void UStartup_C::AnimFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Startup_C", "AnimFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Startup.Startup_C.PlayStackTop
// (BlueprintCallable, BlueprintEvent)

void UStartup_C::PlayStackTop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Startup_C", "PlayStackTop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Startup.Startup_C.InitAnimationDelegate
// (BlueprintCallable, BlueprintEvent)

void UStartup_C::InitAnimationDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Startup_C", "InitAnimationDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Startup.Startup_C.InitSkipPoint
// (BlueprintCallable, BlueprintEvent)

void UStartup_C::InitSkipPoint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Startup_C", "InitSkipPoint");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Startup.Startup_C.TrySkip
// (BlueprintCallable, BlueprintEvent)

void UStartup_C::TrySkip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Startup_C", "TrySkip");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Startup.Startup_C.StartAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 InAnimation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InStartTimeOffset                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStartup_C::StartAnimation(class UWidgetAnimation* InAnimation, float InStartTimeOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Startup_C", "StartAnimation");

	Params::Startup_C_StartAnimation Parms{};

	Parms.InAnimation = InAnimation;
	Parms.InStartTimeOffset = InStartTimeOffset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Startup.Startup_C.Is Today Watched
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsTodayWatch                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UStartup_C::Is_Today_Watched(bool* IsTodayWatch)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Startup_C", "Is Today Watched");

	Params::Startup_C_Is_Today_Watched Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsTodayWatch != nullptr)
		*IsTodayWatch = Parms.IsTodayWatch;
}


// Function Startup.Startup_C.UpdateWatchTime
// (Public, BlueprintCallable, BlueprintEvent)

void UStartup_C::UpdateWatchTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Startup_C", "UpdateWatchTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Startup.Startup_C.SequenceEvent__ENTRYPOINTStartup_0
// (Public, BlueprintCallable, BlueprintEvent)

void UStartup_C::SequenceEvent__ENTRYPOINTStartup_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Startup_C", "SequenceEvent__ENTRYPOINTStartup_0");

	UObject::ProcessEvent(Func, nullptr);
}

}

