#pragma once

 

// Package: TelopMission

#include "Basic.hpp"

#include "TelopMission_classes.hpp"
#include "TelopMission_parameters.hpp"


namespace SDK
{

// Function TelopMission.TelopMission_C.ExecuteUbergraph_TelopMission
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTelopMission_C::ExecuteUbergraph_TelopMission(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopMission_C", "ExecuteUbergraph_TelopMission");

	Params::TelopMission_C_ExecuteUbergraph_TelopMission Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TelopMission.TelopMission_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTelopMission_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopMission_C", "OnAnimationFinished");

	Params::TelopMission_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TelopMission.TelopMission_C.PlayAnim
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTelopMission_C::PlayAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopMission_C", "PlayAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TelopMission.TelopMission_C.StopAnim
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTelopMission_C::StopAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopMission_C", "StopAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TelopMission.TelopMission_C.PlaySE
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*                    SE                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTelopMission_C::PlaySE(class UAkAudioEvent* SE)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopMission_C", "PlaySE");

	Params::TelopMission_C_PlaySE Parms{};

	Parms.SE = SE;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TelopMission.TelopMission_C.SetBG
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTelopMission_C::SetBG(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopMission_C", "SetBG");

	Params::TelopMission_C_SetBG Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TelopMission.TelopMission_C.IsPlayAnim
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UTelopMission_C::IsPlayAnim() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopMission_C", "IsPlayAnim");

	Params::TelopMission_C_IsPlayAnim Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function TelopMission.TelopMission_C.GetText
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USBRuntimeTextBlock*              ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBRuntimeTextBlock* UTelopMission_C::GetText() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopMission_C", "GetText");

	Params::TelopMission_C_GetText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

