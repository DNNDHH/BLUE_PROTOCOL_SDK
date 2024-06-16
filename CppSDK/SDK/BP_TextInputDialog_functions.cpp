#pragma once

 

// Package: BP_TextInputDialog

#include "Basic.hpp"

#include "BP_TextInputDialog_classes.hpp"
#include "BP_TextInputDialog_parameters.hpp"


namespace SDK
{

// Function BP_TextInputDialog.BP_TextInputDialog_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           OnButton                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             InputText                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_TextInputDialog_C::OnClose__DelegateSignature(EDialogResult OnButton, const class FText& InputText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TextInputDialog_C", "OnClose__DelegateSignature");

	Params::BP_TextInputDialog_C_OnClose__DelegateSignature Parms{};

	Parms.OnButton = OnButton;
	Parms.InputText = std::move(InputText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TextInputDialog.BP_TextInputDialog_C.ExecuteUbergraph_BP_TextInputDialog
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TextInputDialog_C::ExecuteUbergraph_BP_TextInputDialog(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TextInputDialog_C", "ExecuteUbergraph_BP_TextInputDialog");

	Params::BP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TextInputDialog.BP_TextInputDialog_C.UI_Cancel
// (BlueprintCallable, BlueprintEvent)

void UBP_TextInputDialog_C::UI_Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TextInputDialog_C", "UI_Cancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TextInputDialog.BP_TextInputDialog_C.BndEvt__BP_TextInputDialog_ButtonFullScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_TextInputDialog_C::BndEvt__BP_TextInputDialog_ButtonFullScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TextInputDialog_C", "BndEvt__BP_TextInputDialog_ButtonFullScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TextInputDialog.BP_TextInputDialog_C.BndEvt__BP_TextInputDialog_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
// (BlueprintEvent)

void UBP_TextInputDialog_C::BndEvt__BP_TextInputDialog_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TextInputDialog_C", "BndEvt__BP_TextInputDialog_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TextInputDialog.BP_TextInputDialog_C.BndEvt__BtnOk_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_TextInputDialog_C::BndEvt__BtnOk_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TextInputDialog_C", "BndEvt__BtnOk_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TextInputDialog.BP_TextInputDialog_C.BndEvt__InputTxt_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_TextInputDialog_C::BndEvt__InputTxt_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TextInputDialog_C", "BndEvt__InputTxt_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature");

	Params::BP_TextInputDialog_C_BndEvt__InputTxt_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TextInputDialog.BP_TextInputDialog_C.ChangeText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_TextInputDialog_C::ChangeText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TextInputDialog_C", "ChangeText");

	Params::BP_TextInputDialog_C_ChangeText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TextInputDialog.BP_TextInputDialog_C.Start InputDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Message                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_TextInputDialog_C::Start_InputDialog(const class FText& Message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TextInputDialog_C", "Start InputDialog");

	Params::BP_TextInputDialog_C_Start_InputDialog Parms{};

	Parms.Message = std::move(Message);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TextInputDialog.BP_TextInputDialog_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TextInputDialog_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TextInputDialog_C", "OnAnimationFinished");

	Params::BP_TextInputDialog_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TextInputDialog.BP_TextInputDialog_C.Hide
// (BlueprintCallable, BlueprintEvent)

void UBP_TextInputDialog_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TextInputDialog_C", "Hide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TextInputDialog.BP_TextInputDialog_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_TextInputDialog_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TextInputDialog_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TextInputDialog.BP_TextInputDialog_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_TextInputDialog_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TextInputDialog_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TextInputDialog.BP_TextInputDialog_C.SetMinInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_MinLength                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TextInputDialog_C::SetMinInput(int32 Param_MinLength)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TextInputDialog_C", "SetMinInput");

	Params::BP_TextInputDialog_C_SetMinInput Parms{};

	Parms.Param_MinLength = Param_MinLength;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TextInputDialog.BP_TextInputDialog_C.SetMaxInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_MaxLength                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TextInputDialog_C::SetMaxInput(int32 Param_MaxLength)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TextInputDialog_C", "SetMaxInput");

	Params::BP_TextInputDialog_C_SetMaxInput Parms{};

	Parms.Param_MaxLength = Param_MaxLength;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TextInputDialog.BP_TextInputDialog_C.SetNgWordCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_CheckNgWord                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_TextInputDialog_C::SetNgWordCheck(bool Param_CheckNgWord)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TextInputDialog_C", "SetNgWordCheck");

	Params::BP_TextInputDialog_C_SetNgWordCheck Parms{};

	Parms.Param_CheckNgWord = Param_CheckNgWord;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TextInputDialog.BP_TextInputDialog_C.SetInitializeInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_TextInputDialog_C::SetInitializeInput(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TextInputDialog_C", "SetInitializeInput");

	Params::BP_TextInputDialog_C_SetInitializeInput Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TextInputDialog.BP_TextInputDialog_C.SetHint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_TextInputDialog_C::SetHint(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TextInputDialog_C", "SetHint");

	Params::BP_TextInputDialog_C_SetHint Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}

}

