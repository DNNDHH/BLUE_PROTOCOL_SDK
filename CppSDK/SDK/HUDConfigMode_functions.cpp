#pragma once

 

// Package: HUDConfigMode

#include "Basic.hpp"

#include "HUDConfigMode_classes.hpp"
#include "HUDConfigMode_parameters.hpp"


namespace SDK
{

// Function HUDConfigMode.HUDConfigMode_C.On_Cmb_HelpDisplay_GenerateWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UHUDConfigMode_C::On_Cmb_HelpDisplay_GenerateWidget_0(const class FString& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUDConfigMode_C", "On_Cmb_HelpDisplay_GenerateWidget_0");

	Params::HUDConfigMode_C_On_Cmb_HelpDisplay_GenerateWidget_0 Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function HUDConfigMode.HUDConfigMode_C.On_Cmb_BasePlate_GenerateWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UHUDConfigMode_C::On_Cmb_BasePlate_GenerateWidget_0(const class FString& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUDConfigMode_C", "On_Cmb_BasePlate_GenerateWidget_0");

	Params::HUDConfigMode_C_On_Cmb_BasePlate_GenerateWidget_0 Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function HUDConfigMode.HUDConfigMode_C.GenerateCmbBox
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHUDConfigMode_C::GenerateCmbBox()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUDConfigMode_C", "GenerateCmbBox");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUDConfigMode.HUDConfigMode_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUDConfigMode_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUDConfigMode_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUDConfigMode.HUDConfigMode_C.EndEdit
// (BlueprintCallable, BlueprintEvent)

void UHUDConfigMode_C::EndEdit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUDConfigMode_C", "EndEdit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUDConfigMode.HUDConfigMode_C.bEditMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bisEditMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUDConfigMode_C::bEditMode(bool bisEditMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUDConfigMode_C", "bEditMode");

	Params::HUDConfigMode_C_bEditMode Parms{};

	Parms.bisEditMode = bisEditMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUDConfigMode.HUDConfigMode_C.BndEvt__StartEdit_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UHUDConfigMode_C::BndEvt__StartEdit_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUDConfigMode_C", "BndEvt__StartEdit_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUDConfigMode.HUDConfigMode_C.BndEvt__Cmb_BasePlate_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDConfigMode_C::BndEvt__Cmb_BasePlate_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUDConfigMode_C", "BndEvt__Cmb_BasePlate_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature");

	Params::HUDConfigMode_C_BndEvt__Cmb_BasePlate_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUDConfigMode.HUDConfigMode_C.BndEvt__Cmb_HelpDisplay_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDConfigMode_C::BndEvt__Cmb_HelpDisplay_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUDConfigMode_C", "BndEvt__Cmb_HelpDisplay_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature");

	Params::HUDConfigMode_C_BndEvt__Cmb_HelpDisplay_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUDConfigMode.HUDConfigMode_C.SyncKeyGuide
// (BlueprintCallable, BlueprintEvent)

void UHUDConfigMode_C::SyncKeyGuide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUDConfigMode_C", "SyncKeyGuide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUDConfigMode.HUDConfigMode_C.ExecuteUbergraph_HUDConfigMode
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDConfigMode_C::ExecuteUbergraph_HUDConfigMode(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUDConfigMode_C", "ExecuteUbergraph_HUDConfigMode");

	Params::HUDConfigMode_C_ExecuteUbergraph_HUDConfigMode Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUDConfigMode.HUDConfigMode_C.StartEditMode__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UHUDConfigMode_C::StartEditMode__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUDConfigMode_C", "StartEditMode__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}

