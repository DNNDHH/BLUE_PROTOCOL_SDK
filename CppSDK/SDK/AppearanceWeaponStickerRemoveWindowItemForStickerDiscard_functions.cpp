#pragma once

 

// Package: AppearanceWeaponStickerRemoveWindowItemForStickerDiscard

#include "Basic.hpp"

#include "AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_classes.hpp"
#include "AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_parameters.hpp"


namespace SDK
{

// Function AppearanceWeaponStickerRemoveWindowItemForStickerDiscard.AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C.ItemSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C*InItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C::ItemSelected__DelegateSignature(class UAppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C* InItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C", "ItemSelected__DelegateSignature");

	Params::AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C_ItemSelected__DelegateSignature Parms{};

	Parms.InItem = InItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AppearanceWeaponStickerRemoveWindowItemForStickerDiscard.AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C.ExecuteUbergraph_AppearanceWeaponStickerRemoveWindowItemForStickerDiscard
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C::ExecuteUbergraph_AppearanceWeaponStickerRemoveWindowItemForStickerDiscard(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C", "ExecuteUbergraph_AppearanceWeaponStickerRemoveWindowItemForStickerDiscard");

	Params::AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C_ExecuteUbergraph_AppearanceWeaponStickerRemoveWindowItemForStickerDiscard Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AppearanceWeaponStickerRemoveWindowItemForStickerDiscard.AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C.BndEvt__BtnListItem_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UAppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C::BndEvt__BtnListItem_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C", "BndEvt__BtnListItem_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AppearanceWeaponStickerRemoveWindowItemForStickerDiscard.AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C.SetBtnSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSelected                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C::SetBtnSelected(bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C", "SetBtnSelected");

	Params::AppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C_SetBtnSelected Parms{};

	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);
}

}

