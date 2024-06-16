#pragma once

 

// Package: SBCheckBox

#include "Basic.hpp"

#include "SBCheckBox_classes.hpp"
#include "SBCheckBox_parameters.hpp"


namespace SDK
{

// Function SBCheckBox.SBCheckBox_C.OnHandledGetFocus__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USBCheckBox_C::OnHandledGetFocus__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBCheckBox_C", "OnHandledGetFocus__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SBCheckBox.SBCheckBox_C.OnHandledLostFocus__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USBCheckBox_C::OnHandledLostFocus__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBCheckBox_C", "OnHandledLostFocus__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SBCheckBox.SBCheckBox_C.OnHandledPressOk__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USBCheckBox_C::OnHandledPressOk__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBCheckBox_C", "OnHandledPressOk__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SBCheckBox.SBCheckBox_C.ExecuteUbergraph_SBCheckBox
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USBCheckBox_C::ExecuteUbergraph_SBCheckBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBCheckBox_C", "ExecuteUbergraph_SBCheckBox");

	Params::SBCheckBox_C_ExecuteUbergraph_SBCheckBox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SBCheckBox.SBCheckBox_C.OnPressOk
// (Event, Public, BlueprintCallable, BlueprintEvent)

void USBCheckBox_C::OnPressOk()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBCheckBox_C", "OnPressOk");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SBCheckBox.SBCheckBox_C.OnLostFocus
// (Event, Public, BlueprintCallable, BlueprintEvent)

void USBCheckBox_C::OnLostFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBCheckBox_C", "OnLostFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SBCheckBox.SBCheckBox_C.OnGetFocus
// (Event, Public, BlueprintCallable, BlueprintEvent)

void USBCheckBox_C::OnGetFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBCheckBox_C", "OnGetFocus");

	UObject::ProcessEvent(Func, nullptr);
}

}

