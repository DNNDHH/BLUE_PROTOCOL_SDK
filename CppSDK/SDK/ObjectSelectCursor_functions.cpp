#pragma once

 

// Package: ObjectSelectCursor

#include "Basic.hpp"

#include "ObjectSelectCursor_classes.hpp"
#include "ObjectSelectCursor_parameters.hpp"


namespace SDK
{

// Function ObjectSelectCursor.ObjectSelectCursor_C.FinishedFade__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsFadeIn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UObjectSelectCursor_C::FinishedFade__DelegateSignature(bool Param_IsFadeIn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ObjectSelectCursor_C", "FinishedFade__DelegateSignature");

	Params::ObjectSelectCursor_C_FinishedFade__DelegateSignature Parms{};

	Parms.Param_IsFadeIn = Param_IsFadeIn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ObjectSelectCursor.ObjectSelectCursor_C.ExecuteUbergraph_ObjectSelectCursor
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UObjectSelectCursor_C::ExecuteUbergraph_ObjectSelectCursor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ObjectSelectCursor_C", "ExecuteUbergraph_ObjectSelectCursor");

	Params::ObjectSelectCursor_C_ExecuteUbergraph_ObjectSelectCursor Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ObjectSelectCursor.ObjectSelectCursor_C.SEreset
// (BlueprintCallable, BlueprintEvent)

void UObjectSelectCursor_C::SEreset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ObjectSelectCursor_C", "SEreset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ObjectSelectCursor.ObjectSelectCursor_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UObjectSelectCursor_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ObjectSelectCursor_C", "OnAnimationFinished");

	Params::ObjectSelectCursor_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ObjectSelectCursor.ObjectSelectCursor_C.Fade Out
// (BlueprintCallable, BlueprintEvent)

void UObjectSelectCursor_C::Fade_Out()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ObjectSelectCursor_C", "Fade Out");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ObjectSelectCursor.ObjectSelectCursor_C.Fade In
// (BlueprintCallable, BlueprintEvent)

void UObjectSelectCursor_C::Fade_In()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ObjectSelectCursor_C", "Fade In");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ObjectSelectCursor.ObjectSelectCursor_C.ChargeUp
// (BlueprintCallable, BlueprintEvent)

void UObjectSelectCursor_C::ChargeUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ObjectSelectCursor_C", "ChargeUp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ObjectSelectCursor.ObjectSelectCursor_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UObjectSelectCursor_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ObjectSelectCursor_C", "Tick");

	Params::ObjectSelectCursor_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ObjectSelectCursor.ObjectSelectCursor_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UObjectSelectCursor_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ObjectSelectCursor_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ObjectSelectCursor.ObjectSelectCursor_C.SetGatherImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBInteractionTargetComponent*    TargetComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UObjectSelectCursor_C::SetGatherImage(class USBInteractionTargetComponent* TargetComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ObjectSelectCursor_C", "SetGatherImage");

	Params::ObjectSelectCursor_C_SetGatherImage Parms{};

	Parms.TargetComponent = TargetComponent;

	UObject::ProcessEvent(Func, &Parms);
}

}

