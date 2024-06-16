#pragma once

 

// Package: WBP_InventoryStorageRowListItemWrap

#include "Basic.hpp"

#include "WBP_InventoryStorageRowListItemWrap_classes.hpp"
#include "WBP_InventoryStorageRowListItemWrap_parameters.hpp"


namespace SDK
{

// Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.OnItemClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryData                   ItemData                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UWBP_InventoryStorageRowListItem_C*UpdetaListItem                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryStorageRowListItemWrap_C::OnItemClick__DelegateSignature(const struct FInventoryData& ItemData, class UWBP_InventoryStorageRowListItem_C* UpdetaListItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListItemWrap_C", "OnItemClick__DelegateSignature");

	Params::WBP_InventoryStorageRowListItemWrap_C_OnItemClick__DelegateSignature Parms{};

	Parms.ItemData = std::move(ItemData);
	Parms.UpdetaListItem = UpdetaListItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.OnItemClickRight__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryData                   ItemData                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UWBP_InventoryStorageRowListItem_C*UpdetaListItem                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryStorageRowListItemWrap_C::OnItemClickRight__DelegateSignature(const struct FInventoryData& ItemData, class UWBP_InventoryStorageRowListItem_C* UpdetaListItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListItemWrap_C", "OnItemClickRight__DelegateSignature");

	Params::WBP_InventoryStorageRowListItemWrap_C_OnItemClickRight__DelegateSignature Parms{};

	Parms.ItemData = std::move(ItemData);
	Parms.UpdetaListItem = UpdetaListItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryStorageRowListItemWrap_C::ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListItemWrap_C", "ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap");

	Params::WBP_InventoryStorageRowListItemWrap_C_ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_InventoryStorageRowListItemWrap_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListItemWrap_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.Set Icon Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSelected                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_InventoryStorageRowListItemWrap_C::Set_Icon_Selected(bool IsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListItemWrap_C", "Set Icon Selected");

	Params::WBP_InventoryStorageRowListItemWrap_C_Set_Icon_Selected Parms{};

	Parms.IsSelected = IsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.Initialize
// (BlueprintCallable, BlueprintEvent)

void UWBP_InventoryStorageRowListItemWrap_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListItemWrap_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryData                   ItemData                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UWBP_InventoryStorageRowListItem_C*UpdetaListItem                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryStorageRowListItemWrap_C::CustomEvent_1(const struct FInventoryData& ItemData, class UWBP_InventoryStorageRowListItem_C* UpdetaListItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListItemWrap_C", "CustomEvent_1");

	Params::WBP_InventoryStorageRowListItemWrap_C_CustomEvent_1 Parms{};

	Parms.ItemData = std::move(ItemData);
	Parms.UpdetaListItem = UpdetaListItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryData                   ItemData                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UWBP_InventoryStorageRowListItem_C*UpdetaListItem                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryStorageRowListItemWrap_C::CustomEvent_0(const struct FInventoryData& ItemData, class UWBP_InventoryStorageRowListItem_C* UpdetaListItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListItemWrap_C", "CustomEvent_0");

	Params::WBP_InventoryStorageRowListItemWrap_C_CustomEvent_0 Parms{};

	Parms.ItemData = std::move(ItemData);
	Parms.UpdetaListItem = UpdetaListItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.CreateAndInitialize
// (BlueprintCallable, BlueprintEvent)

void UWBP_InventoryStorageRowListItemWrap_C::CreateAndInitialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListItemWrap_C", "CreateAndInitialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.InitializeItemData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InItemIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   StorageAmount                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryData                   InventoryData                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_InventoryStorageRowListItemWrap_C::InitializeItemData(int32 InItemIndex, int32 StorageAmount, const struct FInventoryData& InventoryData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListItemWrap_C", "InitializeItemData");

	Params::WBP_InventoryStorageRowListItemWrap_C_InitializeItemData Parms{};

	Parms.InItemIndex = InItemIndex;
	Parms.StorageAmount = StorageAmount;
	Parms.InventoryData = std::move(InventoryData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_InventoryStorageRowListItemWrap_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListItemWrap_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.SetScrollVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Offset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InventoryStorageRowListItemWrap_C::SetScrollVisible(float Offset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryStorageRowListItemWrap_C", "SetScrollVisible");

	Params::WBP_InventoryStorageRowListItemWrap_C_SetScrollVisible Parms{};

	Parms.Offset = Offset;

	UObject::ProcessEvent(Func, &Parms);
}

}

