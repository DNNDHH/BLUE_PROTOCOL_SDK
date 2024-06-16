#pragma once

 

// Package: LibraryMenu_ListItemIcon

#include "Basic.hpp"

#include "LibraryMenu_ListItemIcon_classes.hpp"
#include "LibraryMenu_ListItemIcon_parameters.hpp"


namespace SDK
{

// Function LibraryMenu_ListItemIcon.LibraryMenu_ListItemIcon_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_ListIndex                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_ListItemIcon_C::OnClick__DelegateSignature(int32 Param_ListIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_ListItemIcon_C", "OnClick__DelegateSignature");

	Params::LibraryMenu_ListItemIcon_C_OnClick__DelegateSignature Parms{};

	Parms.Param_ListIndex = Param_ListIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_ListItemIcon.LibraryMenu_ListItemIcon_C.ExecuteUbergraph_LibraryMenu_ListItemIcon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_ListItemIcon_C::ExecuteUbergraph_LibraryMenu_ListItemIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_ListItemIcon_C", "ExecuteUbergraph_LibraryMenu_ListItemIcon");

	Params::LibraryMenu_ListItemIcon_C_ExecuteUbergraph_LibraryMenu_ListItemIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_ListItemIcon.LibraryMenu_ListItemIcon_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_99_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_ListItemIcon_C::BndEvt__Btn1_K2Node_ComponentBoundEvent_99_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_ListItemIcon_C", "BndEvt__Btn1_K2Node_ComponentBoundEvent_99_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_ListItemIcon.LibraryMenu_ListItemIcon_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_80_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_ListItemIcon_C::BndEvt__Btn1_K2Node_ComponentBoundEvent_80_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_ListItemIcon_C", "BndEvt__Btn1_K2Node_ComponentBoundEvent_80_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_ListItemIcon.LibraryMenu_ListItemIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULibraryMenu_ListItemIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_ListItemIcon_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_ListItemIcon.LibraryMenu_ListItemIcon_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_ListItemIcon_C::BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_ListItemIcon_C", "BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_ListItemIcon.LibraryMenu_ListItemIcon_C.SetName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void ULibraryMenu_ListItemIcon_C::SetName(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_ListItemIcon_C", "SetName");

	Params::LibraryMenu_ListItemIcon_C_SetName Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_ListItemIcon.LibraryMenu_ListItemIcon_C.SetBtnSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSelected                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_ListItemIcon_C::SetBtnSelected(bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_ListItemIcon_C", "SetBtnSelected");

	Params::LibraryMenu_ListItemIcon_C_SetBtnSelected Parms{};

	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_ListItemIcon.LibraryMenu_ListItemIcon_C.SetPossessionMarkIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_ListItemIcon_C::SetPossessionMarkIcon(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_ListItemIcon_C", "SetPossessionMarkIcon");

	Params::LibraryMenu_ListItemIcon_C_SetPossessionMarkIcon Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}

}

