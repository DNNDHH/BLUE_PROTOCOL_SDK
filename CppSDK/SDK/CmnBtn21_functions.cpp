#pragma once

 

// Package: CmnBtn21

#include "Basic.hpp"

#include "CmnBtn21_classes.hpp"
#include "CmnBtn21_parameters.hpp"


namespace SDK
{

// Function CmnBtn21.CmnBtn21_C.EventOnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCmnBtn21_C::EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtn21_C", "EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnBtn21.CmnBtn21_C.ExecuteUbergraph_CmnBtn21
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnBtn21_C::ExecuteUbergraph_CmnBtn21(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtn21_C", "ExecuteUbergraph_CmnBtn21");

	Params::CmnBtn21_C_ExecuteUbergraph_CmnBtn21 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnBtn21.CmnBtn21_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UCmnBtn21_C::BndEvt__Btn01_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtn21_C", "BndEvt__Btn01_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnBtn21.CmnBtn21_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCmnBtn21_C::BndEvt__Btn01_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtn21_C", "BndEvt__Btn01_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnBtn21.CmnBtn21_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCmnBtn21_C::BndEvt__Btn01_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtn21_C", "BndEvt__Btn01_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnBtn21.CmnBtn21_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCmnBtn21_C::BndEvt__Btn01_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtn21_C", "BndEvt__Btn01_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnBtn21.CmnBtn21_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCmnBtn21_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtn21_C", "PreConstruct");

	Params::CmnBtn21_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnBtn21.CmnBtn21_C.SetPressedSoundId
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESystemSE                               InSoundId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnBtn21_C::SetPressedSoundId(ESystemSE InSoundId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtn21_C", "SetPressedSoundId");

	Params::CmnBtn21_C_SetPressedSoundId Parms{};

	Parms.InSoundId = InSoundId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnBtn21.CmnBtn21_C.SetHoveredSoundId
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESystemSE                               InSoundId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnBtn21_C::SetHoveredSoundId(ESystemSE InSoundId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBtn21_C", "SetHoveredSoundId");

	Params::CmnBtn21_C_SetHoveredSoundId Parms{};

	Parms.InSoundId = InSoundId;

	UObject::ProcessEvent(Func, &Parms);
}

}

