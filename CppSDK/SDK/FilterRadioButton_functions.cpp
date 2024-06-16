#pragma once

 

// Package: FilterRadioButton

#include "Basic.hpp"

#include "FilterRadioButton_classes.hpp"
#include "FilterRadioButton_parameters.hpp"


namespace SDK
{

// Function FilterRadioButton.FilterRadioButton_C.ChangeChecked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFilterRadioButton_C*             Checked                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFilterRadioButton_C::ChangeChecked__DelegateSignature(bool IsChecked, class UFilterRadioButton_C* Checked, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterRadioButton_C", "ChangeChecked__DelegateSignature");

	Params::FilterRadioButton_C_ChangeChecked__DelegateSignature Parms{};

	Parms.IsChecked = IsChecked;
	Parms.Checked = Checked;
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FilterRadioButton.FilterRadioButton_C.ExecuteUbergraph_FilterRadioButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFilterRadioButton_C::ExecuteUbergraph_FilterRadioButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterRadioButton_C", "ExecuteUbergraph_FilterRadioButton");

	Params::FilterRadioButton_C_ExecuteUbergraph_FilterRadioButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FilterRadioButton.FilterRadioButton_C.SetNameTextId
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InTextID                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFilterRadioButton_C::SetNameTextId(const class FName InTextID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterRadioButton_C", "SetNameTextId");

	Params::FilterRadioButton_C_SetNameTextId Parms{};

	Parms.InTextID = InTextID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FilterRadioButton.FilterRadioButton_C.SetCheckedStyle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECheckBoxState                          InCheckedState                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFilterRadioButton_C::SetCheckedStyle(ECheckBoxState InCheckedState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterRadioButton_C", "SetCheckedStyle");

	Params::FilterRadioButton_C_SetCheckedStyle Parms{};

	Parms.InCheckedState = InCheckedState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FilterRadioButton.FilterRadioButton_C.SetChecked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsChecked                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFilterRadioButton_C::SetChecked(bool InIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterRadioButton_C", "SetChecked");

	Params::FilterRadioButton_C_SetChecked Parms{};

	Parms.InIsChecked = InIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FilterRadioButton.FilterRadioButton_C.SetTextId
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InTextID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFilterRadioButton_C::SetTextId(int32 InTextID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterRadioButton_C", "SetTextId");

	Params::FilterRadioButton_C_SetTextId Parms{};

	Parms.InTextID = InTextID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FilterRadioButton.FilterRadioButton_C.SetText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UFilterRadioButton_C::SetText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterRadioButton_C", "SetText");

	Params::FilterRadioButton_C_SetText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FilterRadioButton.FilterRadioButton_C.BndEvt__CheckBox_64_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFilterRadioButton_C::BndEvt__CheckBox_64_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterRadioButton_C", "BndEvt__CheckBox_64_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::FilterRadioButton_C_BndEvt__CheckBox_64_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FilterRadioButton.FilterRadioButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFilterRadioButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterRadioButton_C", "PreConstruct");

	Params::FilterRadioButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

