#pragma once

 

// Package: WeaponSelect

#include "Basic.hpp"

#include "WeaponSelect_classes.hpp"
#include "WeaponSelect_parameters.hpp"


namespace SDK
{

// Function WeaponSelect.WeaponSelect_C.WeaponSelectApply__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     ItemInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UWeaponSelect_C::WeaponSelectApply__DelegateSignature(const struct FOwnItemInfo& ItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSelect_C", "WeaponSelectApply__DelegateSignature");

	Params::WeaponSelect_C_WeaponSelectApply__DelegateSignature Parms{};

	Parms.ItemInfo = std::move(ItemInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSelect.WeaponSelect_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWeaponSelect_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSelect_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSelect.WeaponSelect_C.ExecuteUbergraph_WeaponSelect
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSelect_C::ExecuteUbergraph_WeaponSelect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSelect_C", "ExecuteUbergraph_WeaponSelect");

	Params::WeaponSelect_C_ExecuteUbergraph_WeaponSelect Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSelect.WeaponSelect_C.Cancel
// (BlueprintCallable, BlueprintEvent)

void UWeaponSelect_C::Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSelect_C", "Cancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSelect.WeaponSelect_C.BndEvt__WeaponSelect_CmnClose03_K2Node_ComponentBoundEvent_5_OnClosed__DelegateSignature
// (BlueprintEvent)

void UWeaponSelect_C::BndEvt__WeaponSelect_CmnClose03_K2Node_ComponentBoundEvent_5_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSelect_C", "BndEvt__WeaponSelect_CmnClose03_K2Node_ComponentBoundEvent_5_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSelect.WeaponSelect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWeaponSelect_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSelect_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSelect.WeaponSelect_C.End
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSelect_C::End(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSelect_C", "End");

	Params::WeaponSelect_C_End Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSelect.WeaponSelect_C.WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)

void UWeaponSelect_C::WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSelect_C", "WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSelect.WeaponSelect_C.BndEvt__WeaponSelect_Btn_Selected_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWeaponSelect_C::BndEvt__WeaponSelect_Btn_Selected_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSelect_C", "BndEvt__WeaponSelect_Btn_Selected_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSelect.WeaponSelect_C.BndEvt__WeaponSelect_Btn_Selected_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWeaponSelect_C::BndEvt__WeaponSelect_Btn_Selected_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSelect_C", "BndEvt__WeaponSelect_Btn_Selected_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSelect.WeaponSelect_C.RequestClose
// (BlueprintCallable, BlueprintEvent)

void UWeaponSelect_C::RequestClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSelect_C", "RequestClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSelect.WeaponSelect_C.BndEvt__WeaponSelect_Btn_Selected_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWeaponSelect_C::BndEvt__WeaponSelect_Btn_Selected_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSelect_C", "BndEvt__WeaponSelect_Btn_Selected_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSelect.WeaponSelect_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWeaponSelect_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSelect_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSelect.WeaponSelect_C.BndEvt__WeaponSelect_SelectGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     SelectItem                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWeaponSelect_C::BndEvt__WeaponSelect_SelectGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature(const struct FOwnItemInfo& SelectItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSelect_C", "BndEvt__WeaponSelect_SelectGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature");

	Params::WeaponSelect_C_BndEvt__WeaponSelect_SelectGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature Parms{};

	Parms.SelectItem = std::move(SelectItem);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSelect.WeaponSelect_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWeaponSelect_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSelect_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSelect.WeaponSelect_C.Terminate
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponSelect_C::Terminate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSelect_C", "Terminate");

	UObject::ProcessEvent(Func, nullptr);
}

}

