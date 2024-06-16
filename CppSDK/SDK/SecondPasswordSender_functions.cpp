#pragma once

 

// Package: SecondPasswordSender

#include "Basic.hpp"

#include "SecondPasswordSender_classes.hpp"
#include "SecondPasswordSender_parameters.hpp"


namespace SDK
{

// Function SecondPasswordSender.SecondPasswordSender_C.OnEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESendSecondPasswordRole                 Param_Role                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESecondPasswordSenderEndReason          Reason                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESecondPasswordSenderStartType          StartType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USecondPasswordSender_C::OnEnd__DelegateSignature(ESendSecondPasswordRole Param_Role, ESecondPasswordSenderEndReason Reason, ESecondPasswordSenderStartType StartType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SecondPasswordSender_C", "OnEnd__DelegateSignature");

	Params::SecondPasswordSender_C_OnEnd__DelegateSignature Parms{};

	Parms.Param_Role = Param_Role;
	Parms.Reason = Reason;
	Parms.StartType = StartType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SecondPasswordSender.SecondPasswordSender_C.ExecuteUbergraph_SecondPasswordSender
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USecondPasswordSender_C::ExecuteUbergraph_SecondPasswordSender(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SecondPasswordSender_C", "ExecuteUbergraph_SecondPasswordSender");

	Params::SecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SecondPasswordSender.SecondPasswordSender_C.Cancel
// (BlueprintCallable, BlueprintEvent)

void USecondPasswordSender_C::Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SecondPasswordSender_C", "Cancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SecondPasswordSender.SecondPasswordSender_C.BndEvt__SecondPasswordSender_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
// (BlueprintEvent)

void USecondPasswordSender_C::BndEvt__SecondPasswordSender_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SecondPasswordSender_C", "BndEvt__SecondPasswordSender_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SecondPasswordSender.SecondPasswordSender_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USecondPasswordSender_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SecondPasswordSender_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SecondPasswordSender.SecondPasswordSender_C.BndEvt__SoftwareNumericKeypad_K2Node_ComponentBoundEvent_2_OnClickedEnter__DelegateSignature
// (BlueprintEvent)

void USecondPasswordSender_C::BndEvt__SoftwareNumericKeypad_K2Node_ComponentBoundEvent_2_OnClickedEnter__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SecondPasswordSender_C", "BndEvt__SoftwareNumericKeypad_K2Node_ComponentBoundEvent_2_OnClickedEnter__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SecondPasswordSender.SecondPasswordSender_C.OnAuthorizeSecondPassword
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bWasSuccessful                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   ExpireCount                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESendSecondPasswordRole                 Param_Role                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bWasAuthorized                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USecondPasswordSender_C::OnAuthorizeSecondPassword(bool bWasSuccessful, int32 ExpireCount, ESendSecondPasswordRole Param_Role, bool bWasAuthorized)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SecondPasswordSender_C", "OnAuthorizeSecondPassword");

	Params::SecondPasswordSender_C_OnAuthorizeSecondPassword Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.ExpireCount = ExpireCount;
	Parms.Param_Role = Param_Role;
	Parms.bWasAuthorized = bWasAuthorized;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SecondPasswordSender.SecondPasswordSender_C.SendPassword
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESendSecondPasswordRole                 Param_Role                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USecondPasswordSender_C::SendPassword(ESendSecondPasswordRole Param_Role)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SecondPasswordSender_C", "SendPassword");

	Params::SecondPasswordSender_C_SendPassword Parms{};

	Parms.Param_Role = Param_Role;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SecondPasswordSender.SecondPasswordSender_C.ClearPassword
// (Public, BlueprintCallable, BlueprintEvent)

void USecondPasswordSender_C::ClearPassword()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SecondPasswordSender_C", "ClearPassword");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SecondPasswordSender.SecondPasswordSender_C.SetCaption
// (Public, BlueprintCallable, BlueprintEvent)

void USecondPasswordSender_C::SetCaption()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SecondPasswordSender_C", "SetCaption");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SecondPasswordSender.SecondPasswordSender_C.SetCaptionFailure
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ExpireCount                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USecondPasswordSender_C::SetCaptionFailure(int32 ExpireCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SecondPasswordSender_C", "SetCaptionFailure");

	Params::SecondPasswordSender_C_SetCaptionFailure Parms{};

	Parms.ExpireCount = ExpireCount;

	UObject::ProcessEvent(Func, &Parms);
}

}

