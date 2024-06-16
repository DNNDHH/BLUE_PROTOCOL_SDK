#pragma once

 

// Package: DebugCheckBox

#include "Basic.hpp"

#include "DebugCheckBox_classes.hpp"
#include "DebugCheckBox_parameters.hpp"


namespace SDK
{

// Function DebugCheckBox.DebugCheckBox_C.ExecuteUbergraph_DebugCheckBox
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugCheckBox_C::ExecuteUbergraph_DebugCheckBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugCheckBox_C", "ExecuteUbergraph_DebugCheckBox");

	Params::DebugCheckBox_C_ExecuteUbergraph_DebugCheckBox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugCheckBox.DebugCheckBox_C.OnChangedFlag
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBDebugMenuType                        Param_MenuType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Param_RowName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugCheckBox_C::OnChangedFlag(ESBDebugMenuType Param_MenuType, class FName Param_RowName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugCheckBox_C", "OnChangedFlag");

	Params::DebugCheckBox_C_OnChangedFlag Parms{};

	Parms.Param_MenuType = Param_MenuType;
	Parms.Param_RowName = Param_RowName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugCheckBox.DebugCheckBox_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDebugCheckBox_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugCheckBox_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugCheckBox.DebugCheckBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDebugCheckBox_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugCheckBox_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugCheckBox.DebugCheckBox_C.ChangeCheckBoxState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDebugCheckBox_C::ChangeCheckBoxState(bool IsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugCheckBox_C", "ChangeCheckBoxState");

	Params::DebugCheckBox_C_ChangeCheckBoxState Parms{};

	Parms.IsChecked = IsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugCheckBox.DebugCheckBox_C.OnLostFocus
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDebugCheckBox_C::OnLostFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugCheckBox_C", "OnLostFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugCheckBox.DebugCheckBox_C.OnGetFocus
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDebugCheckBox_C::OnGetFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugCheckBox_C", "OnGetFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugCheckBox.DebugCheckBox_C.OnPressOk
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDebugCheckBox_C::OnPressOk()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugCheckBox_C", "OnPressOk");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugCheckBox.DebugCheckBox_C.BndEvt__Button_K2Node_ComponentBoundEvent_454_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDebugCheckBox_C::BndEvt__Button_K2Node_ComponentBoundEvent_454_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugCheckBox_C", "BndEvt__Button_K2Node_ComponentBoundEvent_454_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugCheckBox.DebugCheckBox_C.BndEvt__CheckBox_K2Node_ComponentBoundEvent_174_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDebugCheckBox_C::BndEvt__CheckBox_K2Node_ComponentBoundEvent_174_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugCheckBox_C", "BndEvt__CheckBox_K2Node_ComponentBoundEvent_174_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::DebugCheckBox_C_BndEvt__CheckBox_K2Node_ComponentBoundEvent_174_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugCheckBox.DebugCheckBox_C.GetBattleHUD
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSuccess                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDebugCheckBox_C::GetBattleHUD(bool* IsSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugCheckBox_C", "GetBattleHUD");

	Params::DebugCheckBox_C_GetBattleHUD Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsSuccess != nullptr)
		*IsSuccess = Parms.IsSuccess;
}


// Function DebugCheckBox.DebugCheckBox_C.Set Menu Focus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bFocus                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDebugCheckBox_C::Set_Menu_Focus(bool bFocus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugCheckBox_C", "Set Menu Focus");

	Params::DebugCheckBox_C_Set_Menu_Focus Parms{};

	Parms.bFocus = bFocus;

	UObject::ProcessEvent(Func, &Parms);
}

}

