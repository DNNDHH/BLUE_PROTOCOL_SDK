#pragma once

 

// Package: MountSelect

#include "Basic.hpp"

#include "MountSelect_classes.hpp"
#include "MountSelect_parameters.hpp"


namespace SDK
{

// Function MountSelect.MountSelect_C.ImagineSelectApply__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     ItemInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UMountSelect_C::ImagineSelectApply__DelegateSignature(const struct FOwnItemInfo& ItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountSelect_C", "ImagineSelectApply__DelegateSignature");

	Params::MountSelect_C_ImagineSelectApply__DelegateSignature Parms{};

	Parms.ItemInfo = std::move(ItemInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MountSelect.MountSelect_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMountSelect_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountSelect_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountSelect.MountSelect_C.ExecuteUbergraph_MountSelect
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMountSelect_C::ExecuteUbergraph_MountSelect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountSelect_C", "ExecuteUbergraph_MountSelect");

	Params::MountSelect_C_ExecuteUbergraph_MountSelect Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MountSelect.MountSelect_C.BndEvt__MountSelect_CmnClose03_K2Node_ComponentBoundEvent_5_OnClosed__DelegateSignature
// (BlueprintEvent)

void UMountSelect_C::BndEvt__MountSelect_CmnClose03_K2Node_ComponentBoundEvent_5_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountSelect_C", "BndEvt__MountSelect_CmnClose03_K2Node_ComponentBoundEvent_5_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountSelect.MountSelect_C.Bind Close UI_Cancel
// (BlueprintCallable, BlueprintEvent)

void UMountSelect_C::Bind_Close_UI_Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountSelect_C", "Bind Close UI_Cancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountSelect.MountSelect_C.End
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMountSelect_C::End(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountSelect_C", "End");

	Params::MountSelect_C_End Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MountSelect.MountSelect_C.WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)

void UMountSelect_C::WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountSelect_C", "WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountSelect.MountSelect_C.BndEvt__MountSelect_Btn_Selected_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UMountSelect_C::BndEvt__MountSelect_Btn_Selected_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountSelect_C", "BndEvt__MountSelect_Btn_Selected_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountSelect.MountSelect_C.BndEvt__MountSelect_Btn_Selected_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UMountSelect_C::BndEvt__MountSelect_Btn_Selected_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountSelect_C", "BndEvt__MountSelect_Btn_Selected_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountSelect.MountSelect_C.RequestClose
// (BlueprintCallable, BlueprintEvent)

void UMountSelect_C::RequestClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountSelect_C", "RequestClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountSelect.MountSelect_C.BndEvt__WeaponSelect_Btn_Selected_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMountSelect_C::BndEvt__WeaponSelect_Btn_Selected_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountSelect_C", "BndEvt__WeaponSelect_Btn_Selected_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountSelect.MountSelect_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMountSelect_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountSelect_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountSelect.MountSelect_C.BndEvt__WeaponSelect_SelectGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     SelectItem                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UMountSelect_C::BndEvt__WeaponSelect_SelectGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature(const struct FOwnItemInfo& SelectItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountSelect_C", "BndEvt__WeaponSelect_SelectGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature");

	Params::MountSelect_C_BndEvt__WeaponSelect_SelectGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature Parms{};

	Parms.SelectItem = std::move(SelectItem);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MountSelect.MountSelect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMountSelect_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountSelect_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountSelect.MountSelect_C.Unbind Close UI_Cancel
// (BlueprintCallable, BlueprintEvent)

void UMountSelect_C::Unbind_Close_UI_Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountSelect_C", "Unbind Close UI_Cancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountSelect.MountSelect_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UMountSelect_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountSelect_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountSelect.MountSelect_C.Terminate
// (Public, BlueprintCallable, BlueprintEvent)

void UMountSelect_C::Terminate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountSelect_C", "Terminate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountSelect.MountSelect_C.UpdateSelectBtn
// (Public, BlueprintCallable, BlueprintEvent)

void UMountSelect_C::UpdateSelectBtn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountSelect_C", "UpdateSelectBtn");

	UObject::ProcessEvent(Func, nullptr);
}

}

