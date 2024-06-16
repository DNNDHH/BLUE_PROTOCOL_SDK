#pragma once

 

// Package: WeaponSyntheAnime

#include "Basic.hpp"

#include "WeaponSyntheAnime_classes.hpp"
#include "WeaponSyntheAnime_parameters.hpp"


namespace SDK
{

// Function WeaponSyntheAnime.WeaponSyntheAnime_C.OnCompleteAnim__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWeaponSyntheAnime_C::OnCompleteAnim__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSyntheAnime_C", "OnCompleteAnim__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSyntheAnime.WeaponSyntheAnime_C.ExecuteUbergraph_WeaponSyntheAnime
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSyntheAnime_C::ExecuteUbergraph_WeaponSyntheAnime(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSyntheAnime_C", "ExecuteUbergraph_WeaponSyntheAnime");

	Params::WeaponSyntheAnime_C_ExecuteUbergraph_WeaponSyntheAnime Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSyntheAnime.WeaponSyntheAnime_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSyntheAnime_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSyntheAnime_C", "OnAnimationFinished");

	Params::WeaponSyntheAnime_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSyntheAnime.WeaponSyntheAnime_C.Play
// (BlueprintCallable, BlueprintEvent)

void UWeaponSyntheAnime_C::Play()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSyntheAnime_C", "Play");

	UObject::ProcessEvent(Func, nullptr);
}

}

