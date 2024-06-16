#pragma once

 

// Package: DebugSubMenuBase

#include "Basic.hpp"

#include "DebugSubMenuBase_classes.hpp"
#include "DebugSubMenuBase_parameters.hpp"


namespace SDK
{

// Function DebugSubMenuBase.DebugSubMenuBase_C.ExecuteUbergraph_DebugSubMenuBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugSubMenuBase_C::ExecuteUbergraph_DebugSubMenuBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugSubMenuBase_C", "ExecuteUbergraph_DebugSubMenuBase");

	Params::DebugSubMenuBase_C_ExecuteUbergraph_DebugSubMenuBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugSubMenuBase.DebugSubMenuBase_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDebugSubMenuBase_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugSubMenuBase_C", "BndEvt__CloseButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugSubMenuBase.DebugSubMenuBase_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDebugSubMenuBase_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugSubMenuBase_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugSubMenuBase.DebugSubMenuBase_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDebugButton_C*                   DebugButton                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugSubMenuBase_C::CustomEvent_0(class UDebugButton_C* DebugButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugSubMenuBase_C", "CustomEvent_0");

	Params::DebugSubMenuBase_C_CustomEvent_0 Parms{};

	Parms.DebugButton = DebugButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugSubMenuBase.DebugSubMenuBase_C.AddButtonEx
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBDebugParameter                InParam                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UDebugSubMenuBase_C::AddButtonEx(const struct FSBDebugParameter& InParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugSubMenuBase_C", "AddButtonEx");

	Params::DebugSubMenuBase_C_AddButtonEx Parms{};

	Parms.InParam = std::move(InParam);

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugSubMenuBase.DebugSubMenuBase_C.AddButtonFromArray
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                     ButtonLabels                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UDebugSubMenuBase_C::AddButtonFromArray(const TArray<class FText>& ButtonLabels)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugSubMenuBase_C", "AddButtonFromArray");

	Params::DebugSubMenuBase_C_AddButtonFromArray Parms{};

	Parms.ButtonLabels = std::move(ButtonLabels);

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugSubMenuBase.DebugSubMenuBase_C.EventDispatcher_OnClicked_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDebugButton_C*                   DebugButton                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugSubMenuBase_C::EventDispatcher_OnClicked_Event_0(class UDebugButton_C* DebugButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugSubMenuBase_C", "EventDispatcher_OnClicked_Event_0");

	Params::DebugSubMenuBase_C_EventDispatcher_OnClicked_Event_0 Parms{};

	Parms.DebugButton = DebugButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugSubMenuBase.DebugSubMenuBase_C.AddButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             ButtonLabel                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UDebugSubMenuBase_C::AddButton(const class FText& ButtonLabel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugSubMenuBase_C", "AddButton");

	Params::DebugSubMenuBase_C_AddButton Parms{};

	Parms.ButtonLabel = std::move(ButtonLabel);

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugSubMenuBase.DebugSubMenuBase_C.AddButton_Internal
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             ButtonLabel                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDebugButton_C*                   NewButton                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugSubMenuBase_C::AddButton_Internal(const class FText& ButtonLabel, class UDebugButton_C** NewButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugSubMenuBase_C", "AddButton_Internal");

	Params::DebugSubMenuBase_C_AddButton_Internal Parms{};

	Parms.ButtonLabel = std::move(ButtonLabel);

	UObject::ProcessEvent(Func, &Parms);

	if (NewButton != nullptr)
		*NewButton = Parms.NewButton;
}


// Function DebugSubMenuBase.DebugSubMenuBase_C.OnButtonClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDebugButton_C*                   DebugButton                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugSubMenuBase_C::OnButtonClicked(class UDebugButton_C* DebugButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugSubMenuBase_C", "OnButtonClicked");

	Params::DebugSubMenuBase_C_OnButtonClicked Parms{};

	Parms.DebugButton = DebugButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugSubMenuBase.DebugSubMenuBase_C.SetFocusItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   FocusItemIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugSubMenuBase_C::SetFocusItem(int32 FocusItemIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugSubMenuBase_C", "SetFocusItem");

	Params::DebugSubMenuBase_C_SetFocusItem Parms{};

	Parms.FocusItemIndex = FocusItemIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugSubMenuBase.DebugSubMenuBase_C.AddChildMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      InChildMenu                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugSubMenuBase_C::AddChildMenu(class UUserWidget* InChildMenu)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugSubMenuBase_C", "AddChildMenu");

	Params::DebugSubMenuBase_C_AddChildMenu Parms{};

	Parms.InChildMenu = InChildMenu;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugSubMenuBase.DebugSubMenuBase_C.AddMenuItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      InItemWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugSubMenuBase_C::AddMenuItem(class UUserWidget* InItemWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugSubMenuBase_C", "AddMenuItem");

	Params::DebugSubMenuBase_C_AddMenuItem Parms{};

	Parms.InItemWidget = InItemWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugSubMenuBase.DebugSubMenuBase_C.ClearMenuItem
// (Public, BlueprintCallable, BlueprintEvent)

void UDebugSubMenuBase_C::ClearMenuItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugSubMenuBase_C", "ClearMenuItem");

	UObject::ProcessEvent(Func, nullptr);
}

}

