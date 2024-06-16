#pragma once

 

// Package: FilterRadioButtons

#include "Basic.hpp"

#include "FilterRadioButtons_classes.hpp"
#include "FilterRadioButtons_parameters.hpp"


namespace SDK
{

// Function FilterRadioButtons.FilterRadioButtons_C.SelectButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFilterRadioButton_C*             RadioButton                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFilterRadioButtons_C::SelectButton__DelegateSignature(bool IsChecked, class UFilterRadioButton_C* RadioButton, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterRadioButtons_C", "SelectButton__DelegateSignature");

	Params::FilterRadioButtons_C_SelectButton__DelegateSignature Parms{};

	Parms.IsChecked = IsChecked;
	Parms.RadioButton = RadioButton;
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FilterRadioButtons.FilterRadioButtons_C.ExecuteUbergraph_FilterRadioButtons
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFilterRadioButtons_C::ExecuteUbergraph_FilterRadioButtons(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterRadioButtons_C", "ExecuteUbergraph_FilterRadioButtons");

	Params::FilterRadioButtons_C_ExecuteUbergraph_FilterRadioButtons Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FilterRadioButtons.FilterRadioButtons_C.InitializeButton
// (BlueprintCallable, BlueprintEvent)

void UFilterRadioButtons_C::InitializeButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterRadioButtons_C", "InitializeButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FilterRadioButtons.FilterRadioButtons_C.SetCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFilterRadioButtons_C::SetCheck(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterRadioButtons_C", "SetCheck");

	Params::FilterRadioButtons_C_SetCheck Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FilterRadioButtons.FilterRadioButtons_C.Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFilterRadioButton_C*             Checked                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFilterRadioButtons_C::Changed(bool IsChecked, class UFilterRadioButton_C* Checked, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterRadioButtons_C", "Changed");

	Params::FilterRadioButtons_C_Changed Parms{};

	Parms.IsChecked = IsChecked;
	Parms.Checked = Checked;
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FilterRadioButtons.FilterRadioButtons_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFilterRadioButtons_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterRadioButtons_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FilterRadioButtons.FilterRadioButtons_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFilterRadioButtons_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterRadioButtons_C", "PreConstruct");

	Params::FilterRadioButtons_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FilterRadioButtons.FilterRadioButtons_C.OnSelectButtons
// (Public, BlueprintCallable, BlueprintEvent)

void UFilterRadioButtons_C::OnSelectButtons()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterRadioButtons_C", "OnSelectButtons");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FilterRadioButtons.FilterRadioButtons_C.CreateRadioButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFilterRadioButtonData           Param_RadioButtonData                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFilterRadioButton_C*             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UFilterRadioButton_C* UFilterRadioButtons_C::CreateRadioButton(const struct FFilterRadioButtonData& Param_RadioButtonData, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterRadioButtons_C", "CreateRadioButton");

	Params::FilterRadioButtons_C_CreateRadioButton Parms{};

	Parms.Param_RadioButtonData = std::move(Param_RadioButtonData);
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FilterRadioButtons.FilterRadioButtons_C.SetChildWidthOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InWidth                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InHeight                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFilterRadioButtons_C::SetChildWidthOverride(float InWidth, float InHeight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilterRadioButtons_C", "SetChildWidthOverride");

	Params::FilterRadioButtons_C_SetChildWidthOverride Parms{};

	Parms.InWidth = InWidth;
	Parms.InHeight = InHeight;

	UObject::ProcessEvent(Func, &Parms);
}

}

