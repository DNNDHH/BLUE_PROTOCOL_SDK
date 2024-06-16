#pragma once

 

// Package: CommandMenu_BtnSkyStore

#include "Basic.hpp"

#include "CommandMenu_BtnSkyStore_classes.hpp"
#include "CommandMenu_BtnSkyStore_parameters.hpp"


namespace SDK
{

// Function CommandMenu_BtnSkyStore.CommandMenu_BtnSkyStore_C.EventOnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCommandMenu_BtnSkyStore_C::EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_BtnSkyStore_C", "EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu_BtnSkyStore.CommandMenu_BtnSkyStore_C.ExecuteUbergraph_CommandMenu_BtnSkyStore
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_BtnSkyStore_C::ExecuteUbergraph_CommandMenu_BtnSkyStore(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_BtnSkyStore_C", "ExecuteUbergraph_CommandMenu_BtnSkyStore");

	Params::CommandMenu_BtnSkyStore_C_ExecuteUbergraph_CommandMenu_BtnSkyStore Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu_BtnSkyStore.CommandMenu_BtnSkyStore_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCommandMenu_BtnSkyStore_C::BndEvt__Btn1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_BtnSkyStore_C", "BndEvt__Btn1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu_BtnSkyStore.CommandMenu_BtnSkyStore_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCommandMenu_BtnSkyStore_C::BndEvt__Btn1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_BtnSkyStore_C", "BndEvt__Btn1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu_BtnSkyStore.CommandMenu_BtnSkyStore_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCommandMenu_BtnSkyStore_C::BndEvt__Btn1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_BtnSkyStore_C", "BndEvt__Btn1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu_BtnSkyStore.CommandMenu_BtnSkyStore_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCommandMenu_BtnSkyStore_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_BtnSkyStore_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

