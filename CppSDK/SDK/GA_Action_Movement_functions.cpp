#pragma once

 

// Package: GA_Action_Movement

#include "Basic.hpp"

#include "GA_Action_Movement_classes.hpp"
#include "GA_Action_Movement_parameters.hpp"


namespace SDK
{

// Function GA_Action_Movement.GA_Action_Movement_C.ExecuteUbergraph_GA_Action_Movement
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Action_Movement_C::ExecuteUbergraph_GA_Action_Movement(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Action_Movement_C", "ExecuteUbergraph_GA_Action_Movement");

	Params::GA_Action_Movement_C_ExecuteUbergraph_GA_Action_Movement Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Action_Movement.GA_Action_Movement_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Action_Movement_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Action_Movement_C", "K2_OnEndAbility");

	Params::GA_Action_Movement_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Action_Movement.GA_Action_Movement_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Action_Movement_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Action_Movement_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Action_Movement.GA_Action_Movement_C.EventReceived_DDC49E4D4373DEBC9BDCBE863747A93E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Action_Movement_C::EventReceived_DDC49E4D4373DEBC9BDCBE863747A93E(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Action_Movement_C", "EventReceived_DDC49E4D4373DEBC9BDCBE863747A93E");

	Params::GA_Action_Movement_C_EventReceived_DDC49E4D4373DEBC9BDCBE863747A93E Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Action_Movement.GA_Action_Movement_C.OnCompleted_F0A7509B4F9F16E6439C7895753943AC
// (BlueprintCallable, BlueprintEvent)

void UGA_Action_Movement_C::OnCompleted_F0A7509B4F9F16E6439C7895753943AC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Action_Movement_C", "OnCompleted_F0A7509B4F9F16E6439C7895753943AC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Action_Movement.GA_Action_Movement_C.OnRefused_F0A7509B4F9F16E6439C7895753943AC
// (BlueprintCallable, BlueprintEvent)

void UGA_Action_Movement_C::OnRefused_F0A7509B4F9F16E6439C7895753943AC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Action_Movement_C", "OnRefused_F0A7509B4F9F16E6439C7895753943AC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Action_Movement.GA_Action_Movement_C.OnCancelled_F0A7509B4F9F16E6439C7895753943AC
// (BlueprintCallable, BlueprintEvent)

void UGA_Action_Movement_C::OnCancelled_F0A7509B4F9F16E6439C7895753943AC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Action_Movement_C", "OnCancelled_F0A7509B4F9F16E6439C7895753943AC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Action_Movement.GA_Action_Movement_C.EventReceived_DC6488B9460FBDBF1C592493913CCCF7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Action_Movement_C::EventReceived_DC6488B9460FBDBF1C592493913CCCF7(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Action_Movement_C", "EventReceived_DC6488B9460FBDBF1C592493913CCCF7");

	Params::GA_Action_Movement_C_EventReceived_DC6488B9460FBDBF1C592493913CCCF7 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}

}

