#pragma once

 

// Package: GuildActivityBeforeStack

#include "Basic.hpp"

#include "GuildActivityBeforeStack_classes.hpp"
#include "GuildActivityBeforeStack_parameters.hpp"


namespace SDK
{

// Function GuildActivityBeforeStack.GuildActivityBeforeStack_C.ExecuteUbergraph_GuildActivityBeforeStack
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildActivityBeforeStack_C::ExecuteUbergraph_GuildActivityBeforeStack(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildActivityBeforeStack_C", "ExecuteUbergraph_GuildActivityBeforeStack");

	Params::GuildActivityBeforeStack_C_ExecuteUbergraph_GuildActivityBeforeStack Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildActivityBeforeStack.GuildActivityBeforeStack_C.SetDateTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDateTime                        Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGuildActivityBeforeStack_C::SetDateTime(const struct FDateTime& Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildActivityBeforeStack_C", "SetDateTime");

	Params::GuildActivityBeforeStack_C_SetDateTime Parms{};

	Parms.Value = std::move(Value);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildActivityBeforeStack.GuildActivityBeforeStack_C.Add Data
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBUIGuildActivityUMGBase*        Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildActivityBeforeStack_C::Add_Data(class USBUIGuildActivityUMGBase* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildActivityBeforeStack_C", "Add Data");

	Params::GuildActivityBeforeStack_C_Add_Data Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildActivityBeforeStack.GuildActivityBeforeStack_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGuildActivityBeforeStack_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildActivityBeforeStack_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

