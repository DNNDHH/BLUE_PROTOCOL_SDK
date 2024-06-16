#pragma once

 

// Package: ImagineAbilityView

#include "Basic.hpp"

#include "ImagineAbilityView_classes.hpp"
#include "ImagineAbilityView_parameters.hpp"


namespace SDK
{

// Function ImagineAbilityView.ImagineAbilityView_C.OnSelect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     Param_Target                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UImagineAbilityView_C::OnSelect__DelegateSignature(const struct FOwnItemInfo& Param_Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineAbilityView_C", "OnSelect__DelegateSignature");

	Params::ImagineAbilityView_C_OnSelect__DelegateSignature Parms{};

	Parms.Param_Target = std::move(Param_Target);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineAbilityView.ImagineAbilityView_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UImagineAbilityView_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineAbilityView_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineAbilityView.ImagineAbilityView_C.ExecuteUbergraph_ImagineAbilityView
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UImagineAbilityView_C::ExecuteUbergraph_ImagineAbilityView(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineAbilityView_C", "ExecuteUbergraph_ImagineAbilityView");

	Params::ImagineAbilityView_C_ExecuteUbergraph_ImagineAbilityView Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineAbilityView.ImagineAbilityView_C.BndEvt__ImagineAbilityView_AbilityList_K2Node_ComponentBoundEvent_3_SimpleListItemEventDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                          Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UImagineAbilityView_C::BndEvt__ImagineAbilityView_AbilityList_K2Node_ComponentBoundEvent_3_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineAbilityView_C", "BndEvt__ImagineAbilityView_AbilityList_K2Node_ComponentBoundEvent_3_SimpleListItemEventDynamic__DelegateSignature");

	Params::ImagineAbilityView_C_BndEvt__ImagineAbilityView_AbilityList_K2Node_ComponentBoundEvent_3_SimpleListItemEventDynamic__DelegateSignature Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineAbilityView.ImagineAbilityView_C.BndEvt__ImagineAbilityView_Btn_Close2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UImagineAbilityView_C::BndEvt__ImagineAbilityView_Btn_Close2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineAbilityView_C", "BndEvt__ImagineAbilityView_Btn_Close2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineAbilityView.ImagineAbilityView_C.BndEvt__ImagineAbilityView_CmnClose02_K2Node_ComponentBoundEvent_7_OnClosed__DelegateSignature
// (BlueprintEvent)

void UImagineAbilityView_C::BndEvt__ImagineAbilityView_CmnClose02_K2Node_ComponentBoundEvent_7_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineAbilityView_C", "BndEvt__ImagineAbilityView_CmnClose02_K2Node_ComponentBoundEvent_7_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineAbilityView.ImagineAbilityView_C.BndEvt__ImagineAbilityView_AbilityList_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                          Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsHovered                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UImagineAbilityView_C::BndEvt__ImagineAbilityView_AbilityList_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature(class UObject* Item, bool bIsHovered)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineAbilityView_C", "BndEvt__ImagineAbilityView_AbilityList_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature");

	Params::ImagineAbilityView_C_BndEvt__ImagineAbilityView_AbilityList_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature Parms{};

	Parms.Item = Item;
	Parms.bIsHovered = bIsHovered;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImagineAbilityView.ImagineAbilityView_C.BndEvt__ImagineAbilityView_Btn_Select_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UImagineAbilityView_C::BndEvt__ImagineAbilityView_Btn_Select_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineAbilityView_C", "BndEvt__ImagineAbilityView_Btn_Select_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineAbilityView.ImagineAbilityView_C.BndEvt__ImagineAbilityView_Btn_Select_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UImagineAbilityView_C::BndEvt__ImagineAbilityView_Btn_Select_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineAbilityView_C", "BndEvt__ImagineAbilityView_Btn_Select_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineAbilityView.ImagineAbilityView_C.Close
// (BlueprintCallable, BlueprintEvent)

void UImagineAbilityView_C::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineAbilityView_C", "Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineAbilityView.ImagineAbilityView_C.BndEvt__ImagineAbilityView_Btn_Select_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UImagineAbilityView_C::BndEvt__ImagineAbilityView_Btn_Select_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineAbilityView_C", "BndEvt__ImagineAbilityView_Btn_Select_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineAbilityView.ImagineAbilityView_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UImagineAbilityView_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineAbilityView_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImagineAbilityView.ImagineAbilityView_C.GenerateList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UImagineAbilityView_C::GenerateList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImagineAbilityView_C", "GenerateList");

	UObject::ProcessEvent(Func, nullptr);
}

}

