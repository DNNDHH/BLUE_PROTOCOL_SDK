#pragma once

 

// Package: OverlayMessage

#include "Basic.hpp"

#include "OverlayMessage_classes.hpp"
#include "OverlayMessage_parameters.hpp"


namespace SDK
{

// Function OverlayMessage.OverlayMessage_C.OnHide__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Param_Result                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOverlayMessage_C::OnHide__DelegateSignature(EDialogResult Param_Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OverlayMessage_C", "OnHide__DelegateSignature");

	Params::OverlayMessage_C_OnHide__DelegateSignature Parms{};

	Parms.Param_Result = Param_Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OverlayMessage.OverlayMessage_C.ExecuteUbergraph_OverlayMessage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOverlayMessage_C::ExecuteUbergraph_OverlayMessage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OverlayMessage_C", "ExecuteUbergraph_OverlayMessage");

	Params::OverlayMessage_C_ExecuteUbergraph_OverlayMessage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OverlayMessage.OverlayMessage_C.OnPress_Cancel
// (Event, Public, BlueprintEvent)

void UOverlayMessage_C::OnPress_Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OverlayMessage_C", "OnPress_Cancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OverlayMessage.OverlayMessage_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOverlayMessage_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OverlayMessage_C", "OnAnimationFinished");

	Params::OverlayMessage_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OverlayMessage.OverlayMessage_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOverlayMessage_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OverlayMessage_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OverlayMessage.OverlayMessage_C.HideDialog
// (BlueprintCallable, BlueprintEvent)

void UOverlayMessage_C::HideDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OverlayMessage_C", "HideDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OverlayMessage.OverlayMessage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOverlayMessage_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OverlayMessage_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OverlayMessage.OverlayMessage_C.BndEvt__SBButton_No_K2Node_ComponentBoundEvent_676_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UOverlayMessage_C::BndEvt__SBButton_No_K2Node_ComponentBoundEvent_676_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OverlayMessage_C", "BndEvt__SBButton_No_K2Node_ComponentBoundEvent_676_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OverlayMessage.OverlayMessage_C.BndEvt__SBButton_No_K2Node_ComponentBoundEvent_646_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UOverlayMessage_C::BndEvt__SBButton_No_K2Node_ComponentBoundEvent_646_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OverlayMessage_C", "BndEvt__SBButton_No_K2Node_ComponentBoundEvent_646_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OverlayMessage.OverlayMessage_C.BndEvt__SBButton_No_K2Node_ComponentBoundEvent_612_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOverlayMessage_C::BndEvt__SBButton_No_K2Node_ComponentBoundEvent_612_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OverlayMessage_C", "BndEvt__SBButton_No_K2Node_ComponentBoundEvent_612_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OverlayMessage.OverlayMessage_C.BndEvt__SBButton_C_1_K2Node_ComponentBoundEvent_492_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UOverlayMessage_C::BndEvt__SBButton_C_1_K2Node_ComponentBoundEvent_492_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OverlayMessage_C", "BndEvt__SBButton_C_1_K2Node_ComponentBoundEvent_492_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OverlayMessage.OverlayMessage_C.BndEvt__SBButton_C_1_K2Node_ComponentBoundEvent_465_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UOverlayMessage_C::BndEvt__SBButton_C_1_K2Node_ComponentBoundEvent_465_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OverlayMessage_C", "BndEvt__SBButton_C_1_K2Node_ComponentBoundEvent_465_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OverlayMessage.OverlayMessage_C.BndEvt__SBButton_C_1_K2Node_ComponentBoundEvent_434_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOverlayMessage_C::BndEvt__SBButton_C_1_K2Node_ComponentBoundEvent_434_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OverlayMessage_C", "BndEvt__SBButton_C_1_K2Node_ComponentBoundEvent_434_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OverlayMessage.OverlayMessage_C.BndEvt__SBButton_Message_K2Node_ComponentBoundEvent_269_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UOverlayMessage_C::BndEvt__SBButton_Message_K2Node_ComponentBoundEvent_269_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OverlayMessage_C", "BndEvt__SBButton_Message_K2Node_ComponentBoundEvent_269_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OverlayMessage.OverlayMessage_C.BndEvt__SBButton_Message_K2Node_ComponentBoundEvent_245_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UOverlayMessage_C::BndEvt__SBButton_Message_K2Node_ComponentBoundEvent_245_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OverlayMessage_C", "BndEvt__SBButton_Message_K2Node_ComponentBoundEvent_245_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OverlayMessage.OverlayMessage_C.BndEvt__SBButton_Message_K2Node_ComponentBoundEvent_189_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOverlayMessage_C::BndEvt__SBButton_Message_K2Node_ComponentBoundEvent_189_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OverlayMessage_C", "BndEvt__SBButton_Message_K2Node_ComponentBoundEvent_189_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OverlayMessage.OverlayMessage_C.StartYesNoDialog
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InTextID                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOverlayMessage_C::StartYesNoDialog(const int32& InTextID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OverlayMessage_C", "StartYesNoDialog");

	Params::OverlayMessage_C_StartYesNoDialog Parms{};

	Parms.InTextID = InTextID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OverlayMessage.OverlayMessage_C.StartMessageDialog
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InTextID                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOverlayMessage_C::StartMessageDialog(const int32& InTextID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OverlayMessage_C", "StartMessageDialog");

	Params::OverlayMessage_C_StartMessageDialog Parms{};

	Parms.InTextID = InTextID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OverlayMessage.OverlayMessage_C.OnPress_Ok
// (Event, Public, BlueprintEvent)

void UOverlayMessage_C::OnPress_Ok()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OverlayMessage_C", "OnPress_Ok");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OverlayMessage.OverlayMessage_C.OnRepeat_Right
// (Event, Public, BlueprintEvent)

void UOverlayMessage_C::OnRepeat_Right()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OverlayMessage_C", "OnRepeat_Right");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OverlayMessage.OverlayMessage_C.OnRepeat_Left
// (Event, Public, BlueprintEvent)

void UOverlayMessage_C::OnRepeat_Left()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OverlayMessage_C", "OnRepeat_Left");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OverlayMessage.OverlayMessage_C.ChangeCurrentButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOverlayMessage_C::ChangeCurrentButton(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OverlayMessage_C", "ChangeCurrentButton");

	Params::OverlayMessage_C_ChangeCurrentButton Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OverlayMessage.OverlayMessage_C.SetResultForButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBButton_C*                      Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOverlayMessage_C::SetResultForButton(class USBButton_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OverlayMessage_C", "SetResultForButton");

	Params::OverlayMessage_C_SetResultForButton Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

}

