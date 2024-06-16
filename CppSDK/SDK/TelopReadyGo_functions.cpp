#pragma once

 

// Package: TelopReadyGo

#include "Basic.hpp"

#include "TelopReadyGo_classes.hpp"
#include "TelopReadyGo_parameters.hpp"


namespace SDK
{

// Function TelopReadyGo.TelopReadyGo_C.ExecuteUbergraph_TelopReadyGo
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTelopReadyGo_C::ExecuteUbergraph_TelopReadyGo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopReadyGo_C", "ExecuteUbergraph_TelopReadyGo");

	Params::TelopReadyGo_C_ExecuteUbergraph_TelopReadyGo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TelopReadyGo.TelopReadyGo_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTelopReadyGo_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopReadyGo_C", "OnAnimationFinished");

	Params::TelopReadyGo_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TelopReadyGo.TelopReadyGo_C.PlayAnim
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTelopReadyGo_C::PlayAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopReadyGo_C", "PlayAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TelopReadyGo.TelopReadyGo_C.StopAnim
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTelopReadyGo_C::StopAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopReadyGo_C", "StopAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TelopReadyGo.TelopReadyGo_C.PlaySE
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*                    SE                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTelopReadyGo_C::PlaySE(class UAkAudioEvent* SE)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopReadyGo_C", "PlaySE");

	Params::TelopReadyGo_C_PlaySE Parms{};

	Parms.SE = SE;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TelopReadyGo.TelopReadyGo_C.IsPlayAnim
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UTelopReadyGo_C::IsPlayAnim() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopReadyGo_C", "IsPlayAnim");

	Params::TelopReadyGo_C_IsPlayAnim Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

