#pragma once

 

// Package: TelopStar

#include "Basic.hpp"

#include "TelopStar_classes.hpp"
#include "TelopStar_parameters.hpp"


namespace SDK
{

// Function TelopStar.TelopStar_C.EndAnim__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTelopStar_C::EndAnim__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopStar_C", "EndAnim__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TelopStar.TelopStar_C.ExecuteUbergraph_TelopStar
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTelopStar_C::ExecuteUbergraph_TelopStar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopStar_C", "ExecuteUbergraph_TelopStar");

	Params::TelopStar_C_ExecuteUbergraph_TelopStar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TelopStar.TelopStar_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTelopStar_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopStar_C", "OnAnimationFinished");

	Params::TelopStar_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TelopStar.TelopStar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTelopStar_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopStar_C", "PreConstruct");

	Params::TelopStar_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TelopStar.TelopStar_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsActive                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTelopStar_C::SetActive(bool IsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopStar_C", "SetActive");

	Params::TelopStar_C_SetActive Parms{};

	Parms.IsActive = IsActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TelopStar.TelopStar_C.PlayAnimIn
// (Public, BlueprintCallable, BlueprintEvent)

void UTelopStar_C::PlayAnimIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TelopStar_C", "PlayAnimIn");

	UObject::ProcessEvent(Func, nullptr);
}

}

