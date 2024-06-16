#pragma once

 

// Package: WeaponSlotExtendAnime

#include "Basic.hpp"

#include "WeaponSlotExtendAnime_classes.hpp"
#include "WeaponSlotExtendAnime_parameters.hpp"


namespace SDK
{

// Function WeaponSlotExtendAnime.WeaponSlotExtendAnime_C.OnCompleteAnim__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWeaponSlotExtendAnime_C::OnCompleteAnim__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSlotExtendAnime_C", "OnCompleteAnim__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSlotExtendAnime.WeaponSlotExtendAnime_C.ExecuteUbergraph_WeaponSlotExtendAnime
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSlotExtendAnime_C::ExecuteUbergraph_WeaponSlotExtendAnime(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSlotExtendAnime_C", "ExecuteUbergraph_WeaponSlotExtendAnime");

	Params::WeaponSlotExtendAnime_C_ExecuteUbergraph_WeaponSlotExtendAnime Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSlotExtendAnime.WeaponSlotExtendAnime_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSlotExtendAnime_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSlotExtendAnime_C", "OnAnimationFinished");

	Params::WeaponSlotExtendAnime_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSlotExtendAnime.WeaponSlotExtendAnime_C.Play
// (BlueprintCallable, BlueprintEvent)

void UWeaponSlotExtendAnime_C::Play()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSlotExtendAnime_C", "Play");

	UObject::ProcessEvent(Func, nullptr);
}

}

