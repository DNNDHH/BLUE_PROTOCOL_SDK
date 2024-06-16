#pragma once

 

// Package: UsedCheck_CheckBox

#include "Basic.hpp"

#include "UsedCheck_CheckBox_classes.hpp"
#include "UsedCheck_CheckBox_parameters.hpp"


namespace SDK
{

// Function UsedCheck_CheckBox.UsedCheck_CheckBox_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UUsedCheck_CheckBox_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UsedCheck_CheckBox_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UsedCheck_CheckBox.UsedCheck_CheckBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUsedCheck_CheckBox_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UsedCheck_CheckBox_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UsedCheck_CheckBox.UsedCheck_CheckBox_C.BndEvt__UsedCheck_CheckBox_Chk_Enable_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUsedCheck_CheckBox_C::BndEvt__UsedCheck_CheckBox_Chk_Enable_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UsedCheck_CheckBox_C", "BndEvt__UsedCheck_CheckBox_Chk_Enable_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UsedCheck_CheckBox_C_BndEvt__UsedCheck_CheckBox_Chk_Enable_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UsedCheck_CheckBox.UsedCheck_CheckBox_C.ExecuteUbergraph_UsedCheck_CheckBox
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUsedCheck_CheckBox_C::ExecuteUbergraph_UsedCheck_CheckBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UsedCheck_CheckBox_C", "ExecuteUbergraph_UsedCheck_CheckBox");

	Params::UsedCheck_CheckBox_C_ExecuteUbergraph_UsedCheck_CheckBox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UsedCheck_CheckBox.UsedCheck_CheckBox_C.OnChangeFlag__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBUseCheckDialogType                   Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUsedCheck_CheckBox_C::OnChangeFlag__DelegateSignature(ESBUseCheckDialogType Type, bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UsedCheck_CheckBox_C", "OnChangeFlag__DelegateSignature");

	Params::UsedCheck_CheckBox_C_OnChangeFlag__DelegateSignature Parms{};

	Parms.Type = Type;
	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}

}

