#pragma once

 

// Package: FixedPhrase_Menu

#include "Basic.hpp"

#include "FixedPhrase_Menu_classes.hpp"
#include "FixedPhrase_Menu_parameters.hpp"


namespace SDK
{

// Function FixedPhrase_Menu.FixedPhrase_Menu_C.ExecuteUbergraph_FixedPhrase_Menu
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFixedPhrase_Menu_C::ExecuteUbergraph_FixedPhrase_Menu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FixedPhrase_Menu_C", "ExecuteUbergraph_FixedPhrase_Menu");

	Params::FixedPhrase_Menu_C_ExecuteUbergraph_FixedPhrase_Menu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FixedPhrase_Menu.FixedPhrase_Menu_C.BndEvt__Btn3_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UFixedPhrase_Menu_C::BndEvt__Btn3_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FixedPhrase_Menu_C", "BndEvt__Btn3_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FixedPhrase_Menu.FixedPhrase_Menu_C.BndEvt__Btn2_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UFixedPhrase_Menu_C::BndEvt__Btn2_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FixedPhrase_Menu_C", "BndEvt__Btn2_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FixedPhrase_Menu.FixedPhrase_Menu_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UFixedPhrase_Menu_C::BndEvt__Btn1_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FixedPhrase_Menu_C", "BndEvt__Btn1_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FixedPhrase_Menu.FixedPhrase_Menu_C.BndEvt__Btn0_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UFixedPhrase_Menu_C::BndEvt__Btn0_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FixedPhrase_Menu_C", "BndEvt__Btn0_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FixedPhrase_Menu.FixedPhrase_Menu_C.OnClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFixedPhrase_Item_C*              InItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFixedPhrase_Menu_C::OnClick(int32 InIndex, class UFixedPhrase_Item_C* InItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FixedPhrase_Menu_C", "OnClick");

	Params::FixedPhrase_Menu_C_OnClick Parms{};

	Parms.InIndex = InIndex;
	Parms.InItem = InItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FixedPhrase_Menu.FixedPhrase_Menu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFixedPhrase_Menu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FixedPhrase_Menu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FixedPhrase_Menu.FixedPhrase_Menu_C.CreateFixedPhrase
// (Public, BlueprintCallable, BlueprintEvent)

void UFixedPhrase_Menu_C::CreateFixedPhrase()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FixedPhrase_Menu_C", "CreateFixedPhrase");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FixedPhrase_Menu.FixedPhrase_Menu_C.SetDragable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InDragable                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFixedPhrase_Menu_C::SetDragable(bool InDragable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FixedPhrase_Menu_C", "SetDragable");

	Params::FixedPhrase_Menu_C_SetDragable Parms{};

	Parms.InDragable = InDragable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FixedPhrase_Menu.FixedPhrase_Menu_C.SelectFixedPhrase
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InFixedPhraseId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFixedPhrase_Item_C*              InFixedPhraseItem                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFixedPhrase_Menu_C::SelectFixedPhrase(int32 InFixedPhraseId, class UFixedPhrase_Item_C* InFixedPhraseItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FixedPhrase_Menu_C", "SelectFixedPhrase");

	Params::FixedPhrase_Menu_C_SelectFixedPhrase Parms{};

	Parms.InFixedPhraseId = InFixedPhraseId;
	Parms.InFixedPhraseItem = InFixedPhraseItem;

	UObject::ProcessEvent(Func, &Parms);
}

}

