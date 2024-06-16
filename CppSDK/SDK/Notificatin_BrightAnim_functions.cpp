#pragma once

 

// Package: Notificatin_BrightAnim

#include "Basic.hpp"

#include "Notificatin_BrightAnim_classes.hpp"
#include "Notificatin_BrightAnim_parameters.hpp"


namespace SDK
{

// Function Notificatin_BrightAnim.Notificatin_BrightAnim_C.ExecuteUbergraph_Notificatin_BrightAnim
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotificatin_BrightAnim_C::ExecuteUbergraph_Notificatin_BrightAnim(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Notificatin_BrightAnim_C", "ExecuteUbergraph_Notificatin_BrightAnim");

	Params::Notificatin_BrightAnim_C_ExecuteUbergraph_Notificatin_BrightAnim Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Notificatin_BrightAnim.Notificatin_BrightAnim_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotificatin_BrightAnim_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Notificatin_BrightAnim_C", "OnAnimationFinished");

	Params::Notificatin_BrightAnim_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Notificatin_BrightAnim.Notificatin_BrightAnim_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNotificatin_BrightAnim_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Notificatin_BrightAnim_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Notificatin_BrightAnim.Notificatin_BrightAnim_C.Show
// (Public, BlueprintCallable, BlueprintEvent)

void UNotificatin_BrightAnim_C::Show()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Notificatin_BrightAnim_C", "Show");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Notificatin_BrightAnim.Notificatin_BrightAnim_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)

void UNotificatin_BrightAnim_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Notificatin_BrightAnim_C", "Hide");

	UObject::ProcessEvent(Func, nullptr);
}

}

