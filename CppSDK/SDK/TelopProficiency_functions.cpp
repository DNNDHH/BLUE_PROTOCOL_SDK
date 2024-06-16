#pragma once

 

// Package: TelopProficiency

#include "Basic.hpp"

#include "TelopProficiency_classes.hpp"
#include "TelopProficiency_parameters.hpp"


namespace SDK
{

// Function TelopProficiency.TelopProficiency_C.ExecuteUbergraph_TelopProficiency
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTelopProficiency_C::ExecuteUbergraph_TelopProficiency(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopProficiency_C", "ExecuteUbergraph_TelopProficiency");

	Params::TelopProficiency_C_ExecuteUbergraph_TelopProficiency Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TelopProficiency.TelopProficiency_C.EndAnimStarActive
// (BlueprintCallable, BlueprintEvent)

void UTelopProficiency_C::EndAnimStarActive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopProficiency_C", "EndAnimStarActive");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TelopProficiency.TelopProficiency_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTelopProficiency_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopProficiency_C", "OnAnimationFinished");

	Params::TelopProficiency_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TelopProficiency.TelopProficiency_C.PlayAnim
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTelopProficiency_C::PlayAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopProficiency_C", "PlayAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TelopProficiency.TelopProficiency_C.StopAnim
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTelopProficiency_C::StopAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopProficiency_C", "StopAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TelopProficiency.TelopProficiency_C.OnPlay
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTelopProficiency_C::OnPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopProficiency_C", "OnPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TelopProficiency.TelopProficiency_C.SetupStar
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTelopProficiency_C::SetupStar()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopProficiency_C", "SetupStar");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TelopProficiency.TelopProficiency_C.PlayAnimOut
// (Private, BlueprintCallable, BlueprintEvent)

void UTelopProficiency_C::PlayAnimOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopProficiency_C", "PlayAnimOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TelopProficiency.TelopProficiency_C.PlaySE
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*                    SE                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTelopProficiency_C::PlaySE(class UAkAudioEvent* SE)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopProficiency_C", "PlaySE");

	Params::TelopProficiency_C_PlaySE Parms{};

	Parms.SE = SE;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TelopProficiency.TelopProficiency_C.PlayAnimGlow
// (Private, BlueprintCallable, BlueprintEvent)

void UTelopProficiency_C::PlayAnimGlow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopProficiency_C", "PlayAnimGlow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TelopProficiency.TelopProficiency_C.IsPlayAnim
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UTelopProficiency_C::IsPlayAnim() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopProficiency_C", "IsPlayAnim");

	Params::TelopProficiency_C_IsPlayAnim Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function TelopProficiency.TelopProficiency_C.GetText
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USBRuntimeTextBlock*              ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBRuntimeTextBlock* UTelopProficiency_C::GetText() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopProficiency_C", "GetText");

	Params::TelopProficiency_C_GetText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

