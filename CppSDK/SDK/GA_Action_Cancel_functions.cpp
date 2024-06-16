#pragma once

 

// Package: GA_Action_Cancel

#include "Basic.hpp"

#include "GA_Action_Cancel_classes.hpp"
#include "GA_Action_Cancel_parameters.hpp"


namespace SDK
{

// Function GA_Action_Cancel.GA_Action_Cancel_C.ExecuteUbergraph_GA_Action_Cancel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Action_Cancel_C::ExecuteUbergraph_GA_Action_Cancel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Action_Cancel_C", "ExecuteUbergraph_GA_Action_Cancel");

	Params::GA_Action_Cancel_C_ExecuteUbergraph_GA_Action_Cancel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Action_Cancel.GA_Action_Cancel_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Action_Cancel_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Action_Cancel_C", "K2_OnEndAbility");

	Params::GA_Action_Cancel_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Action_Cancel.GA_Action_Cancel_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Action_Cancel_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Action_Cancel_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Action_Cancel.GA_Action_Cancel_C.EventReceived_24E51A6C4D943FA7BDB7EDBA7086404A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Action_Cancel_C::EventReceived_24E51A6C4D943FA7BDB7EDBA7086404A(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Action_Cancel_C", "EventReceived_24E51A6C4D943FA7BDB7EDBA7086404A");

	Params::GA_Action_Cancel_C_EventReceived_24E51A6C4D943FA7BDB7EDBA7086404A Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Action_Cancel.GA_Action_Cancel_C.EventReceived_B985FB814EB02487BF36918A821F5C0C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Action_Cancel_C::EventReceived_B985FB814EB02487BF36918A821F5C0C(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Action_Cancel_C", "EventReceived_B985FB814EB02487BF36918A821F5C0C");

	Params::GA_Action_Cancel_C_EventReceived_B985FB814EB02487BF36918A821F5C0C Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Action_Cancel.GA_Action_Cancel_C.OnCompleted_4565D44A40D52A401330AE96906B75A0
// (BlueprintCallable, BlueprintEvent)

void UGA_Action_Cancel_C::OnCompleted_4565D44A40D52A401330AE96906B75A0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Action_Cancel_C", "OnCompleted_4565D44A40D52A401330AE96906B75A0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Action_Cancel.GA_Action_Cancel_C.OnRefused_4565D44A40D52A401330AE96906B75A0
// (BlueprintCallable, BlueprintEvent)

void UGA_Action_Cancel_C::OnRefused_4565D44A40D52A401330AE96906B75A0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Action_Cancel_C", "OnRefused_4565D44A40D52A401330AE96906B75A0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Action_Cancel.GA_Action_Cancel_C.OnCancelled_4565D44A40D52A401330AE96906B75A0
// (BlueprintCallable, BlueprintEvent)

void UGA_Action_Cancel_C::OnCancelled_4565D44A40D52A401330AE96906B75A0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Action_Cancel_C", "OnCancelled_4565D44A40D52A401330AE96906B75A0");

	UObject::ProcessEvent(Func, nullptr);
}

}

