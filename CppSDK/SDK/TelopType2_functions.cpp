#pragma once

 

// Package: TelopType2

#include "Basic.hpp"

#include "TelopType2_classes.hpp"
#include "TelopType2_parameters.hpp"


namespace SDK
{

// Function TelopType2.TelopType2_C.ExecuteUbergraph_TelopType2
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTelopType2_C::ExecuteUbergraph_TelopType2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopType2_C", "ExecuteUbergraph_TelopType2");

	Params::TelopType2_C_ExecuteUbergraph_TelopType2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TelopType2.TelopType2_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTelopType2_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopType2_C", "OnAnimationFinished");

	Params::TelopType2_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TelopType2.TelopType2_C.PlayAnim
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTelopType2_C::PlayAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopType2_C", "PlayAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TelopType2.TelopType2_C.StopAnim
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTelopType2_C::StopAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopType2_C", "StopAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TelopType2.TelopType2_C.PlaySE
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*                    SE                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTelopType2_C::PlaySE(class UAkAudioEvent* SE)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopType2_C", "PlaySE");

	Params::TelopType2_C_PlaySE Parms{};

	Parms.SE = SE;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TelopType2.TelopType2_C.IsPlayAnim
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UTelopType2_C::IsPlayAnim() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopType2_C", "IsPlayAnim");

	Params::TelopType2_C_IsPlayAnim Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function TelopType2.TelopType2_C.GetText
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USBRuntimeTextBlock*              ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBRuntimeTextBlock* UTelopType2_C::GetText() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopType2_C", "GetText");

	Params::TelopType2_C_GetText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

