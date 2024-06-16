#pragma once

 

// Package: PerkSlotView

#include "Basic.hpp"

#include "PerkSlotView_classes.hpp"
#include "PerkSlotView_parameters.hpp"


namespace SDK
{

// Function PerkSlotView.PerkSlotView_C.ApplyData
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPerkSlotView_C::ApplyData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkSlotView_C", "ApplyData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PerkSlotView.PerkSlotView_C.SetData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBCharacterWeaponPerkData>Param_Perks                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   Param_UnlockSlotNum                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkSlotView_C::SetData(TArray<struct FSBCharacterWeaponPerkData>& Param_Perks, int32 Param_UnlockSlotNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkSlotView_C", "SetData");

	Params::PerkSlotView_C_SetData Parms{};

	Parms.Param_Perks = std::move(Param_Perks);
	Parms.Param_UnlockSlotNum = Param_UnlockSlotNum;

	UObject::ProcessEvent(Func, &Parms);

	Param_Perks = std::move(Parms.Param_Perks);
}


// Function PerkSlotView.PerkSlotView_C.SetNewItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkSlotView_C::SetNewItem(int32 ItemId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkSlotView_C", "SetNewItem");

	Params::PerkSlotView_C_SetNewItem Parms{};

	Parms.ItemId = ItemId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkSlotView.PerkSlotView_C.FindEmptySlot
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Exists                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWeaponCustomPerkSlotItem_C*      Param_Slot                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkSlotView_C::FindEmptySlot(bool* Exists, class UWeaponCustomPerkSlotItem_C** Param_Slot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkSlotView_C", "FindEmptySlot");

	Params::PerkSlotView_C_FindEmptySlot Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Exists != nullptr)
		*Exists = Parms.Exists;

	if (Param_Slot != nullptr)
		*Param_Slot = Parms.Param_Slot;
}


// Function PerkSlotView.PerkSlotView_C.SetDiffPerk
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBCharacterWeaponPerkData>InWeaponPerks                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPerkSlotView_C::SetDiffPerk(TArray<struct FSBCharacterWeaponPerkData>& InWeaponPerks)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkSlotView_C", "SetDiffPerk");

	Params::PerkSlotView_C_SetDiffPerk Parms{};

	Parms.InWeaponPerks = std::move(InWeaponPerks);

	UObject::ProcessEvent(Func, &Parms);

	InWeaponPerks = std::move(Parms.InWeaponPerks);
}


// Function PerkSlotView.PerkSlotView_C.Set Slot Image Color
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     InColorAndOpacity                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkSlotView_C::Set_Slot_Image_Color(const struct FLinearColor& InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkSlotView_C", "Set Slot Image Color");

	Params::PerkSlotView_C_Set_Slot_Image_Color Parms{};

	Parms.InColorAndOpacity = std::move(InColorAndOpacity);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkSlotView.PerkSlotView_C.UpdateNewItemSlotView
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWeaponCustomPerkSlotItem_C*      PerkSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkSlotView_C::UpdateNewItemSlotView(int32 ItemId, class UWeaponCustomPerkSlotItem_C* PerkSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkSlotView_C", "UpdateNewItemSlotView");

	Params::PerkSlotView_C_UpdateNewItemSlotView Parms{};

	Parms.ItemId = ItemId;
	Parms.PerkSlot = PerkSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkSlotView.PerkSlotView_C.Set CraftResult BigSuccess
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsBigSuccess                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPerkSlotView_C::Set_CraftResult_BigSuccess(bool IsBigSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkSlotView_C", "Set CraftResult BigSuccess");

	Params::PerkSlotView_C_Set_CraftResult_BigSuccess Parms{};

	Parms.IsBigSuccess = IsBigSuccess;

	UObject::ProcessEvent(Func, &Parms);
}

}

