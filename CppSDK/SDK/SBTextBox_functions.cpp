#pragma once

 

// Package: SBTextBox

#include "Basic.hpp"

#include "SBTextBox_classes.hpp"
#include "SBTextBox_parameters.hpp"


namespace SDK
{

// Function SBTextBox.SBTextBox_C.OnHandledGetFocus__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USBTextBox_C::OnHandledGetFocus__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBTextBox_C", "OnHandledGetFocus__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SBTextBox.SBTextBox_C.OnHandledLostFocus__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USBTextBox_C::OnHandledLostFocus__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBTextBox_C", "OnHandledLostFocus__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SBTextBox.SBTextBox_C.OnHandledPressOk__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USBTextBox_C::OnHandledPressOk__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBTextBox_C", "OnHandledPressOk__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SBTextBox.SBTextBox_C.ExecuteUbergraph_SBTextBox
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USBTextBox_C::ExecuteUbergraph_SBTextBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBTextBox_C", "ExecuteUbergraph_SBTextBox");

	Params::SBTextBox_C_ExecuteUbergraph_SBTextBox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SBTextBox.SBTextBox_C.OnPressOk
// (Event, Public, BlueprintCallable, BlueprintEvent)

void USBTextBox_C::OnPressOk()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBTextBox_C", "OnPressOk");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SBTextBox.SBTextBox_C.OnLostFocus
// (Event, Public, BlueprintCallable, BlueprintEvent)

void USBTextBox_C::OnLostFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBTextBox_C", "OnLostFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SBTextBox.SBTextBox_C.OnGetFocus
// (Event, Public, BlueprintCallable, BlueprintEvent)

void USBTextBox_C::OnGetFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBTextBox_C", "OnGetFocus");

	UObject::ProcessEvent(Func, nullptr);
}

}

