#pragma once

 

// Package: OptionSubButton

#include "Basic.hpp"

#include "OptionSubButton_classes.hpp"
#include "OptionSubButton_parameters.hpp"


namespace SDK
{

// Function OptionSubButton.OptionSubButton_C.SetBtnImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                           BtnType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionSubButton_C::SetBtnImage(class UImage* BtnType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionSubButton_C", "SetBtnImage");

	Params::OptionSubButton_C_SetBtnImage Parms{};

	Parms.BtnType = BtnType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionSubButton.OptionSubButton_C.SetEnable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionSubButton_C::SetEnable(bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionSubButton_C", "SetEnable");

	Params::OptionSubButton_C_SetEnable Parms{};

	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionSubButton.OptionSubButton_C.Set Menu Focus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InFocus                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionSubButton_C::Set_Menu_Focus(bool InFocus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionSubButton_C", "Set Menu Focus");

	Params::OptionSubButton_C_Set_Menu_Focus Parms{};

	Parms.InFocus = InFocus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionSubButton.OptionSubButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptionSubButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionSubButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionSubButton.OptionSubButton_C.BndEvt__Button_115_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionSubButton_C::BndEvt__Button_115_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionSubButton_C", "BndEvt__Button_115_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionSubButton.OptionSubButton_C.BndEvt__Button_115_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UOptionSubButton_C::BndEvt__Button_115_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionSubButton_C", "BndEvt__Button_115_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionSubButton.OptionSubButton_C.BndEvt__Button_115_K2Node_ComponentBoundEvent_66_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UOptionSubButton_C::BndEvt__Button_115_K2Node_ComponentBoundEvent_66_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionSubButton_C", "BndEvt__Button_115_K2Node_ComponentBoundEvent_66_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OptionSubButton.OptionSubButton_C.ExecuteUbergraph_OptionSubButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionSubButton_C::ExecuteUbergraph_OptionSubButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionSubButton_C", "ExecuteUbergraph_OptionSubButton");

	Params::OptionSubButton_C_ExecuteUbergraph_OptionSubButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OptionSubButton.OptionSubButton_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_ButtonId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionSubButton_C::OnClick__DelegateSignature(int32 Param_ButtonId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OptionSubButton_C", "OnClick__DelegateSignature");

	Params::OptionSubButton_C_OnClick__DelegateSignature Parms{};

	Parms.Param_ButtonId = Param_ButtonId;

	UObject::ProcessEvent(Func, &Parms);
}

}

