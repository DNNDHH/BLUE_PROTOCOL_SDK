#pragma once

 

// Package: PictureBook_CraftRecipeItem

#include "Basic.hpp"

#include "PictureBook_CraftRecipeItem_classes.hpp"
#include "PictureBook_CraftRecipeItem_parameters.hpp"


namespace SDK
{

// Function PictureBook_CraftRecipeItem.PictureBook_CraftRecipeItem_C.ExecuteUbergraph_PictureBook_CraftRecipeItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPictureBook_CraftRecipeItem_C::ExecuteUbergraph_PictureBook_CraftRecipeItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureBook_CraftRecipeItem_C", "ExecuteUbergraph_PictureBook_CraftRecipeItem");

	Params::PictureBook_CraftRecipeItem_C_ExecuteUbergraph_PictureBook_CraftRecipeItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PictureBook_CraftRecipeItem.PictureBook_CraftRecipeItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPictureBook_CraftRecipeItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureBook_CraftRecipeItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PictureBook_CraftRecipeItem.PictureBook_CraftRecipeItem_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPictureBook_CraftRecipeItem_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureBook_CraftRecipeItem_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PictureBook_CraftRecipeItem.PictureBook_CraftRecipeItem_C.UnbindItemChangeAmountDelegate
// (BlueprintCallable, BlueprintEvent)

void UPictureBook_CraftRecipeItem_C::UnbindItemChangeAmountDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureBook_CraftRecipeItem_C", "UnbindItemChangeAmountDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PictureBook_CraftRecipeItem.PictureBook_CraftRecipeItem_C.OnOwnItemChangeDelegate
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBChangeItemAmountParam         InParam                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPictureBook_CraftRecipeItem_C::OnOwnItemChangeDelegate(const struct FSBChangeItemAmountParam& InParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureBook_CraftRecipeItem_C", "OnOwnItemChangeDelegate");

	Params::PictureBook_CraftRecipeItem_C_OnOwnItemChangeDelegate Parms{};

	Parms.InParam = std::move(InParam);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PictureBook_CraftRecipeItem.PictureBook_CraftRecipeItem_C.GetItemName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemIdx                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             OutIsItemNameText                                      (Parm, OutParm)

void UPictureBook_CraftRecipeItem_C::GetItemName(int32 ItemIdx, class FText* OutIsItemNameText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureBook_CraftRecipeItem_C", "GetItemName");

	Params::PictureBook_CraftRecipeItem_C_GetItemName Parms{};

	Parms.ItemIdx = ItemIdx;

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsItemNameText != nullptr)
		*OutIsItemNameText = std::move(Parms.OutIsItemNameText);
}


// Function PictureBook_CraftRecipeItem.PictureBook_CraftRecipeItem_C.getInventoryItemAmount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemIdx                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OutIsAmount                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPictureBook_CraftRecipeItem_C::GetInventoryItemAmount(int32 ItemIdx, int32* OutIsAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureBook_CraftRecipeItem_C", "getInventoryItemAmount");

	Params::PictureBook_CraftRecipeItem_C_GetInventoryItemAmount Parms{};

	Parms.ItemIdx = ItemIdx;

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsAmount != nullptr)
		*OutIsAmount = Parms.OutIsAmount;
}


// Function PictureBook_CraftRecipeItem.PictureBook_CraftRecipeItem_C.getStorageItemAmount
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemIdx                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OutIsAmount                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPictureBook_CraftRecipeItem_C::GetStorageItemAmount(int32 ItemIdx, int32* OutIsAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureBook_CraftRecipeItem_C", "getStorageItemAmount");

	Params::PictureBook_CraftRecipeItem_C_GetStorageItemAmount Parms{};

	Parms.ItemIdx = ItemIdx;

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsAmount != nullptr)
		*OutIsAmount = Parms.OutIsAmount;
}


// Function PictureBook_CraftRecipeItem.PictureBook_CraftRecipeItem_C.IsCraftable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Craftable                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPictureBook_CraftRecipeItem_C::IsCraftable(bool* Craftable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureBook_CraftRecipeItem_C", "IsCraftable");

	Params::PictureBook_CraftRecipeItem_C_IsCraftable Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Craftable != nullptr)
		*Craftable = Parms.Craftable;
}

}

