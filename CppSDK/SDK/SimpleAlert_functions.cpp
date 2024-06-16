#pragma once

 

// Package: SimpleAlert

#include "Basic.hpp"

#include "SimpleAlert_classes.hpp"
#include "SimpleAlert_parameters.hpp"


namespace SDK
{

// Function SimpleAlert.SimpleAlert_C.ExecuteUbergraph_SimpleAlert
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USimpleAlert_C::ExecuteUbergraph_SimpleAlert(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SimpleAlert_C", "ExecuteUbergraph_SimpleAlert");

	Params::SimpleAlert_C_ExecuteUbergraph_SimpleAlert Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SimpleAlert.SimpleAlert_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USimpleAlert_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SimpleAlert_C", "OnAnimationFinished");

	Params::SimpleAlert_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SimpleAlert.SimpleAlert_C.SetTextById
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             TextId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USimpleAlert_C::SetTextById(class FName TextId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SimpleAlert_C", "SetTextById");

	Params::SimpleAlert_C_SetTextById Parms{};

	Parms.TextId = TextId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SimpleAlert.SimpleAlert_C.SetText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Message                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void USimpleAlert_C::SetText(const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SimpleAlert_C", "SetText");

	Params::SimpleAlert_C_SetText Parms{};

	Parms.Message = std::move(Message);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SimpleAlert.SimpleAlert_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USimpleAlert_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SimpleAlert_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

