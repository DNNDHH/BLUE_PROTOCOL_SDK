#pragma once

 

// Package: UMG_LiquidMemoryFilledIconL

#include "Basic.hpp"

#include "UMG_LiquidMemoryFilledIconL_classes.hpp"
#include "UMG_LiquidMemoryFilledIconL_parameters.hpp"


namespace SDK
{

// Function UMG_LiquidMemoryFilledIconL.UMG_LiquidMemoryFilledIconL_C.OnDrinkingAnimationFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUMG_LiquidMemoryFilledIconL_C::OnDrinkingAnimationFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryFilledIconL_C", "OnDrinkingAnimationFinished__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemoryFilledIconL.UMG_LiquidMemoryFilledIconL_C.ExecuteUbergraph_UMG_LiquidMemoryFilledIconL
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryFilledIconL_C::ExecuteUbergraph_UMG_LiquidMemoryFilledIconL(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryFilledIconL_C", "ExecuteUbergraph_UMG_LiquidMemoryFilledIconL");

	Params::UMG_LiquidMemoryFilledIconL_C_ExecuteUbergraph_UMG_LiquidMemoryFilledIconL Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryFilledIconL.UMG_LiquidMemoryFilledIconL_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryFilledIconL_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryFilledIconL_C", "OnAnimationFinished");

	Params::UMG_LiquidMemoryFilledIconL_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryFilledIconL.UMG_LiquidMemoryFilledIconL_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_LiquidMemoryFilledIconL_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryFilledIconL_C", "PreConstruct");

	Params::UMG_LiquidMemoryFilledIconL_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryFilledIconL.UMG_LiquidMemoryFilledIconL_C.SetLiquidMemory
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InLiquidMemoryId                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InFilledLevel                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryFilledIconL_C::SetLiquidMemory(int32 InLiquidMemoryId, int32 InFilledLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryFilledIconL_C", "SetLiquidMemory");

	Params::UMG_LiquidMemoryFilledIconL_C_SetLiquidMemory Parms{};

	Parms.InLiquidMemoryId = InLiquidMemoryId;
	Parms.InFilledLevel = InFilledLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryFilledIconL.UMG_LiquidMemoryFilledIconL_C.SetFilledLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InFilledLevel                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryFilledIconL_C::SetFilledLevel(int32 InFilledLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryFilledIconL_C", "SetFilledLevel");

	Params::UMG_LiquidMemoryFilledIconL_C_SetFilledLevel Parms{};

	Parms.InFilledLevel = InFilledLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryFilledIconL.UMG_LiquidMemoryFilledIconL_C.PlayDrinkingAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_LiquidMemoryFilledIconL_C::PlayDrinkingAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryFilledIconL_C", "PlayDrinkingAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

}

