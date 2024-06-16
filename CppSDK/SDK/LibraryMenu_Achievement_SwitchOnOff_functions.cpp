#pragma once

 

// Package: LibraryMenu_Achievement_SwitchOnOff

#include "Basic.hpp"

#include "LibraryMenu_Achievement_SwitchOnOff_classes.hpp"
#include "LibraryMenu_Achievement_SwitchOnOff_parameters.hpp"


namespace SDK
{

// Function LibraryMenu_Achievement_SwitchOnOff.LibraryMenu_Achievement_SwitchOnOff_C.OnSwitchOnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OutIsSetAchievement                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_Achievement_SwitchOnOff_C::OnSwitchOnPressed__DelegateSignature(bool OutIsSetAchievement)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_SwitchOnOff_C", "OnSwitchOnPressed__DelegateSignature");

	Params::LibraryMenu_Achievement_SwitchOnOff_C_OnSwitchOnPressed__DelegateSignature Parms{};

	Parms.OutIsSetAchievement = OutIsSetAchievement;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Achievement_SwitchOnOff.LibraryMenu_Achievement_SwitchOnOff_C.ExecuteUbergraph_LibraryMenu_Achievement_SwitchOnOff
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Achievement_SwitchOnOff_C::ExecuteUbergraph_LibraryMenu_Achievement_SwitchOnOff(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_SwitchOnOff_C", "ExecuteUbergraph_LibraryMenu_Achievement_SwitchOnOff");

	Params::LibraryMenu_Achievement_SwitchOnOff_C_ExecuteUbergraph_LibraryMenu_Achievement_SwitchOnOff Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Achievement_SwitchOnOff.LibraryMenu_Achievement_SwitchOnOff_C.SwitchOnOff
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsSwitchOn                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_Achievement_SwitchOnOff_C::SwitchOnOff(bool InIsSwitchOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_SwitchOnOff_C", "SwitchOnOff");

	Params::LibraryMenu_Achievement_SwitchOnOff_C_SwitchOnOff Parms{};

	Parms.InIsSwitchOn = InIsSwitchOn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Achievement_SwitchOnOff.LibraryMenu_Achievement_SwitchOnOff_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULibraryMenu_Achievement_SwitchOnOff_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_SwitchOnOff_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Achievement_SwitchOnOff.LibraryMenu_Achievement_SwitchOnOff_C.BndEvt__LibraryMenu_Achievement_SwitchOnOff_VisibilitySwitch_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_Achievement_SwitchOnOff_C::BndEvt__LibraryMenu_Achievement_SwitchOnOff_VisibilitySwitch_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_SwitchOnOff_C", "BndEvt__LibraryMenu_Achievement_SwitchOnOff_VisibilitySwitch_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Achievement_SwitchOnOff.LibraryMenu_Achievement_SwitchOnOff_C.BndEvt__LibraryMenu_Achievement_SwitchOnOff_VisibilitySwitch_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_Achievement_SwitchOnOff_C::BndEvt__LibraryMenu_Achievement_SwitchOnOff_VisibilitySwitch_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_SwitchOnOff_C", "BndEvt__LibraryMenu_Achievement_SwitchOnOff_VisibilitySwitch_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Achievement_SwitchOnOff.LibraryMenu_Achievement_SwitchOnOff_C.BndEvt__LibraryMenu_Achievement_SwitchOnOff_VisibilitySwitch_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_Achievement_SwitchOnOff_C::BndEvt__LibraryMenu_Achievement_SwitchOnOff_VisibilitySwitch_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_SwitchOnOff_C", "BndEvt__LibraryMenu_Achievement_SwitchOnOff_VisibilitySwitch_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Achievement_SwitchOnOff.LibraryMenu_Achievement_SwitchOnOff_C.DataSet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInIsEnabled                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_Achievement_SwitchOnOff_C::DataSet(bool bInIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Achievement_SwitchOnOff_C", "DataSet");

	Params::LibraryMenu_Achievement_SwitchOnOff_C_DataSet Parms{};

	Parms.bInIsEnabled = bInIsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}

}

