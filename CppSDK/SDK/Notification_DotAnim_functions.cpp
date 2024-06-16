#pragma once

 

// Package: Notification_DotAnim

#include "Basic.hpp"

#include "Notification_DotAnim_classes.hpp"
#include "Notification_DotAnim_parameters.hpp"


namespace SDK
{

// Function Notification_DotAnim.Notification_DotAnim_C.ExecuteUbergraph_Notification_DotAnim
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotification_DotAnim_C::ExecuteUbergraph_Notification_DotAnim(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Notification_DotAnim_C", "ExecuteUbergraph_Notification_DotAnim");

	Params::Notification_DotAnim_C_ExecuteUbergraph_Notification_DotAnim Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Notification_DotAnim.Notification_DotAnim_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNotification_DotAnim_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Notification_DotAnim_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

