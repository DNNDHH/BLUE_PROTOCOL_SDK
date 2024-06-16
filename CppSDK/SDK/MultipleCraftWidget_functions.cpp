#pragma once

 

// Package: MultipleCraftWidget

#include "Basic.hpp"

#include "MultipleCraftWidget_classes.hpp"
#include "MultipleCraftWidget_parameters.hpp"


namespace SDK
{

// Function MultipleCraftWidget.MultipleCraftWidget_C.OnCreateNumChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Now                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMultipleCraftWidget_C::OnCreateNumChanged__DelegateSignature(int32 Param_Now)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MultipleCraftWidget_C", "OnCreateNumChanged__DelegateSignature");

	Params::MultipleCraftWidget_C_OnCreateNumChanged__DelegateSignature Parms{};

	Parms.Param_Now = Param_Now;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MultipleCraftWidget.MultipleCraftWidget_C.ExecuteUbergraph_MultipleCraftWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMultipleCraftWidget_C::ExecuteUbergraph_MultipleCraftWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MultipleCraftWidget_C", "ExecuteUbergraph_MultipleCraftWidget");

	Params::MultipleCraftWidget_C_ExecuteUbergraph_MultipleCraftWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MultipleCraftWidget.MultipleCraftWidget_C.BndEvt__Btn_Plus_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMultipleCraftWidget_C::BndEvt__Btn_Plus_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MultipleCraftWidget_C", "BndEvt__Btn_Plus_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MultipleCraftWidget.MultipleCraftWidget_C.BndEvt__Btn_Minus_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMultipleCraftWidget_C::BndEvt__Btn_Minus_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MultipleCraftWidget_C", "BndEvt__Btn_Minus_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MultipleCraftWidget.MultipleCraftWidget_C.Reset
// (BlueprintCallable, BlueprintEvent)

void UMultipleCraftWidget_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MultipleCraftWidget_C", "Reset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MultipleCraftWidget.MultipleCraftWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMultipleCraftWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MultipleCraftWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MultipleCraftWidget.MultipleCraftWidget_C.SetValue
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_SetValue                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SetedValue                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMultipleCraftWidget_C::SetValue(int32 Param_SetValue, int32* SetedValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MultipleCraftWidget_C", "SetValue");

	Params::MultipleCraftWidget_C_SetValue Parms{};

	Parms.Param_SetValue = Param_SetValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SetedValue != nullptr)
		*SetedValue = Parms.SetedValue;
}

}

