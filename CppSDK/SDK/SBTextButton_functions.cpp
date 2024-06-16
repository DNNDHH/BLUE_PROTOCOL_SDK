#pragma once

 

// Package: SBTextButton

#include "Basic.hpp"

#include "SBTextButton_classes.hpp"
#include "SBTextButton_parameters.hpp"


namespace SDK
{

// Function SBTextButton.SBTextButton_C.ExecuteUbergraph_SBTextButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USBTextButton_C::ExecuteUbergraph_SBTextButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBTextButton_C", "ExecuteUbergraph_SBTextButton");

	Params::SBTextButton_C_ExecuteUbergraph_SBTextButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SBTextButton.SBTextButton_C.OnReleased_Event_0
// (BlueprintCallable, BlueprintEvent)

void USBTextButton_C::OnReleased_Event_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBTextButton_C", "OnReleased_Event_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SBTextButton.SBTextButton_C.OnPressed_Event_0
// (BlueprintCallable, BlueprintEvent)

void USBTextButton_C::OnPressed_Event_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBTextButton_C", "OnPressed_Event_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SBTextButton.SBTextButton_C.Construct
// (Event, Public, BlueprintEvent)

void USBTextButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBTextButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SBTextButton.SBTextButton_C.UpdateChildTextColor
// (BlueprintCallable, BlueprintEvent)

void USBTextButton_C::UpdateChildTextColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBTextButton_C", "UpdateChildTextColor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SBTextButton.SBTextButton_C.OnUnhovered_Event_0
// (BlueprintCallable, BlueprintEvent)

void USBTextButton_C::OnUnhovered_Event_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBTextButton_C", "OnUnhovered_Event_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SBTextButton.SBTextButton_C.OnHovered_Event_0
// (BlueprintCallable, BlueprintEvent)

void USBTextButton_C::OnHovered_Event_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBTextButton_C", "OnHovered_Event_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SBTextButton.SBTextButton_C.InitChildText
// (Private, BlueprintCallable, BlueprintEvent)

void USBTextButton_C::InitChildText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBTextButton_C", "InitChildText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SBTextButton.SBTextButton_C.SearchChildText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*                     PanelWidget                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USBTextButton_C::SearchChildText(class UPanelWidget* PanelWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SBTextButton_C", "SearchChildText");

	Params::SBTextButton_C_SearchChildText Parms{};

	Parms.PanelWidget = PanelWidget;

	UObject::ProcessEvent(Func, &Parms);
}

}

