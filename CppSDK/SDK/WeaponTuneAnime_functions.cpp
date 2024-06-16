#pragma once

 

// Package: WeaponTuneAnime

#include "Basic.hpp"

#include "WeaponTuneAnime_classes.hpp"
#include "WeaponTuneAnime_parameters.hpp"


namespace SDK
{

// Function WeaponTuneAnime.WeaponTuneAnime_C.OnCompleteAnim__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWeaponTuneAnime_C::OnCompleteAnim__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponTuneAnime_C", "OnCompleteAnim__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponTuneAnime.WeaponTuneAnime_C.ExecuteUbergraph_WeaponTuneAnime
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponTuneAnime_C::ExecuteUbergraph_WeaponTuneAnime(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponTuneAnime_C", "ExecuteUbergraph_WeaponTuneAnime");

	Params::WeaponTuneAnime_C_ExecuteUbergraph_WeaponTuneAnime Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponTuneAnime.WeaponTuneAnime_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponTuneAnime_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponTuneAnime_C", "OnAnimationFinished");

	Params::WeaponTuneAnime_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponTuneAnime.WeaponTuneAnime_C.Play
// (BlueprintCallable, BlueprintEvent)

void UWeaponTuneAnime_C::Play()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponTuneAnime_C", "Play");

	UObject::ProcessEvent(Func, nullptr);
}

}

