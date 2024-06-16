#pragma once

 

// Package: RadioButton

#include "Basic.hpp"

#include "RadioButton_classes.hpp"
#include "RadioButton_parameters.hpp"


namespace SDK
{

// Function RadioButton.RadioButton_C.ChangeChecked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class URadioButton_C*                   Checked                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadioButton_C::ChangeChecked__DelegateSignature(bool IsChecked, class URadioButton_C* Checked, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadioButton_C", "ChangeChecked__DelegateSignature");

	Params::RadioButton_C_ChangeChecked__DelegateSignature Parms{};

	Parms.IsChecked = IsChecked;
	Parms.Checked = Checked;
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RadioButton.RadioButton_C.ExecuteUbergraph_RadioButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadioButton_C::ExecuteUbergraph_RadioButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadioButton_C", "ExecuteUbergraph_RadioButton");

	Params::RadioButton_C_ExecuteUbergraph_RadioButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RadioButton.RadioButton_C.SetCheckedStyle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECheckBoxState                          InCheckedState                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadioButton_C::SetCheckedStyle(ECheckBoxState InCheckedState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadioButton_C", "SetCheckedStyle");

	Params::RadioButton_C_SetCheckedStyle Parms{};

	Parms.InCheckedState = InCheckedState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RadioButton.RadioButton_C.SetChecked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsChecked                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URadioButton_C::SetChecked(bool InIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadioButton_C", "SetChecked");

	Params::RadioButton_C_SetChecked Parms{};

	Parms.InIsChecked = InIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RadioButton.RadioButton_C.SetTextId
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InTextID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadioButton_C::SetTextId(int32 InTextID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadioButton_C", "SetTextId");

	Params::RadioButton_C_SetTextId Parms{};

	Parms.InTextID = InTextID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RadioButton.RadioButton_C.SetText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void URadioButton_C::SetText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadioButton_C", "SetText");

	Params::RadioButton_C_SetText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function RadioButton.RadioButton_C.BndEvt__CheckBox_64_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URadioButton_C::BndEvt__CheckBox_64_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadioButton_C", "BndEvt__CheckBox_64_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::RadioButton_C_BndEvt__CheckBox_64_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RadioButton.RadioButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URadioButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadioButton_C", "PreConstruct");

	Params::RadioButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

