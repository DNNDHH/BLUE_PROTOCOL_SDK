#pragma once

 

// Package: TelopChallenge

#include "Basic.hpp"

#include "TelopChallenge_classes.hpp"
#include "TelopChallenge_parameters.hpp"


namespace SDK
{

// Function TelopChallenge.TelopChallenge_C.ExecuteUbergraph_TelopChallenge
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTelopChallenge_C::ExecuteUbergraph_TelopChallenge(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopChallenge_C", "ExecuteUbergraph_TelopChallenge");

	Params::TelopChallenge_C_ExecuteUbergraph_TelopChallenge Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TelopChallenge.TelopChallenge_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTelopChallenge_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopChallenge_C", "OnAnimationFinished");

	Params::TelopChallenge_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TelopChallenge.TelopChallenge_C.PlayAnim
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTelopChallenge_C::PlayAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopChallenge_C", "PlayAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TelopChallenge.TelopChallenge_C.StopAnim
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTelopChallenge_C::StopAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopChallenge_C", "StopAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TelopChallenge.TelopChallenge_C.PlaySE
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*                    SE                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTelopChallenge_C::PlaySE(class UAkAudioEvent* SE)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopChallenge_C", "PlaySE");

	Params::TelopChallenge_C_PlaySE Parms{};

	Parms.SE = SE;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TelopChallenge.TelopChallenge_C.OnTimerEvent
// (Private, BlueprintCallable, BlueprintEvent)

void UTelopChallenge_C::OnTimerEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopChallenge_C", "OnTimerEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TelopChallenge.TelopChallenge_C.SetBG
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTelopChallenge_C::SetBG(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopChallenge_C", "SetBG");

	Params::TelopChallenge_C_SetBG Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TelopChallenge.TelopChallenge_C.IsPlayAnim
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UTelopChallenge_C::IsPlayAnim() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopChallenge_C", "IsPlayAnim");

	Params::TelopChallenge_C_IsPlayAnim Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function TelopChallenge.TelopChallenge_C.GetText
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USBRuntimeTextBlock*              ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBRuntimeTextBlock* UTelopChallenge_C::GetText() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopChallenge_C", "GetText");

	Params::TelopChallenge_C_GetText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function TelopChallenge.TelopChallenge_C.GetSubText
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTextBlock*                       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UTextBlock* UTelopChallenge_C::GetSubText() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopChallenge_C", "GetSubText");

	Params::TelopChallenge_C_GetSubText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

