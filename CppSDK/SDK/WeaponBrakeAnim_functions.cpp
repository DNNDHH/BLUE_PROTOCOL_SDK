#pragma once

 

// Package: WeaponBrakeAnim

#include "Basic.hpp"

#include "WeaponBrakeAnim_classes.hpp"
#include "WeaponBrakeAnim_parameters.hpp"


namespace SDK
{

// Function WeaponBrakeAnim.WeaponBrakeAnim_C.OnAnimFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWeaponBrakeAnim_C::OnAnimFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponBrakeAnim_C", "OnAnimFinished__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponBrakeAnim.WeaponBrakeAnim_C.ExecuteUbergraph_WeaponBrakeAnim
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponBrakeAnim_C::ExecuteUbergraph_WeaponBrakeAnim(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponBrakeAnim_C", "ExecuteUbergraph_WeaponBrakeAnim");

	Params::WeaponBrakeAnim_C_ExecuteUbergraph_WeaponBrakeAnim Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponBrakeAnim.WeaponBrakeAnim_C.Replay
// (BlueprintCallable, BlueprintEvent)

void UWeaponBrakeAnim_C::Replay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponBrakeAnim_C", "Replay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponBrakeAnim.WeaponBrakeAnim_C.EnableQuit
// (BlueprintCallable, BlueprintEvent)

void UWeaponBrakeAnim_C::EnableQuit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponBrakeAnim_C", "EnableQuit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponBrakeAnim.WeaponBrakeAnim_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponBrakeAnim_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponBrakeAnim_C", "OnAnimationFinished");

	Params::WeaponBrakeAnim_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponBrakeAnim.WeaponBrakeAnim_C.PlayAnim
// (BlueprintCallable, BlueprintEvent)

void UWeaponBrakeAnim_C::PlayAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponBrakeAnim_C", "PlayAnim");

	UObject::ProcessEvent(Func, nullptr);
}

}

