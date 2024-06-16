#pragma once

 

// Package: CmnBtn24

#include "Basic.hpp"

#include "CmnBtn24_classes.hpp"
#include "CmnBtn24_parameters.hpp"


namespace SDK
{

// Function CmnBtn24.CmnBtn24_C.EventOnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCmnBtn24_C::EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtn24_C", "EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnBtn24.CmnBtn24_C.ExecuteUbergraph_CmnBtn24
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnBtn24_C::ExecuteUbergraph_CmnBtn24(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtn24_C", "ExecuteUbergraph_CmnBtn24");

	Params::CmnBtn24_C_ExecuteUbergraph_CmnBtn24 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnBtn24.CmnBtn24_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCmnBtn24_C::BndEvt__Btn01_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtn24_C", "BndEvt__Btn01_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnBtn24.CmnBtn24_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCmnBtn24_C::BndEvt__Btn01_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtn24_C", "BndEvt__Btn01_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnBtn24.CmnBtn24_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCmnBtn24_C::BndEvt__Btn01_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtn24_C", "BndEvt__Btn01_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnBtn24.CmnBtn24_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCmnBtn24_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtn24_C", "PreConstruct");

	Params::CmnBtn24_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnBtn24.CmnBtn24_C.SetPressedSoundId
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESystemSE                               InSoundId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnBtn24_C::SetPressedSoundId(ESystemSE InSoundId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtn24_C", "SetPressedSoundId");

	Params::CmnBtn24_C_SetPressedSoundId Parms{};

	Parms.InSoundId = InSoundId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnBtn24.CmnBtn24_C.SetHoveredSoundId
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESystemSE                               InSoundId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnBtn24_C::SetHoveredSoundId(ESystemSE InSoundId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtn24_C", "SetHoveredSoundId");

	Params::CmnBtn24_C_SetHoveredSoundId Parms{};

	Parms.InSoundId = InSoundId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnBtn24.CmnBtn24_C.SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBTextTableAsset*                Param_InTextTable                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_InTextID                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnBtn24_C::SetText(class USBTextTableAsset* Param_InTextTable, int32 Param_InTextID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtn24_C", "SetText");

	Params::CmnBtn24_C_SetText Parms{};

	Parms.Param_InTextTable = Param_InTextTable;
	Parms.Param_InTextID = Param_InTextID;

	UObject::ProcessEvent(Func, &Parms);
}

}

