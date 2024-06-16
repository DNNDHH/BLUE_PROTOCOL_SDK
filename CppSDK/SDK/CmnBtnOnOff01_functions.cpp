#pragma once

 

// Package: CmnBtnOnOff01

#include "Basic.hpp"

#include "CmnBtnOnOff01_classes.hpp"
#include "CmnBtnOnOff01_parameters.hpp"


namespace SDK
{

// Function CmnBtnOnOff01.CmnBtnOnOff01_C.EventOnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCmnBtnOnOff01_C::EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtnOnOff01_C", "EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnBtnOnOff01.CmnBtnOnOff01_C.ExecuteUbergraph_CmnBtnOnOff01
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnBtnOnOff01_C::ExecuteUbergraph_CmnBtnOnOff01(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtnOnOff01_C", "ExecuteUbergraph_CmnBtnOnOff01");

	Params::CmnBtnOnOff01_C_ExecuteUbergraph_CmnBtnOnOff01 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnBtnOnOff01.CmnBtnOnOff01_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_140_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCmnBtnOnOff01_C::BndEvt__Btn1_K2Node_ComponentBoundEvent_140_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtnOnOff01_C", "BndEvt__Btn1_K2Node_ComponentBoundEvent_140_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnBtnOnOff01.CmnBtnOnOff01_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_130_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCmnBtnOnOff01_C::BndEvt__Btn1_K2Node_ComponentBoundEvent_130_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtnOnOff01_C", "BndEvt__Btn1_K2Node_ComponentBoundEvent_130_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnBtnOnOff01.CmnBtnOnOff01_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_113_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCmnBtnOnOff01_C::BndEvt__Btn1_K2Node_ComponentBoundEvent_113_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtnOnOff01_C", "BndEvt__Btn1_K2Node_ComponentBoundEvent_113_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnBtnOnOff01.CmnBtnOnOff01_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCmnBtnOnOff01_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtnOnOff01_C", "PreConstruct");

	Params::CmnBtnOnOff01_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnBtnOnOff01.CmnBtnOnOff01_C.SetTextId
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TextId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnBtnOnOff01_C::SetTextId(int32 TextId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtnOnOff01_C", "SetTextId");

	Params::CmnBtnOnOff01_C_SetTextId Parms{};

	Parms.TextId = TextId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnBtnOnOff01.CmnBtnOnOff01_C.SetTextName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Param_InTextName                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnBtnOnOff01_C::SetTextName(class FName Param_InTextName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtnOnOff01_C", "SetTextName");

	Params::CmnBtnOnOff01_C_SetTextName Parms{};

	Parms.Param_InTextName = Param_InTextName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnBtnOnOff01.CmnBtnOnOff01_C.SetSoundID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESystemSE                               SoundId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnBtnOnOff01_C::SetSoundID(ESystemSE SoundId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtnOnOff01_C", "SetSoundID");

	Params::CmnBtnOnOff01_C_SetSoundID Parms{};

	Parms.SoundId = SoundId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnBtnOnOff01.CmnBtnOnOff01_C.SetSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSelected                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCmnBtnOnOff01_C::SetSelected(bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtnOnOff01_C", "SetSelected");

	Params::CmnBtnOnOff01_C_SetSelected Parms{};

	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);
}

}

