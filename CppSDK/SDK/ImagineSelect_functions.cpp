#pragma once

 

// Package: ImagineSelect

#include "Basic.hpp"

#include "ImagineSelect_classes.hpp"
#include "ImagineSelect_parameters.hpp"


namespace SDK
{

// Function ImagineSelect.ImagineSelect_C.ImagineSelectApply__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     ItemInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UImagineSelect_C::ImagineSelectApply__DelegateSignature(const struct FOwnItemInfo& ItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineSelect_C", "ImagineSelectApply__DelegateSignature");

	Params::ImagineSelect_C_ImagineSelectApply__DelegateSignature Parms{};

	Parms.ItemInfo = std::move(ItemInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineSelect.ImagineSelect_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UImagineSelect_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineSelect_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineSelect.ImagineSelect_C.ExecuteUbergraph_ImagineSelect
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UImagineSelect_C::ExecuteUbergraph_ImagineSelect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineSelect_C", "ExecuteUbergraph_ImagineSelect");

	Params::ImagineSelect_C_ExecuteUbergraph_ImagineSelect Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineSelect.ImagineSelect_C.BndEvt__ImagineSelect_CmnClose03_K2Node_ComponentBoundEvent_5_OnClosed__DelegateSignature
// (BlueprintEvent)

void UImagineSelect_C::BndEvt__ImagineSelect_CmnClose03_K2Node_ComponentBoundEvent_5_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineSelect_C", "BndEvt__ImagineSelect_CmnClose03_K2Node_ComponentBoundEvent_5_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineSelect.ImagineSelect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UImagineSelect_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineSelect_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineSelect.ImagineSelect_C.BndEvt__WeaponSelect_SelectGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     SelectItem                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UImagineSelect_C::BndEvt__WeaponSelect_SelectGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature(const struct FOwnItemInfo& SelectItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineSelect_C", "BndEvt__WeaponSelect_SelectGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature");

	Params::ImagineSelect_C_BndEvt__WeaponSelect_SelectGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature Parms{};

	Parms.SelectItem = std::move(SelectItem);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineSelect.ImagineSelect_C.End
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UImagineSelect_C::End(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineSelect_C", "End");

	Params::ImagineSelect_C_End Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineSelect.ImagineSelect_C.WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)

void UImagineSelect_C::WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineSelect_C", "WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineSelect.ImagineSelect_C.BndEvt__ImagineSelect_Btn_Selected_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UImagineSelect_C::BndEvt__ImagineSelect_Btn_Selected_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineSelect_C", "BndEvt__ImagineSelect_Btn_Selected_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineSelect.ImagineSelect_C.BndEvt__ImagineSelect_Btn_Selected_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UImagineSelect_C::BndEvt__ImagineSelect_Btn_Selected_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineSelect_C", "BndEvt__ImagineSelect_Btn_Selected_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineSelect.ImagineSelect_C.RequestClose
// (BlueprintCallable, BlueprintEvent)

void UImagineSelect_C::RequestClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineSelect_C", "RequestClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineSelect.ImagineSelect_C.BndEvt__WeaponSelect_Btn_Selected_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UImagineSelect_C::BndEvt__WeaponSelect_Btn_Selected_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineSelect_C", "BndEvt__WeaponSelect_Btn_Selected_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineSelect.ImagineSelect_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UImagineSelect_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineSelect_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineSelect.ImagineSelect_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UImagineSelect_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineSelect_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineSelect.ImagineSelect_C.Terminate
// (Public, BlueprintCallable, BlueprintEvent)

void UImagineSelect_C::Terminate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineSelect_C", "Terminate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineSelect.ImagineSelect_C.ApplyImagineType
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     ItemData                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UImagineSelect_C::ApplyImagineType(const struct FOwnItemInfo& ItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineSelect_C", "ApplyImagineType");

	Params::ImagineSelect_C_ApplyImagineType Parms{};

	Parms.ItemData = std::move(ItemData);

	UObject::ProcessEvent(Func, &Parms);
}

}

