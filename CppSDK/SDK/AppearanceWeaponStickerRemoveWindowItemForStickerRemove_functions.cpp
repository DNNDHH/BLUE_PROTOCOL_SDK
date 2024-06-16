#pragma once

 

// Package: AppearanceWeaponStickerRemoveWindowItemForStickerRemove

#include "Basic.hpp"

#include "AppearanceWeaponStickerRemoveWindowItemForStickerRemove_classes.hpp"
#include "AppearanceWeaponStickerRemoveWindowItemForStickerRemove_parameters.hpp"


namespace SDK
{

// Function AppearanceWeaponStickerRemoveWindowItemForStickerRemove.AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C.ItemSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAppearanceWeaponStickerRemoveWindowItemForStickerRemove_C*InItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAppearanceWeaponStickerRemoveWindowItemForStickerRemove_C::ItemSelected__DelegateSignature(class UAppearanceWeaponStickerRemoveWindowItemForStickerRemove_C* InItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C", "ItemSelected__DelegateSignature");

	Params::AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_ItemSelected__DelegateSignature Parms{};

	Parms.InItem = InItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AppearanceWeaponStickerRemoveWindowItemForStickerRemove.AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C.ExecuteUbergraph_AppearanceWeaponStickerRemoveWindowItemForStickerRemove
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAppearanceWeaponStickerRemoveWindowItemForStickerRemove_C::ExecuteUbergraph_AppearanceWeaponStickerRemoveWindowItemForStickerRemove(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C", "ExecuteUbergraph_AppearanceWeaponStickerRemoveWindowItemForStickerRemove");

	Params::AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_ExecuteUbergraph_AppearanceWeaponStickerRemoveWindowItemForStickerRemove Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AppearanceWeaponStickerRemoveWindowItemForStickerRemove.AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C.BndEvt__BtnListItem_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UAppearanceWeaponStickerRemoveWindowItemForStickerRemove_C::BndEvt__BtnListItem_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C", "BndEvt__BtnListItem_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AppearanceWeaponStickerRemoveWindowItemForStickerRemove.AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C.SetupItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsStickerIndefinite                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InIsSelectable                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   InStickerRemoveItemId                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InStickerRemoveItemHoldNum                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAppearanceWeaponStickerRemoveWindowItemForStickerRemove_C::SetupItem(bool InIsStickerIndefinite, bool InIsSelectable, int32 InStickerRemoveItemId, int32 InStickerRemoveItemHoldNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C", "SetupItem");

	Params::AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetupItem Parms{};

	Parms.InIsStickerIndefinite = InIsStickerIndefinite;
	Parms.InIsSelectable = InIsSelectable;
	Parms.InStickerRemoveItemId = InStickerRemoveItemId;
	Parms.InStickerRemoveItemHoldNum = InStickerRemoveItemHoldNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AppearanceWeaponStickerRemoveWindowItemForStickerRemove.AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C.SetIsSelectable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsSelectable                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAppearanceWeaponStickerRemoveWindowItemForStickerRemove_C::SetIsSelectable(bool InIsSelectable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C", "SetIsSelectable");

	Params::AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetIsSelectable Parms{};

	Parms.InIsSelectable = InIsSelectable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AppearanceWeaponStickerRemoveWindowItemForStickerRemove.AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C.SetBtnSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSelected                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAppearanceWeaponStickerRemoveWindowItemForStickerRemove_C::SetBtnSelected(bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C", "SetBtnSelected");

	Params::AppearanceWeaponStickerRemoveWindowItemForStickerRemove_C_SetBtnSelected Parms{};

	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);
}

}

