#pragma once

 

// Package: CmnBtn15

#include "Basic.hpp"

#include "CmnBtn15_classes.hpp"
#include "CmnBtn15_parameters.hpp"


namespace SDK
{

// Function CmnBtn15.CmnBtn15_C.EventOnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCmnBtn15_C::EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtn15_C", "EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnBtn15.CmnBtn15_C.ExecuteUbergraph_CmnBtn15
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnBtn15_C::ExecuteUbergraph_CmnBtn15(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtn15_C", "ExecuteUbergraph_CmnBtn15");

	Params::CmnBtn15_C_ExecuteUbergraph_CmnBtn15 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnBtn15.CmnBtn15_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCmnBtn15_C::BndEvt__Btn01_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtn15_C", "BndEvt__Btn01_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnBtn15.CmnBtn15_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCmnBtn15_C::BndEvt__Btn01_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtn15_C", "BndEvt__Btn01_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnBtn15.CmnBtn15_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCmnBtn15_C::BndEvt__Btn01_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtn15_C", "BndEvt__Btn01_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnBtn15.CmnBtn15_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCmnBtn15_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtn15_C", "PreConstruct");

	Params::CmnBtn15_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnBtn15.CmnBtn15_C.SetPressedSoundId
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESystemSE                               InSoundId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnBtn15_C::SetPressedSoundId(ESystemSE InSoundId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtn15_C", "SetPressedSoundId");

	Params::CmnBtn15_C_SetPressedSoundId Parms{};

	Parms.InSoundId = InSoundId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnBtn15.CmnBtn15_C.SetHoveredSoundId
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESystemSE                               InSoundId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnBtn15_C::SetHoveredSoundId(ESystemSE InSoundId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtn15_C", "SetHoveredSoundId");

	Params::CmnBtn15_C_SetHoveredSoundId Parms{};

	Parms.InSoundId = InSoundId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnBtn15.CmnBtn15_C.SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBTextTableAsset*                Param_InTextTable                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_InTextID                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnBtn15_C::SetText(class USBTextTableAsset* Param_InTextTable, int32 Param_InTextID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtn15_C", "SetText");

	Params::CmnBtn15_C_SetText Parms{};

	Parms.Param_InTextTable = Param_InTextTable;
	Parms.Param_InTextID = Param_InTextID;

	UObject::ProcessEvent(Func, &Parms);
}

}

