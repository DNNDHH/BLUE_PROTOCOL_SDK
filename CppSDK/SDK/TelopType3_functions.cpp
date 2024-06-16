#pragma once

 

// Package: TelopType3

#include "Basic.hpp"

#include "TelopType3_classes.hpp"
#include "TelopType3_parameters.hpp"


namespace SDK
{

// Function TelopType3.TelopType3_C.ExecuteUbergraph_TelopType3
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTelopType3_C::ExecuteUbergraph_TelopType3(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopType3_C", "ExecuteUbergraph_TelopType3");

	Params::TelopType3_C_ExecuteUbergraph_TelopType3 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TelopType3.TelopType3_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTelopType3_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopType3_C", "OnAnimationFinished");

	Params::TelopType3_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TelopType3.TelopType3_C.PlayAnim
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTelopType3_C::PlayAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopType3_C", "PlayAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TelopType3.TelopType3_C.StopAnim
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTelopType3_C::StopAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopType3_C", "StopAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TelopType3.TelopType3_C.PlayBGM
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTelopType3_C::PlayBGM()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopType3_C", "PlayBGM");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TelopType3.TelopType3_C.PlaySE
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*                    SE                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTelopType3_C::PlaySE(class UAkAudioEvent* SE)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopType3_C", "PlaySE");

	Params::TelopType3_C_PlaySE Parms{};

	Parms.SE = SE;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TelopType3.TelopType3_C.SetBG
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTelopType3_C::SetBG(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopType3_C", "SetBG");

	Params::TelopType3_C_SetBG Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TelopType3.TelopType3_C.IsPlayAnim
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UTelopType3_C::IsPlayAnim() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopType3_C", "IsPlayAnim");

	Params::TelopType3_C_IsPlayAnim Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function TelopType3.TelopType3_C.GetText
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USBRuntimeTextBlock*              ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBRuntimeTextBlock* UTelopType3_C::GetText() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopType3_C", "GetText");

	Params::TelopType3_C_GetText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function TelopType3.TelopType3_C.GetTextEffect
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USBRuntimeTextBlock*              ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBRuntimeTextBlock* UTelopType3_C::GetTextEffect() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopType3_C", "GetTextEffect");

	Params::TelopType3_C_GetTextEffect Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

