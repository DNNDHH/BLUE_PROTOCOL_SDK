#pragma once

 

// Package: WeaponRemoveAnime

#include "Basic.hpp"

#include "WeaponRemoveAnime_classes.hpp"
#include "WeaponRemoveAnime_parameters.hpp"


namespace SDK
{

// Function WeaponRemoveAnime.WeaponRemoveAnime_C.OnCompleteAnim__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWeaponRemoveAnime_C::OnCompleteAnim__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponRemoveAnime_C", "OnCompleteAnim__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponRemoveAnime.WeaponRemoveAnime_C.ExecuteUbergraph_WeaponRemoveAnime
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponRemoveAnime_C::ExecuteUbergraph_WeaponRemoveAnime(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponRemoveAnime_C", "ExecuteUbergraph_WeaponRemoveAnime");

	Params::WeaponRemoveAnime_C_ExecuteUbergraph_WeaponRemoveAnime Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponRemoveAnime.WeaponRemoveAnime_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponRemoveAnime_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponRemoveAnime_C", "OnAnimationFinished");

	Params::WeaponRemoveAnime_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponRemoveAnime.WeaponRemoveAnime_C.Play
// (BlueprintCallable, BlueprintEvent)

void UWeaponRemoveAnime_C::Play()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponRemoveAnime_C", "Play");

	UObject::ProcessEvent(Func, nullptr);
}

}

