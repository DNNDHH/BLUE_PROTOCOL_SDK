#pragma once

 

// Package: UMG_PSOnlyDialog

#include "Basic.hpp"

#include "UMG_PSOnlyDialog_classes.hpp"
#include "UMG_PSOnlyDialog_parameters.hpp"


namespace SDK
{

// Function UMG_PSOnlyDialog.UMG_PSOnlyDialog_C.SetMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OffToOn                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PSOnlyDialog_C::SetMode(bool OffToOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PSOnlyDialog_C", "SetMode");

	Params::UMG_PSOnlyDialog_C_SetMode Parms{};

	Parms.OffToOn = OffToOn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PSOnlyDialog.UMG_PSOnlyDialog_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_PSOnlyDialog_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PSOnlyDialog_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PSOnlyDialog.UMG_PSOnlyDialog_C.BndEvt__UMG_PSOnlyDialog_UMG_MultipleSelectDialog_Button_1_K2Node_ComponentBoundEvent_0_OnSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   SelectIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PSOnlyDialog_C::BndEvt__UMG_PSOnlyDialog_UMG_MultipleSelectDialog_Button_1_K2Node_ComponentBoundEvent_0_OnSelected__DelegateSignature(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PSOnlyDialog_C", "BndEvt__UMG_PSOnlyDialog_UMG_MultipleSelectDialog_Button_1_K2Node_ComponentBoundEvent_0_OnSelected__DelegateSignature");

	Params::UMG_PSOnlyDialog_C_BndEvt__UMG_PSOnlyDialog_UMG_MultipleSelectDialog_Button_1_K2Node_ComponentBoundEvent_0_OnSelected__DelegateSignature Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PSOnlyDialog.UMG_PSOnlyDialog_C.BndEvt__UMG_PSOnlyDialog_UMG_MultipleSelectDialog_Button_2_K2Node_ComponentBoundEvent_1_OnSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   SelectIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PSOnlyDialog_C::BndEvt__UMG_PSOnlyDialog_UMG_MultipleSelectDialog_Button_2_K2Node_ComponentBoundEvent_1_OnSelected__DelegateSignature(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PSOnlyDialog_C", "BndEvt__UMG_PSOnlyDialog_UMG_MultipleSelectDialog_Button_2_K2Node_ComponentBoundEvent_1_OnSelected__DelegateSignature");

	Params::UMG_PSOnlyDialog_C_BndEvt__UMG_PSOnlyDialog_UMG_MultipleSelectDialog_Button_2_K2Node_ComponentBoundEvent_1_OnSelected__DelegateSignature Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PSOnlyDialog.UMG_PSOnlyDialog_C.BndEvt__UMG_PSOnlyDialog_UMG_MultipleSelectDialog_Button_4_K2Node_ComponentBoundEvent_2_OnSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   SelectIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PSOnlyDialog_C::BndEvt__UMG_PSOnlyDialog_UMG_MultipleSelectDialog_Button_4_K2Node_ComponentBoundEvent_2_OnSelected__DelegateSignature(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PSOnlyDialog_C", "BndEvt__UMG_PSOnlyDialog_UMG_MultipleSelectDialog_Button_4_K2Node_ComponentBoundEvent_2_OnSelected__DelegateSignature");

	Params::UMG_PSOnlyDialog_C_BndEvt__UMG_PSOnlyDialog_UMG_MultipleSelectDialog_Button_4_K2Node_ComponentBoundEvent_2_OnSelected__DelegateSignature Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PSOnlyDialog.UMG_PSOnlyDialog_C.BndEvt__UMG_PSOnlyDialog_UMG_MultipleSelectDialog_Button_5_K2Node_ComponentBoundEvent_3_OnSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   SelectIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PSOnlyDialog_C::BndEvt__UMG_PSOnlyDialog_UMG_MultipleSelectDialog_Button_5_K2Node_ComponentBoundEvent_3_OnSelected__DelegateSignature(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PSOnlyDialog_C", "BndEvt__UMG_PSOnlyDialog_UMG_MultipleSelectDialog_Button_5_K2Node_ComponentBoundEvent_3_OnSelected__DelegateSignature");

	Params::UMG_PSOnlyDialog_C_BndEvt__UMG_PSOnlyDialog_UMG_MultipleSelectDialog_Button_5_K2Node_ComponentBoundEvent_3_OnSelected__DelegateSignature Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PSOnlyDialog.UMG_PSOnlyDialog_C.ExecuteUbergraph_UMG_PSOnlyDialog
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PSOnlyDialog_C::ExecuteUbergraph_UMG_PSOnlyDialog(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PSOnlyDialog_C", "ExecuteUbergraph_UMG_PSOnlyDialog");

	Params::UMG_PSOnlyDialog_C_ExecuteUbergraph_UMG_PSOnlyDialog Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PSOnlyDialog.UMG_PSOnlyDialog_C.OnEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PSOnlyDialog_C::OnEnd__DelegateSignature(bool Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PSOnlyDialog_C", "OnEnd__DelegateSignature");

	Params::UMG_PSOnlyDialog_C_OnEnd__DelegateSignature Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}

}

