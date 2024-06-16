#pragma once

 

// Package: SelectorDialogBtn

#include "Basic.hpp"

#include "SelectorDialogBtn_classes.hpp"
#include "SelectorDialogBtn_parameters.hpp"


namespace SDK
{

// Function SelectorDialogBtn.SelectorDialogBtn_C.OnSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USelectorDialogBtn_C*             Param_Selected                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_SelectNum                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USelectorDialogBtn_C::OnSelected__DelegateSignature(class USelectorDialogBtn_C* Param_Selected, int32 Param_SelectNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectorDialogBtn_C", "OnSelected__DelegateSignature");

	Params::SelectorDialogBtn_C_OnSelected__DelegateSignature Parms{};

	Parms.Param_Selected = Param_Selected;
	Parms.Param_SelectNum = Param_SelectNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectorDialogBtn.SelectorDialogBtn_C.ExecuteUbergraph_SelectorDialogBtn
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USelectorDialogBtn_C::ExecuteUbergraph_SelectorDialogBtn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectorDialogBtn_C", "ExecuteUbergraph_SelectorDialogBtn");

	Params::SelectorDialogBtn_C_ExecuteUbergraph_SelectorDialogBtn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectorDialogBtn.SelectorDialogBtn_C.Set UseCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bUse                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USelectorDialogBtn_C::Set_UseCheck(bool bUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectorDialogBtn_C", "Set UseCheck");

	Params::SelectorDialogBtn_C_Set_UseCheck Parms{};

	Parms.bUse = bUse;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectorDialogBtn.SelectorDialogBtn_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USelectorDialogBtn_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectorDialogBtn_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectorDialogBtn.SelectorDialogBtn_C.BndEvt__Selector_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void USelectorDialogBtn_C::BndEvt__Selector_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectorDialogBtn_C", "BndEvt__Selector_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectorDialogBtn.SelectorDialogBtn_C.BndEvt__Selector_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void USelectorDialogBtn_C::BndEvt__Selector_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectorDialogBtn_C", "BndEvt__Selector_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectorDialogBtn.SelectorDialogBtn_C.SetString
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_String                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void USelectorDialogBtn_C::SetString(const class FString& Param_String)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectorDialogBtn_C", "SetString");

	Params::SelectorDialogBtn_C_SetString Parms{};

	Parms.Param_String = std::move(Param_String);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectorDialogBtn.SelectorDialogBtn_C.BndEvt__Selector_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void USelectorDialogBtn_C::BndEvt__Selector_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectorDialogBtn_C", "BndEvt__Selector_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectorDialogBtn.SelectorDialogBtn_C.SetSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Selected                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USelectorDialogBtn_C::SetSelected(bool Param_Selected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectorDialogBtn_C", "SetSelected");

	Params::SelectorDialogBtn_C_SetSelected Parms{};

	Parms.Param_Selected = Param_Selected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectorDialogBtn.SelectorDialogBtn_C.Set Btn Width
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   BtnWidth                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USelectorDialogBtn_C::Set_Btn_Width(float BtnWidth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectorDialogBtn_C", "Set Btn Width");

	Params::SelectorDialogBtn_C_Set_Btn_Width Parms{};

	Parms.BtnWidth = BtnWidth;

	UObject::ProcessEvent(Func, &Parms);
}

}

