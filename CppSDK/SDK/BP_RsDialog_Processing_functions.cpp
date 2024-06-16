#pragma once

 

// Package: BP_RsDialog_Processing

#include "Basic.hpp"

#include "BP_RsDialog_Processing_classes.hpp"
#include "BP_RsDialog_Processing_parameters.hpp"


namespace SDK
{

// Function BP_RsDialog_Processing.BP_RsDialog_Processing_C.OnDialogEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_RsDialog_Processing_C::OnDialogEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_Processing_C", "OnDialogEnd__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialog_Processing.BP_RsDialog_Processing_C.ExecuteUbergraph_BP_RsDialog_Processing
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialog_Processing_C::ExecuteUbergraph_BP_RsDialog_Processing(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_Processing_C", "ExecuteUbergraph_BP_RsDialog_Processing");

	Params::BP_RsDialog_Processing_C_ExecuteUbergraph_BP_RsDialog_Processing Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog_Processing.BP_RsDialog_Processing_C.StartAnim
// (BlueprintCallable, BlueprintEvent)

void UBP_RsDialog_Processing_C::StartAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_Processing_C", "StartAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialog_Processing.BP_RsDialog_Processing_C.StopAnim
// (BlueprintCallable, BlueprintEvent)

void UBP_RsDialog_Processing_C::StopAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_Processing_C", "StopAnim");

	UObject::ProcessEvent(Func, nullptr);
}

}

