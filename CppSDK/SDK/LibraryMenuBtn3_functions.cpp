#pragma once

 

// Package: LibraryMenuBtn3

#include "Basic.hpp"

#include "LibraryMenuBtn3_classes.hpp"
#include "LibraryMenuBtn3_parameters.hpp"


namespace SDK
{

// Function LibraryMenuBtn3.LibraryMenuBtn3_C.EventOnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ULibraryMenuBtn3_C::EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenuBtn3_C", "EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenuBtn3.LibraryMenuBtn3_C.ExecuteUbergraph_LibraryMenuBtn3
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenuBtn3_C::ExecuteUbergraph_LibraryMenuBtn3(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenuBtn3_C", "ExecuteUbergraph_LibraryMenuBtn3");

	Params::LibraryMenuBtn3_C_ExecuteUbergraph_LibraryMenuBtn3 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenuBtn3.LibraryMenuBtn3_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_140_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULibraryMenuBtn3_C::BndEvt__Btn1_K2Node_ComponentBoundEvent_140_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenuBtn3_C", "BndEvt__Btn1_K2Node_ComponentBoundEvent_140_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenuBtn3.LibraryMenuBtn3_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_130_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void ULibraryMenuBtn3_C::BndEvt__Btn1_K2Node_ComponentBoundEvent_130_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenuBtn3_C", "BndEvt__Btn1_K2Node_ComponentBoundEvent_130_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenuBtn3.LibraryMenuBtn3_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_113_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void ULibraryMenuBtn3_C::BndEvt__Btn1_K2Node_ComponentBoundEvent_113_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenuBtn3_C", "BndEvt__Btn1_K2Node_ComponentBoundEvent_113_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenuBtn3.LibraryMenuBtn3_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenuBtn3_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenuBtn3_C", "PreConstruct");

	Params::LibraryMenuBtn3_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenuBtn3.LibraryMenuBtn3_C.SetTextId
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TextId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenuBtn3_C::SetTextId(int32 TextId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenuBtn3_C", "SetTextId");

	Params::LibraryMenuBtn3_C_SetTextId Parms{};

	Parms.TextId = TextId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenuBtn3.LibraryMenuBtn3_C.SetTextName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Param_InTextName                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenuBtn3_C::SetTextName(class FName Param_InTextName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenuBtn3_C", "SetTextName");

	Params::LibraryMenuBtn3_C_SetTextName Parms{};

	Parms.Param_InTextName = Param_InTextName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenuBtn3.LibraryMenuBtn3_C.SetSoundID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESystemSE                               SoundId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenuBtn3_C::SetSoundID(ESystemSE SoundId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenuBtn3_C", "SetSoundID");

	Params::LibraryMenuBtn3_C_SetSoundID Parms{};

	Parms.SoundId = SoundId;

	UObject::ProcessEvent(Func, &Parms);
}

}

