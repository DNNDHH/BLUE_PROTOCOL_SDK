#pragma once

 

// Package: GA_Action_Attack

#include "Basic.hpp"

#include "GA_Action_Attack_classes.hpp"
#include "GA_Action_Attack_parameters.hpp"


namespace SDK
{

// Function GA_Action_Attack.GA_Action_Attack_C.ExecuteUbergraph_GA_Action_Attack
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Action_Attack_C::ExecuteUbergraph_GA_Action_Attack(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Action_Attack_C", "ExecuteUbergraph_GA_Action_Attack");

	Params::GA_Action_Attack_C_ExecuteUbergraph_GA_Action_Attack Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Action_Attack.GA_Action_Attack_C.SubCommand
// (BlueprintCallable, BlueprintEvent)

void UGA_Action_Attack_C::SubCommand()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Action_Attack_C", "SubCommand");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Action_Attack.GA_Action_Attack_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Action_Attack_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Action_Attack_C", "K2_OnEndAbility");

	Params::GA_Action_Attack_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Action_Attack.GA_Action_Attack_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Action_Attack_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Action_Attack_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Action_Attack.GA_Action_Attack_C.EventReceived_D04A5F7146685BC738583AA5F1379270
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Action_Attack_C::EventReceived_D04A5F7146685BC738583AA5F1379270(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Action_Attack_C", "EventReceived_D04A5F7146685BC738583AA5F1379270");

	Params::GA_Action_Attack_C_EventReceived_D04A5F7146685BC738583AA5F1379270 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Action_Attack.GA_Action_Attack_C.EventReceived_6EF7D6834E0D17349213C7B878C9E94B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Action_Attack_C::EventReceived_6EF7D6834E0D17349213C7B878C9E94B(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Action_Attack_C", "EventReceived_6EF7D6834E0D17349213C7B878C9E94B");

	Params::GA_Action_Attack_C_EventReceived_6EF7D6834E0D17349213C7B878C9E94B Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Action_Attack.GA_Action_Attack_C.OnCompleted_A44F33CB4EB8E05E9A81EBB8A3499722
// (BlueprintCallable, BlueprintEvent)

void UGA_Action_Attack_C::OnCompleted_A44F33CB4EB8E05E9A81EBB8A3499722()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Action_Attack_C", "OnCompleted_A44F33CB4EB8E05E9A81EBB8A3499722");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Action_Attack.GA_Action_Attack_C.OnRefused_A44F33CB4EB8E05E9A81EBB8A3499722
// (BlueprintCallable, BlueprintEvent)

void UGA_Action_Attack_C::OnRefused_A44F33CB4EB8E05E9A81EBB8A3499722()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Action_Attack_C", "OnRefused_A44F33CB4EB8E05E9A81EBB8A3499722");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Action_Attack.GA_Action_Attack_C.OnCancelled_A44F33CB4EB8E05E9A81EBB8A3499722
// (BlueprintCallable, BlueprintEvent)

void UGA_Action_Attack_C::OnCancelled_A44F33CB4EB8E05E9A81EBB8A3499722()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Action_Attack_C", "OnCancelled_A44F33CB4EB8E05E9A81EBB8A3499722");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Action_Attack.GA_Action_Attack_C.OnCompleted_5CFEF54C48E99683B2F15DB38298EA15
// (BlueprintCallable, BlueprintEvent)

void UGA_Action_Attack_C::OnCompleted_5CFEF54C48E99683B2F15DB38298EA15()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Action_Attack_C", "OnCompleted_5CFEF54C48E99683B2F15DB38298EA15");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Action_Attack.GA_Action_Attack_C.OnRefused_5CFEF54C48E99683B2F15DB38298EA15
// (BlueprintCallable, BlueprintEvent)

void UGA_Action_Attack_C::OnRefused_5CFEF54C48E99683B2F15DB38298EA15()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Action_Attack_C", "OnRefused_5CFEF54C48E99683B2F15DB38298EA15");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Action_Attack.GA_Action_Attack_C.OnCancelled_5CFEF54C48E99683B2F15DB38298EA15
// (BlueprintCallable, BlueprintEvent)

void UGA_Action_Attack_C::OnCancelled_5CFEF54C48E99683B2F15DB38298EA15()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Action_Attack_C", "OnCancelled_5CFEF54C48E99683B2F15DB38298EA15");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Action_Attack.GA_Action_Attack_C.EventReceived_CF64C8B04D1460C574E183BA1F5D33C8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Action_Attack_C::EventReceived_CF64C8B04D1460C574E183BA1F5D33C8(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Action_Attack_C", "EventReceived_CF64C8B04D1460C574E183BA1F5D33C8");

	Params::GA_Action_Attack_C_EventReceived_CF64C8B04D1460C574E183BA1F5D33C8 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}

}

