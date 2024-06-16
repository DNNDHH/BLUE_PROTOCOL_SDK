#pragma once

 

// Package: KeyConfig_Radio

#include "Basic.hpp"

#include "KeyConfig_Radio_classes.hpp"
#include "KeyConfig_Radio_parameters.hpp"


namespace SDK
{

// Function KeyConfig_Radio.KeyConfig_Radio_C.SetChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bChanged                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyConfig_Radio_C::SetChanged(bool Param_bChanged)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_Radio_C", "SetChanged");

	Params::KeyConfig_Radio_C_SetChanged Parms{};

	Parms.Param_bChanged = Param_bChanged;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig_Radio.KeyConfig_Radio_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyConfig_Radio_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_Radio_C", "PreConstruct");

	Params::KeyConfig_Radio_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig_Radio.KeyConfig_Radio_C.ReInitData
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FRadioButtonData>         Param_RadioButtonData                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UKeyConfig_Radio_C::ReInitData(const TArray<struct FRadioButtonData>& Param_RadioButtonData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_Radio_C", "ReInitData");

	Params::KeyConfig_Radio_C_ReInitData Parms{};

	Parms.Param_RadioButtonData = std::move(Param_RadioButtonData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig_Radio.KeyConfig_Radio_C.SelectButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class URadioButton_C*                   RadioButton                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyConfig_Radio_C::SelectButton(bool IsChecked, class URadioButton_C* RadioButton, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_Radio_C", "SelectButton");

	Params::KeyConfig_Radio_C_SelectButton Parms{};

	Parms.IsChecked = IsChecked;
	Parms.RadioButton = RadioButton;
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig_Radio.KeyConfig_Radio_C.Set Focus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyConfig_Radio_C::Set_Focus(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_Radio_C", "Set Focus");

	Params::KeyConfig_Radio_C_Set_Focus Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig_Radio.KeyConfig_Radio_C.ExecuteUbergraph_KeyConfig_Radio
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyConfig_Radio_C::ExecuteUbergraph_KeyConfig_Radio(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_Radio_C", "ExecuteUbergraph_KeyConfig_Radio");

	Params::KeyConfig_Radio_C_ExecuteUbergraph_KeyConfig_Radio Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyConfig_Radio.KeyConfig_Radio_C.SelectRadioButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EConfig_KeyconfigItems                  Param_Type                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyConfig_Radio_C::SelectRadioButton__DelegateSignature(int32 Param_Index, EConfig_KeyconfigItems Param_Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyConfig_Radio_C", "SelectRadioButton__DelegateSignature");

	Params::KeyConfig_Radio_C_SelectRadioButton__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;
	Parms.Param_Type = Param_Type;

	UObject::ProcessEvent(Func, &Parms);
}

}

