#pragma once

 

// Package: LibraryMenu_MonsterAreaListItem

#include "Basic.hpp"

#include "LibraryMenu_MonsterAreaListItem_classes.hpp"
#include "LibraryMenu_MonsterAreaListItem_parameters.hpp"


namespace SDK
{

// Function LibraryMenu_MonsterAreaListItem.LibraryMenu_MonsterAreaListItem_C.OnSelect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_MonsterAreaListItem_C::OnSelect__DelegateSignature(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_MonsterAreaListItem_C", "OnSelect__DelegateSignature");

	Params::LibraryMenu_MonsterAreaListItem_C_OnSelect__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_MonsterAreaListItem.LibraryMenu_MonsterAreaListItem_C.ExecuteUbergraph_LibraryMenu_MonsterAreaListItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_MonsterAreaListItem_C::ExecuteUbergraph_LibraryMenu_MonsterAreaListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_MonsterAreaListItem_C", "ExecuteUbergraph_LibraryMenu_MonsterAreaListItem");

	Params::LibraryMenu_MonsterAreaListItem_C_ExecuteUbergraph_LibraryMenu_MonsterAreaListItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_MonsterAreaListItem.LibraryMenu_MonsterAreaListItem_C.BndEvt__LibraryMenu_MonsterAreaListItem_SBButton_C_402_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_MonsterAreaListItem_C::BndEvt__LibraryMenu_MonsterAreaListItem_SBButton_C_402_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_MonsterAreaListItem_C", "BndEvt__LibraryMenu_MonsterAreaListItem_SBButton_C_402_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_MonsterAreaListItem.LibraryMenu_MonsterAreaListItem_C.BndEvt__LibraryMenu_MonsterAreaListItem_SBButton_C_402_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_MonsterAreaListItem_C::BndEvt__LibraryMenu_MonsterAreaListItem_SBButton_C_402_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_MonsterAreaListItem_C", "BndEvt__LibraryMenu_MonsterAreaListItem_SBButton_C_402_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_MonsterAreaListItem.LibraryMenu_MonsterAreaListItem_C.BndEvt__LibraryMenu_MonsterAreaListItem_SBButton_C_402_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_MonsterAreaListItem_C::BndEvt__LibraryMenu_MonsterAreaListItem_SBButton_C_402_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_MonsterAreaListItem_C", "BndEvt__LibraryMenu_MonsterAreaListItem_SBButton_C_402_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_MonsterAreaListItem.LibraryMenu_MonsterAreaListItem_C.SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           AreaNameText                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ULibraryMenu_MonsterAreaListItem_C::SetText(const class FString& AreaNameText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_MonsterAreaListItem_C", "SetText");

	Params::LibraryMenu_MonsterAreaListItem_C_SetText Parms{};

	Parms.AreaNameText = std::move(AreaNameText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_MonsterAreaListItem.LibraryMenu_MonsterAreaListItem_C.SetNewIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_MonsterAreaListItem_C::SetNewIcon(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_MonsterAreaListItem_C", "SetNewIcon");

	Params::LibraryMenu_MonsterAreaListItem_C_SetNewIcon Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_MonsterAreaListItem.LibraryMenu_MonsterAreaListItem_C.SetTimeIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_MonsterAreaListItem_C::SetTimeIcon(int32 Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_MonsterAreaListItem_C", "SetTimeIcon");

	Params::LibraryMenu_MonsterAreaListItem_C_SetTimeIcon Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_MonsterAreaListItem.LibraryMenu_MonsterAreaListItem_C.SetSelectColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Selected                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_MonsterAreaListItem_C::SetSelectColor(bool Selected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_MonsterAreaListItem_C", "SetSelectColor");

	Params::LibraryMenu_MonsterAreaListItem_C_SetSelectColor Parms{};

	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);
}

}

