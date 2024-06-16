#pragma once

 

// Package: UMG_PhotoModeControllCheckBox

#include "Basic.hpp"

#include "UMG_PhotoModeControllCheckBox_classes.hpp"
#include "UMG_PhotoModeControllCheckBox_parameters.hpp"


namespace SDK
{

// Function UMG_PhotoModeControllCheckBox.UMG_PhotoModeControllCheckBox_C.OnCheckStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PhotoModeControllCheckBox_C::OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllCheckBox_C", "OnCheckStateChanged__DelegateSignature");

	Params::UMG_PhotoModeControllCheckBox_C_OnCheckStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControllCheckBox.UMG_PhotoModeControllCheckBox_C.ExecuteUbergraph_UMG_PhotoModeControllCheckBox
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeControllCheckBox_C::ExecuteUbergraph_UMG_PhotoModeControllCheckBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllCheckBox_C", "ExecuteUbergraph_UMG_PhotoModeControllCheckBox");

	Params::UMG_PhotoModeControllCheckBox_C_ExecuteUbergraph_UMG_PhotoModeControllCheckBox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControllCheckBox.UMG_PhotoModeControllCheckBox_C.SetEnableDOF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bValue                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PhotoModeControllCheckBox_C::SetEnableDOF(bool Param_bValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllCheckBox_C", "SetEnableDOF");

	Params::UMG_PhotoModeControllCheckBox_C_SetEnableDOF Parms{};

	Parms.Param_bValue = Param_bValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControllCheckBox.UMG_PhotoModeControllCheckBox_C.SetDof
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Def                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeControllCheckBox_C::SetDof(float Def)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllCheckBox_C", "SetDof");

	Params::UMG_PhotoModeControllCheckBox_C_SetDof Parms{};

	Parms.Def = Def;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControllCheckBox.UMG_PhotoModeControllCheckBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_PhotoModeControllCheckBox_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllCheckBox_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModeControllCheckBox.UMG_PhotoModeControllCheckBox_C.UpdateShowNotify
// (BlueprintCallable, BlueprintEvent)

void UUMG_PhotoModeControllCheckBox_C::UpdateShowNotify()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllCheckBox_C", "UpdateShowNotify");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModeControllCheckBox.UMG_PhotoModeControllCheckBox_C.SetValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bValue                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bOnlyDisplay                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PhotoModeControllCheckBox_C::SetValue(bool Param_bValue, bool bOnlyDisplay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllCheckBox_C", "SetValue");

	Params::UMG_PhotoModeControllCheckBox_C_SetValue Parms{};

	Parms.Param_bValue = Param_bValue;
	Parms.bOnlyDisplay = bOnlyDisplay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControllCheckBox.UMG_PhotoModeControllCheckBox_C.Reset
// (BlueprintCallable, BlueprintEvent)

void UUMG_PhotoModeControllCheckBox_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllCheckBox_C", "Reset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModeControllCheckBox.UMG_PhotoModeControllCheckBox_C.BndEvt__SBCheckBoxCmnCheckBox01_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PhotoModeControllCheckBox_C::BndEvt__SBCheckBoxCmnCheckBox01_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllCheckBox_C", "BndEvt__SBCheckBoxCmnCheckBox01_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UMG_PhotoModeControllCheckBox_C_BndEvt__SBCheckBoxCmnCheckBox01_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControllCheckBox.UMG_PhotoModeControllCheckBox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PhotoModeControllCheckBox_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllCheckBox_C", "PreConstruct");

	Params::UMG_PhotoModeControllCheckBox_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

