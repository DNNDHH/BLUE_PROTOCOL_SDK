#pragma once

 

// Package: WBP_StorageRowListOwner

#include "Basic.hpp"

#include "WBP_StorageRowListOwner_classes.hpp"
#include "WBP_StorageRowListOwner_parameters.hpp"


namespace SDK
{

// Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.OnItemClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryData                   Param_OnItemClick                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_StorageRowListOwner_C::OnItemClick__DelegateSignature(const struct FInventoryData& Param_OnItemClick)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StorageRowListOwner_C", "OnItemClick__DelegateSignature");

	Params::WBP_StorageRowListOwner_C_OnItemClick__DelegateSignature Parms{};

	Parms.Param_OnItemClick = std::move(Param_OnItemClick);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.OnItemClickRight__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryData                   NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_StorageRowListOwner_C::OnItemClickRight__DelegateSignature(const struct FInventoryData& NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StorageRowListOwner_C", "OnItemClickRight__DelegateSignature");

	Params::WBP_StorageRowListOwner_C_OnItemClickRight__DelegateSignature Parms{};

	Parms.NewParam = std::move(NewParam);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.ExecuteUbergraph_WBP_StorageRowListOwner
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StorageRowListOwner_C::ExecuteUbergraph_WBP_StorageRowListOwner(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StorageRowListOwner_C", "ExecuteUbergraph_WBP_StorageRowListOwner");

	Params::WBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.ScrollVisibleUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Offset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StorageRowListOwner_C::ScrollVisibleUpdate(float Offset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StorageRowListOwner_C", "ScrollVisibleUpdate");

	Params::WBP_StorageRowListOwner_C_ScrollVisibleUpdate Parms{};

	Parms.Offset = Offset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.BndEvt__WBP_StorageRowListOwner_ScrollBox_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   CurrentOffset                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StorageRowListOwner_C::BndEvt__WBP_StorageRowListOwner_ScrollBox_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StorageRowListOwner_C", "BndEvt__WBP_StorageRowListOwner_ScrollBox_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature");

	Params::WBP_StorageRowListOwner_C_BndEvt__WBP_StorageRowListOwner_ScrollBox_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature Parms{};

	Parms.CurrentOffset = CurrentOffset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_StorageRowListOwner_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StorageRowListOwner_C", "PreConstruct");

	Params::WBP_StorageRowListOwner_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.AddOptionFilter
// (BlueprintCallable, BlueprintEvent)

void UWBP_StorageRowListOwner_C::AddOptionFilter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StorageRowListOwner_C", "AddOptionFilter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.Reset
// (BlueprintCallable, BlueprintEvent)

void UWBP_StorageRowListOwner_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StorageRowListOwner_C", "Reset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.MultiStart
// (BlueprintCallable, BlueprintEvent)

void UWBP_StorageRowListOwner_C::MultiStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StorageRowListOwner_C", "MultiStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryData                   ItemData                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UWBP_StorageRowListItem_C*        UpdetaListItem                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StorageRowListOwner_C::CustomEvent_1(const struct FInventoryData& ItemData, class UWBP_StorageRowListItem_C* UpdetaListItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StorageRowListOwner_C", "CustomEvent_1");

	Params::WBP_StorageRowListOwner_C_CustomEvent_1 Parms{};

	Parms.ItemData = std::move(ItemData);
	Parms.UpdetaListItem = UpdetaListItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.IconAllSelectfalse
// (BlueprintCallable, BlueprintEvent)

void UWBP_StorageRowListOwner_C::IconAllSelectfalse()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StorageRowListOwner_C", "IconAllSelectfalse");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.LockIconUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           UniqueId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    bLock                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_StorageRowListOwner_C::LockIconUpdate(const class FString& UniqueId, bool bLock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StorageRowListOwner_C", "LockIconUpdate");

	Params::WBP_StorageRowListOwner_C_LockIconUpdate Parms{};

	Parms.UniqueId = std::move(UniqueId);
	Parms.bLock = bLock;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryData                   ItemData                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UWBP_StorageRowListItem_C*        UpdetaListItem                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StorageRowListOwner_C::CustomEvent_0(const struct FInventoryData& ItemData, class UWBP_StorageRowListItem_C* UpdetaListItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StorageRowListOwner_C", "CustomEvent_0");

	Params::WBP_StorageRowListOwner_C_CustomEvent_0 Parms{};

	Parms.ItemData = std::move(ItemData);
	Parms.UpdetaListItem = UpdetaListItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.UpdetaItemList
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBItemSortType                         SortType2                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EItemFilterType                         Param_FilterType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFilterGroup>             FilterArray                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    ScrollReset                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_StorageRowListOwner_C::UpdetaItemList(const ESBItemSortType SortType2, EItemFilterType Param_FilterType, TArray<struct FFilterGroup>& FilterArray, bool ScrollReset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StorageRowListOwner_C", "UpdetaItemList");

	Params::WBP_StorageRowListOwner_C_UpdetaItemList Parms{};

	Parms.SortType2 = SortType2;
	Parms.Param_FilterType = Param_FilterType;
	Parms.FilterArray = std::move(FilterArray);
	Parms.ScrollReset = ScrollReset;

	UObject::ProcessEvent(Func, &Parms);

	FilterArray = std::move(Parms.FilterArray);
}


// Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.ResettingStorageListItem
// (BlueprintCallable, BlueprintEvent)

void UWBP_StorageRowListOwner_C::ResettingStorageListItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StorageRowListOwner_C", "ResettingStorageListItem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.AddStorageListItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   CreateDelay                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StorageRowListOwner_C::AddStorageListItem(float CreateDelay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StorageRowListOwner_C", "AddStorageListItem");

	Params::WBP_StorageRowListOwner_C_AddStorageListItem Parms{};

	Parms.CreateDelay = CreateDelay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.StorageItemGet
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBItemSortType                         Param_SortType                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EItemFilterType                         InFilter                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFilterGroup>             FilterArray                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_StorageRowListOwner_C::StorageItemGet(const ESBItemSortType Param_SortType, EItemFilterType InFilter, TArray<struct FFilterGroup>& FilterArray)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StorageRowListOwner_C", "StorageItemGet");

	Params::WBP_StorageRowListOwner_C_StorageItemGet Parms{};

	Parms.Param_SortType = Param_SortType;
	Parms.InFilter = InFilter;
	Parms.FilterArray = std::move(FilterArray);

	UObject::ProcessEvent(Func, &Parms);

	FilterArray = std::move(Parms.FilterArray);
}


// Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.SetScrollBoxSizeX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   SizeX                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StorageRowListOwner_C::SetScrollBoxSizeX(float SizeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StorageRowListOwner_C", "SetScrollBoxSizeX");

	Params::WBP_StorageRowListOwner_C_SetScrollBoxSizeX Parms{};

	Parms.SizeX = SizeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.RemoveSelectListItems
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_StorageRowListOwner_C::RemoveSelectListItems()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StorageRowListOwner_C", "RemoveSelectListItems");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.CreateLists
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_StorageRowListOwner_C::CreateLists()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StorageRowListOwner_C", "CreateLists");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.SwitchMultipleSelection
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bAdd                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_StorageRowListOwner_C::SwitchMultipleSelection(bool* bAdd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StorageRowListOwner_C", "SwitchMultipleSelection");

	Params::WBP_StorageRowListOwner_C_SwitchMultipleSelection Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bAdd != nullptr)
		*bAdd = Parms.bAdd;
}


// Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.SelectsItems
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_StorageRowListItem_C*        InputPin                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bAdd                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_StorageRowListOwner_C::SelectsItems(const class UWBP_StorageRowListItem_C*& InputPin, bool* bAdd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StorageRowListOwner_C", "SelectsItems");

	Params::WBP_StorageRowListOwner_C_SelectsItems Parms{};

	Parms.InputPin = InputPin;

	UObject::ProcessEvent(Func, &Parms);

	if (bAdd != nullptr)
		*bAdd = Parms.bAdd;
}


// Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.MaxScrollOffset
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UWBP_StorageRowListOwner_C::MaxScrollOffset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StorageRowListOwner_C", "MaxScrollOffset");

	Params::WBP_StorageRowListOwner_C_MaxScrollOffset Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

