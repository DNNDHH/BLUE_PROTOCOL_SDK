#pragma once

 

// Package: InventoryFunctionLibrary

#include "Basic.hpp"

#include "InventoryFunctionLibrary_classes.hpp"
#include "InventoryFunctionLibrary_parameters.hpp"


namespace SDK
{

// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.CreateInventoryData
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FOwnItemInfo                     OwnItemInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryData                   InventoryData                                          (Parm, OutParm, HasGetValueTypeHash)
// bool                                    IsSuccess                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryFunctionLibrary_C::CreateInventoryData(const struct FOwnItemInfo& OwnItemInfo, class UObject* __WorldContext, struct FInventoryData* InventoryData, bool* IsSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "CreateInventoryData");

	Params::InventoryFunctionLibrary_C_CreateInventoryData Parms{};

	Parms.OwnItemInfo = std::move(OwnItemInfo);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (InventoryData != nullptr)
		*InventoryData = std::move(Parms.InventoryData);

	if (IsSuccess != nullptr)
		*IsSuccess = Parms.IsSuccess;
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Create Add Grid Item Icon Btn
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGridPanel*                       ParentGridPanel                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   FirstIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CreateNum                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MatricesNam                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   MagineintervalTop                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   MagineintervalLeft                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsImagineSimpleTooltip                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsToolTipEnable                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bIsRightClickAccept                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   BaseSize                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   OverSize                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryFunctionLibrary_C::Create_Add_Grid_Item_Icon_Btn(class UGridPanel* ParentGridPanel, int32 FirstIndex, int32 CreateNum, int32 MatricesNam, float MagineintervalTop, float MagineintervalLeft, bool IsImagineSimpleTooltip, bool IsToolTipEnable, bool bIsRightClickAccept, float BaseSize, float OverSize, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "Create Add Grid Item Icon Btn");

	Params::InventoryFunctionLibrary_C_Create_Add_Grid_Item_Icon_Btn Parms{};

	Parms.ParentGridPanel = ParentGridPanel;
	Parms.FirstIndex = FirstIndex;
	Parms.CreateNum = CreateNum;
	Parms.MatricesNam = MatricesNam;
	Parms.MagineintervalTop = MagineintervalTop;
	Parms.MagineintervalLeft = MagineintervalLeft;
	Parms.IsImagineSimpleTooltip = IsImagineSimpleTooltip;
	Parms.IsToolTipEnable = IsToolTipEnable;
	Parms.bIsRightClickAccept = bIsRightClickAccept;
	Parms.BaseSize = BaseSize;
	Parms.OverSize = OverSize;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.EmptyGridSlot
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGridPanel*                       GridPanel                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SlotNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryFunctionLibrary_C::EmptyGridSlot(class UGridPanel* GridPanel, int32 SlotNum, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "EmptyGridSlot");

	Params::InventoryFunctionLibrary_C_EmptyGridSlot Parms{};

	Parms.GridPanel = GridPanel;
	Parms.SlotNum = SlotNum;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.SetCaptureStudioEnable
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_CaptureStudio_C*             CaptureStudioWeapon                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_CaptureStudio_C*             CaptureStudioCostume                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_CaptureStudio_C*             CaptureStudioImagine                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_CaptureStudio_C*             CaptureStudioMountImagine                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EItemType                               ItemType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryFunctionLibrary_C::SetCaptureStudioEnable(class UUMG_CaptureStudio_C* CaptureStudioWeapon, class UUMG_CaptureStudio_C* CaptureStudioCostume, class UUMG_CaptureStudio_C* CaptureStudioImagine, class UUMG_CaptureStudio_C* CaptureStudioMountImagine, EItemType ItemType, class UObject* __WorldContext, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "SetCaptureStudioEnable");

	Params::InventoryFunctionLibrary_C_SetCaptureStudioEnable Parms{};

	Parms.CaptureStudioWeapon = CaptureStudioWeapon;
	Parms.CaptureStudioCostume = CaptureStudioCostume;
	Parms.CaptureStudioImagine = CaptureStudioImagine;
	Parms.CaptureStudioMountImagine = CaptureStudioMountImagine;
	Parms.ItemType = ItemType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Set Item Lock Save
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TDelegate<void(bool Result, TArray<struct FSBLockItemData>& LockItemData, int32 InRetCode)>InputPin                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// class FString                           UniqueId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   StorageNumber                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EItemType                               InItemType                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBLockItemData                  LockItemData                                           (Parm, OutParm)
// bool                                    bIsItemLock                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryFunctionLibrary_C::Set_Item_Lock_Save(const TDelegate<void(bool Result, TArray<struct FSBLockItemData>& LockItemData, int32 InRetCode)>& InputPin, const class FString& UniqueId, int32 StorageNumber, const EItemType InItemType, class UObject* __WorldContext, struct FSBLockItemData* LockItemData, bool* bIsItemLock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "Set Item Lock Save");

	Params::InventoryFunctionLibrary_C_Set_Item_Lock_Save Parms{};

	Parms.InputPin = InputPin;
	Parms.UniqueId = std::move(UniqueId);
	Parms.StorageNumber = StorageNumber;
	Parms.InItemType = InItemType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (LockItemData != nullptr)
		*LockItemData = std::move(Parms.LockItemData);

	if (bIsItemLock != nullptr)
		*bIsItemLock = Parms.bIsItemLock;
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.UnbindItemLockDelegate
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TDelegate<void(bool Result, TArray<struct FSBLockItemData>& LockItemData, int32 InRetCode)>Event                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryFunctionLibrary_C::UnbindItemLockDelegate(const TDelegate<void(bool Result, TArray<struct FSBLockItemData>& LockItemData, int32 InRetCode)>& Event, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "UnbindItemLockDelegate");

	Params::InventoryFunctionLibrary_C_UnbindItemLockDelegate Parms{};

	Parms.Event = Event;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.UpdateItemLockaVisibility
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGridPanel*                       InventorySlot                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           UniqueId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    bIsVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryFunctionLibrary_C::UpdateItemLockaVisibility(class UGridPanel* InventorySlot, const class FString& UniqueId, bool bIsVisibility, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "UpdateItemLockaVisibility");

	Params::InventoryFunctionLibrary_C_UpdateItemLockaVisibility Parms{};

	Parms.InventorySlot = InventorySlot;
	Parms.UniqueId = std::move(UniqueId);
	Parms.bIsVisibility = bIsVisibility;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.RequestSaveItemDrop
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TDelegate<void(int32 InRetCode, TArray<struct FOwnItemInfo>& InDirtyItems)>Event                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// struct FInventoryItemData               InventoryItem                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                                   DumpNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryFunctionLibrary_C::RequestSaveItemDrop(const TDelegate<void(int32 InRetCode, TArray<struct FOwnItemInfo>& InDirtyItems)>& Event, const struct FInventoryItemData& InventoryItem, int32 DumpNum, class UObject* __WorldContext, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "RequestSaveItemDrop");

	Params::InventoryFunctionLibrary_C_RequestSaveItemDrop Parms{};

	Parms.Event = Event;
	Parms.InventoryItem = std::move(InventoryItem);
	Parms.DumpNum = DumpNum;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.UnbindRequestSaveItemDrop
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TDelegate<void(int32 InRetCode, TArray<struct FOwnItemInfo>& InDirtyItems)>Event                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryFunctionLibrary_C::UnbindRequestSaveItemDrop(const TDelegate<void(int32 InRetCode, TArray<struct FOwnItemInfo>& InDirtyItems)>& Event, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "UnbindRequestSaveItemDrop");

	Params::InventoryFunctionLibrary_C_UnbindRequestSaveItemDrop Parms{};

	Parms.Event = Event;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.RequestSaveItemMoveToStorage
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TDelegate<void(int32 InRetCode, TArray<struct FOwnItemInfo>& InDirtyItems)>Event                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// struct FInventoryItemData               InventoryItemData                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                                   StorageNumber                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryFunctionLibrary_C::RequestSaveItemMoveToStorage(const TDelegate<void(int32 InRetCode, TArray<struct FOwnItemInfo>& InDirtyItems)>& Event, const struct FInventoryItemData& InventoryItemData, int32 StorageNumber, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "RequestSaveItemMoveToStorage");

	Params::InventoryFunctionLibrary_C_RequestSaveItemMoveToStorage Parms{};

	Parms.Event = Event;
	Parms.InventoryItemData = std::move(InventoryItemData);
	Parms.StorageNumber = StorageNumber;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.UnbindSaveItemMoveToStorage
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TDelegate<void(int32 InRetCode, TArray<struct FOwnItemInfo>& InDirtyItems)>Event                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryFunctionLibrary_C::UnbindSaveItemMoveToStorage(const TDelegate<void(int32 InRetCode, TArray<struct FOwnItemInfo>& InDirtyItems)>& Event, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "UnbindSaveItemMoveToStorage");

	Params::InventoryFunctionLibrary_C_UnbindSaveItemMoveToStorage Parms{};

	Parms.Event = Event;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Add Plus Text
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Num                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Return                                                 (Parm, OutParm)

void UInventoryFunctionLibrary_C::Add_Plus_Text(int32 Num, class UObject* __WorldContext, class FText* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "Add Plus Text");

	Params::InventoryFunctionLibrary_C_Add_Plus_Text Parms{};

	Parms.Num = Num;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = std::move(Parms.Return);
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetImagineSlotNumber
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterImagine                 MasterImagine                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryFunctionLibrary_C::GetImagineSlotNumber(const struct FSBMasterImagine& MasterImagine, class UObject* __WorldContext, int32* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "GetImagineSlotNumber");

	Params::InventoryFunctionLibrary_C_GetImagineSlotNumber Parms{};

	Parms.MasterImagine = std::move(MasterImagine);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetFindWeaponData
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           UniqueId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   StorageNumber                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBWeaponItemData                WeaponData                                             (Parm, OutParm)

void UInventoryFunctionLibrary_C::GetFindWeaponData(const class FString& UniqueId, int32 StorageNumber, class UObject* __WorldContext, struct FSBWeaponItemData* WeaponData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "GetFindWeaponData");

	Params::InventoryFunctionLibrary_C_GetFindWeaponData Parms{};

	Parms.UniqueId = std::move(UniqueId);
	Parms.StorageNumber = StorageNumber;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (WeaponData != nullptr)
		*WeaponData = std::move(Parms.WeaponData);
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.SetWeaponStatusText
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InWeaponID                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InLevel                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                       Ap                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                       Cp                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                       STR                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                       VIT                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                       DEX                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                       INT                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                       MND                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                       Attribute                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                       Special                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryFunctionLibrary_C::SetWeaponStatusText(const int32 InWeaponID, const int32 InLevel, class UTextBlock* Ap, class UTextBlock* Cp, class UTextBlock* STR, class UTextBlock* VIT, class UTextBlock* DEX, class UTextBlock* INT, class UTextBlock* MND, class UTextBlock* Attribute, class UTextBlock* Special, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "SetWeaponStatusText");

	Params::InventoryFunctionLibrary_C_SetWeaponStatusText Parms{};

	Parms.InWeaponID = InWeaponID;
	Parms.InLevel = InLevel;
	Parms.Ap = Ap;
	Parms.Cp = Cp;
	Parms.STR = STR;
	Parms.VIT = VIT;
	Parms.DEX = DEX;
	Parms.INT = INT;
	Parms.MND = MND;
	Parms.Attribute = Attribute;
	Parms.Special = Special;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.SetSpecialEffectText
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   WeaponID                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SpecialParkID                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SpecialPerkValue                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           SpecialName                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FText                             SpecialValue                                           (Parm, OutParm)

void UInventoryFunctionLibrary_C::SetSpecialEffectText(const int32 WeaponID, int32 Level, int32 SpecialParkID, int32 SpecialPerkValue, class UObject* __WorldContext, class FString* SpecialName, class FText* SpecialValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "SetSpecialEffectText");

	Params::InventoryFunctionLibrary_C_SetSpecialEffectText Parms{};

	Parms.WeaponID = WeaponID;
	Parms.Level = Level;
	Parms.SpecialParkID = SpecialParkID;
	Parms.SpecialPerkValue = SpecialPerkValue;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (SpecialName != nullptr)
		*SpecialName = std::move(Parms.SpecialName);

	if (SpecialValue != nullptr)
		*SpecialValue = std::move(Parms.SpecialValue);
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Get Item Player Sale Price 
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ItemIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EItemType                               ItemType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsUseLiquidMemory                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Price                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryFunctionLibrary_C::Get_Item_Player_Sale_Price_(int32 ItemIndex, EItemType ItemType, bool IsUseLiquidMemory, class UObject* __WorldContext, int32* Price)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "Get Item Player Sale Price ");

	Params::InventoryFunctionLibrary_C_Get_Item_Player_Sale_Price_ Parms{};

	Parms.ItemIndex = ItemIndex;
	Parms.ItemType = ItemType;
	Parms.IsUseLiquidMemory = IsUseLiquidMemory;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Price != nullptr)
		*Price = Parms.Price;
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.ItemSortTypeToStorageSortRule
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBItemSortType                         ItemSortType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                                   StorageSortRule                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryFunctionLibrary_C::ItemSortTypeToStorageSortRule(ESBItemSortType ItemSortType, class UObject* __WorldContext, uint8* StorageSortRule)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "ItemSortTypeToStorageSortRule");

	Params::InventoryFunctionLibrary_C_ItemSortTypeToStorageSortRule Parms{};

	Parms.ItemSortType = ItemSortType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (StorageSortRule != nullptr)
		*StorageSortRule = Parms.StorageSortRule;
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.StorageSortRuleToItemSortType
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// uint8                                   StorageSortRule                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBItemSortType                         ItemSortType                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryFunctionLibrary_C::StorageSortRuleToItemSortType(uint8 StorageSortRule, class UObject* __WorldContext, ESBItemSortType* ItemSortType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "StorageSortRuleToItemSortType");

	Params::InventoryFunctionLibrary_C_StorageSortRuleToItemSortType Parms{};

	Parms.StorageSortRule = StorageSortRule;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (ItemSortType != nullptr)
		*ItemSortType = Parms.ItemSortType;
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Is Lock Item
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           InItemUniqueId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   StorageNumber                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bLock                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryFunctionLibrary_C::Is_Lock_Item(const class FString& InItemUniqueId, const int32 StorageNumber, class UObject* __WorldContext, bool* bLock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "Is Lock Item");

	Params::InventoryFunctionLibrary_C_Is_Lock_Item Parms{};

	Parms.InItemUniqueId = std::move(InItemUniqueId);
	Parms.StorageNumber = StorageNumber;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bLock != nullptr)
		*bLock = Parms.bLock;
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Get Use Item Window Type
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EUseItemWindowType                      WindowType                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Valu                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Time                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryFunctionLibrary_C::Get_Use_Item_Window_Type(int32 ItemIndex, class UObject* __WorldContext, EUseItemWindowType* WindowType, int32* Valu, int32* Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "Get Use Item Window Type");

	Params::InventoryFunctionLibrary_C_Get_Use_Item_Window_Type Parms{};

	Parms.ItemIndex = ItemIndex;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (WindowType != nullptr)
		*WindowType = Parms.WindowType;

	if (Valu != nullptr)
		*Valu = Parms.Valu;

	if (Time != nullptr)
		*Time = Parms.Time;
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Get Imagine Park Data
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PerkId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             ParkName                                               (Parm, OutParm)
// class FText                             Effect_Value                                           (Parm, OutParm)

void UInventoryFunctionLibrary_C::Get_Imagine_Park_Data(int32 PerkId, class UObject* __WorldContext, bool* Result, class FText* ParkName, class FText* Effect_Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "Get Imagine Park Data");

	Params::InventoryFunctionLibrary_C_Get_Imagine_Park_Data Parms{};

	Parms.PerkId = PerkId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (ParkName != nullptr)
		*ParkName = std::move(Parms.ParkName);

	if (Effect_Value != nullptr)
		*Effect_Value = std::move(Parms.Effect_Value);
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetSellItemUpRate
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Rare                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryFunctionLibrary_C::GetSellItemUpRate(class UObject* __WorldContext, float* Rare)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "GetSellItemUpRate");

	Params::InventoryFunctionLibrary_C_GetSellItemUpRate Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Rare != nullptr)
		*Rare = Parms.Rare;
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.IsUsedItem
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           InUniqueId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   InStorageNumber                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bUse                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryFunctionLibrary_C::IsUsedItem(const class FString& InUniqueId, const int32 InStorageNumber, class UObject* __WorldContext, bool* bUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "IsUsedItem");

	Params::InventoryFunctionLibrary_C_IsUsedItem Parms{};

	Parms.InUniqueId = std::move(InUniqueId);
	Parms.InStorageNumber = InStorageNumber;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bUse != nullptr)
		*bUse = Parms.bUse;
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Is BPPChange Item
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EItemType                               InItemType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bChange                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryFunctionLibrary_C::Is_BPPChange_Item(int32 ItemId, EItemType InItemType, class UObject* __WorldContext, bool* bChange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "Is BPPChange Item");

	Params::InventoryFunctionLibrary_C_Is_BPPChange_Item Parms{};

	Parms.ItemId = ItemId;
	Parms.InItemType = InItemType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bChange != nullptr)
		*bChange = Parms.bChange;
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.IsUseCheckOutBuffItem
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    NeedToCheck                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryFunctionLibrary_C::IsUseCheckOutBuffItem(int32 ItemId, class UObject* __WorldContext, bool* NeedToCheck)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "IsUseCheckOutBuffItem");

	Params::InventoryFunctionLibrary_C_IsUseCheckOutBuffItem Parms{};

	Parms.ItemId = ItemId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (NeedToCheck != nullptr)
		*NeedToCheck = Parms.NeedToCheck;
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.CheckAllowUseOtherItem
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemMasterData                  TargetMasterData1                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CanUseItem                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryFunctionLibrary_C::CheckAllowUseOtherItem(const struct FItemMasterData& TargetMasterData1, class UObject* __WorldContext, bool* CanUseItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "CheckAllowUseOtherItem");

	Params::InventoryFunctionLibrary_C_CheckAllowUseOtherItem Parms{};

	Parms.TargetMasterData1 = std::move(TargetMasterData1);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (CanUseItem != nullptr)
		*CanUseItem = Parms.CanUseItem;
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.CreateDelayAddGridItemIconBtn
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGridPanel*                       ParentGridPanel                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CreateNum                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MatricesNam                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   MagineintervalTop                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   MagineintervalLeft                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsImagineSimpleTooltip                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsToolTipEnable                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bIsRightClickAccept                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryFunctionLibrary_C::CreateDelayAddGridItemIconBtn(class UGridPanel* ParentGridPanel, int32 CreateNum, int32 MatricesNam, float MagineintervalTop, float MagineintervalLeft, bool IsImagineSimpleTooltip, bool IsToolTipEnable, bool bIsRightClickAccept, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "CreateDelayAddGridItemIconBtn");

	Params::InventoryFunctionLibrary_C_CreateDelayAddGridItemIconBtn Parms{};

	Parms.ParentGridPanel = ParentGridPanel;
	Parms.CreateNum = CreateNum;
	Parms.MatricesNam = MatricesNam;
	Parms.MagineintervalTop = MagineintervalTop;
	Parms.MagineintervalLeft = MagineintervalLeft;
	Parms.IsImagineSimpleTooltip = IsImagineSimpleTooltip;
	Parms.IsToolTipEnable = IsToolTipEnable;
	Parms.bIsRightClickAccept = bIsRightClickAccept;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.IsItemNotSale
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ItemIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EItemType                               ItemType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    NotSale                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryFunctionLibrary_C::IsItemNotSale(int32 ItemIndex, EItemType ItemType, class UObject* __WorldContext, bool* NotSale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "IsItemNotSale");

	Params::InventoryFunctionLibrary_C_IsItemNotSale Parms{};

	Parms.ItemIndex = ItemIndex;
	Parms.ItemType = ItemType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (NotSale != nullptr)
		*NotSale = Parms.NotSale;
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.CollapsedGridSlot
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGridPanel*                       GridPanel                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryFunctionLibrary_C::CollapsedGridSlot(class UGridPanel* GridPanel, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "CollapsedGridSlot");

	Params::InventoryFunctionLibrary_C_CollapsedGridSlot Parms{};

	Parms.GridPanel = GridPanel;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.FindWeaponDataInEquipmentBagOrCharacterStorage
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InWeaponUniqueId                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBWeaponItemData                WeaponData                                             (Parm, OutParm)

void UInventoryFunctionLibrary_C::FindWeaponDataInEquipmentBagOrCharacterStorage(const class FString& InWeaponUniqueId, class UObject* __WorldContext, bool* IsValid, struct FSBWeaponItemData* WeaponData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "FindWeaponDataInEquipmentBagOrCharacterStorage");

	Params::InventoryFunctionLibrary_C_FindWeaponDataInEquipmentBagOrCharacterStorage Parms{};

	Parms.InWeaponUniqueId = std::move(InWeaponUniqueId);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	if (WeaponData != nullptr)
		*WeaponData = std::move(Parms.WeaponData);
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetWeaponStickerRemoveItemName
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           OutItemName                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UInventoryFunctionLibrary_C::GetWeaponStickerRemoveItemName(class UObject* __WorldContext, class FString* OutItemName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "GetWeaponStickerRemoveItemName");

	Params::InventoryFunctionLibrary_C_GetWeaponStickerRemoveItemName Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutItemName != nullptr)
		*OutItemName = std::move(Parms.OutItemName);
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Get Inventory Sort Rule Item
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   SelectIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBItemSortType                         SortType                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryFunctionLibrary_C::Get_Inventory_Sort_Rule_Item(int32 SelectIndex, class UObject* __WorldContext, ESBItemSortType* SortType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "Get Inventory Sort Rule Item");

	Params::InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Item Parms{};

	Parms.SelectIndex = SelectIndex;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (SortType != nullptr)
		*SortType = Parms.SortType;
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Get Inventory Sort Rule Plug
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   SelectIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBItemSortType                         SortType                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryFunctionLibrary_C::Get_Inventory_Sort_Rule_Plug(int32 SelectIndex, class UObject* __WorldContext, ESBItemSortType* SortType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "Get Inventory Sort Rule Plug");

	Params::InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Plug Parms{};

	Parms.SelectIndex = SelectIndex;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (SortType != nullptr)
		*SortType = Parms.SortType;
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetInventorySortRuleNoLv
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   SelectIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBItemSortType                         SortType                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryFunctionLibrary_C::GetInventorySortRuleNoLv(int32 SelectIndex, class UObject* __WorldContext, ESBItemSortType* SortType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "GetInventorySortRuleNoLv");

	Params::InventoryFunctionLibrary_C_GetInventorySortRuleNoLv Parms{};

	Parms.SelectIndex = SelectIndex;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (SortType != nullptr)
		*SortType = Parms.SortType;
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Get Inventory Sort Rule Equipment
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   SelectIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBItemSortType                         SortType                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryFunctionLibrary_C::Get_Inventory_Sort_Rule_Equipment(int32 SelectIndex, class UObject* __WorldContext, ESBItemSortType* SortType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "Get Inventory Sort Rule Equipment");

	Params::InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Equipment Parms{};

	Parms.SelectIndex = SelectIndex;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (SortType != nullptr)
		*SortType = Parms.SortType;
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Get Inventory Sort Rule Weapon
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   SelectIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBItemSortType                         SortType                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryFunctionLibrary_C::Get_Inventory_Sort_Rule_Weapon(int32 SelectIndex, class UObject* __WorldContext, ESBItemSortType* SortType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "Get Inventory Sort Rule Weapon");

	Params::InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule_Weapon Parms{};

	Parms.SelectIndex = SelectIndex;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (SortType != nullptr)
		*SortType = Parms.SortType;
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Get Inventory Sort Rule
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   SelectIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ModeNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBItemSortType                         SortType                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryFunctionLibrary_C::Get_Inventory_Sort_Rule(int32 SelectIndex, int32 ModeNum, class UObject* __WorldContext, ESBItemSortType* SortType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "Get Inventory Sort Rule");

	Params::InventoryFunctionLibrary_C_Get_Inventory_Sort_Rule Parms{};

	Parms.SelectIndex = SelectIndex;
	Parms.ModeNum = ModeNum;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (SortType != nullptr)
		*SortType = Parms.SortType;
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetInventorySortName_Item
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                     SortList1                                              (Parm, OutParm)

void UInventoryFunctionLibrary_C::GetInventorySortName_Item(class UObject* __WorldContext, TArray<class FName>* SortList1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "GetInventorySortName_Item");

	Params::InventoryFunctionLibrary_C_GetInventorySortName_Item Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (SortList1 != nullptr)
		*SortList1 = std::move(Parms.SortList1);
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetInventorySortName_Plug
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                     SortList1                                              (Parm, OutParm)

void UInventoryFunctionLibrary_C::GetInventorySortName_Plug(class UObject* __WorldContext, TArray<class FName>* SortList1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "GetInventorySortName_Plug");

	Params::InventoryFunctionLibrary_C_GetInventorySortName_Plug Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (SortList1 != nullptr)
		*SortList1 = std::move(Parms.SortList1);
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetInventorySortName_NoLv
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                     SortList1                                              (Parm, OutParm)

void UInventoryFunctionLibrary_C::GetInventorySortName_NoLv(class UObject* __WorldContext, TArray<class FName>* SortList1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "GetInventorySortName_NoLv");

	Params::InventoryFunctionLibrary_C_GetInventorySortName_NoLv Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (SortList1 != nullptr)
		*SortList1 = std::move(Parms.SortList1);
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetInventorySortName_Equipment
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                     SortList1                                              (Parm, OutParm)

void UInventoryFunctionLibrary_C::GetInventorySortName_Equipment(class UObject* __WorldContext, TArray<class FName>* SortList1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "GetInventorySortName_Equipment");

	Params::InventoryFunctionLibrary_C_GetInventorySortName_Equipment Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (SortList1 != nullptr)
		*SortList1 = std::move(Parms.SortList1);
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetInventorySortName_Weapon
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                     SortList1                                              (Parm, OutParm)

void UInventoryFunctionLibrary_C::GetInventorySortName_Weapon(class UObject* __WorldContext, TArray<class FName>* SortList1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "GetInventorySortName_Weapon");

	Params::InventoryFunctionLibrary_C_GetInventorySortName_Weapon Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (SortList1 != nullptr)
		*SortList1 = std::move(Parms.SortList1);
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetInventorySortIndex_Item
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBItemSortType                         SortType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryFunctionLibrary_C::GetInventorySortIndex_Item(ESBItemSortType SortType, class UObject* __WorldContext, int32* Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "GetInventorySortIndex_Item");

	Params::InventoryFunctionLibrary_C_GetInventorySortIndex_Item Parms{};

	Parms.SortType = SortType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Param_Index != nullptr)
		*Param_Index = Parms.Param_Index;
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetInventorySortIndex_Plug
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBItemSortType                         SortType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryFunctionLibrary_C::GetInventorySortIndex_Plug(ESBItemSortType SortType, class UObject* __WorldContext, int32* Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "GetInventorySortIndex_Plug");

	Params::InventoryFunctionLibrary_C_GetInventorySortIndex_Plug Parms{};

	Parms.SortType = SortType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Param_Index != nullptr)
		*Param_Index = Parms.Param_Index;
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetInventorySortIndex_NoLv
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBItemSortType                         SortType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryFunctionLibrary_C::GetInventorySortIndex_NoLv(ESBItemSortType SortType, class UObject* __WorldContext, int32* Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "GetInventorySortIndex_NoLv");

	Params::InventoryFunctionLibrary_C_GetInventorySortIndex_NoLv Parms{};

	Parms.SortType = SortType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Param_Index != nullptr)
		*Param_Index = Parms.Param_Index;
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetInventorySortIndex_Equipment
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBItemSortType                         SortType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryFunctionLibrary_C::GetInventorySortIndex_Equipment(ESBItemSortType SortType, class UObject* __WorldContext, int32* Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "GetInventorySortIndex_Equipment");

	Params::InventoryFunctionLibrary_C_GetInventorySortIndex_Equipment Parms{};

	Parms.SortType = SortType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Param_Index != nullptr)
		*Param_Index = Parms.Param_Index;
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetInventorySortIndex_Weapon
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBItemSortType                         SortType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryFunctionLibrary_C::GetInventorySortIndex_Weapon(ESBItemSortType SortType, class UObject* __WorldContext, int32* Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "GetInventorySortIndex_Weapon");

	Params::InventoryFunctionLibrary_C_GetInventorySortIndex_Weapon Parms{};

	Parms.SortType = SortType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Param_Index != nullptr)
		*Param_Index = Parms.Param_Index;
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetInventorySortName
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                     SortList1                                              (Parm, OutParm)

void UInventoryFunctionLibrary_C::GetInventorySortName(int32 Param_Index, class UObject* __WorldContext, TArray<class FName>* SortList1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "GetInventorySortName");

	Params::InventoryFunctionLibrary_C_GetInventorySortName Parms{};

	Parms.Param_Index = Param_Index;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (SortList1 != nullptr)
		*SortList1 = std::move(Parms.SortList1);
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetInventorySortIndex
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBItemSortType                         SortType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Index1                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryFunctionLibrary_C::GetInventorySortIndex(int32 Param_Index, ESBItemSortType SortType, class UObject* __WorldContext, int32* Index1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "GetInventorySortIndex");

	Params::InventoryFunctionLibrary_C_GetInventorySortIndex Parms{};

	Parms.Param_Index = Param_Index;
	Parms.SortType = SortType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Index1 != nullptr)
		*Index1 = Parms.Index1;
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.Get Inventory Sort Mode Num
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemFilterType                         Filter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsItemMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    NotBStack                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ModeNum                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryFunctionLibrary_C::Get_Inventory_Sort_Mode_Num(EItemFilterType Filter, bool IsItemMode, bool NotBStack, class UObject* __WorldContext, int32* ModeNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "Get Inventory Sort Mode Num");

	Params::InventoryFunctionLibrary_C_Get_Inventory_Sort_Mode_Num Parms{};

	Parms.Filter = Filter;
	Parms.IsItemMode = IsItemMode;
	Parms.NotBStack = NotBStack;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (ModeNum != nullptr)
		*ModeNum = Parms.ModeNum;
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.SetWeaponStatusTextOneItem
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     OwnItemInfo                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UTextBlock*                       Ap                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                       Cp                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                       STR                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                       VIT                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                       DEX                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                       INT                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                       MND                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                       Attribute                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                       Special                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryFunctionLibrary_C::SetWeaponStatusTextOneItem(const struct FOwnItemInfo& OwnItemInfo, class UTextBlock* Ap, class UTextBlock* Cp, class UTextBlock* STR, class UTextBlock* VIT, class UTextBlock* DEX, class UTextBlock* INT, class UTextBlock* MND, class UTextBlock* Attribute, class UTextBlock* Special, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "SetWeaponStatusTextOneItem");

	Params::InventoryFunctionLibrary_C_SetWeaponStatusTextOneItem Parms{};

	Parms.OwnItemInfo = std::move(OwnItemInfo);
	Parms.Ap = Ap;
	Parms.Cp = Cp;
	Parms.STR = STR;
	Parms.VIT = VIT;
	Parms.DEX = DEX;
	Parms.INT = INT;
	Parms.MND = MND;
	Parms.Attribute = Attribute;
	Parms.Special = Special;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.IsWeaponStickerAttachd
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           UniqueId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   StorageNumber                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsAttach                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryFunctionLibrary_C::IsWeaponStickerAttachd(const class FString& UniqueId, int32 StorageNumber, class UObject* __WorldContext, bool* IsAttach)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "IsWeaponStickerAttachd");

	Params::InventoryFunctionLibrary_C_IsWeaponStickerAttachd Parms{};

	Parms.UniqueId = std::move(UniqueId);
	Parms.StorageNumber = StorageNumber;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (IsAttach != nullptr)
		*IsAttach = Parms.IsAttach;
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.CalcPageIndex
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Use                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   IconIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CurrentPage                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   PageIconMax                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Active                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Param_Index                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryFunctionLibrary_C::CalcPageIndex(bool Use, int32 IconIndex, int32 CurrentPage, int32 PageIconMax, class UObject* __WorldContext, bool* Active, int32* Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "CalcPageIndex");

	Params::InventoryFunctionLibrary_C_CalcPageIndex Parms{};

	Parms.Use = Use;
	Parms.IconIndex = IconIndex;
	Parms.CurrentPage = CurrentPage;
	Parms.PageIconMax = PageIconMax;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Active != nullptr)
		*Active = Parms.Active;

	if (Param_Index != nullptr)
		*Param_Index = Parms.Param_Index;
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetFilterText
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemFilterType                         Filter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UInventoryFunctionLibrary_C::GetFilterText(EItemFilterType Filter, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "GetFilterText");

	Params::InventoryFunctionLibrary_C_GetFilterText Parms{};

	Parms.Filter = Filter;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.SetFilterComboBox
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UComboBoxString*                  Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             RowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryFunctionLibrary_C::SetFilterComboBox(class UComboBoxString* Target, class FName RowName, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "SetFilterComboBox");

	Params::InventoryFunctionLibrary_C_SetFilterComboBox Parms{};

	Parms.Target = Target;
	Parms.RowName = RowName;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.SetFilterBtnType
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFilterButton_C*                  Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             RowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryFunctionLibrary_C::SetFilterBtnType(class UFilterButton_C* Target, class FName RowName, int32 Param_Index, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "SetFilterBtnType");

	Params::InventoryFunctionLibrary_C_SetFilterBtnType Parms{};

	Parms.Target = Target;
	Parms.RowName = RowName;
	Parms.Param_Index = Param_Index;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetFilterBtnType
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             RowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EItemFilterType                         Filter                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryFunctionLibrary_C::GetFilterBtnType(class FName RowName, int32 Param_Index, class UObject* __WorldContext, EItemFilterType* Filter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "GetFilterBtnType");

	Params::InventoryFunctionLibrary_C_GetFilterBtnType Parms{};

	Parms.RowName = RowName;
	Parms.Param_Index = Param_Index;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Filter != nullptr)
		*Filter = Parms.Filter;
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.SetSortComboBox
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UComboBoxString*                  Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             RowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   FilterIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBItemSortType                         Select                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryFunctionLibrary_C::SetSortComboBox(class UComboBoxString* Target, class FName RowName, int32 FilterIndex, ESBItemSortType Select, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "SetSortComboBox");

	Params::InventoryFunctionLibrary_C_SetSortComboBox Parms{};

	Parms.Target = Target;
	Parms.RowName = RowName;
	Parms.FilterIndex = FilterIndex;
	Parms.Select = Select;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetSortText
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBItemSortType                         Sort                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UInventoryFunctionLibrary_C::GetSortText(ESBItemSortType Sort, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "GetSortText");

	Params::InventoryFunctionLibrary_C_GetSortText Parms{};

	Parms.Sort = Sort;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetSortIndex
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBItemSortType                         Sort                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             RowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   FilterIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryFunctionLibrary_C::GetSortIndex(ESBItemSortType Sort, class FName RowName, int32 FilterIndex, class UObject* __WorldContext, int32* Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "GetSortIndex");

	Params::InventoryFunctionLibrary_C_GetSortIndex Parms{};

	Parms.Sort = Sort;
	Parms.RowName = RowName;
	Parms.FilterIndex = FilterIndex;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Param_Index != nullptr)
		*Param_Index = Parms.Param_Index;
}


// Function InventoryFunctionLibrary.InventoryFunctionLibrary_C.GetSortType
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   SortIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             RowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   FilterIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBItemSortType                         Array_Element                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryFunctionLibrary_C::GetSortType(int32 SortIndex, class FName RowName, int32 FilterIndex, class UObject* __WorldContext, ESBItemSortType* Array_Element)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("InventoryFunctionLibrary_C", "GetSortType");

	Params::InventoryFunctionLibrary_C_GetSortType Parms{};

	Parms.SortIndex = SortIndex;
	Parms.RowName = RowName;
	Parms.FilterIndex = FilterIndex;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Array_Element != nullptr)
		*Array_Element = Parms.Array_Element;
}

}

