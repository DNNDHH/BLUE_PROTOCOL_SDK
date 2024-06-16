#pragma once

 

// Package: TokenDisplay

#include "Basic.hpp"

#include "TokenDisplay_classes.hpp"
#include "TokenDisplay_parameters.hpp"


namespace SDK
{

// Function TokenDisplay.TokenDisplay_C.ExecuteUbergraph_TokenDisplay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTokenDisplay_C::ExecuteUbergraph_TokenDisplay(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenDisplay_C", "ExecuteUbergraph_TokenDisplay");

	Params::TokenDisplay_C_ExecuteUbergraph_TokenDisplay Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TokenDisplay.TokenDisplay_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)

void UTokenDisplay_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenDisplay_C", "CustomEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TokenDisplay.TokenDisplay_C.SwitchInfoText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTokenDisplay_C::SwitchInfoText(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenDisplay_C", "SwitchInfoText");

	Params::TokenDisplay_C_SwitchInfoText Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TokenDisplay.TokenDisplay_C.OnGetTokenListBlankText_Event
// (BlueprintCallable, BlueprintEvent)

void UTokenDisplay_C::OnGetTokenListBlankText_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenDisplay_C", "OnGetTokenListBlankText_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TokenDisplay.TokenDisplay_C.OnGetExpiredBlankText_Event
// (BlueprintCallable, BlueprintEvent)

void UTokenDisplay_C::OnGetExpiredBlankText_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenDisplay_C", "OnGetExpiredBlankText_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TokenDisplay.TokenDisplay_C.ChangeForcusCategory
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTokenDisplay_C::ChangeForcusCategory(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenDisplay_C", "ChangeForcusCategory");

	Params::TokenDisplay_C_ChangeForcusCategory Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TokenDisplay.TokenDisplay_C.Open
// (BlueprintCallable, BlueprintEvent)

void UTokenDisplay_C::Open()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenDisplay_C", "Open");

	UObject::ProcessEvent(Func, nullptr);
}

}

