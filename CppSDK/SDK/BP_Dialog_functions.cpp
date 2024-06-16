#pragma once

 

// Package: BP_Dialog

#include "Basic.hpp"

#include "BP_Dialog_classes.hpp"
#include "BP_Dialog_parameters.hpp"


namespace SDK
{

// Function BP_Dialog.BP_Dialog_C.ExecuteUbergraph_BP_Dialog
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Dialog_C::ExecuteUbergraph_BP_Dialog(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Dialog_C", "ExecuteUbergraph_BP_Dialog");

	Params::BP_Dialog_C_ExecuteUbergraph_BP_Dialog Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Dialog.BP_Dialog_C.ShowWarning
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Dialog_C::ShowWarning(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Dialog_C", "ShowWarning");

	Params::BP_Dialog_C_ShowWarning Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Dialog.BP_Dialog_C.BndEvt__BP_Dialog_SBCheckBox_C_121_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Dialog_C::BndEvt__BP_Dialog_SBCheckBox_C_121_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Dialog_C", "BndEvt__BP_Dialog_SBCheckBox_C_121_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::BP_Dialog_C_BndEvt__BP_Dialog_SBCheckBox_C_121_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Dialog.BP_Dialog_C.SetCheckBoxMessage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             Param_Message                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_Dialog_C::SetCheckBoxMessage(bool bVisible, const class FText& Param_Message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Dialog_C", "SetCheckBoxMessage");

	Params::BP_Dialog_C_SetCheckBoxMessage Parms{};

	Parms.bVisible = bVisible;
	Parms.Param_Message = std::move(Param_Message);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Dialog.BP_Dialog_C.SetInputBlockerMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsBlock                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Dialog_C::SetInputBlockerMode(bool bIsBlock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Dialog_C", "SetInputBlockerMode");

	Params::BP_Dialog_C_SetInputBlockerMode Parms{};

	Parms.bIsBlock = bIsBlock;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Dialog.BP_Dialog_C.SetYesButtonClickSe
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*                    AkEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           EventName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_Dialog_C::SetYesButtonClickSe(class UAkAudioEvent* AkEvent, const class FString& EventName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Dialog_C", "SetYesButtonClickSe");

	Params::BP_Dialog_C_SetYesButtonClickSe Parms{};

	Parms.AkEvent = AkEvent;
	Parms.EventName = std::move(EventName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Dialog.BP_Dialog_C.SetPositionType_1
// (BlueprintCallable, BlueprintEvent)

void UBP_Dialog_C::SetPositionType_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Dialog_C", "SetPositionType_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Dialog.BP_Dialog_C.OnPress_Ok
// (Event, Public, BlueprintEvent)

void UBP_Dialog_C::OnPress_Ok()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Dialog_C", "OnPress_Ok");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Dialog.BP_Dialog_C.OnPress_Cancel
// (Event, Public, BlueprintEvent)

void UBP_Dialog_C::OnPress_Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Dialog_C", "OnPress_Cancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Dialog.BP_Dialog_C.OnDestructMainWidget
// (Event, Public, BlueprintEvent)

void UBP_Dialog_C::OnDestructMainWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Dialog_C", "OnDestructMainWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Dialog.BP_Dialog_C.BndEvt__ButtonNo_K2Node_ComponentBoundEvent_682_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget*                      InButtonWidget                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Dialog_C::BndEvt__ButtonNo_K2Node_ComponentBoundEvent_682_OnClicked__DelegateSignature(class UUserWidget* InButtonWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Dialog_C", "BndEvt__ButtonNo_K2Node_ComponentBoundEvent_682_OnClicked__DelegateSignature");

	Params::BP_Dialog_C_BndEvt__ButtonNo_K2Node_ComponentBoundEvent_682_OnClicked__DelegateSignature Parms{};

	Parms.InButtonWidget = InButtonWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Dialog.BP_Dialog_C.BndEvt__Button2_K2Node_ComponentBoundEvent_462_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget*                      InButtonWidget                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Dialog_C::BndEvt__Button2_K2Node_ComponentBoundEvent_462_OnClicked__DelegateSignature(class UUserWidget* InButtonWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Dialog_C", "BndEvt__Button2_K2Node_ComponentBoundEvent_462_OnClicked__DelegateSignature");

	Params::BP_Dialog_C_BndEvt__Button2_K2Node_ComponentBoundEvent_462_OnClicked__DelegateSignature Parms{};

	Parms.InButtonWidget = InButtonWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Dialog.BP_Dialog_C.BndEvt__Button1_2_K2Node_ComponentBoundEvent_99_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget*                      InButtonWidget                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Dialog_C::BndEvt__Button1_2_K2Node_ComponentBoundEvent_99_OnClicked__DelegateSignature(class UUserWidget* InButtonWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Dialog_C", "BndEvt__Button1_2_K2Node_ComponentBoundEvent_99_OnClicked__DelegateSignature");

	Params::BP_Dialog_C_BndEvt__Button1_2_K2Node_ComponentBoundEvent_99_OnClicked__DelegateSignature Parms{};

	Parms.InButtonWidget = InButtonWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Dialog.BP_Dialog_C.ChangeMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Param_Message                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_Dialog_C::ChangeMessage(const class FText& Param_Message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Dialog_C", "ChangeMessage");

	Params::BP_Dialog_C_ChangeMessage Parms{};

	Parms.Param_Message = std::move(Param_Message);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Dialog.BP_Dialog_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Dialog_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Dialog_C", "OnAnimationFinished");

	Params::BP_Dialog_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Dialog.BP_Dialog_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_Dialog_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Dialog_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Dialog.BP_Dialog_C.StartYesNoDialog
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Param_Message                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// EDialogPositionType                     Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bEnableBgBlur                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Dialog_C::StartYesNoDialog(const class FText& Param_Message, EDialogPositionType Type, bool bEnableBgBlur)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Dialog_C", "StartYesNoDialog");

	Params::BP_Dialog_C_StartYesNoDialog Parms{};

	Parms.Param_Message = std::move(Param_Message);
	Parms.Type = Type;
	Parms.bEnableBgBlur = bEnableBgBlur;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Dialog.BP_Dialog_C.StartMessageDialog
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Param_Message                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// EDialogPositionType                     Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bEnableBgBlur                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Dialog_C::StartMessageDialog(const class FText& Param_Message, EDialogPositionType Type, bool bEnableBgBlur)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Dialog_C", "StartMessageDialog");

	Params::BP_Dialog_C_StartMessageDialog Parms{};

	Parms.Param_Message = std::move(Param_Message);
	Parms.Type = Type;
	Parms.bEnableBgBlur = bEnableBgBlur;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Dialog.BP_Dialog_C.Hide
// (BlueprintCallable, BlueprintEvent)

void UBP_Dialog_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Dialog_C", "Hide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Dialog.BP_Dialog_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_Dialog_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Dialog_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Dialog.BP_Dialog_C.SetPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogPositionType                     PositionType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Dialog_C::SetPosition(EDialogPositionType PositionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Dialog_C", "SetPosition");

	Params::BP_Dialog_C_SetPosition Parms{};

	Parms.PositionType = PositionType;

	UObject::ProcessEvent(Func, &Parms);
}

}

