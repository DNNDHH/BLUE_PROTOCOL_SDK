#pragma once

 

// Package: FixedPhrase_Item

#include "Basic.hpp"

#include "FixedPhrase_Item_classes.hpp"
#include "FixedPhrase_Item_parameters.hpp"


namespace SDK
{

// Function FixedPhrase_Item.FixedPhrase_Item_C.OnSelect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetFixedPhraseIndex                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFixedPhrase_Item_C*              InSelectedItem                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFixedPhrase_Item_C::OnSelect__DelegateSignature(int32 RetFixedPhraseIndex, class UFixedPhrase_Item_C* InSelectedItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FixedPhrase_Item_C", "OnSelect__DelegateSignature");

	Params::FixedPhrase_Item_C_OnSelect__DelegateSignature Parms{};

	Parms.RetFixedPhraseIndex = RetFixedPhraseIndex;
	Parms.InSelectedItem = InSelectedItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FixedPhrase_Item.FixedPhrase_Item_C.OnSelectRight__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetFixedPhraseIndex                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFixedPhrase_Item_C*              InSelectedItem                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFixedPhrase_Item_C::OnSelectRight__DelegateSignature(int32 RetFixedPhraseIndex, class UFixedPhrase_Item_C* InSelectedItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FixedPhrase_Item_C", "OnSelectRight__DelegateSignature");

	Params::FixedPhrase_Item_C_OnSelectRight__DelegateSignature Parms{};

	Parms.RetFixedPhraseIndex = RetFixedPhraseIndex;
	Parms.InSelectedItem = InSelectedItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FixedPhrase_Item.FixedPhrase_Item_C.ExecuteUbergraph_FixedPhrase_Item
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFixedPhrase_Item_C::ExecuteUbergraph_FixedPhrase_Item(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FixedPhrase_Item_C", "ExecuteUbergraph_FixedPhrase_Item");

	Params::FixedPhrase_Item_C_ExecuteUbergraph_FixedPhrase_Item Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FixedPhrase_Item.FixedPhrase_Item_C.BndEvt__CmnBtn24_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UFixedPhrase_Item_C::BndEvt__CmnBtn24_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FixedPhrase_Item_C", "BndEvt__CmnBtn24_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FixedPhrase_Item.FixedPhrase_Item_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFixedPhrase_Item_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FixedPhrase_Item_C", "PreConstruct");

	Params::FixedPhrase_Item_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FixedPhrase_Item.FixedPhrase_Item_C.IsSelected
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bSelected                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFixedPhrase_Item_C::IsSelected(bool* Param_bSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FixedPhrase_Item_C", "IsSelected");

	Params::FixedPhrase_Item_C_IsSelected Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_bSelected != nullptr)
		*Param_bSelected = Parms.Param_bSelected;
}


// Function FixedPhrase_Item.FixedPhrase_Item_C.OnPreviewMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UFixedPhrase_Item_C::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FixedPhrase_Item_C", "OnPreviewMouseButtonDown");

	Params::FixedPhrase_Item_C_OnPreviewMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FixedPhrase_Item.FixedPhrase_Item_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    PointerEvent                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*               Operation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFixedPhrase_Item_C::OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FixedPhrase_Item_C", "OnDragDetected");

	Params::FixedPhrase_Item_C_OnDragDetected Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.PointerEvent = std::move(PointerEvent);

	UObject::ProcessEvent(Func, &Parms);

	if (Operation != nullptr)
		*Operation = Parms.Operation;
}


// Function FixedPhrase_Item.FixedPhrase_Item_C.SetDragable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InDragable                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFixedPhrase_Item_C::SetDragable(bool InDragable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FixedPhrase_Item_C", "SetDragable");

	Params::FixedPhrase_Item_C_SetDragable Parms{};

	Parms.InDragable = InDragable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FixedPhrase_Item.FixedPhrase_Item_C.GetFixedPhrase
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           FixedPhrase                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UFixedPhrase_Item_C::GetFixedPhrase(class FString* FixedPhrase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FixedPhrase_Item_C", "GetFixedPhrase");

	Params::FixedPhrase_Item_C_GetFixedPhrase Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (FixedPhrase != nullptr)
		*FixedPhrase = std::move(Parms.FixedPhrase);
}


// Function FixedPhrase_Item.FixedPhrase_Item_C.GetShortcutItemInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FShortcutItemInfo                OutShortcutItemInfo                                    (Parm, OutParm)

void UFixedPhrase_Item_C::GetShortcutItemInfo(struct FShortcutItemInfo* OutShortcutItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FixedPhrase_Item_C", "GetShortcutItemInfo");

	Params::FixedPhrase_Item_C_GetShortcutItemInfo Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutShortcutItemInfo != nullptr)
		*OutShortcutItemInfo = std::move(Parms.OutShortcutItemInfo);
}

}

