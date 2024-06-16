#pragma once

 

// Package: NotifyMessageItem_Holder

#include "Basic.hpp"

#include "NotifyMessageItem_Holder_classes.hpp"
#include "NotifyMessageItem_Holder_parameters.hpp"


namespace SDK
{

// Function NotifyMessageItem_Holder.NotifyMessageItem_Holder_C.OnFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UNotifyMessageItem_Holder_C::OnFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessageItem_Holder_C", "OnFinished__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NotifyMessageItem_Holder.NotifyMessageItem_Holder_C.ExecuteUbergraph_NotifyMessageItem_Holder
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyMessageItem_Holder_C::ExecuteUbergraph_NotifyMessageItem_Holder(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessageItem_Holder_C", "ExecuteUbergraph_NotifyMessageItem_Holder");

	Params::NotifyMessageItem_Holder_C_ExecuteUbergraph_NotifyMessageItem_Holder Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessageItem_Holder.NotifyMessageItem_Holder_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyMessageItem_Holder_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessageItem_Holder_C", "OnAnimationFinished");

	Params::NotifyMessageItem_Holder_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessageItem_Holder.NotifyMessageItem_Holder_C.Start
// (Public, BlueprintCallable, BlueprintEvent)

void UNotifyMessageItem_Holder_C::Start()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessageItem_Holder_C", "Start");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NotifyMessageItem_Holder.NotifyMessageItem_Holder_C.SetContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyMessageItem_Holder_C::SetContent(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessageItem_Holder_C", "SetContent");

	Params::NotifyMessageItem_Holder_C_SetContent Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotifyMessageItem_Holder.NotifyMessageItem_Holder_C.GetAnimatedPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMargin                          Position                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNotifyMessageItem_Holder_C::GetAnimatedPosition(struct FMargin* Position)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotifyMessageItem_Holder_C", "GetAnimatedPosition");

	Params::NotifyMessageItem_Holder_C_GetAnimatedPosition Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Position != nullptr)
		*Position = std::move(Parms.Position);
}

}

