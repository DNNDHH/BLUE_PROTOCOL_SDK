#pragma once

 

// Package: RadioButtonsH

#include "Basic.hpp"

#include "RadioButtonsH_classes.hpp"
#include "RadioButtonsH_parameters.hpp"


namespace SDK
{

// Function RadioButtonsH.RadioButtonsH_C.SetCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadioButtonsH_C::SetCheck(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadioButtonsH_C", "SetCheck");

	Params::RadioButtonsH_C_SetCheck Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RadioButtonsH.RadioButtonsH_C.CreateRadioButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRadioButtonData                 Param_RadioButtonData                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URadioButton_C*                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class URadioButton_C* URadioButtonsH_C::CreateRadioButton(const struct FRadioButtonData& Param_RadioButtonData, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadioButtonsH_C", "CreateRadioButton");

	Params::RadioButtonsH_C_CreateRadioButton Parms{};

	Parms.Param_RadioButtonData = std::move(Param_RadioButtonData);
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function RadioButtonsH.RadioButtonsH_C.OnSelectButtons
// (Public, BlueprintCallable, BlueprintEvent)

void URadioButtonsH_C::OnSelectButtons()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadioButtonsH_C", "OnSelectButtons");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RadioButtonsH.RadioButtonsH_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URadioButtonsH_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadioButtonsH_C", "PreConstruct");

	Params::RadioButtonsH_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RadioButtonsH.RadioButtonsH_C.Init
// (BlueprintCallable, BlueprintEvent)

void URadioButtonsH_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadioButtonsH_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RadioButtonsH.RadioButtonsH_C.Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class URadioButton_C*                   Checked                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadioButtonsH_C::Changed(bool IsChecked, class URadioButton_C* Checked, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadioButtonsH_C", "Changed");

	Params::RadioButtonsH_C_Changed Parms{};

	Parms.IsChecked = IsChecked;
	Parms.Checked = Checked;
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RadioButtonsH.RadioButtonsH_C.ExecuteUbergraph_RadioButtonsH
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadioButtonsH_C::ExecuteUbergraph_RadioButtonsH(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadioButtonsH_C", "ExecuteUbergraph_RadioButtonsH");

	Params::RadioButtonsH_C_ExecuteUbergraph_RadioButtonsH Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RadioButtonsH.RadioButtonsH_C.SelectButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class URadioButton_C*                   RadioButton                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadioButtonsH_C::SelectButton__DelegateSignature(bool IsChecked, class URadioButton_C* RadioButton, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadioButtonsH_C", "SelectButton__DelegateSignature");

	Params::RadioButtonsH_C_SelectButton__DelegateSignature Parms{};

	Parms.IsChecked = IsChecked;
	Parms.RadioButton = RadioButton;
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}

}

