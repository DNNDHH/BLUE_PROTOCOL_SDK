#pragma once

 

// Package: TelopGameOver

#include "Basic.hpp"

#include "TelopGameOver_classes.hpp"
#include "TelopGameOver_parameters.hpp"


namespace SDK
{

// Function TelopGameOver.TelopGameOver_C.ExecuteUbergraph_TelopGameOver
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTelopGameOver_C::ExecuteUbergraph_TelopGameOver(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopGameOver_C", "ExecuteUbergraph_TelopGameOver");

	Params::TelopGameOver_C_ExecuteUbergraph_TelopGameOver Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TelopGameOver.TelopGameOver_C.OnPlayAnim
// (BlueprintCallable, BlueprintEvent)

void UTelopGameOver_C::OnPlayAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopGameOver_C", "OnPlayAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TelopGameOver.TelopGameOver_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTelopGameOver_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopGameOver_C", "Tick");

	Params::TelopGameOver_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TelopGameOver.TelopGameOver_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTelopGameOver_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopGameOver_C", "OnAnimationFinished");

	Params::TelopGameOver_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TelopGameOver.TelopGameOver_C.PlayAnim
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTelopGameOver_C::PlayAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopGameOver_C", "PlayAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TelopGameOver.TelopGameOver_C.StopAnim
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTelopGameOver_C::StopAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopGameOver_C", "StopAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TelopGameOver.TelopGameOver_C.PlayBGM
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTelopGameOver_C::PlayBGM()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopGameOver_C", "PlayBGM");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TelopGameOver.TelopGameOver_C.PlaySE
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*                    SE                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTelopGameOver_C::PlaySE(class UAkAudioEvent* SE)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopGameOver_C", "PlaySE");

	Params::TelopGameOver_C_PlaySE Parms{};

	Parms.SE = SE;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TelopGameOver.TelopGameOver_C.IsPlayAnim
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UTelopGameOver_C::IsPlayAnim() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopGameOver_C", "IsPlayAnim");

	Params::TelopGameOver_C_IsPlayAnim Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function TelopGameOver.TelopGameOver_C.GetText
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USBRuntimeTextBlock*              ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBRuntimeTextBlock* UTelopGameOver_C::GetText() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopGameOver_C", "GetText");

	Params::TelopGameOver_C_GetText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

