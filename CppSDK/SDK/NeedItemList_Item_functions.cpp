#pragma once

 

// Package: NeedItemList_Item

#include "Basic.hpp"

#include "NeedItemList_Item_classes.hpp"
#include "NeedItemList_Item_parameters.hpp"


namespace SDK
{

// Function NeedItemList_Item.NeedItemList_Item_C.ExecuteUbergraph_NeedItemList_Item
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNeedItemList_Item_C::ExecuteUbergraph_NeedItemList_Item(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeedItemList_Item_C", "ExecuteUbergraph_NeedItemList_Item");

	Params::NeedItemList_Item_C_ExecuteUbergraph_NeedItemList_Item Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NeedItemList_Item.NeedItemList_Item_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNeedItemList_Item_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeedItemList_Item_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NeedItemList_Item.NeedItemList_Item_C.UnbindItemChangeAmountDelegate
// (BlueprintCallable, BlueprintEvent)

void UNeedItemList_Item_C::UnbindItemChangeAmountDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeedItemList_Item_C", "UnbindItemChangeAmountDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NeedItemList_Item.NeedItemList_Item_C.OnOwnItemChangeDelegate
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBChangeItemAmountParam         InParam                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UNeedItemList_Item_C::OnOwnItemChangeDelegate(const struct FSBChangeItemAmountParam& InParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeedItemList_Item_C", "OnOwnItemChangeDelegate");

	Params::NeedItemList_Item_C_OnOwnItemChangeDelegate Parms{};

	Parms.InParam = std::move(InParam);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NeedItemList_Item.NeedItemList_Item_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNeedItemList_Item_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeedItemList_Item_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NeedItemList_Item.NeedItemList_Item_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNeedItemList_Item_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeedItemList_Item_C", "PreConstruct");

	Params::NeedItemList_Item_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NeedItemList_Item.NeedItemList_Item_C.GetItemName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemIdx                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             OutIsItemNameText                                      (Parm, OutParm)

void UNeedItemList_Item_C::GetItemName(int32 ItemIdx, class FText* OutIsItemNameText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeedItemList_Item_C", "GetItemName");

	Params::NeedItemList_Item_C_GetItemName Parms{};

	Parms.ItemIdx = ItemIdx;

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsItemNameText != nullptr)
		*OutIsItemNameText = std::move(Parms.OutIsItemNameText);
}


// Function NeedItemList_Item.NeedItemList_Item_C.getInventoryItemAmount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemIdx                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OutIsAmount                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNeedItemList_Item_C::GetInventoryItemAmount(int32 ItemIdx, int32* OutIsAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeedItemList_Item_C", "getInventoryItemAmount");

	Params::NeedItemList_Item_C_GetInventoryItemAmount Parms{};

	Parms.ItemIdx = ItemIdx;

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsAmount != nullptr)
		*OutIsAmount = Parms.OutIsAmount;
}


// Function NeedItemList_Item.NeedItemList_Item_C.getStorageItemAmount
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemIdx                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OutIsAmount                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNeedItemList_Item_C::GetStorageItemAmount(int32 ItemIdx, int32* OutIsAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeedItemList_Item_C", "getStorageItemAmount");

	Params::NeedItemList_Item_C_GetStorageItemAmount Parms{};

	Parms.ItemIdx = ItemIdx;

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsAmount != nullptr)
		*OutIsAmount = Parms.OutIsAmount;
}


// Function NeedItemList_Item.NeedItemList_Item_C.IsCraftable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Craftable                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNeedItemList_Item_C::IsCraftable(bool* Craftable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeedItemList_Item_C", "IsCraftable");

	Params::NeedItemList_Item_C_IsCraftable Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Craftable != nullptr)
		*Craftable = Parms.Craftable;
}


// Function NeedItemList_Item.NeedItemList_Item_C.InitWidthSize
// (Public, BlueprintCallable, BlueprintEvent)

void UNeedItemList_Item_C::InitWidthSize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NeedItemList_Item_C", "InitWidthSize");

	UObject::ProcessEvent(Func, nullptr);
}

}

