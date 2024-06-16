#pragma once

 

// Package: EquipmentDiffDialog

#include "Basic.hpp"

#include "EquipmentDiffDialog_classes.hpp"
#include "EquipmentDiffDialog_parameters.hpp"


namespace SDK
{

// Function EquipmentDiffDialog.EquipmentDiffDialog_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UEquipmentDiffDialog_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentDiffDialog_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentDiffDialog.EquipmentDiffDialog_C.ExecuteUbergraph_EquipmentDiffDialog
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentDiffDialog_C::ExecuteUbergraph_EquipmentDiffDialog(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentDiffDialog_C", "ExecuteUbergraph_EquipmentDiffDialog");

	Params::EquipmentDiffDialog_C_ExecuteUbergraph_EquipmentDiffDialog Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentDiffDialog.EquipmentDiffDialog_C.WidgetAnimationEvt_InAnim_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UEquipmentDiffDialog_C::WidgetAnimationEvt_InAnim_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentDiffDialog_C", "WidgetAnimationEvt_InAnim_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentDiffDialog.EquipmentDiffDialog_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEquipmentDiffDialog_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentDiffDialog_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentDiffDialog.EquipmentDiffDialog_C.OnPressCancel
// (BlueprintCallable, BlueprintEvent)

void UEquipmentDiffDialog_C::OnPressCancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentDiffDialog_C", "OnPressCancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentDiffDialog.EquipmentDiffDialog_C.BndEvt__EquipmentDiffDialog_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature
// (BlueprintEvent)

void UEquipmentDiffDialog_C::BndEvt__EquipmentDiffDialog_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentDiffDialog_C", "BndEvt__EquipmentDiffDialog_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentDiffDialog.EquipmentDiffDialog_C.Close
// (BlueprintCallable, BlueprintEvent)

void UEquipmentDiffDialog_C::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentDiffDialog_C", "Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentDiffDialog.EquipmentDiffDialog_C.BndEvt__EquipmentDiffDialog_Btn_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UEquipmentDiffDialog_C::BndEvt__EquipmentDiffDialog_Btn_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentDiffDialog_C", "BndEvt__EquipmentDiffDialog_Btn_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentDiffDialog.EquipmentDiffDialog_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEquipmentDiffDialog_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentDiffDialog_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentDiffDialog.EquipmentDiffDialog_C.SetRecepi
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsImagine                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Left                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   RecepiId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentDiffDialog_C::SetRecepi(bool IsImagine, bool Left, int32 RecepiId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentDiffDialog_C", "SetRecepi");

	Params::EquipmentDiffDialog_C_SetRecepi Parms{};

	Parms.IsImagine = IsImagine;
	Parms.Left = Left;
	Parms.RecepiId = RecepiId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentDiffDialog.EquipmentDiffDialog_C.Set Own Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Left                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FOwnItemInfo                     OwnItem                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UEquipmentDiffDialog_C::Set_Own_Item(bool Left, const struct FOwnItemInfo& OwnItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentDiffDialog_C", "Set Own Item");

	Params::EquipmentDiffDialog_C_Set_Own_Item Parms{};

	Parms.Left = Left;
	Parms.OwnItem = std::move(OwnItem);

	UObject::ProcessEvent(Func, &Parms);
}

}

