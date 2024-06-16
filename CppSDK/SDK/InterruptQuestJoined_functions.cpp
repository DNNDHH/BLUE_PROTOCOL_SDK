#pragma once

 

// Package: InterruptQuestJoined

#include "Basic.hpp"

#include "InterruptQuestJoined_classes.hpp"
#include "InterruptQuestJoined_parameters.hpp"


namespace SDK
{

// Function InterruptQuestJoined.InterruptQuestJoined_C.ExecuteUbergraph_InterruptQuestJoined
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInterruptQuestJoined_C::ExecuteUbergraph_InterruptQuestJoined(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InterruptQuestJoined_C", "ExecuteUbergraph_InterruptQuestJoined");

	Params::InterruptQuestJoined_C_ExecuteUbergraph_InterruptQuestJoined Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InterruptQuestJoined.InterruptQuestJoined_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInterruptQuestJoined_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InterruptQuestJoined_C", "OnAnimationFinished");

	Params::InterruptQuestJoined_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InterruptQuestJoined.InterruptQuestJoined_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInterruptQuestJoined_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InterruptQuestJoined_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

