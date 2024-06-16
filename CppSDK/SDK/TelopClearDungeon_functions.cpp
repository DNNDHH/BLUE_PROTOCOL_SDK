#pragma once

 

// Package: TelopClearDungeon

#include "Basic.hpp"

#include "TelopClearDungeon_classes.hpp"
#include "TelopClearDungeon_parameters.hpp"


namespace SDK
{

// Function TelopClearDungeon.TelopClearDungeon_C.ExecuteUbergraph_TelopClearDungeon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTelopClearDungeon_C::ExecuteUbergraph_TelopClearDungeon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopClearDungeon_C", "ExecuteUbergraph_TelopClearDungeon");

	Params::TelopClearDungeon_C_ExecuteUbergraph_TelopClearDungeon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TelopClearDungeon.TelopClearDungeon_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTelopClearDungeon_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopClearDungeon_C", "OnAnimationFinished");

	Params::TelopClearDungeon_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TelopClearDungeon.TelopClearDungeon_C.PlayAnim
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTelopClearDungeon_C::PlayAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopClearDungeon_C", "PlayAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TelopClearDungeon.TelopClearDungeon_C.StopAnim
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTelopClearDungeon_C::StopAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopClearDungeon_C", "StopAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TelopClearDungeon.TelopClearDungeon_C.PlaySE
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*                    SE                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTelopClearDungeon_C::PlaySE(class UAkAudioEvent* SE)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopClearDungeon_C", "PlaySE");

	Params::TelopClearDungeon_C_PlaySE Parms{};

	Parms.SE = SE;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TelopClearDungeon.TelopClearDungeon_C.IsPlayAnim
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UTelopClearDungeon_C::IsPlayAnim() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopClearDungeon_C", "IsPlayAnim");

	Params::TelopClearDungeon_C_IsPlayAnim Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function TelopClearDungeon.TelopClearDungeon_C.GetText
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USBRuntimeTextBlock*              ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBRuntimeTextBlock* UTelopClearDungeon_C::GetText() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopClearDungeon_C", "GetText");

	Params::TelopClearDungeon_C_GetText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function TelopClearDungeon.TelopClearDungeon_C.GetTextEffect
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USBRuntimeTextBlock*              ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBRuntimeTextBlock* UTelopClearDungeon_C::GetTextEffect() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopClearDungeon_C", "GetTextEffect");

	Params::TelopClearDungeon_C_GetTextEffect Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

