#pragma once

 

// Package: UMG_LiquidMemoryDetails

#include "Basic.hpp"

#include "UMG_LiquidMemoryDetails_classes.hpp"
#include "UMG_LiquidMemoryDetails_parameters.hpp"


namespace SDK
{

// Function UMG_LiquidMemoryDetails.UMG_LiquidMemoryDetails_C.OnCloseAnimationFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      InWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryDetails_C::OnCloseAnimationFinished__DelegateSignature(class UUserWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryDetails_C", "OnCloseAnimationFinished__DelegateSignature");

	Params::UMG_LiquidMemoryDetails_C_OnCloseAnimationFinished__DelegateSignature Parms{};

	Parms.InWidget = InWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryDetails.UMG_LiquidMemoryDetails_C.OnDrinkingAnimationFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUMG_LiquidMemoryDetails_C::OnDrinkingAnimationFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryDetails_C", "OnDrinkingAnimationFinished__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemoryDetails.UMG_LiquidMemoryDetails_C.ExecuteUbergraph_UMG_LiquidMemoryDetails
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryDetails_C::ExecuteUbergraph_UMG_LiquidMemoryDetails(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryDetails_C", "ExecuteUbergraph_UMG_LiquidMemoryDetails");

	Params::UMG_LiquidMemoryDetails_C_ExecuteUbergraph_UMG_LiquidMemoryDetails Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryDetails.UMG_LiquidMemoryDetails_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_LiquidMemoryDetails_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryDetails_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemoryDetails.UMG_LiquidMemoryDetails_C.BndEvt__LiquidMemoryIconL_K2Node_ComponentBoundEvent_0_OnDrinkingAnimationFinished__DelegateSignature
// (BlueprintEvent)

void UUMG_LiquidMemoryDetails_C::BndEvt__LiquidMemoryIconL_K2Node_ComponentBoundEvent_0_OnDrinkingAnimationFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryDetails_C", "BndEvt__LiquidMemoryIconL_K2Node_ComponentBoundEvent_0_OnDrinkingAnimationFinished__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemoryDetails.UMG_LiquidMemoryDetails_C.ShowDetails
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InLiquidMemoryId                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InFilledLevel                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryDetails_C::ShowDetails(int32 InLiquidMemoryId, int32 InFilledLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryDetails_C", "ShowDetails");

	Params::UMG_LiquidMemoryDetails_C_ShowDetails Parms{};

	Parms.InLiquidMemoryId = InLiquidMemoryId;
	Parms.InFilledLevel = InFilledLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryDetails.UMG_LiquidMemoryDetails_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryDetails_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryDetails_C", "OnAnimationFinished");

	Params::UMG_LiquidMemoryDetails_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryDetails.UMG_LiquidMemoryDetails_C.HideDetails
// (BlueprintCallable, BlueprintEvent)

void UUMG_LiquidMemoryDetails_C::HideDetails()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryDetails_C", "HideDetails");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemoryDetails.UMG_LiquidMemoryDetails_C.SetFilledLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InFilledLevel                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryDetails_C::SetFilledLevel(int32 InFilledLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryDetails_C", "SetFilledLevel");

	Params::UMG_LiquidMemoryDetails_C_SetFilledLevel Parms{};

	Parms.InFilledLevel = InFilledLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryDetails.UMG_LiquidMemoryDetails_C.PlayDrinkingAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_LiquidMemoryDetails_C::PlayDrinkingAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryDetails_C", "PlayDrinkingAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemoryDetails.UMG_LiquidMemoryDetails_C.PlayAnimEffectOut
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_LiquidMemoryDetails_C::PlayAnimEffectOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryDetails_C", "PlayAnimEffectOut");

	UObject::ProcessEvent(Func, nullptr);
}

}

