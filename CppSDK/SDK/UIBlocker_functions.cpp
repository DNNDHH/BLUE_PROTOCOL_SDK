#pragma once

 

// Package: UIBlocker

#include "Basic.hpp"

#include "UIBlocker_classes.hpp"
#include "UIBlocker_parameters.hpp"


namespace SDK
{

// Function UIBlocker.UIBlocker_C.ExecuteUbergraph_UIBlocker
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIBlocker_C::ExecuteUbergraph_UIBlocker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIBlocker_C", "ExecuteUbergraph_UIBlocker");

	Params::UIBlocker_C_ExecuteUbergraph_UIBlocker Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIBlocker.UIBlocker_C.UpdateBlockInputByVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility                        IsVisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIBlocker_C::UpdateBlockInputByVisibility(ESlateVisibility IsVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIBlocker_C", "UpdateBlockInputByVisibility");

	Params::UIBlocker_C_UpdateBlockInputByVisibility Parms{};

	Parms.IsVisibility = IsVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIBlocker.UIBlocker_C.ChangeUiBlockerType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBUIBlockerType                        Param_UIBlockerType                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIBlocker_C::ChangeUiBlockerType(ESBUIBlockerType Param_UIBlockerType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIBlocker_C", "ChangeUiBlockerType");

	Params::UIBlocker_C_ChangeUiBlockerType Parms{};

	Parms.Param_UIBlockerType = Param_UIBlockerType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIBlocker.UIBlocker_C.SetBlockInputInBlocker
// (BlueprintCallable, BlueprintEvent)

void UUIBlocker_C::SetBlockInputInBlocker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIBlocker_C", "SetBlockInputInBlocker");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIBlocker.UIBlocker_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUIBlocker_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIBlocker_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIBlocker.UIBlocker_C.BP_SetVisibility
// (Event, Public, BlueprintEvent)
// Parameters:
// ESlateVisibility                        InVisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIBlocker_C::BP_SetVisibility(ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIBlocker_C", "BP_SetVisibility");

	Params::UIBlocker_C_BP_SetVisibility Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIBlocker.UIBlocker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUIBlocker_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIBlocker_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

