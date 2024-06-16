#pragma once

 

// Package: RmShopMenu_MenuItem3

#include "Basic.hpp"

#include "RmShopMenu_MenuItem3_classes.hpp"
#include "RmShopMenu_MenuItem3_parameters.hpp"


namespace SDK
{

// Function RmShopMenu_MenuItem3.RmShopMenu_MenuItem3_C.EventOnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void URmShopMenu_MenuItem3_C::EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_MenuItem3_C", "EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu_MenuItem3.RmShopMenu_MenuItem3_C.ExecuteUbergraph_RmShopMenu_MenuItem3
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URmShopMenu_MenuItem3_C::ExecuteUbergraph_RmShopMenu_MenuItem3(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_MenuItem3_C", "ExecuteUbergraph_RmShopMenu_MenuItem3");

	Params::RmShopMenu_MenuItem3_C_ExecuteUbergraph_RmShopMenu_MenuItem3 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu_MenuItem3.RmShopMenu_MenuItem3_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void URmShopMenu_MenuItem3_C::BndEvt__Btn1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_MenuItem3_C", "BndEvt__Btn1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu_MenuItem3.RmShopMenu_MenuItem3_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void URmShopMenu_MenuItem3_C::BndEvt__Btn1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_MenuItem3_C", "BndEvt__Btn1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu_MenuItem3.RmShopMenu_MenuItem3_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void URmShopMenu_MenuItem3_C::BndEvt__Btn1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_MenuItem3_C", "BndEvt__Btn1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu_MenuItem3.RmShopMenu_MenuItem3_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URmShopMenu_MenuItem3_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_MenuItem3_C", "PreConstruct");

	Params::RmShopMenu_MenuItem3_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

