#pragma once

 

// Package: FusionitemListItem

#include "Basic.hpp"

#include "FusionitemListItem_classes.hpp"
#include "FusionitemListItem_parameters.hpp"


namespace SDK
{

// Function FusionitemListItem.FusionitemListItem_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     OwnItem                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// class UFusionitemListItem_C*            OnSelected                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFusionitemListItem_C::OnClicked__DelegateSignature(const struct FOwnItemInfo& OwnItem, class UFusionitemListItem_C* OnSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FusionitemListItem_C", "OnClicked__DelegateSignature");

	Params::FusionitemListItem_C_OnClicked__DelegateSignature Parms{};

	Parms.OwnItem = std::move(OwnItem);
	Parms.OnSelected = OnSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FusionitemListItem.FusionitemListItem_C.ExecuteUbergraph_FusionitemListItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFusionitemListItem_C::ExecuteUbergraph_FusionitemListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FusionitemListItem_C", "ExecuteUbergraph_FusionitemListItem");

	Params::FusionitemListItem_C_ExecuteUbergraph_FusionitemListItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FusionitemListItem.FusionitemListItem_C.BndEvt__FusionitemListItem_Btn_Select_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UFusionitemListItem_C::BndEvt__FusionitemListItem_Btn_Select_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FusionitemListItem_C", "BndEvt__FusionitemListItem_Btn_Select_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FusionitemListItem.FusionitemListItem_C.Set Data
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     Param_ItemData                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UFusionitemListItem_C::Set_Data(const struct FOwnItemInfo& Param_ItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FusionitemListItem_C", "Set Data");

	Params::FusionitemListItem_C_Set_Data Parms{};

	Parms.Param_ItemData = std::move(Param_ItemData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FusionitemListItem.FusionitemListItem_C.ApplyData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFusionitemListItem_C::ApplyData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FusionitemListItem_C", "ApplyData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FusionitemListItem.FusionitemListItem_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsSelected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFusionitemListItem_C::SetSelected(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FusionitemListItem_C", "SetSelected");

	Params::FusionitemListItem_C_SetSelected Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FusionitemListItem.FusionitemListItem_C.SetEmptySlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_EmptySlot                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFusionitemListItem_C::SetEmptySlot(int32 Param_EmptySlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FusionitemListItem_C", "SetEmptySlot");

	Params::FusionitemListItem_C_SetEmptySlot Parms{};

	Parms.Param_EmptySlot = Param_EmptySlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FusionitemListItem.FusionitemListItem_C.GetItemData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FOwnItemInfo                     Param_ItemData                                         (Parm, OutParm)

void UFusionitemListItem_C::GetItemData(struct FOwnItemInfo* Param_ItemData) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FusionitemListItem_C", "GetItemData");

	Params::FusionitemListItem_C_GetItemData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemData != nullptr)
		*Param_ItemData = std::move(Parms.Param_ItemData);
}

}

