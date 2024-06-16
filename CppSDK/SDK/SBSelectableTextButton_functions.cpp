#pragma once

 

// Package: SBSelectableTextButton

#include "Basic.hpp"

#include "SBSelectableTextButton_classes.hpp"
#include "SBSelectableTextButton_parameters.hpp"


namespace SDK
{

// Function SBSelectableTextButton.SBSelectableTextButton_C.ExecuteUbergraph_SBSelectableTextButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USBSelectableTextButton_C::ExecuteUbergraph_SBSelectableTextButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBSelectableTextButton_C", "ExecuteUbergraph_SBSelectableTextButton");

	Params::SBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SBSelectableTextButton.SBSelectableTextButton_C.UpdateButtonStyleByDesignCheck
// (BlueprintCallable, BlueprintEvent)

void USBSelectableTextButton_C::UpdateButtonStyleByDesignCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBSelectableTextButton_C", "UpdateButtonStyleByDesignCheck");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SBSelectableTextButton.SBSelectableTextButton_C.OnReleased_Event_0
// (BlueprintCallable, BlueprintEvent)

void USBSelectableTextButton_C::OnReleased_Event_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBSelectableTextButton_C", "OnReleased_Event_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SBSelectableTextButton.SBSelectableTextButton_C.OnPressed_Event_0
// (BlueprintCallable, BlueprintEvent)

void USBSelectableTextButton_C::OnPressed_Event_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBSelectableTextButton_C", "OnPressed_Event_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SBSelectableTextButton.SBSelectableTextButton_C.UpdateButtonStyle
// (BlueprintCallable, BlueprintEvent)

void USBSelectableTextButton_C::UpdateButtonStyle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBSelectableTextButton_C", "UpdateButtonStyle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SBSelectableTextButton.SBSelectableTextButton_C.PreConstruct
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USBSelectableTextButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBSelectableTextButton_C", "PreConstruct");

	Params::SBSelectableTextButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SBSelectableTextButton.SBSelectableTextButton_C.Construct
// (Event, Public, BlueprintEvent)

void USBSelectableTextButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBSelectableTextButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SBSelectableTextButton.SBSelectableTextButton_C.UpdateChildTextColor
// (BlueprintCallable, BlueprintEvent)

void USBSelectableTextButton_C::UpdateChildTextColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBSelectableTextButton_C", "UpdateChildTextColor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SBSelectableTextButton.SBSelectableTextButton_C.OnUnhovered_Event_0
// (BlueprintCallable, BlueprintEvent)

void USBSelectableTextButton_C::OnUnhovered_Event_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBSelectableTextButton_C", "OnUnhovered_Event_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SBSelectableTextButton.SBSelectableTextButton_C.OnHovered_Event_0
// (BlueprintCallable, BlueprintEvent)

void USBSelectableTextButton_C::OnHovered_Event_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBSelectableTextButton_C", "OnHovered_Event_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SBSelectableTextButton.SBSelectableTextButton_C.InitBothStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FButtonStyle                     Param_SelectedStyle                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void USBSelectableTextButton_C::InitBothStyle(const struct FButtonStyle& Param_SelectedStyle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBSelectableTextButton_C", "InitBothStyle");

	Params::SBSelectableTextButton_C_InitBothStyle Parms{};

	Parms.Param_SelectedStyle = std::move(Param_SelectedStyle);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SBSelectableTextButton.SBSelectableTextButton_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSelect                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USBSelectableTextButton_C::SetSelected(bool bSelect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBSelectableTextButton_C", "SetSelected");

	Params::SBSelectableTextButton_C_SetSelected Parms{};

	Parms.bSelect = bSelect;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SBSelectableTextButton.SBSelectableTextButton_C.InitChildText
// (Private, BlueprintCallable, BlueprintEvent)

void USBSelectableTextButton_C::InitChildText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBSelectableTextButton_C", "InitChildText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SBSelectableTextButton.SBSelectableTextButton_C.IsSelected
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bIsSelected                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USBSelectableTextButton_C::IsSelected(bool* bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBSelectableTextButton_C", "IsSelected");

	Params::SBSelectableTextButton_C_IsSelected Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bIsSelected != nullptr)
		*bIsSelected = Parms.bIsSelected;
}


// Function SBSelectableTextButton.SBSelectableTextButton_C.SearchChildText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*                     PanelWidget                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USBSelectableTextButton_C::SearchChildText(class UPanelWidget* PanelWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBSelectableTextButton_C", "SearchChildText");

	Params::SBSelectableTextButton_C_SearchChildText Parms{};

	Parms.PanelWidget = PanelWidget;

	UObject::ProcessEvent(Func, &Parms);
}

}

