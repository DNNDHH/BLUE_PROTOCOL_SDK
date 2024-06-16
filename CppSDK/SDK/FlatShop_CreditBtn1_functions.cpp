#pragma once

 

// Package: FlatShop_CreditBtn1

#include "Basic.hpp"

#include "FlatShop_CreditBtn1_classes.hpp"
#include "FlatShop_CreditBtn1_parameters.hpp"


namespace SDK
{

// Function FlatShop_CreditBtn1.FlatShop_CreditBtn1_C.EventBtnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UFlatShop_CreditBtn1_C::EventBtnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_CreditBtn1_C", "EventBtnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FlatShop_CreditBtn1.FlatShop_CreditBtn1_C.ExecuteUbergraph_FlatShop_CreditBtn1
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlatShop_CreditBtn1_C::ExecuteUbergraph_FlatShop_CreditBtn1(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_CreditBtn1_C", "ExecuteUbergraph_FlatShop_CreditBtn1");

	Params::FlatShop_CreditBtn1_C_ExecuteUbergraph_FlatShop_CreditBtn1 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlatShop_CreditBtn1.FlatShop_CreditBtn1_C.BndEvt__FlatShop_CreditBtn1_Btn1_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UFlatShop_CreditBtn1_C::BndEvt__FlatShop_CreditBtn1_Btn1_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_CreditBtn1_C", "BndEvt__FlatShop_CreditBtn1_Btn1_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FlatShop_CreditBtn1.FlatShop_CreditBtn1_C.BndEvt__FlatShop_CreditBtn1_Btn1_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UFlatShop_CreditBtn1_C::BndEvt__FlatShop_CreditBtn1_Btn1_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_CreditBtn1_C", "BndEvt__FlatShop_CreditBtn1_Btn1_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FlatShop_CreditBtn1.FlatShop_CreditBtn1_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UFlatShop_CreditBtn1_C::BndEvt__Btn1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_CreditBtn1_C", "BndEvt__Btn1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FlatShop_CreditBtn1.FlatShop_CreditBtn1_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UFlatShop_CreditBtn1_C::BndEvt__Btn1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_CreditBtn1_C", "BndEvt__Btn1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FlatShop_CreditBtn1.FlatShop_CreditBtn1_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UFlatShop_CreditBtn1_C::BndEvt__Btn1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_CreditBtn1_C", "BndEvt__Btn1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FlatShop_CreditBtn1.FlatShop_CreditBtn1_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFlatShop_CreditBtn1_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_CreditBtn1_C", "PreConstruct");

	Params::FlatShop_CreditBtn1_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlatShop_CreditBtn1.FlatShop_CreditBtn1_C.PlayFlashing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsPlay                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFlatShop_CreditBtn1_C::PlayFlashing(bool IsPlay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_CreditBtn1_C", "PlayFlashing");

	Params::FlatShop_CreditBtn1_C_PlayFlashing Parms{};

	Parms.IsPlay = IsPlay;

	UObject::ProcessEvent(Func, &Parms);
}

}

