#pragma once

 

// Package: ImagineInheritSelect

#include "Basic.hpp"

#include "ImagineInheritSelect_classes.hpp"
#include "ImagineInheritSelect_parameters.hpp"


namespace SDK
{

// Function ImagineInheritSelect.ImagineInheritSelect_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UImagineInheritSelect_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineInheritSelect_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineInheritSelect.ImagineInheritSelect_C.OnSelectPerk__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     SelectedPerk                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UImagineInheritSelect_C::OnSelectPerk__DelegateSignature(const struct FOwnItemInfo& SelectedPerk)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineInheritSelect_C", "OnSelectPerk__DelegateSignature");

	Params::ImagineInheritSelect_C_OnSelectPerk__DelegateSignature Parms{};

	Parms.SelectedPerk = std::move(SelectedPerk);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineInheritSelect.ImagineInheritSelect_C.ExecuteUbergraph_ImagineInheritSelect
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UImagineInheritSelect_C::ExecuteUbergraph_ImagineInheritSelect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineInheritSelect_C", "ExecuteUbergraph_ImagineInheritSelect");

	Params::ImagineInheritSelect_C_ExecuteUbergraph_ImagineInheritSelect Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineInheritSelect.ImagineInheritSelect_C.BndEvt__ImagineInheritSelect_CmnClose03_K2Node_ComponentBoundEvent_8_OnClosed__DelegateSignature
// (BlueprintEvent)

void UImagineInheritSelect_C::BndEvt__ImagineInheritSelect_CmnClose03_K2Node_ComponentBoundEvent_8_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineInheritSelect_C", "BndEvt__ImagineInheritSelect_CmnClose03_K2Node_ComponentBoundEvent_8_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineInheritSelect.ImagineInheritSelect_C.WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)

void UImagineInheritSelect_C::WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineInheritSelect_C", "WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineInheritSelect.ImagineInheritSelect_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UImagineInheritSelect_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineInheritSelect_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineInheritSelect.ImagineInheritSelect_C.RequestClose
// (BlueprintCallable, BlueprintEvent)

void UImagineInheritSelect_C::RequestClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineInheritSelect_C", "RequestClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineInheritSelect.ImagineInheritSelect_C.OnDialogClosed
// (BlueprintCallable, BlueprintEvent)

void UImagineInheritSelect_C::OnDialogClosed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineInheritSelect_C", "OnDialogClosed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineInheritSelect.ImagineInheritSelect_C.BndEvt__ImagineInheritSelect_Btn_Rest_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UImagineInheritSelect_C::BndEvt__ImagineInheritSelect_Btn_Rest_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineInheritSelect_C", "BndEvt__ImagineInheritSelect_Btn_Rest_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineInheritSelect.ImagineInheritSelect_C.BndEvt__ImagineInheritSelect_Btn_Rest_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UImagineInheritSelect_C::BndEvt__ImagineInheritSelect_Btn_Rest_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineInheritSelect_C", "BndEvt__ImagineInheritSelect_Btn_Rest_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineInheritSelect.ImagineInheritSelect_C.BndEvt__ImagineInheritSelect_Btn_Rest_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UImagineInheritSelect_C::BndEvt__ImagineInheritSelect_Btn_Rest_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineInheritSelect_C", "BndEvt__ImagineInheritSelect_Btn_Rest_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineInheritSelect.ImagineInheritSelect_C.BndEvt__ImagineInheritSelect_Btn_Select_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UImagineInheritSelect_C::BndEvt__ImagineInheritSelect_Btn_Select_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineInheritSelect_C", "BndEvt__ImagineInheritSelect_Btn_Select_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineInheritSelect.ImagineInheritSelect_C.BndEvt__ImagineInheritSelect_Btn_Select_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UImagineInheritSelect_C::BndEvt__ImagineInheritSelect_Btn_Select_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineInheritSelect_C", "BndEvt__ImagineInheritSelect_Btn_Select_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineInheritSelect.ImagineInheritSelect_C.BndEvt__ImagineInheritSelect_CmnBtn16_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UImagineInheritSelect_C::BndEvt__ImagineInheritSelect_CmnBtn16_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineInheritSelect_C", "BndEvt__ImagineInheritSelect_CmnBtn16_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineInheritSelect.ImagineInheritSelect_C.OnSelect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     Param_Target                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UImagineInheritSelect_C::OnSelect(const struct FOwnItemInfo& Param_Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineInheritSelect_C", "OnSelect");

	Params::ImagineInheritSelect_C_OnSelect Parms{};

	Parms.Param_Target = std::move(Param_Target);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineInheritSelect.ImagineInheritSelect_C.BndEvt__ImagineInheritSelect_Btn_Select_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UImagineInheritSelect_C::BndEvt__ImagineInheritSelect_Btn_Select_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineInheritSelect_C", "BndEvt__ImagineInheritSelect_Btn_Select_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineInheritSelect.ImagineInheritSelect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UImagineInheritSelect_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineInheritSelect_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineInheritSelect.ImagineInheritSelect_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UImagineInheritSelect_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineInheritSelect_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineInheritSelect.ImagineInheritSelect_C.CloseDialog
// (Public, BlueprintCallable, BlueprintEvent)

void UImagineInheritSelect_C::CloseDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineInheritSelect_C", "CloseDialog");

	UObject::ProcessEvent(Func, nullptr);
}

}

