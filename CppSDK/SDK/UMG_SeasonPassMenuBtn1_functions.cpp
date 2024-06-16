#pragma once

 

// Package: UMG_SeasonPassMenuBtn1

#include "Basic.hpp"

#include "UMG_SeasonPassMenuBtn1_classes.hpp"
#include "UMG_SeasonPassMenuBtn1_parameters.hpp"


namespace SDK
{

// Function UMG_SeasonPassMenuBtn1.UMG_SeasonPassMenuBtn1_C.EventOnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUMG_SeasonPassMenuBtn1_C::EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuBtn1_C", "EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassMenuBtn1.UMG_SeasonPassMenuBtn1_C.ExecuteUbergraph_UMG_SeasonPassMenuBtn1
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassMenuBtn1_C::ExecuteUbergraph_UMG_SeasonPassMenuBtn1(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuBtn1_C", "ExecuteUbergraph_UMG_SeasonPassMenuBtn1");

	Params::UMG_SeasonPassMenuBtn1_C_ExecuteUbergraph_UMG_SeasonPassMenuBtn1 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassMenuBtn1.UMG_SeasonPassMenuBtn1_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_SeasonPassMenuBtn1_C::BndEvt__Btn1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuBtn1_C", "BndEvt__Btn1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassMenuBtn1.UMG_SeasonPassMenuBtn1_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_SeasonPassMenuBtn1_C::BndEvt__Btn1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuBtn1_C", "BndEvt__Btn1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassMenuBtn1.UMG_SeasonPassMenuBtn1_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_SeasonPassMenuBtn1_C::BndEvt__Btn1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuBtn1_C", "BndEvt__Btn1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_SeasonPassMenuBtn1.UMG_SeasonPassMenuBtn1_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_SeasonPassMenuBtn1_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassMenuBtn1_C", "PreConstruct");

	Params::UMG_SeasonPassMenuBtn1_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

