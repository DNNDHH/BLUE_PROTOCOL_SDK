#pragma once

 

// Package: StepListItem_Gasha

#include "Basic.hpp"

#include "StepListItem_Gasha_classes.hpp"
#include "StepListItem_Gasha_parameters.hpp"


namespace SDK
{

// Function StepListItem_Gasha.StepListItem_Gasha_C.OnBtnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_BtnId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStepListItem_Gasha_C::OnBtnClicked__DelegateSignature(int32 Param_BtnId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepListItem_Gasha_C", "OnBtnClicked__DelegateSignature");

	Params::StepListItem_Gasha_C_OnBtnClicked__DelegateSignature Parms{};

	Parms.Param_BtnId = Param_BtnId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StepListItem_Gasha.StepListItem_Gasha_C.ExecuteUbergraph_StepListItem_Gasha
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStepListItem_Gasha_C::ExecuteUbergraph_StepListItem_Gasha(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepListItem_Gasha_C", "ExecuteUbergraph_StepListItem_Gasha");

	Params::StepListItem_Gasha_C_ExecuteUbergraph_StepListItem_Gasha Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StepListItem_Gasha.StepListItem_Gasha_C.BndEvt__StepListItem_Gasha_Btn1_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UStepListItem_Gasha_C::BndEvt__StepListItem_Gasha_Btn1_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepListItem_Gasha_C", "BndEvt__StepListItem_Gasha_Btn1_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StepListItem_Gasha.StepListItem_Gasha_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStepListItem_Gasha_C::BndEvt__Btn1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepListItem_Gasha_C", "BndEvt__Btn1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StepListItem_Gasha.StepListItem_Gasha_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UStepListItem_Gasha_C::BndEvt__Btn1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepListItem_Gasha_C", "BndEvt__Btn1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StepListItem_Gasha.StepListItem_Gasha_C.BndEvt__StepListItem_Btn1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UStepListItem_Gasha_C::BndEvt__StepListItem_Btn1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepListItem_Gasha_C", "BndEvt__StepListItem_Btn1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StepListItem_Gasha.StepListItem_Gasha_C.SetBtnText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_BtnId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStepListItem_Gasha_C::SetBtnText(int32 Param_BtnId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepListItem_Gasha_C", "SetBtnText");

	Params::StepListItem_Gasha_C_SetBtnText Parms{};

	Parms.Param_BtnId = Param_BtnId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StepListItem_Gasha.StepListItem_Gasha_C.GetBtnText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TextId                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStepListItem_Gasha_C::GetBtnText(int32* TextId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepListItem_Gasha_C", "GetBtnText");

	Params::StepListItem_Gasha_C_GetBtnText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TextId != nullptr)
		*TextId = Parms.TextId;
}


// Function StepListItem_Gasha.StepListItem_Gasha_C.SetBtnSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSelected                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UStepListItem_Gasha_C::SetBtnSelected(bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StepListItem_Gasha_C", "SetBtnSelected");

	Params::StepListItem_Gasha_C_SetBtnSelected Parms{};

	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);
}

}

