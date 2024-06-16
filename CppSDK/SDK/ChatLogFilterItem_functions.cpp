#pragma once

 

// Package: ChatLogFilterItem

#include "Basic.hpp"

#include "ChatLogFilterItem_classes.hpp"
#include "ChatLogFilterItem_parameters.hpp"


namespace SDK
{

// Function ChatLogFilterItem.ChatLogFilterItem_C.EventCheckStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatLogFilterItem_C::EventCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogFilterItem_C", "EventCheckStateChanged__DelegateSignature");

	Params::ChatLogFilterItem_C_EventCheckStateChanged__DelegateSignature Parms{};

	Parms.IsChecked = IsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogFilterItem.ChatLogFilterItem_C.ExecuteUbergraph_ChatLogFilterItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatLogFilterItem_C::ExecuteUbergraph_ChatLogFilterItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogFilterItem_C", "ExecuteUbergraph_ChatLogFilterItem");

	Params::ChatLogFilterItem_C_ExecuteUbergraph_ChatLogFilterItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogFilterItem.ChatLogFilterItem_C.BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_90_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatLogFilterItem_C::BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_90_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogFilterItem_C", "BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_90_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::ChatLogFilterItem_C_BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_90_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogFilterItem.ChatLogFilterItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatLogFilterItem_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogFilterItem_C", "PreConstruct");

	Params::ChatLogFilterItem_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogFilterItem.ChatLogFilterItem_C.SetChecked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatLogFilterItem_C::SetChecked(bool IsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogFilterItem_C", "SetChecked");

	Params::ChatLogFilterItem_C_SetChecked Parms{};

	Parms.IsChecked = IsChecked;

	UObject::ProcessEvent(Func, &Parms);
}

}

