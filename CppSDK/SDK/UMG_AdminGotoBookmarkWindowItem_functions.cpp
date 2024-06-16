#pragma once

 

// Package: UMG_AdminGotoBookmarkWindowItem

#include "Basic.hpp"

#include "UMG_AdminGotoBookmarkWindowItem_classes.hpp"
#include "UMG_AdminGotoBookmarkWindowItem_parameters.hpp"


namespace SDK
{

// Function UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C.OnClickedMoveButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBAdminGotoBookmarkItem*         Param_Data                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_AdminGotoBookmarkWindowItem_C::OnClickedMoveButton__DelegateSignature(class USBAdminGotoBookmarkItem* Param_Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdminGotoBookmarkWindowItem_C", "OnClickedMoveButton__DelegateSignature");

	Params::UMG_AdminGotoBookmarkWindowItem_C_OnClickedMoveButton__DelegateSignature Parms{};

	Parms.Param_Data = Param_Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C.ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_AdminGotoBookmarkWindowItem_C::ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdminGotoBookmarkWindowItem_C", "ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem");

	Params::UMG_AdminGotoBookmarkWindowItem_C_ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C.SetIdWarpMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bFlag                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_AdminGotoBookmarkWindowItem_C::SetIdWarpMode(bool bFlag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdminGotoBookmarkWindowItem_C", "SetIdWarpMode");

	Params::UMG_AdminGotoBookmarkWindowItem_C_SetIdWarpMode Parms{};

	Parms.bFlag = bFlag;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C.BndEvt__Button_Move_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_AdminGotoBookmarkWindowItem_C::BndEvt__Button_Move_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdminGotoBookmarkWindowItem_C", "BndEvt__Button_Move_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C.ApplyData
// (BlueprintCallable, BlueprintEvent)

void UUMG_AdminGotoBookmarkWindowItem_C::ApplyData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdminGotoBookmarkWindowItem_C", "ApplyData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C.OnUpdateData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBAdminGotoBookmarkItem*         Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_AdminGotoBookmarkWindowItem_C::OnUpdateData(class USBAdminGotoBookmarkItem* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdminGotoBookmarkWindowItem_C", "OnUpdateData");

	Params::UMG_AdminGotoBookmarkWindowItem_C_OnUpdateData Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C.BndEvt__EditableText_Description_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ETextCommit                             CommitMethod                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_AdminGotoBookmarkWindowItem_C::BndEvt__EditableText_Description_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdminGotoBookmarkWindowItem_C", "BndEvt__EditableText_Description_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature");

	Params::UMG_AdminGotoBookmarkWindowItem_C_BndEvt__EditableText_Description_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                          ListItemObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_AdminGotoBookmarkWindowItem_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdminGotoBookmarkWindowItem_C", "OnListItemObjectSet");

	Params::UMG_AdminGotoBookmarkWindowItem_C_OnListItemObjectSet Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsSelected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_AdminGotoBookmarkWindowItem_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdminGotoBookmarkWindowItem_C", "BP_OnItemSelectionChanged");

	Params::UMG_AdminGotoBookmarkWindowItem_C_BP_OnItemSelectionChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsExpanded                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_AdminGotoBookmarkWindowItem_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdminGotoBookmarkWindowItem_C", "BP_OnItemExpansionChanged");

	Params::UMG_AdminGotoBookmarkWindowItem_C_BP_OnItemExpansionChanged Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)

void UUMG_AdminGotoBookmarkWindowItem_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_AdminGotoBookmarkWindowItem_C", "BP_OnEntryReleased");

	UObject::ProcessEvent(Func, nullptr);
}

}

