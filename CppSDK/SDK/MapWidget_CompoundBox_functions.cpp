#pragma once

 

// Package: MapWidget_CompoundBox

#include "Basic.hpp"

#include "MapWidget_CompoundBox_classes.hpp"
#include "MapWidget_CompoundBox_parameters.hpp"


namespace SDK
{

// Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.OnItemSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InSelectedItemName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   InSelectedItemId                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_CompoundBox_C::OnItemSelected__DelegateSignature(const class FString& InSelectedItemName, int32 InSelectedItemId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_CompoundBox_C", "OnItemSelected__DelegateSignature");

	Params::MapWidget_CompoundBox_C_OnItemSelected__DelegateSignature Parms{};

	Parms.InSelectedItemName = std::move(InSelectedItemName);
	Parms.InSelectedItemId = InSelectedItemId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.OnListBoxOpened__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMapWidget_CompoundBox_C::OnListBoxOpened__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_CompoundBox_C", "OnListBoxOpened__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.OnListBoxClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMapWidget_CompoundBox_C::OnListBoxClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_CompoundBox_C", "OnListBoxClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.ExecuteUbergraph_MapWidget_CompoundBox
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_CompoundBox_C::ExecuteUbergraph_MapWidget_CompoundBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_CompoundBox_C", "ExecuteUbergraph_MapWidget_CompoundBox");

	Params::MapWidget_CompoundBox_C_ExecuteUbergraph_MapWidget_CompoundBox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.BndEvt__SBComboBox_K2Node_ComponentBoundEvent_3_OnClosingEvent__DelegateSignature
// (BlueprintEvent)

void UMapWidget_CompoundBox_C::BndEvt__SBComboBox_K2Node_ComponentBoundEvent_3_OnClosingEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_CompoundBox_C", "BndEvt__SBComboBox_K2Node_ComponentBoundEvent_3_OnClosingEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.BndEvt__SBComboBox_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature
// (BlueprintEvent)

void UMapWidget_CompoundBox_C::BndEvt__SBComboBox_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_CompoundBox_C", "BndEvt__SBComboBox_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.BndEvt__SBComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_CompoundBox_C::BndEvt__SBComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_CompoundBox_C", "BndEvt__SBComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature");

	Params::MapWidget_CompoundBox_C_BndEvt__SBComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMapWidget_CompoundBox_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_CompoundBox_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.AddItemToComboBox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InItemName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMapWidget_CompoundBox_C::AddItemToComboBox(const class FString& InItemName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_CompoundBox_C", "AddItemToComboBox");

	Params::MapWidget_CompoundBox_C_AddItemToComboBox Parms{};

	Parms.InItemName = std::move(InItemName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.SetComboBoxItemSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InItemName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMapWidget_CompoundBox_C::SetComboBoxItemSelected(const class FString& InItemName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_CompoundBox_C", "SetComboBoxItemSelected");

	Params::MapWidget_CompoundBox_C_SetComboBoxItemSelected Parms{};

	Parms.InItemName = std::move(InItemName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.SetWidgetToOptionCanvas
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      InUserWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_CompoundBox_C::SetWidgetToOptionCanvas(class UUserWidget* InUserWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_CompoundBox_C", "SetWidgetToOptionCanvas");

	Params::MapWidget_CompoundBox_C_SetWidgetToOptionCanvas Parms{};

	Parms.InUserWidget = InUserWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.SetOptionWidgetVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_CompoundBox_C::SetOptionWidgetVisibility(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_CompoundBox_C", "SetOptionWidgetVisibility");

	Params::MapWidget_CompoundBox_C_SetOptionWidgetVisibility Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.SetTitleText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UMapWidget_CompoundBox_C::SetTitleText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_CompoundBox_C", "SetTitleText");

	Params::MapWidget_CompoundBox_C_SetTitleText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.SetTitleTextId
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InTextID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapWidget_CompoundBox_C::SetTitleTextId(int32 InTextID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_CompoundBox_C", "SetTitleTextId");

	Params::MapWidget_CompoundBox_C_SetTitleTextId Parms{};

	Parms.InTextID = InTextID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.SetComboBoxEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapWidget_CompoundBox_C::SetComboBoxEnable(bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_CompoundBox_C", "SetComboBoxEnable");

	Params::MapWidget_CompoundBox_C_SetComboBoxEnable Parms{};

	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.On_CBox_1_GenerateWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UMapWidget_CompoundBox_C::On_CBox_1_GenerateWidget_0(const class FString& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_CompoundBox_C", "On_CBox_1_GenerateWidget_0");

	Params::MapWidget_CompoundBox_C_On_CBox_1_GenerateWidget_0 Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.ClearComboBox
// (Public, BlueprintCallable, BlueprintEvent)

void UMapWidget_CompoundBox_C::ClearComboBox()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapWidget_CompoundBox_C", "ClearComboBox");

	UObject::ProcessEvent(Func, nullptr);
}

}

