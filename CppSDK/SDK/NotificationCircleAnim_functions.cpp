#pragma once

 

// Package: NotificationCircleAnim

#include "Basic.hpp"

#include "NotificationCircleAnim_classes.hpp"
#include "NotificationCircleAnim_parameters.hpp"


namespace SDK
{

// Function NotificationCircleAnim.NotificationCircleAnim_C.ExecuteUbergraph_NotificationCircleAnim
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotificationCircleAnim_C::ExecuteUbergraph_NotificationCircleAnim(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotificationCircleAnim_C", "ExecuteUbergraph_NotificationCircleAnim");

	Params::NotificationCircleAnim_C_ExecuteUbergraph_NotificationCircleAnim Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NotificationCircleAnim.NotificationCircleAnim_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNotificationCircleAnim_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NotificationCircleAnim_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

