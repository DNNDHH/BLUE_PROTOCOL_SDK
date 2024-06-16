#pragma once

 

// Package: BP_RsDialog

#include "Basic.hpp"

#include "BP_RsDialog_classes.hpp"
#include "BP_RsDialog_parameters.hpp"


namespace SDK
{

// Function BP_RsDialog.BP_RsDialog_C.ExecuteUbergraph_BP_RsDialog
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialog_C::ExecuteUbergraph_BP_RsDialog(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_C", "ExecuteUbergraph_BP_RsDialog");

	Params::BP_RsDialog_C_ExecuteUbergraph_BP_RsDialog Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog.BP_RsDialog_C.DialogStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SwitchId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialog_C::DialogStart(int32 SwitchId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_C", "DialogStart");

	Params::BP_RsDialog_C_DialogStart Parms{};

	Parms.SwitchId = SwitchId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog.BP_RsDialog_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialog_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_C", "OnAnimationFinished");

	Params::BP_RsDialog_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog.BP_RsDialog_C.DialogEnd
// (BlueprintCallable, BlueprintEvent)

void UBP_RsDialog_C::DialogEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_C", "DialogEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialog.BP_RsDialog_C.EndProcessingRsDialog
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_RsDialog_C::EndProcessingRsDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_C", "EndProcessingRsDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialog.BP_RsDialog_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_RsDialog_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialog.BP_RsDialog_C.BndEvt__Btn_Confirm_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget*                      InButtonWidget                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialog_C::BndEvt__Btn_Confirm_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UUserWidget* InButtonWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_C", "BndEvt__Btn_Confirm_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	Params::BP_RsDialog_C_BndEvt__Btn_Confirm_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature Parms{};

	Parms.InButtonWidget = InButtonWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog.BP_RsDialog_C.StartProcessingRsDialog
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Message                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_RsDialog_C::StartProcessingRsDialog(const class FText& Message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_C", "StartProcessingRsDialog");

	Params::BP_RsDialog_C_StartProcessingRsDialog Parms{};

	Parms.Message = std::move(Message);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog.BP_RsDialog_C.StartErrorMessageRsDialog
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   MessageId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ErrorCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialog_C::StartErrorMessageRsDialog(int32 MessageId, int32 ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_C", "StartErrorMessageRsDialog");

	Params::BP_RsDialog_C_StartErrorMessageRsDialog Parms{};

	Parms.MessageId = MessageId;
	Parms.ErrorCode = ErrorCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog.BP_RsDialog_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_RsDialog_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialog.BP_RsDialog_C.SetErrorMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   MessageId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ErrorCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialog_C::SetErrorMessage(int32 MessageId, int32 ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_C", "SetErrorMessage");

	Params::BP_RsDialog_C_SetErrorMessage Parms{};

	Parms.MessageId = MessageId;
	Parms.ErrorCode = ErrorCode;

	UObject::ProcessEvent(Func, &Parms);
}

}

