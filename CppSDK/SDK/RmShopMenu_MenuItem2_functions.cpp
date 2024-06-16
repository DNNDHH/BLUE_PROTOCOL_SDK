#pragma once

 

// Package: RmShopMenu_MenuItem2

#include "Basic.hpp"

#include "RmShopMenu_MenuItem2_classes.hpp"
#include "RmShopMenu_MenuItem2_parameters.hpp"


namespace SDK
{

// Function RmShopMenu_MenuItem2.RmShopMenu_MenuItem2_C.EventOnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void URmShopMenu_MenuItem2_C::EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_MenuItem2_C", "EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu_MenuItem2.RmShopMenu_MenuItem2_C.ExecuteUbergraph_RmShopMenu_MenuItem2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URmShopMenu_MenuItem2_C::ExecuteUbergraph_RmShopMenu_MenuItem2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_MenuItem2_C", "ExecuteUbergraph_RmShopMenu_MenuItem2");

	Params::RmShopMenu_MenuItem2_C_ExecuteUbergraph_RmShopMenu_MenuItem2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu_MenuItem2.RmShopMenu_MenuItem2_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void URmShopMenu_MenuItem2_C::BndEvt__Btn1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_MenuItem2_C", "BndEvt__Btn1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu_MenuItem2.RmShopMenu_MenuItem2_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void URmShopMenu_MenuItem2_C::BndEvt__Btn1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_MenuItem2_C", "BndEvt__Btn1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu_MenuItem2.RmShopMenu_MenuItem2_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void URmShopMenu_MenuItem2_C::BndEvt__Btn1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_MenuItem2_C", "BndEvt__Btn1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RmShopMenu_MenuItem2.RmShopMenu_MenuItem2_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URmShopMenu_MenuItem2_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_MenuItem2_C", "PreConstruct");

	Params::RmShopMenu_MenuItem2_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenu_MenuItem2.RmShopMenu_MenuItem2_C.SetCaution
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URmShopMenu_MenuItem2_C::SetCaution(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenu_MenuItem2_C", "SetCaution");

	Params::RmShopMenu_MenuItem2_C_SetCaution Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}

}

