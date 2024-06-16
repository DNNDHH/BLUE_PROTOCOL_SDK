#pragma once

 

// Package: SpecialViewItem

#include "Basic.hpp"

#include "SpecialViewItem_classes.hpp"
#include "SpecialViewItem_parameters.hpp"


namespace SDK
{

// Function SpecialViewItem.SpecialViewItem_C.OnSelect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USpecialViewItem_C*               Select                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpecialViewItem_C::OnSelect__DelegateSignature(class USpecialViewItem_C* Select)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialViewItem_C", "OnSelect__DelegateSignature");

	Params::SpecialViewItem_C_OnSelect__DelegateSignature Parms{};

	Parms.Select = Select;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SpecialViewItem.SpecialViewItem_C.ExecuteUbergraph_SpecialViewItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpecialViewItem_C::ExecuteUbergraph_SpecialViewItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialViewItem_C", "ExecuteUbergraph_SpecialViewItem");

	Params::SpecialViewItem_C_ExecuteUbergraph_SpecialViewItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SpecialViewItem.SpecialViewItem_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USpecialViewItem_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialViewItem_C", "OnMouseLeave");

	Params::SpecialViewItem_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SpecialViewItem.SpecialViewItem_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USpecialViewItem_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialViewItem_C", "OnMouseEnter");

	Params::SpecialViewItem_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SpecialViewItem.SpecialViewItem_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsSelected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USpecialViewItem_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialViewItem_C", "BP_OnItemSelectionChanged");

	Params::SpecialViewItem_C_BP_OnItemSelectionChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SpecialViewItem.SpecialViewItem_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                          ListItemObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpecialViewItem_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialViewItem_C", "OnListItemObjectSet");

	Params::SpecialViewItem_C_OnListItemObjectSet Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SpecialViewItem.SpecialViewItem_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsExpanded                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USpecialViewItem_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialViewItem_C", "BP_OnItemExpansionChanged");

	Params::SpecialViewItem_C_BP_OnItemExpansionChanged Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SpecialViewItem.SpecialViewItem_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)

void USpecialViewItem_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialViewItem_C", "BP_OnEntryReleased");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SpecialViewItem.SpecialViewItem_C.UpdateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USpecialViewItem_C::UpdateText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialViewItem_C", "UpdateText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SpecialViewItem.SpecialViewItem_C.SetData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     Param_ItemData                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void USpecialViewItem_C::SetData(const struct FOwnItemInfo& Param_ItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialViewItem_C", "SetData");

	Params::SpecialViewItem_C_SetData Parms{};

	Parms.Param_ItemData = std::move(Param_ItemData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SpecialViewItem.SpecialViewItem_C.GetData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     Param_ItemData                                         (Parm, OutParm)

void USpecialViewItem_C::GetData(struct FOwnItemInfo* Param_ItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialViewItem_C", "GetData");

	Params::SpecialViewItem_C_GetData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemData != nullptr)
		*Param_ItemData = std::move(Parms.Param_ItemData);
}

}

