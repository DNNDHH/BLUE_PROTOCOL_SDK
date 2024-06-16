#pragma once

 

// Package: TelopType1

#include "Basic.hpp"

#include "TelopType1_classes.hpp"
#include "TelopType1_parameters.hpp"


namespace SDK
{

// Function TelopType1.TelopType1_C.ExecuteUbergraph_TelopType1
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTelopType1_C::ExecuteUbergraph_TelopType1(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopType1_C", "ExecuteUbergraph_TelopType1");

	Params::TelopType1_C_ExecuteUbergraph_TelopType1 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TelopType1.TelopType1_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTelopType1_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopType1_C", "OnAnimationFinished");

	Params::TelopType1_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TelopType1.TelopType1_C.PlayAnim
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTelopType1_C::PlayAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopType1_C", "PlayAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TelopType1.TelopType1_C.StopAnim
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTelopType1_C::StopAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopType1_C", "StopAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TelopType1.TelopType1_C.PlayBGM
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTelopType1_C::PlayBGM()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopType1_C", "PlayBGM");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TelopType1.TelopType1_C.PlaySE
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*                    SE                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTelopType1_C::PlaySE(class UAkAudioEvent* SE)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopType1_C", "PlaySE");

	Params::TelopType1_C_PlaySE Parms{};

	Parms.SE = SE;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TelopType1.TelopType1_C.OnPlay
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTelopType1_C::OnPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopType1_C", "OnPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TelopType1.TelopType1_C.IsPlayAnim
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UTelopType1_C::IsPlayAnim() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopType1_C", "IsPlayAnim");

	Params::TelopType1_C_IsPlayAnim Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function TelopType1.TelopType1_C.GetText
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USBRuntimeTextBlock*              ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBRuntimeTextBlock* UTelopType1_C::GetText() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopType1_C", "GetText");

	Params::TelopType1_C_GetText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

