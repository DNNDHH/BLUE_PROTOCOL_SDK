#pragma once

 

// Package: CommandMenu_MenuItem3

#include "Basic.hpp"

#include "CommandMenu_MenuItem3_classes.hpp"
#include "CommandMenu_MenuItem3_parameters.hpp"


namespace SDK
{

// Function CommandMenu_MenuItem3.CommandMenu_MenuItem3_C.EventClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCommandMenu_MenuItem3_C::EventClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_MenuItem3_C", "EventClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu_MenuItem3.CommandMenu_MenuItem3_C.ExecuteUbergraph_CommandMenu_MenuItem3
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_MenuItem3_C::ExecuteUbergraph_CommandMenu_MenuItem3(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_MenuItem3_C", "ExecuteUbergraph_CommandMenu_MenuItem3");

	Params::CommandMenu_MenuItem3_C_ExecuteUbergraph_CommandMenu_MenuItem3 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu_MenuItem3.CommandMenu_MenuItem3_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_140_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCommandMenu_MenuItem3_C::BndEvt__Btn1_K2Node_ComponentBoundEvent_140_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_MenuItem3_C", "BndEvt__Btn1_K2Node_ComponentBoundEvent_140_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu_MenuItem3.CommandMenu_MenuItem3_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_130_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCommandMenu_MenuItem3_C::BndEvt__Btn1_K2Node_ComponentBoundEvent_130_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_MenuItem3_C", "BndEvt__Btn1_K2Node_ComponentBoundEvent_130_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu_MenuItem3.CommandMenu_MenuItem3_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_113_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCommandMenu_MenuItem3_C::BndEvt__Btn1_K2Node_ComponentBoundEvent_113_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_MenuItem3_C", "BndEvt__Btn1_K2Node_ComponentBoundEvent_113_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommandMenu_MenuItem3.CommandMenu_MenuItem3_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommandMenu_MenuItem3_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_MenuItem3_C", "PreConstruct");

	Params::CommandMenu_MenuItem3_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu_MenuItem3.CommandMenu_MenuItem3_C.SetTextId
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TextId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_MenuItem3_C::SetTextId(int32 TextId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_MenuItem3_C", "SetTextId");

	Params::CommandMenu_MenuItem3_C_SetTextId Parms{};

	Parms.TextId = TextId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu_MenuItem3.CommandMenu_MenuItem3_C.SetSoundID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESystemSE                               SoundId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommandMenu_MenuItem3_C::SetSoundID(ESystemSE SoundId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_MenuItem3_C", "SetSoundID");

	Params::CommandMenu_MenuItem3_C_SetSoundID Parms{};

	Parms.SoundId = SoundId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommandMenu_MenuItem3.CommandMenu_MenuItem3_C.SetBtnSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bSelected                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommandMenu_MenuItem3_C::SetBtnSelected(bool Param_bSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommandMenu_MenuItem3_C", "SetBtnSelected");

	Params::CommandMenu_MenuItem3_C_SetBtnSelected Parms{};

	Parms.Param_bSelected = Param_bSelected;

	UObject::ProcessEvent(Func, &Parms);
}

}

