#pragma once

 

// Package: ItemIconBtn

#include "Basic.hpp"

#include "ItemIconBtn_classes.hpp"
#include "ItemIconBtn_parameters.hpp"


namespace SDK
{

// Function ItemIconBtn.ItemIconBtn_C.OnSelect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemIconBtn_C*                   SelectItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemIconBtn_C::OnSelect__DelegateSignature(class UItemIconBtn_C* SelectItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "OnSelect__DelegateSignature");

	Params::ItemIconBtn_C_OnSelect__DelegateSignature Parms{};

	Parms.SelectItem = SelectItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.OnSelectRight__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemIconBtn_C*                   SelectItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemIconBtn_C::OnSelectRight__DelegateSignature(class UItemIconBtn_C* SelectItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "OnSelectRight__DelegateSignature");

	Params::ItemIconBtn_C_OnSelectRight__DelegateSignature Parms{};

	Parms.SelectItem = SelectItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.OnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemIconBtn_C*                   SelectItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemIconBtn_C::OnPressed__DelegateSignature(class UItemIconBtn_C* SelectItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "OnPressed__DelegateSignature");

	Params::ItemIconBtn_C_OnPressed__DelegateSignature Parms{};

	Parms.SelectItem = SelectItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.ExecuteUbergraph_ItemIconBtn
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemIconBtn_C::ExecuteUbergraph_ItemIconBtn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "ExecuteUbergraph_ItemIconBtn");

	Params::ItemIconBtn_C_ExecuteUbergraph_ItemIconBtn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.BndEvt__ItemIconBtn_CommonIcon_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonIcon_C*                    Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemIconBtn_C::BndEvt__ItemIconBtn_CommonIcon_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature(class UCommonIcon_C* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "BndEvt__ItemIconBtn_CommonIcon_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature");

	Params::ItemIconBtn_C_BndEvt__ItemIconBtn_CommonIcon_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.BndEvt__ItemIconBtn_CommonIcon_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonIcon_C*                    Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemIconBtn_C::BndEvt__ItemIconBtn_CommonIcon_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(class UCommonIcon_C* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "BndEvt__ItemIconBtn_CommonIcon_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");

	Params::ItemIconBtn_C_BndEvt__ItemIconBtn_CommonIcon_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                          ListItemObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemIconBtn_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "OnListItemObjectSet");

	Params::ItemIconBtn_C_OnListItemObjectSet Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsSelected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemIconBtn_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "BP_OnItemSelectionChanged");

	Params::ItemIconBtn_C_BP_OnItemSelectionChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsExpanded                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemIconBtn_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "BP_OnItemExpansionChanged");

	Params::ItemIconBtn_C_BP_OnItemExpansionChanged Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)

void UItemIconBtn_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "BP_OnEntryReleased");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemIconBtn.ItemIconBtn_C.SetItem_InventoryData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItemData               InItemData                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    InUseDetailsTooltip                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    HiddenLockIcon                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    HiddenAmout                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsUnidentified                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bLimitedTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Param_Stack_BEffective_Display                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemIconBtn_C::SetItem_InventoryData(const struct FInventoryItemData& InItemData, bool InUseDetailsTooltip, bool HiddenLockIcon, bool HiddenAmout, bool IsUnidentified, bool bLimitedTime, bool Param_Stack_BEffective_Display)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "SetItem_InventoryData");

	Params::ItemIconBtn_C_SetItem_InventoryData Parms{};

	Parms.InItemData = std::move(InItemData);
	Parms.InUseDetailsTooltip = InUseDetailsTooltip;
	Parms.HiddenLockIcon = HiddenLockIcon;
	Parms.HiddenAmout = HiddenAmout;
	Parms.IsUnidentified = IsUnidentified;
	Parms.bLimitedTime = bLimitedTime;
	Parms.Param_Stack_BEffective_Display = Param_Stack_BEffective_Display;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.SetItem_Index
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InItemIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InItemAmount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bLimitedTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemIconBtn_C::SetItem_Index(int32 InItemIndex, int32 InItemAmount, bool bLimitedTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "SetItem_Index");

	Params::ItemIconBtn_C_SetItem_Index Parms{};

	Parms.InItemIndex = InItemIndex;
	Parms.InItemAmount = InItemAmount;
	Parms.bLimitedTime = bLimitedTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.SetImagine_Index
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InImagineItemId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemIconBtn_C::SetImagine_Index(int32 InImagineItemId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "SetImagine_Index");

	Params::ItemIconBtn_C_SetImagine_Index Parms{};

	Parms.InImagineItemId = InImagineItemId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.SetMountImagine
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItemData               Param_InventoryItemData                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UItemIconBtn_C::SetMountImagine(const struct FInventoryItemData& Param_InventoryItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "SetMountImagine");

	Params::ItemIconBtn_C_SetMountImagine Parms{};

	Parms.Param_InventoryItemData = std::move(Param_InventoryItemData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.SetWeapon_Index
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InItemIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemIconBtn_C::SetWeapon_Index(int32 InItemIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "SetWeapon_Index");

	Params::ItemIconBtn_C_SetWeapon_Index Parms{};

	Parms.InItemIndex = InItemIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.SetEmpty
// (Public, BlueprintCallable, BlueprintEvent)

void UItemIconBtn_C::SetEmpty()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "SetEmpty");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemIconBtn.ItemIconBtn_C.ResetEmpty
// (Public, BlueprintCallable, BlueprintEvent)

void UItemIconBtn_C::ResetEmpty()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "ResetEmpty");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemIconBtn.ItemIconBtn_C.IsIconEmpty
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Param_Empty                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemIconBtn_C::IsIconEmpty(bool* Param_Empty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "IsIconEmpty");

	Params::ItemIconBtn_C_IsIconEmpty Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Empty != nullptr)
		*Param_Empty = Parms.Param_Empty;
}


// Function ItemIconBtn.ItemIconBtn_C.SetIconSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSelected                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemIconBtn_C::SetIconSelected(bool IsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "SetIconSelected");

	Params::ItemIconBtn_C_SetIconSelected Parms{};

	Parms.IsSelected = IsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.SetDetach
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsDetach                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemIconBtn_C::SetDetach(bool Param_IsDetach)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "SetDetach");

	Params::ItemIconBtn_C_SetDetach Parms{};

	Parms.Param_IsDetach = Param_IsDetach;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.SetIconBlank
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsBlank                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemIconBtn_C::SetIconBlank(bool IsBlank)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "SetIconBlank");

	Params::ItemIconBtn_C_SetIconBlank Parms{};

	Parms.IsBlank = IsBlank;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.Set Enable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bIsEnabled                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemIconBtn_C::Set_Enable(bool Param_bIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "Set Enable");

	Params::ItemIconBtn_C_Set_Enable Parms{};

	Parms.Param_bIsEnabled = Param_bIsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.SetTooltipEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bEnable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemIconBtn_C::SetTooltipEnable(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "SetTooltipEnable");

	Params::ItemIconBtn_C_SetTooltipEnable Parms{};

	Parms.bEnable = bEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.SetIsButtonActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsActive                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemIconBtn_C::SetIsButtonActive(bool IsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "SetIsButtonActive");

	Params::ItemIconBtn_C_SetIsButtonActive Parms{};

	Parms.IsActive = IsActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.SetPressedSoundId
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESystemSE                               InSoundId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemIconBtn_C::SetPressedSoundId(ESystemSE InSoundId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "SetPressedSoundId");

	Params::ItemIconBtn_C_SetPressedSoundId Parms{};

	Parms.InSoundId = InSoundId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.SetHoveredSoundId
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESystemSE                               InSoundId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemIconBtn_C::SetHoveredSoundId(ESystemSE InSoundId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "SetHoveredSoundId");

	Params::ItemIconBtn_C_SetHoveredSoundId Parms{};

	Parms.InSoundId = InSoundId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.SetHoveredColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemIconBtn_C::SetHoveredColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "SetHoveredColor");

	Params::ItemIconBtn_C_SetHoveredColor Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    PointerEvent                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*               Operation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemIconBtn_C::OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "OnDragDetected");

	Params::ItemIconBtn_C_OnDragDetected Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.PointerEvent = std::move(PointerEvent);

	UObject::ProcessEvent(Func, &Parms);

	if (Operation != nullptr)
		*Operation = Parms.Operation;
}


// Function ItemIconBtn.ItemIconBtn_C.OnPreviewMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UItemIconBtn_C::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "OnPreviewMouseButtonDown");

	Params::ItemIconBtn_C_OnPreviewMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ItemIconBtn.ItemIconBtn_C.SetDragable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InDragable                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemIconBtn_C::SetDragable(bool InDragable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "SetDragable");

	Params::ItemIconBtn_C_SetDragable Parms{};

	Parms.InDragable = InDragable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.SetEquipIconVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemIconBtn_C::SetEquipIconVisibility(bool InVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "SetEquipIconVisibility");

	Params::ItemIconBtn_C_SetEquipIconVisibility Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.GetEquipIconVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OutIsEquipIconVisible                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemIconBtn_C::GetEquipIconVisibility(bool* OutIsEquipIconVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "GetEquipIconVisibility");

	Params::ItemIconBtn_C_GetEquipIconVisibility Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsEquipIconVisible != nullptr)
		*OutIsEquipIconVisible = Parms.OutIsEquipIconVisible;
}


// Function ItemIconBtn.ItemIconBtn_C.SetRarity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRarity                               InRarity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemIconBtn_C::SetRarity(ESBRarity InRarity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "SetRarity");

	Params::ItemIconBtn_C_SetRarity Parms{};

	Parms.InRarity = InRarity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.SetImagineSimpleTooltip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsImagineSimpleTooltip                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemIconBtn_C::SetImagineSimpleTooltip(bool IsImagineSimpleTooltip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "SetImagineSimpleTooltip");

	Params::ItemIconBtn_C_SetImagineSimpleTooltip Parms{};

	Parms.IsImagineSimpleTooltip = IsImagineSimpleTooltip;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.SetRightClickAccept
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bIsRightClickAccept                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemIconBtn_C::SetRightClickAccept(bool Param_bIsRightClickAccept)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "SetRightClickAccept");

	Params::ItemIconBtn_C_SetRightClickAccept Parms{};

	Parms.Param_bIsRightClickAccept = Param_bIsRightClickAccept;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.AnimInOutPlay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInAnim                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemIconBtn_C::AnimInOutPlay(bool bInAnim)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "AnimInOutPlay");

	Params::ItemIconBtn_C_AnimInOutPlay Parms{};

	Parms.bInAnim = bInAnim;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.SetGrayMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bIsEnabled                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemIconBtn_C::SetGrayMode(bool Param_bIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "SetGrayMode");

	Params::ItemIconBtn_C_SetGrayMode Parms{};

	Parms.Param_bIsEnabled = Param_bIsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.SetIcon_Imagine
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsLockFlagDraw                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InIsUseDetailsTooltip                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bLimitedTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInUseClassTypeForLevelSync                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ESBClassType                            InClassTypeForLevelSync                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemIconBtn_C::SetIcon_Imagine(bool InIsLockFlagDraw, bool InIsUseDetailsTooltip, bool bLimitedTime, bool bInUseClassTypeForLevelSync, ESBClassType InClassTypeForLevelSync)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "SetIcon_Imagine");

	Params::ItemIconBtn_C_SetIcon_Imagine Parms{};

	Parms.InIsLockFlagDraw = InIsLockFlagDraw;
	Parms.InIsUseDetailsTooltip = InIsUseDetailsTooltip;
	Parms.bLimitedTime = bLimitedTime;
	Parms.bInUseClassTypeForLevelSync = bInUseClassTypeForLevelSync;
	Parms.InClassTypeForLevelSync = InClassTypeForLevelSync;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.SetIcon_Weapon
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsLockFlagDraw                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InUseWeaponTooltip                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bLimitedTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemIconBtn_C::SetIcon_Weapon(bool InIsLockFlagDraw, bool InUseWeaponTooltip, bool bLimitedTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "SetIcon_Weapon");

	Params::ItemIconBtn_C_SetIcon_Weapon Parms{};

	Parms.InIsLockFlagDraw = InIsLockFlagDraw;
	Parms.InUseWeaponTooltip = InUseWeaponTooltip;
	Parms.bLimitedTime = bLimitedTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.SetIcon_Item
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsLockFlagDraw                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InIsUnidentified                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bLimitedTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemIconBtn_C::SetIcon_Item(bool InIsLockFlagDraw, bool InIsUnidentified, bool bLimitedTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "SetIcon_Item");

	Params::ItemIconBtn_C_SetIcon_Item Parms{};

	Parms.InIsLockFlagDraw = InIsLockFlagDraw;
	Parms.InIsUnidentified = InIsUnidentified;
	Parms.bLimitedTime = bLimitedTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.SetIcon_Costume
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsLockFlagDraw                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bLimitedTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemIconBtn_C::SetIcon_Costume(bool InIsLockFlagDraw, bool bLimitedTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "SetIcon_Costume");

	Params::ItemIconBtn_C_SetIcon_Costume Parms{};

	Parms.InIsLockFlagDraw = InIsLockFlagDraw;
	Parms.bLimitedTime = bLimitedTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.SetIcon_MountImagine
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsLockFlagDraw                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bLimitedTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemIconBtn_C::SetIcon_MountImagine(bool InIsLockFlagDraw, bool bLimitedTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "SetIcon_MountImagine");

	Params::ItemIconBtn_C_SetIcon_MountImagine Parms{};

	Parms.InIsLockFlagDraw = InIsLockFlagDraw;
	Parms.bLimitedTime = bLimitedTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.SetIcon_Ornament
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsLockFlagDraw                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InIsUnidentified                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bLimitedTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemIconBtn_C::SetIcon_Ornament(bool InIsLockFlagDraw, bool InIsUnidentified, bool bLimitedTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "SetIcon_Ornament");

	Params::ItemIconBtn_C_SetIcon_Ornament Parms{};

	Parms.InIsLockFlagDraw = InIsLockFlagDraw;
	Parms.InIsUnidentified = InIsUnidentified;
	Parms.bLimitedTime = bLimitedTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.IsItemLockIconDraw
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItemData               InInventoryItemData                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    HiddenLockIcon                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    OutLockFlag                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemIconBtn_C::IsItemLockIconDraw(const struct FInventoryItemData& InInventoryItemData, bool HiddenLockIcon, bool* OutLockFlag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "IsItemLockIconDraw");

	Params::ItemIconBtn_C_IsItemLockIconDraw Parms{};

	Parms.InInventoryItemData = std::move(InInventoryItemData);
	Parms.HiddenLockIcon = HiddenLockIcon;

	UObject::ProcessEvent(Func, &Parms);

	if (OutLockFlag != nullptr)
		*OutLockFlag = Parms.OutLockFlag;
}


// Function ItemIconBtn.ItemIconBtn_C.SetMImagineRarity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InUniqueId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UItemIconBtn_C::SetMImagineRarity(const class FString& InUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "SetMImagineRarity");

	Params::ItemIconBtn_C_SetMImagineRarity Parms{};

	Parms.InUniqueId = std::move(InUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.GetInventoryMountImagine
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InUniqueId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FSBCharacterMountImagineData     OutParameter                                           (Parm, OutParm)

void UItemIconBtn_C::GetInventoryMountImagine(const class FString& InUniqueId, struct FSBCharacterMountImagineData* OutParameter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "GetInventoryMountImagine");

	Params::ItemIconBtn_C_GetInventoryMountImagine Parms{};

	Parms.InUniqueId = std::move(InUniqueId);

	UObject::ProcessEvent(Func, &Parms);

	if (OutParameter != nullptr)
		*OutParameter = std::move(Parms.OutParameter);
}


// Function ItemIconBtn.ItemIconBtn_C.GetSelectItemUniqueID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           UniqueId                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UItemIconBtn_C::GetSelectItemUniqueID(class FString* UniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "GetSelectItemUniqueID");

	Params::ItemIconBtn_C_GetSelectItemUniqueID Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (UniqueId != nullptr)
		*UniqueId = std::move(Parms.UniqueId);
}


// Function ItemIconBtn.ItemIconBtn_C.SetSelectItemUniqueID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Inventory_Item_Data_Unique_Id                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// EItemType                               Inventory_Item_Data_Item_Type                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemIconBtn_C::SetSelectItemUniqueID(const class FString& Inventory_Item_Data_Unique_Id, EItemType Inventory_Item_Data_Item_Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "SetSelectItemUniqueID");

	Params::ItemIconBtn_C_SetSelectItemUniqueID Parms{};

	Parms.Inventory_Item_Data_Unique_Id = std::move(Inventory_Item_Data_Unique_Id);
	Parms.Inventory_Item_Data_Item_Type = Inventory_Item_Data_Item_Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.Set Costume Index
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemIconBtn_C::Set_Costume_Index(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "Set Costume Index");

	Params::ItemIconBtn_C_Set_Costume_Index Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.Set Select Num
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NuM                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemIconBtn_C::Set_Select_Num(int32 NuM, bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "Set Select Num");

	Params::ItemIconBtn_C_Set_Select_Num Parms{};

	Parms.NuM = NuM;
	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.SetLimitedTimeIconVisibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItemData               InInventoryItemData                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UItemIconBtn_C::SetLimitedTimeIconVisibility(const struct FInventoryItemData& InInventoryItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "SetLimitedTimeIconVisibility");

	Params::ItemIconBtn_C_SetLimitedTimeIconVisibility Parms{};

	Parms.InInventoryItemData = std::move(InInventoryItemData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.SetWeaponDetail_Index
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InItemIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           InItemUniqueId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UItemIconBtn_C::SetWeaponDetail_Index(int32 InItemIndex, const class FString& InItemUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "SetWeaponDetail_Index");

	Params::ItemIconBtn_C_SetWeaponDetail_Index Parms{};

	Parms.InItemIndex = InItemIndex;
	Parms.InItemUniqueId = std::move(InItemUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.SetImagineDetail_Index
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InputPin                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           UniqueId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UItemIconBtn_C::SetImagineDetail_Index(int32 InputPin, const class FString& UniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "SetImagineDetail_Index");

	Params::ItemIconBtn_C_SetImagineDetail_Index Parms{};

	Parms.InputPin = InputPin;
	Parms.UniqueId = std::move(UniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.SetIconWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InItemIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsDetailsMode                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           InItemUniqueId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   InStorageNumber                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemIconBtn_C::SetIconWeapon(int32 InItemIndex, bool IsDetailsMode, const class FString& InItemUniqueId, int32 InStorageNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "SetIconWeapon");

	Params::ItemIconBtn_C_SetIconWeapon Parms{};

	Parms.InItemIndex = InItemIndex;
	Parms.IsDetailsMode = IsDetailsMode;
	Parms.InItemUniqueId = std::move(InItemUniqueId);
	Parms.InStorageNumber = InStorageNumber;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.GetCommonIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonIcon_C*                    OutCommonIcon                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemIconBtn_C::GetCommonIcon(bool* IsValid, class UCommonIcon_C** OutCommonIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "GetCommonIcon");

	Params::ItemIconBtn_C_GetCommonIcon Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	if (OutCommonIcon != nullptr)
		*OutCommonIcon = Parms.OutCommonIcon;
}


// Function ItemIconBtn.ItemIconBtn_C.SetImagineDetailData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItemData               InItemData                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    InUseDetailedTooltip                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InHiddenLockIcon                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InHiddenAmout                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InIsUnidentified                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InLimitedTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InStackBEffectiveDisplay                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInUseClassTypeForLevelSync                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ESBClassType                            InClassTypeForLevelSync                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemIconBtn_C::SetImagineDetailData(const struct FInventoryItemData& InItemData, bool InUseDetailedTooltip, bool InHiddenLockIcon, bool InHiddenAmout, bool InIsUnidentified, bool InLimitedTime, bool InStackBEffectiveDisplay, bool bInUseClassTypeForLevelSync, ESBClassType InClassTypeForLevelSync)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "SetImagineDetailData");

	Params::ItemIconBtn_C_SetImagineDetailData Parms{};

	Parms.InItemData = std::move(InItemData);
	Parms.InUseDetailedTooltip = InUseDetailedTooltip;
	Parms.InHiddenLockIcon = InHiddenLockIcon;
	Parms.InHiddenAmout = InHiddenAmout;
	Parms.InIsUnidentified = InIsUnidentified;
	Parms.InLimitedTime = InLimitedTime;
	Parms.InStackBEffectiveDisplay = InStackBEffectiveDisplay;
	Parms.bInUseClassTypeForLevelSync = bInUseClassTypeForLevelSync;
	Parms.InClassTypeForLevelSync = InClassTypeForLevelSync;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.SetNewBadgeVisibleByReaded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           UniqueId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UItemIconBtn_C::SetNewBadgeVisibleByReaded(bool Enable, const class FString& UniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "SetNewBadgeVisibleByReaded");

	Params::ItemIconBtn_C_SetNewBadgeVisibleByReaded Parms{};

	Parms.Enable = Enable;
	Parms.UniqueId = std::move(UniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.SetSetLockIconVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InUniqueId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   InStorageNumber                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemIconBtn_C::SetSetLockIconVisibility(const class FString& InUniqueId, const int32 InStorageNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "SetSetLockIconVisibility");

	Params::ItemIconBtn_C_SetSetLockIconVisibility Parms{};

	Parms.InUniqueId = std::move(InUniqueId);
	Parms.InStorageNumber = InStorageNumber;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.Set Swap Scroll Visible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemIconBtn_C::Set_Swap_Scroll_Visible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "Set Swap Scroll Visible");

	Params::ItemIconBtn_C_Set_Swap_Scroll_Visible Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.Set Scroll Visible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Offset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemIconBtn_C::Set_Scroll_Visible(float Offset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "Set Scroll Visible");

	Params::ItemIconBtn_C_Set_Scroll_Visible Parms{};

	Parms.Offset = Offset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.SetScrollParameter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Param_BaseSize                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Param_OverSize                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemIconBtn_C::SetScrollParameter(float Param_BaseSize, float Param_OverSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "SetScrollParameter");

	Params::ItemIconBtn_C_SetScrollParameter Parms{};

	Parms.Param_BaseSize = Param_BaseSize;
	Parms.Param_OverSize = Param_OverSize;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.Set Icon Grp Visible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemIconBtn_C::Set_Icon_Grp_Visible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "Set Icon Grp Visible");

	Params::ItemIconBtn_C_Set_Icon_Grp_Visible Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.SetRewardData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRewardItemType                       InRewardType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bLimitedTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemIconBtn_C::SetRewardData(ESBRewardItemType InRewardType, int32 InId, int32 InAmount, bool bLimitedTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "SetRewardData");

	Params::ItemIconBtn_C_SetRewardData Parms{};

	Parms.InRewardType = InRewardType;
	Parms.InId = InId;
	Parms.InAmount = InAmount;
	Parms.bLimitedTime = bLimitedTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.SetAmount2Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Visibility                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemIconBtn_C::SetAmount2Visibility(bool Param_Visibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "SetAmount2Visibility");

	Params::ItemIconBtn_C_SetAmount2Visibility Parms{};

	Parms.Param_Visibility = Param_Visibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.SetAmountVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Visibility                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemIconBtn_C::SetAmountVisibility(bool Param_Visibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "SetAmountVisibility");

	Params::ItemIconBtn_C_SetAmountVisibility Parms{};

	Parms.Param_Visibility = Param_Visibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemIconBtn.ItemIconBtn_C.SetPickup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemIconBtn_C::SetPickup(bool bValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemIconBtn_C", "SetPickup");

	Params::ItemIconBtn_C_SetPickup Parms{};

	Parms.bValue = bValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

