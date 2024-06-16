#pragma once

 

// Package: SBButton

#include "Basic.hpp"

#include "SBButton_classes.hpp"
#include "SBButton_parameters.hpp"


namespace SDK
{

// Function SBButton.SBButton_C.OnHandledGetFocus__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USBButton_C::OnHandledGetFocus__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBButton_C", "OnHandledGetFocus__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SBButton.SBButton_C.OnHandledLostFocus__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USBButton_C::OnHandledLostFocus__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBButton_C", "OnHandledLostFocus__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SBButton.SBButton_C.OnHandledPressOk__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USBButton_C::OnHandledPressOk__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBButton_C", "OnHandledPressOk__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SBButton.SBButton_C.ExecuteUbergraph_SBButton
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USBButton_C::ExecuteUbergraph_SBButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBButton_C", "ExecuteUbergraph_SBButton");

	Params::SBButton_C_ExecuteUbergraph_SBButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SBButton.SBButton_C.OnPressOk
// (Event, Public, BlueprintCallable, BlueprintEvent)

void USBButton_C::OnPressOk()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBButton_C", "OnPressOk");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SBButton.SBButton_C.OnLostFocus
// (Event, Public, BlueprintCallable, BlueprintEvent)

void USBButton_C::OnLostFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBButton_C", "OnLostFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SBButton.SBButton_C.OnGetFocus
// (Event, Public, BlueprintCallable, BlueprintEvent)

void USBButton_C::OnGetFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBButton_C", "OnGetFocus");

	UObject::ProcessEvent(Func, nullptr);
}

}

