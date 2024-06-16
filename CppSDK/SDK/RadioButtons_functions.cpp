#pragma once

 

// Package: RadioButtons

#include "Basic.hpp"

#include "RadioButtons_classes.hpp"
#include "RadioButtons_parameters.hpp"


namespace SDK
{

// Function RadioButtons.RadioButtons_C.CreateRadioButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRadioButtonData                 Param_RadioButtonData                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URadioButton_C*                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class URadioButton_C* URadioButtons_C::CreateRadioButton(const struct FRadioButtonData& Param_RadioButtonData, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadioButtons_C", "CreateRadioButton");

	Params::RadioButtons_C_CreateRadioButton Parms{};

	Parms.Param_RadioButtonData = std::move(Param_RadioButtonData);
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function RadioButtons.RadioButtons_C.OnSelectButtons
// (Public, BlueprintCallable, BlueprintEvent)

void URadioButtons_C::OnSelectButtons()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadioButtons_C", "OnSelectButtons");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RadioButtons.RadioButtons_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URadioButtons_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadioButtons_C", "PreConstruct");

	Params::RadioButtons_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RadioButtons.RadioButtons_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void URadioButtons_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadioButtons_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RadioButtons.RadioButtons_C.Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class URadioButton_C*                   Checked                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadioButtons_C::Changed(bool IsChecked, class URadioButton_C* Checked, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadioButtons_C", "Changed");

	Params::RadioButtons_C_Changed Parms{};

	Parms.IsChecked = IsChecked;
	Parms.Checked = Checked;
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RadioButtons.RadioButtons_C.SetCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadioButtons_C::SetCheck(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadioButtons_C", "SetCheck");

	Params::RadioButtons_C_SetCheck Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RadioButtons.RadioButtons_C.InitializeButton
// (BlueprintCallable, BlueprintEvent)

void URadioButtons_C::InitializeButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadioButtons_C", "InitializeButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RadioButtons.RadioButtons_C.ExecuteUbergraph_RadioButtons
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadioButtons_C::ExecuteUbergraph_RadioButtons(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadioButtons_C", "ExecuteUbergraph_RadioButtons");

	Params::RadioButtons_C_ExecuteUbergraph_RadioButtons Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RadioButtons.RadioButtons_C.SelectButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class URadioButton_C*                   RadioButton                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadioButtons_C::SelectButton__DelegateSignature(bool IsChecked, class URadioButton_C* RadioButton, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadioButtons_C", "SelectButton__DelegateSignature");

	Params::RadioButtons_C_SelectButton__DelegateSignature Parms{};

	Parms.IsChecked = IsChecked;
	Parms.RadioButton = RadioButton;
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}

}

