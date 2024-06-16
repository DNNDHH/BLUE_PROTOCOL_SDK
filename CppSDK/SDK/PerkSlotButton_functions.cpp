#pragma once

 

// Package: PerkSlotButton

#include "Basic.hpp"

#include "PerkSlotButton_classes.hpp"
#include "PerkSlotButton_parameters.hpp"


namespace SDK
{

// Function PerkSlotButton.PerkSlotButton_C.OnSelectedItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPerkSlotButton_C*                SelectedButton                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkSlotButton_C::OnSelectedItem__DelegateSignature(class UPerkSlotButton_C* SelectedButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkSlotButton_C", "OnSelectedItem__DelegateSignature");

	Params::PerkSlotButton_C_OnSelectedItem__DelegateSignature Parms{};

	Parms.SelectedButton = SelectedButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkSlotButton.PerkSlotButton_C.ExecuteUbergraph_PerkSlotButton
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkSlotButton_C::ExecuteUbergraph_PerkSlotButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkSlotButton_C", "ExecuteUbergraph_PerkSlotButton");

	Params::PerkSlotButton_C_ExecuteUbergraph_PerkSlotButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkSlotButton.PerkSlotButton_C.BndEvt__PerkSlotButton_Btn_Select_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UPerkSlotButton_C::BndEvt__PerkSlotButton_Btn_Select_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkSlotButton_C", "BndEvt__PerkSlotButton_Btn_Select_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PerkSlotButton.PerkSlotButton_C.BndEvt__PerkSlotButton_Btn_Select_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UPerkSlotButton_C::BndEvt__PerkSlotButton_Btn_Select_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkSlotButton_C", "BndEvt__PerkSlotButton_Btn_Select_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PerkSlotButton.PerkSlotButton_C.BndEvt__PerkSlotButton_Btn_Select_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPerkSlotButton_C::BndEvt__PerkSlotButton_Btn_Select_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkSlotButton_C", "BndEvt__PerkSlotButton_Btn_Select_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PerkSlotButton.PerkSlotButton_C.SetData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBCharacterWeaponPerkData       SBCharacter_Weapon_Perk_Data                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UPerkSlotButton_C::SetData(const struct FSBCharacterWeaponPerkData& SBCharacter_Weapon_Perk_Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkSlotButton_C", "SetData");

	Params::PerkSlotButton_C_SetData Parms{};

	Parms.SBCharacter_Weapon_Perk_Data = std::move(SBCharacter_Weapon_Perk_Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkSlotButton.PerkSlotButton_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSelected                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPerkSlotButton_C::SetSelected(bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkSlotButton_C", "SetSelected");

	Params::PerkSlotButton_C_SetSelected Parms{};

	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkSlotButton.PerkSlotButton_C.SetSlotDeficiency
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bDeficiency                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPerkSlotButton_C::SetSlotDeficiency(bool bDeficiency)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkSlotButton_C", "SetSlotDeficiency");

	Params::PerkSlotButton_C_SetSlotDeficiency Parms{};

	Parms.bDeficiency = bDeficiency;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkSlotButton.PerkSlotButton_C.GetData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FSBCharacterWeaponPerkData       Data                                                   (Parm, OutParm, NoDestructor)

void UPerkSlotButton_C::GetData(struct FSBCharacterWeaponPerkData* Data) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkSlotButton_C", "GetData");

	Params::PerkSlotButton_C_GetData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);
}

}

