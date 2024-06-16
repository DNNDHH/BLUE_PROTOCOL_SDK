#pragma once

 

// Package: SpecialViewSelect

#include "Basic.hpp"

#include "SpecialViewSelect_classes.hpp"
#include "SpecialViewSelect_parameters.hpp"


namespace SDK
{

// Function SpecialViewSelect.SpecialViewSelect_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USpecialViewSelect_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialViewSelect_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SpecialViewSelect.SpecialViewSelect_C.OnSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     OnSelect                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void USpecialViewSelect_C::OnSelected__DelegateSignature(const struct FOwnItemInfo& OnSelect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialViewSelect_C", "OnSelected__DelegateSignature");

	Params::SpecialViewSelect_C_OnSelected__DelegateSignature Parms{};

	Parms.OnSelect = std::move(OnSelect);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SpecialViewSelect.SpecialViewSelect_C.ExecuteUbergraph_SpecialViewSelect
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpecialViewSelect_C::ExecuteUbergraph_SpecialViewSelect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialViewSelect_C", "ExecuteUbergraph_SpecialViewSelect");

	Params::SpecialViewSelect_C_ExecuteUbergraph_SpecialViewSelect Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SpecialViewSelect.SpecialViewSelect_C.BndEvt__SpecialViewSelect_ItemList_K2Node_ComponentBoundEvent_7_SimpleListItemEventDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                          Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpecialViewSelect_C::BndEvt__SpecialViewSelect_ItemList_K2Node_ComponentBoundEvent_7_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialViewSelect_C", "BndEvt__SpecialViewSelect_ItemList_K2Node_ComponentBoundEvent_7_SimpleListItemEventDynamic__DelegateSignature");

	Params::SpecialViewSelect_C_BndEvt__SpecialViewSelect_ItemList_K2Node_ComponentBoundEvent_7_SimpleListItemEventDynamic__DelegateSignature Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SpecialViewSelect.SpecialViewSelect_C.BndEvt__SpecialViewSelect_BtnClose_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void USpecialViewSelect_C::BndEvt__SpecialViewSelect_BtnClose_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialViewSelect_C", "BndEvt__SpecialViewSelect_BtnClose_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SpecialViewSelect.SpecialViewSelect_C.BndEvt__SpecialViewSelect_Btn_Decide_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void USpecialViewSelect_C::BndEvt__SpecialViewSelect_Btn_Decide_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialViewSelect_C", "BndEvt__SpecialViewSelect_Btn_Decide_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SpecialViewSelect.SpecialViewSelect_C.BndEvt__SpecialViewSelect_Btn_Decide_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void USpecialViewSelect_C::BndEvt__SpecialViewSelect_Btn_Decide_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialViewSelect_C", "BndEvt__SpecialViewSelect_Btn_Decide_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SpecialViewSelect.SpecialViewSelect_C.BndEvt__SpecialViewSelect_Btn_Cansel_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void USpecialViewSelect_C::BndEvt__SpecialViewSelect_Btn_Cansel_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialViewSelect_C", "BndEvt__SpecialViewSelect_Btn_Cansel_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SpecialViewSelect.SpecialViewSelect_C.BndEvt__SpecialViewSelect_Btn_Cansel_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void USpecialViewSelect_C::BndEvt__SpecialViewSelect_Btn_Cansel_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialViewSelect_C", "BndEvt__SpecialViewSelect_Btn_Cansel_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SpecialViewSelect.SpecialViewSelect_C.BndEvt__SpecialViewSelect_Btn_Decide_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void USpecialViewSelect_C::BndEvt__SpecialViewSelect_Btn_Decide_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialViewSelect_C", "BndEvt__SpecialViewSelect_Btn_Decide_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SpecialViewSelect.SpecialViewSelect_C.BndEvt__SpecialViewSelect_Btn_Cansel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void USpecialViewSelect_C::BndEvt__SpecialViewSelect_Btn_Cansel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialViewSelect_C", "BndEvt__SpecialViewSelect_Btn_Cansel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SpecialViewSelect.SpecialViewSelect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USpecialViewSelect_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialViewSelect_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SpecialViewSelect.SpecialViewSelect_C.InitializeList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USpecialViewSelect_C::InitializeList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpecialViewSelect_C", "InitializeList");

	UObject::ProcessEvent(Func, nullptr);
}

}

