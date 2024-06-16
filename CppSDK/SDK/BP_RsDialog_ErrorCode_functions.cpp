#pragma once

 

// Package: BP_RsDialog_ErrorCode

#include "Basic.hpp"

#include "BP_RsDialog_ErrorCode_classes.hpp"
#include "BP_RsDialog_ErrorCode_parameters.hpp"


namespace SDK
{

// Function BP_RsDialog_ErrorCode.BP_RsDialog_ErrorCode_C.OnButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ERsDialogButtonType                     Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialog_ErrorCode_C::OnButtonClicked__DelegateSignature(ERsDialogButtonType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_ErrorCode_C", "OnButtonClicked__DelegateSignature");

	Params::BP_RsDialog_ErrorCode_C_OnButtonClicked__DelegateSignature Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog_ErrorCode.BP_RsDialog_ErrorCode_C.ExecuteUbergraph_BP_RsDialog_ErrorCode
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialog_ErrorCode_C::ExecuteUbergraph_BP_RsDialog_ErrorCode(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_ErrorCode_C", "ExecuteUbergraph_BP_RsDialog_ErrorCode");

	Params::BP_RsDialog_ErrorCode_C_ExecuteUbergraph_BP_RsDialog_ErrorCode Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog_ErrorCode.BP_RsDialog_ErrorCode_C.BndEvt__Btn_Check_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_RsDialog_ErrorCode_C::BndEvt__Btn_Check_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_ErrorCode_C", "BndEvt__Btn_Check_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialog_ErrorCode.BP_RsDialog_ErrorCode_C.SetText_ErrorCode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ErrorCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialog_ErrorCode_C::SetText_ErrorCode(int32 ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_ErrorCode_C", "SetText_ErrorCode");

	Params::BP_RsDialog_ErrorCode_C_SetText_ErrorCode Parms{};

	Parms.ErrorCode = ErrorCode;

	UObject::ProcessEvent(Func, &Parms);
}

}

