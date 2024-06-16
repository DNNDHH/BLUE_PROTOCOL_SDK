#pragma once

 

// Package: Inventory

#include "Basic.hpp"

#include "Inventory_classes.hpp"
#include "Inventory_parameters.hpp"


namespace SDK
{

// Function Inventory.Inventory_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UInventory_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Inventory.Inventory_C.ExecuteUbergraph_Inventory
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventory_C::ExecuteUbergraph_Inventory(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "ExecuteUbergraph_Inventory");

	Params::Inventory_C_ExecuteUbergraph_Inventory Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Inventory.Inventory_C.CustomEvent_6
// (BlueprintCallable, BlueprintEvent)

void UInventory_C::CustomEvent_6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "CustomEvent_6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Inventory.Inventory_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventory_C::CustomEvent_3(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "CustomEvent_3");

	Params::Inventory_C_CustomEvent_3 Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Inventory.Inventory_C.OnSameMenuBookmarkAccessNew
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InBookMarkType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UInventory_C::OnSameMenuBookmarkAccessNew(const class FString& InBookMarkType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "OnSameMenuBookmarkAccessNew");

	Params::Inventory_C_OnSameMenuBookmarkAccessNew Parms{};

	Parms.InBookMarkType = std::move(InBookMarkType);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Inventory.Inventory_C.UnbindWeaponStickerEventDelegates
// (BlueprintCallable, BlueprintEvent)

void UInventory_C::UnbindWeaponStickerEventDelegates()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "UnbindWeaponStickerEventDelegates");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Inventory.Inventory_C.UpdateBookmarkStatusButton
// (BlueprintCallable, BlueprintEvent)

void UInventory_C::UpdateBookmarkStatusButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "UpdateBookmarkStatusButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Inventory.Inventory_C.BookmarkUpdateRequest
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UInventory_C::BookmarkUpdateRequest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "BookmarkUpdateRequest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Inventory.Inventory_C.ShowErrorMessageDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EInventoryMessageType                   InMessageType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   RetCode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventory_C::ShowErrorMessageDialog(EInventoryMessageType InMessageType, int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "ShowErrorMessageDialog");

	Params::Inventory_C_ShowErrorMessageDialog Parms{};

	Parms.InMessageType = InMessageType;
	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Inventory.Inventory_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInventory_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Inventory.Inventory_C.OnShortcutIconSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EShortcutIconType                       InShortcutKey                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventory_C::OnShortcutIconSelected(EShortcutIconType InShortcutKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "OnShortcutIconSelected");

	Params::Inventory_C_OnShortcutIconSelected Parms{};

	Parms.InShortcutKey = InShortcutKey;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Inventory.Inventory_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventory_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "OnAnimationFinished");

	Params::Inventory_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Inventory.Inventory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInventory_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Inventory.Inventory_C.SetLevelAfter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_ExpIncrease_C*               CallerDialg                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventory_C::SetLevelAfter(int32 Value, class UWBP_ExpIncrease_C* CallerDialg)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "SetLevelAfter");

	Params::Inventory_C_SetLevelAfter Parms{};

	Parms.Value = Value;
	Parms.CallerDialg = CallerDialg;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Inventory.Inventory_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ENumberInputDialogResult                InResult                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InNumber                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventory_C::CustomEvent_2(ENumberInputDialogResult InResult, int32 InNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "CustomEvent_2");

	Params::Inventory_C_CustomEvent_2 Parms{};

	Parms.InResult = InResult;
	Parms.InNumber = InNumber;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Inventory.Inventory_C.UseLeve
// (BlueprintCallable, BlueprintEvent)

void UInventory_C::UseLeve()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "UseLeve");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Inventory.Inventory_C.OnCloseDetailMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_ProductDetailMenu_C*         Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventory_C::OnCloseDetailMenu(class UUMG_ProductDetailMenu_C* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "OnCloseDetailMenu");

	Params::Inventory_C_OnCloseDetailMenu Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Inventory.Inventory_C.DetailView
// (BlueprintCallable, BlueprintEvent)

void UInventory_C::DetailView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "DetailView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Inventory.Inventory_C.CustomEvent_4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ENumberInputDialogResult                InResult                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItemData               NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UInventory_C::CustomEvent_4(ENumberInputDialogResult InResult, const struct FInventoryItemData& NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "CustomEvent_4");

	Params::Inventory_C_CustomEvent_4 Parms{};

	Parms.InResult = InResult;
	Parms.NewParam = std::move(NewParam);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Inventory.Inventory_C.ShowUsedWeaponStickerAndAttachedWeaponNoticeDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InStickerAttachedWeaponUniqueId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UInventory_C::ShowUsedWeaponStickerAndAttachedWeaponNoticeDialog(const class FString& InStickerAttachedWeaponUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "ShowUsedWeaponStickerAndAttachedWeaponNoticeDialog");

	Params::Inventory_C_ShowUsedWeaponStickerAndAttachedWeaponNoticeDialog Parms{};

	Parms.InStickerAttachedWeaponUniqueId = std::move(InStickerAttachedWeaponUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Inventory.Inventory_C.ShowExpiredWeaponStickerSystemMessage
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>                   InExpiredStickerWeaponUniqueIds                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                           InEquippedWeaponUniqueId                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    InActivateWeaponModelRotate                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventory_C::ShowExpiredWeaponStickerSystemMessage(const TArray<class FString>& InExpiredStickerWeaponUniqueIds, const class FString& InEquippedWeaponUniqueId, bool InActivateWeaponModelRotate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "ShowExpiredWeaponStickerSystemMessage");

	Params::Inventory_C_ShowExpiredWeaponStickerSystemMessage Parms{};

	Parms.InExpiredStickerWeaponUniqueIds = std::move(InExpiredStickerWeaponUniqueIds);
	Parms.InEquippedWeaponUniqueId = std::move(InEquippedWeaponUniqueId);
	Parms.InActivateWeaponModelRotate = InActivateWeaponModelRotate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Inventory.Inventory_C.EndSystemMessage
// (BlueprintCallable, BlueprintEvent)

void UInventory_C::EndSystemMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "EndSystemMessage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Inventory.Inventory_C.BndEvt__Descriptions_K2Node_ComponentBoundEvent_3_OnWeaponStickerInUseButtonPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    InIsInUse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventory_C::BndEvt__Descriptions_K2Node_ComponentBoundEvent_3_OnWeaponStickerInUseButtonPressed__DelegateSignature(bool InIsInUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "BndEvt__Descriptions_K2Node_ComponentBoundEvent_3_OnWeaponStickerInUseButtonPressed__DelegateSignature");

	Params::Inventory_C_BndEvt__Descriptions_K2Node_ComponentBoundEvent_3_OnWeaponStickerInUseButtonPressed__DelegateSignature Parms{};

	Parms.InIsInUse = InIsInUse;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Inventory.Inventory_C.OnRemoveWeaponStickerDelegateEvent
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRetCode                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           InStickerRemovedWeaponUniqueId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    InIsExpiredStickerWeapons                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>                   InExpiredStickerWeaponUniqueIds                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FSBWeaponItemData>        InExpiredStickerWeaponItemDatas                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UInventory_C::OnRemoveWeaponStickerDelegateEvent(const int32 InRetCode, const class FString& InStickerRemovedWeaponUniqueId, const bool InIsExpiredStickerWeapons, const TArray<class FString>& InExpiredStickerWeaponUniqueIds, const TArray<struct FSBWeaponItemData>& InExpiredStickerWeaponItemDatas)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "OnRemoveWeaponStickerDelegateEvent");

	Params::Inventory_C_OnRemoveWeaponStickerDelegateEvent Parms{};

	Parms.InRetCode = InRetCode;
	Parms.InStickerRemovedWeaponUniqueId = std::move(InStickerRemovedWeaponUniqueId);
	Parms.InIsExpiredStickerWeapons = InIsExpiredStickerWeapons;
	Parms.InExpiredStickerWeaponUniqueIds = std::move(InExpiredStickerWeaponUniqueIds);
	Parms.InExpiredStickerWeaponItemDatas = std::move(InExpiredStickerWeaponItemDatas);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Inventory.Inventory_C.OnUseWeaponStickerDelegateEvent
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRetCode                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           InStickerUsedWeaponUniqueId                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    InIsExpiredStickerWeapons                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>                   InExpiredStickerWeaponUniqueIds                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FSBWeaponItemData>        InExpiredStickerWeaponItemDatas                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UInventory_C::OnUseWeaponStickerDelegateEvent(const int32 InRetCode, const class FString& InStickerUsedWeaponUniqueId, const bool InIsExpiredStickerWeapons, const TArray<class FString>& InExpiredStickerWeaponUniqueIds, const TArray<struct FSBWeaponItemData>& InExpiredStickerWeaponItemDatas)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "OnUseWeaponStickerDelegateEvent");

	Params::Inventory_C_OnUseWeaponStickerDelegateEvent Parms{};

	Parms.InRetCode = InRetCode;
	Parms.InStickerUsedWeaponUniqueId = std::move(InStickerUsedWeaponUniqueId);
	Parms.InIsExpiredStickerWeapons = InIsExpiredStickerWeapons;
	Parms.InExpiredStickerWeaponUniqueIds = std::move(InExpiredStickerWeaponUniqueIds);
	Parms.InExpiredStickerWeaponItemDatas = std::move(InExpiredStickerWeaponItemDatas);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Inventory.Inventory_C.OnWeaponStickerRemoveWindowHideEnd
// (BlueprintCallable, BlueprintEvent)

void UInventory_C::OnWeaponStickerRemoveWindowHideEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "OnWeaponStickerRemoveWindowHideEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Inventory.Inventory_C.OnWeaponStickerRemoveDecideEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsStickerDiscardSelected                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventory_C::OnWeaponStickerRemoveDecideEvent(bool InIsStickerDiscardSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "OnWeaponStickerRemoveDecideEvent");

	Params::Inventory_C_OnWeaponStickerRemoveDecideEvent Parms{};

	Parms.InIsStickerDiscardSelected = InIsStickerDiscardSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Inventory.Inventory_C.BndEvt__Descriptions_K2Node_ComponentBoundEvent_0_OnWeaponStickerButtonPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           InWeaponUniqueId                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FSBWeaponItemData                InWeaponItemData                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UInventory_C::BndEvt__Descriptions_K2Node_ComponentBoundEvent_0_OnWeaponStickerButtonPressed__DelegateSignature(const class FString& InWeaponUniqueId, const struct FSBWeaponItemData& InWeaponItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "BndEvt__Descriptions_K2Node_ComponentBoundEvent_0_OnWeaponStickerButtonPressed__DelegateSignature");

	Params::Inventory_C_BndEvt__Descriptions_K2Node_ComponentBoundEvent_0_OnWeaponStickerButtonPressed__DelegateSignature Parms{};

	Parms.InWeaponUniqueId = std::move(InWeaponUniqueId);
	Parms.InWeaponItemData = std::move(InWeaponItemData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Inventory.Inventory_C.OnWeaponStickerWeaponSelectWindowHideEndEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsHideWindowCalledByDecide                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventory_C::OnWeaponStickerWeaponSelectWindowHideEndEvent(bool InIsHideWindowCalledByDecide)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "OnWeaponStickerWeaponSelectWindowHideEndEvent");

	Params::Inventory_C_OnWeaponStickerWeaponSelectWindowHideEndEvent Parms{};

	Parms.InIsHideWindowCalledByDecide = InIsHideWindowCalledByDecide;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Inventory.Inventory_C.OnUseWeaponStickerDecideEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InSelectedWeaponUniqueItemId                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UInventory_C::OnUseWeaponStickerDecideEvent(const class FString& InSelectedWeaponUniqueItemId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "OnUseWeaponStickerDecideEvent");

	Params::Inventory_C_OnUseWeaponStickerDecideEvent Parms{};

	Parms.InSelectedWeaponUniqueItemId = std::move(InSelectedWeaponUniqueItemId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Inventory.Inventory_C.UseWeaponSticker
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAppearanceWeaponSticker         InWeaponStickerInfo                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class FString                           InWeaponStickerUniqueId                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UInventory_C::UseWeaponSticker(const struct FAppearanceWeaponSticker& InWeaponStickerInfo, const class FString& InWeaponStickerUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "UseWeaponSticker");

	Params::Inventory_C_UseWeaponSticker Parms{};

	Parms.InWeaponStickerInfo = std::move(InWeaponStickerInfo);
	Parms.InWeaponStickerUniqueId = std::move(InWeaponStickerUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Inventory.Inventory_C.UseItemBox
// (BlueprintCallable, BlueprintEvent)

void UInventory_C::UseItemBox()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "UseItemBox");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Inventory.Inventory_C.CustomEvent_5
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRetCode                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBStorageItemBoxResultData      InItemBoxResultData                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UInventory_C::CustomEvent_5(const int32 InRetCode, const struct FSBStorageItemBoxResultData& InItemBoxResultData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "CustomEvent_5");

	Params::Inventory_C_CustomEvent_5 Parms{};

	Parms.InRetCode = InRetCode;
	Parms.InItemBoxResultData = std::move(InItemBoxResultData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Inventory.Inventory_C.UseExp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventory_C::UseExp(int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "UseExp");

	Params::Inventory_C_UseExp Parms{};

	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Inventory.Inventory_C.NowBookmarkUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EInventoryType                          Selection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventory_C::NowBookmarkUpdate(EInventoryType Selection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "NowBookmarkUpdate");

	Params::Inventory_C_NowBookmarkUpdate Parms{};

	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Inventory.Inventory_C.IQStartCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Start                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventory_C::IQStartCheck(bool Start)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "IQStartCheck");

	Params::Inventory_C_IQStartCheck Parms{};

	Parms.Start = Start;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Inventory.Inventory_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ENumberInputDialogResult                NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_ItemBox_C*                   ItemBox                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventory_C::CustomEvent_1(ENumberInputDialogResult NewParam, class UWBP_ItemBox_C* ItemBox)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "CustomEvent_1");

	Params::Inventory_C_CustomEvent_1 Parms{};

	Parms.NewParam = NewParam;
	Parms.ItemBox = ItemBox;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Inventory.Inventory_C.UseItemAfter
// (BlueprintCallable, BlueprintEvent)

void UInventory_C::UseItemAfter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "UseItemAfter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Inventory.Inventory_C.UseItem_Internal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventory_C::UseItem_Internal(int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "UseItem_Internal");

	Params::Inventory_C_UseItem_Internal Parms{};

	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Inventory.Inventory_C.ItemUseAfter
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRetCode                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FOwnItemInfo>             InDirtyItems                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UInventory_C::ItemUseAfter(const int32 InRetCode, const TArray<struct FOwnItemInfo>& InDirtyItems)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "ItemUseAfter");

	Params::Inventory_C_ItemUseAfter Parms{};

	Parms.InRetCode = InRetCode;
	Parms.InDirtyItems = std::move(InDirtyItems);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Inventory.Inventory_C.UseItem
// (BlueprintCallable, BlueprintEvent)

void UInventory_C::UseItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "UseItem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Inventory.Inventory_C.UpdateSubMenuGrp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EInventoryType                          InputPin                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventory_C::UpdateSubMenuGrp(EInventoryType InputPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "UpdateSubMenuGrp");

	Params::Inventory_C_UpdateSubMenuGrp Parms{};

	Parms.InputPin = InputPin;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Inventory.Inventory_C.OnSaveItemLockCompleteDelegate
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FSBLockItemData>          Param_LockItemData                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   InRetCode                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventory_C::OnSaveItemLockCompleteDelegate(const bool Result, const TArray<struct FSBLockItemData>& Param_LockItemData, const int32 InRetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "OnSaveItemLockCompleteDelegate");

	Params::Inventory_C_OnSaveItemLockCompleteDelegate Parms{};

	Parms.Result = Result;
	Parms.Param_LockItemData = std::move(Param_LockItemData);
	Parms.InRetCode = InRetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Inventory.Inventory_C.BndEvt__TabButtons2_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   ButtonId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventory_C::BndEvt__TabButtons2_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(int32 ButtonId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "BndEvt__TabButtons2_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");

	Params::Inventory_C_BndEvt__TabButtons2_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature Parms{};

	Parms.ButtonId = ButtonId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Inventory.Inventory_C.SetSubMenuVisiblity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvasPanel*                     SubMenu                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommandMenuCommonSubButtonList_C*Tab                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    StorageFlag                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InventoryFlag                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventory_C::SetSubMenuVisiblity(class UCanvasPanel* SubMenu, class UCommandMenuCommonSubButtonList_C* Tab, bool StorageFlag, bool InventoryFlag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "SetSubMenuVisiblity");

	Params::Inventory_C_SetSubMenuVisiblity Parms{};

	Parms.SubMenu = SubMenu;
	Parms.Tab = Tab;
	Parms.StorageFlag = StorageFlag;
	Parms.InventoryFlag = InventoryFlag;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Inventory.Inventory_C.UpdateCommandMenuBgHelp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EInventoryType                          InInventoryType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventory_C::UpdateCommandMenuBgHelp(EInventoryType InInventoryType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "UpdateCommandMenuBgHelp");

	Params::Inventory_C_UpdateCommandMenuBgHelp Parms{};

	Parms.InInventoryType = InInventoryType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Inventory.Inventory_C.BndEvt__TabButtons_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   ButtonId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventory_C::BndEvt__TabButtons_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(int32 ButtonId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "BndEvt__TabButtons_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");

	Params::Inventory_C_BndEvt__TabButtons_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature Parms{};

	Parms.ButtonId = ButtonId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Inventory.Inventory_C.DestroyNewInventory
// (BlueprintCallable, BlueprintEvent)

void UInventory_C::DestroyNewInventory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "DestroyNewInventory");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Inventory.Inventory_C.OnSaveCharaCostumeEquipDelegate_����
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBExpiredEquipmentData          InExpiredEquipmentData                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UInventory_C::OnSaveCharaCostumeEquipDelegate_____(int32 RetCode, const struct FSBExpiredEquipmentData& InExpiredEquipmentData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "OnSaveCharaCostumeEquipDelegate_����");

	Params::Inventory_C_OnSaveCharaCostumeEquipDelegate_____ Parms{};

	Parms.RetCode = RetCode;
	Parms.InExpiredEquipmentData = std::move(InExpiredEquipmentData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Inventory.Inventory_C.OnPressItemButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemIconBtn_C*                   SelectButton                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryData                   InventoryData                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UInventory_C::OnPressItemButton(class UItemIconBtn_C* SelectButton, const struct FInventoryData& InventoryData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "OnPressItemButton");

	Params::Inventory_C_OnPressItemButton Parms{};

	Parms.SelectButton = SelectButton;
	Parms.InventoryData = std::move(InventoryData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Inventory.Inventory_C.ItemLock
// (BlueprintCallable, BlueprintEvent)

void UInventory_C::ItemLock()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "ItemLock");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Inventory.Inventory_C.OnClick_MenuButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ButtonId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventory_C::OnClick_MenuButton(int32 ButtonId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "OnClick_MenuButton");

	Params::Inventory_C_OnClick_MenuButton Parms{};

	Parms.ButtonId = ButtonId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Inventory.Inventory_C.OnEndRegister
// (BlueprintCallable, BlueprintEvent)

void UInventory_C::OnEndRegister()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "OnEndRegister");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Inventory.Inventory_C.OnUploded Costume Data
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventory_C::OnUploded_Costume_Data(bool Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "OnUploded Costume Data");

	Params::Inventory_C_OnUploded_Costume_Data Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Inventory.Inventory_C.UploadEquipment
// (BlueprintCallable, BlueprintEvent)

void UInventory_C::UploadEquipment()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "UploadEquipment");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Inventory.Inventory_C.OnSaveEquipInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventory_C::OnSaveEquipInfo(int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "OnSaveEquipInfo");

	Params::Inventory_C_OnSaveEquipInfo Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Inventory.Inventory_C.Item Equipment Costume
// (BlueprintCallable, BlueprintEvent)

void UInventory_C::Item_Equipment_Costume()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "Item Equipment Costume");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Inventory.Inventory_C.Equipment
// (BlueprintCallable, BlueprintEvent)

void UInventory_C::Equipment()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "Equipment");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Inventory.Inventory_C.WeaponEquipmented
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventory_C::WeaponEquipmented(int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "WeaponEquipmented");

	Params::Inventory_C_WeaponEquipmented Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Inventory.Inventory_C.OnWeaponEquipDelegate_����_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInIsExpiredStickerWeapons                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>                   InExpiredStickerWeaponUniqueIds                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FSBExpiredEquipmentData          InExpiredEquipmentData                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UInventory_C::OnWeaponEquipDelegate______0(int32 RetCode, const bool bInIsExpiredStickerWeapons, const TArray<class FString>& InExpiredStickerWeaponUniqueIds, const struct FSBExpiredEquipmentData& InExpiredEquipmentData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "OnWeaponEquipDelegate_����_0");

	Params::Inventory_C_OnWeaponEquipDelegate______0 Parms{};

	Parms.RetCode = RetCode;
	Parms.bInIsExpiredStickerWeapons = bInIsExpiredStickerWeapons;
	Parms.InExpiredStickerWeaponUniqueIds = std::move(InExpiredStickerWeaponUniqueIds);
	Parms.InExpiredEquipmentData = std::move(InExpiredEquipmentData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Inventory.Inventory_C.UiInputBlock
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventory_C::UiInputBlock(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "UiInputBlock");

	Params::Inventory_C_UiInputBlock Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Inventory.Inventory_C.Item Equipment Weapon
// (BlueprintCallable, BlueprintEvent)

void UInventory_C::Item_Equipment_Weapon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "Item Equipment Weapon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Inventory.Inventory_C.OnClickedButton_Type
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDescripionButtonType                   Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventory_C::OnClickedButton_Type(EDescripionButtonType Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "OnClickedButton_Type");

	Params::Inventory_C_OnClickedButton_Type Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Inventory.Inventory_C.Init BaseInventories
// (BlueprintCallable, BlueprintEvent)

void UInventory_C::Init_BaseInventories()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "Init BaseInventories");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Inventory.Inventory_C.OnClickedItemButton_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryData                   InventoryData                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UInventory_C::OnClickedItemButton_Event(const struct FInventoryData& InventoryData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "OnClickedItemButton_Event");

	Params::Inventory_C_OnClickedItemButton_Event Parms{};

	Parms.InventoryData = std::move(InventoryData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Inventory.Inventory_C.Timeout
// (BlueprintCallable, BlueprintEvent)

void UInventory_C::Timeout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "Timeout");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Inventory.Inventory_C.AssetLoadComplete
// (BlueprintCallable, BlueprintEvent)

void UInventory_C::AssetLoadComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "AssetLoadComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Inventory.Inventory_C.UpdateModelStudio
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItemData               InInventoryItemData                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UInventory_C::UpdateModelStudio(const struct FInventoryItemData& InInventoryItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "UpdateModelStudio");

	Params::Inventory_C_UpdateModelStudio Parms{};

	Parms.InInventoryItemData = std::move(InInventoryItemData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Inventory.Inventory_C.CustomEvent_7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EYesNoDialogResult                      Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventory_C::CustomEvent_7(const EYesNoDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "CustomEvent_7");

	Params::Inventory_C_CustomEvent_7 Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Inventory.Inventory_C.OnHideDeligate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ENumberInputDialogResult                InResult                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InNumber                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventory_C::OnHideDeligate(ENumberInputDialogResult InResult, int32 InNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "OnHideDeligate");

	Params::Inventory_C_OnHideDeligate Parms{};

	Parms.InResult = InResult;
	Parms.InNumber = InNumber;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Inventory.Inventory_C.TrashItem
// (BlueprintCallable, BlueprintEvent)

void UInventory_C::TrashItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "TrashItem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Inventory.Inventory_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EYesNoDialogResult                      Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventory_C::CustomEvent_0(const EYesNoDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "CustomEvent_0");

	Params::Inventory_C_CustomEvent_0 Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Inventory.Inventory_C.QueryTrashItem
// (BlueprintCallable, BlueprintEvent)

void UInventory_C::QueryTrashItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "QueryTrashItem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Inventory.Inventory_C.OnSaveItemStorageDelegate_Event_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRetCode                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FOwnItemInfo>             InDirtyItems                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UInventory_C::OnSaveItemStorageDelegate_Event_0(const int32 InRetCode, const TArray<struct FOwnItemInfo>& InDirtyItems)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "OnSaveItemStorageDelegate_Event_0");

	Params::Inventory_C_OnSaveItemStorageDelegate_Event_0 Parms{};

	Parms.InRetCode = InRetCode;
	Parms.InDirtyItems = std::move(InDirtyItems);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Inventory.Inventory_C.ResetMouseCursorTypeToDefaultRequest
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UInventory_C::ResetMouseCursorTypeToDefaultRequest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "ResetMouseCursorTypeToDefaultRequest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Inventory.Inventory_C.OnSubMenuUpdate
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   MainPage                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SubPage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventory_C::OnSubMenuUpdate(int32 MainPage, int32 SubPage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "OnSubMenuUpdate");

	Params::Inventory_C_OnSubMenuUpdate Parms{};

	Parms.MainPage = MainPage;
	Parms.SubPage = SubPage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Inventory.Inventory_C.OnRMShopClosed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UInventory_C::OnRMShopClosed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "OnRMShopClosed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Inventory.Inventory_C.OnParentTerm
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UInventory_C::OnParentTerm()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "OnParentTerm");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Inventory.Inventory_C.SortItemList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInventoryItemData>       ItemList                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UInventory_C::SortItemList(TArray<struct FInventoryItemData>& ItemList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "SortItemList");

	Params::Inventory_C_SortItemList Parms{};

	Parms.ItemList = std::move(ItemList);

	UObject::ProcessEvent(Func, &Parms);

	ItemList = std::move(Parms.ItemList);
}


// Function Inventory.Inventory_C.FindInventoryItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryItemData>       Param_InventoryItemList                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FInventoryItemData               InventoryItem                                          (Parm, OutParm, HasGetValueTypeHash)

void UInventory_C::FindInventoryItem(int32 ItemIndex, TArray<struct FInventoryItemData>& Param_InventoryItemList, struct FInventoryItemData* InventoryItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "FindInventoryItem");

	Params::Inventory_C_FindInventoryItem Parms{};

	Parms.ItemIndex = ItemIndex;
	Parms.Param_InventoryItemList = std::move(Param_InventoryItemList);

	UObject::ProcessEvent(Func, &Parms);

	Param_InventoryItemList = std::move(Parms.Param_InventoryItemList);

	if (InventoryItem != nullptr)
		*InventoryItem = std::move(Parms.InventoryItem);
}


// Function Inventory.Inventory_C.RefreshOnRegister
// (Public, BlueprintCallable, BlueprintEvent)

void UInventory_C::RefreshOnRegister()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "RefreshOnRegister");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Inventory.Inventory_C.GetEquipItemCharaCreateInfoFromEquipItemInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FCharaEquipItemInfo              InEquipItemInfo                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// ESBCharaEquipType                       InEquipType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCharaEquipItemCharaCreateInfo   OutEquipItemCharaCreateInfo                            (Parm, OutParm)

void UInventory_C::GetEquipItemCharaCreateInfoFromEquipItemInfo(const struct FCharaEquipItemInfo& InEquipItemInfo, ESBCharaEquipType InEquipType, bool* IsValid, struct FCharaEquipItemCharaCreateInfo* OutEquipItemCharaCreateInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "GetEquipItemCharaCreateInfoFromEquipItemInfo");

	Params::Inventory_C_GetEquipItemCharaCreateInfoFromEquipItemInfo Parms{};

	Parms.InEquipItemInfo = std::move(InEquipItemInfo);
	Parms.InEquipType = InEquipType;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	if (OutEquipItemCharaCreateInfo != nullptr)
		*OutEquipItemCharaCreateInfo = std::move(Parms.OutEquipItemCharaCreateInfo);
}


// Function Inventory.Inventory_C.GetCostumePartsLocationFromCostumeEquipType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBCharaEquipType                       InCostumeType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ECharaPartsLocation                     OutPartsLocation                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventory_C::GetCostumePartsLocationFromCostumeEquipType(ESBCharaEquipType InCostumeType, bool* IsValid, ECharaPartsLocation* OutPartsLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "GetCostumePartsLocationFromCostumeEquipType");

	Params::Inventory_C_GetCostumePartsLocationFromCostumeEquipType Parms{};

	Parms.InCostumeType = InCostumeType;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	if (OutPartsLocation != nullptr)
		*OutPartsLocation = Parms.OutPartsLocation;
}


// Function Inventory.Inventory_C.Enable Capture Studios
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventory_C::Enable_Capture_Studios(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "Enable Capture Studios");

	Params::Inventory_C_Enable_Capture_Studios Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Inventory.Inventory_C.Create Capture Studio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EInventoryType                          InventoryType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventory_C::Create_Capture_Studio(EInventoryType InventoryType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "Create Capture Studio");

	Params::Inventory_C_Create_Capture_Studio Parms{};

	Parms.InventoryType = InventoryType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Inventory.Inventory_C.Initialize Open Menu Type
// (Public, BlueprintCallable, BlueprintEvent)

void UInventory_C::Initialize_Open_Menu_Type()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "Initialize Open Menu Type");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Inventory.Inventory_C.Update New Button
// (Public, BlueprintCallable, BlueprintEvent)

void UInventory_C::Update_New_Button()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "Update New Button");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Inventory.Inventory_C.TermRequest
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESubMenuTermReason                      InReason                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESubMenuTermRequestReply                ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESubMenuTermRequestReply UInventory_C::TermRequest(const ESubMenuTermReason InReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Inventory_C", "TermRequest");

	Params::Inventory_C_TermRequest Parms{};

	Parms.InReason = InReason;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

