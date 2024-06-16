#pragma once

 

// Package: WeaponSynthePart_WindowWeaponStatusPerkSlot

#include "Basic.hpp"

#include "WeaponSynthePart_WindowWeaponStatusPerkSlot_classes.hpp"
#include "WeaponSynthePart_WindowWeaponStatusPerkSlot_parameters.hpp"


namespace SDK
{

// Function WeaponSynthePart_WindowWeaponStatusPerkSlot.WeaponSynthePart_WindowWeaponStatusPerkSlot_C.OnProtectNumChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ProtectNum                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_WindowWeaponStatusPerkSlot_C::OnProtectNumChanged__DelegateSignature(int32 ProtectNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_WindowWeaponStatusPerkSlot_C", "OnProtectNumChanged__DelegateSignature");

	Params::WeaponSynthePart_WindowWeaponStatusPerkSlot_C_OnProtectNumChanged__DelegateSignature Parms{};

	Parms.ProtectNum = ProtectNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_WindowWeaponStatusPerkSlot.WeaponSynthePart_WindowWeaponStatusPerkSlot_C.OnClickedPerkSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SlotNo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_WindowWeaponStatusPerkSlot_C::OnClickedPerkSlot__DelegateSignature(int32 SlotNo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_WindowWeaponStatusPerkSlot_C", "OnClickedPerkSlot__DelegateSignature");

	Params::WeaponSynthePart_WindowWeaponStatusPerkSlot_C_OnClickedPerkSlot__DelegateSignature Parms{};

	Parms.SlotNo = SlotNo;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_WindowWeaponStatusPerkSlot.WeaponSynthePart_WindowWeaponStatusPerkSlot_C.ExecuteUbergraph_WeaponSynthePart_WindowWeaponStatusPerkSlot
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_WindowWeaponStatusPerkSlot_C::ExecuteUbergraph_WeaponSynthePart_WindowWeaponStatusPerkSlot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_WindowWeaponStatusPerkSlot_C", "ExecuteUbergraph_WeaponSynthePart_WindowWeaponStatusPerkSlot");

	Params::WeaponSynthePart_WindowWeaponStatusPerkSlot_C_ExecuteUbergraph_WeaponSynthePart_WindowWeaponStatusPerkSlot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_WindowWeaponStatusPerkSlot.WeaponSynthePart_WindowWeaponStatusPerkSlot_C.BndEvt__WeaponSynthePart_WindowWeaponStatusPerkSlotXXX_PerkSlotBox_K2Node_ComponentBoundEvent_1_OnClickedPerkSlot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   SlotNo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_WindowWeaponStatusPerkSlot_C::BndEvt__WeaponSynthePart_WindowWeaponStatusPerkSlotXXX_PerkSlotBox_K2Node_ComponentBoundEvent_1_OnClickedPerkSlot__DelegateSignature(int32 SlotNo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_WindowWeaponStatusPerkSlot_C", "BndEvt__WeaponSynthePart_WindowWeaponStatusPerkSlotXXX_PerkSlotBox_K2Node_ComponentBoundEvent_1_OnClickedPerkSlot__DelegateSignature");

	Params::WeaponSynthePart_WindowWeaponStatusPerkSlot_C_BndEvt__WeaponSynthePart_WindowWeaponStatusPerkSlotXXX_PerkSlotBox_K2Node_ComponentBoundEvent_1_OnClickedPerkSlot__DelegateSignature Parms{};

	Parms.SlotNo = SlotNo;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_WindowWeaponStatusPerkSlot.WeaponSynthePart_WindowWeaponStatusPerkSlot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthePart_WindowWeaponStatusPerkSlot_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_WindowWeaponStatusPerkSlot_C", "PreConstruct");

	Params::WeaponSynthePart_WindowWeaponStatusPerkSlot_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_WindowWeaponStatusPerkSlot.WeaponSynthePart_WindowWeaponStatusPerkSlot_C.BndEvt__WeaponSynthePart_WindowWeaponStatusPerkSlot_PerkSlotBox_K2Node_ComponentBoundEvent_0_OnProtectNumChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   ProtectNum                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_WindowWeaponStatusPerkSlot_C::BndEvt__WeaponSynthePart_WindowWeaponStatusPerkSlot_PerkSlotBox_K2Node_ComponentBoundEvent_0_OnProtectNumChanged__DelegateSignature(int32 ProtectNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_WindowWeaponStatusPerkSlot_C", "BndEvt__WeaponSynthePart_WindowWeaponStatusPerkSlot_PerkSlotBox_K2Node_ComponentBoundEvent_0_OnProtectNumChanged__DelegateSignature");

	Params::WeaponSynthePart_WindowWeaponStatusPerkSlot_C_BndEvt__WeaponSynthePart_WindowWeaponStatusPerkSlot_PerkSlotBox_K2Node_ComponentBoundEvent_0_OnProtectNumChanged__DelegateSignature Parms{};

	Parms.ProtectNum = ProtectNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_WindowWeaponStatusPerkSlot.WeaponSynthePart_WindowWeaponStatusPerkSlot_C.SetupSynthe
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     WeaponData                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWeaponSynthePart_WindowWeaponStatusPerkSlot_C::SetupSynthe(const struct FOwnItemInfo& WeaponData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_WindowWeaponStatusPerkSlot_C", "SetupSynthe");

	Params::WeaponSynthePart_WindowWeaponStatusPerkSlot_C_SetupSynthe Parms{};

	Parms.WeaponData = std::move(WeaponData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_WindowWeaponStatusPerkSlot.WeaponSynthePart_WindowWeaponStatusPerkSlot_C.SetupRebuilder
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     WeaponData                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWeaponSynthePart_WindowWeaponStatusPerkSlot_C::SetupRebuilder(const struct FOwnItemInfo& WeaponData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_WindowWeaponStatusPerkSlot_C", "SetupRebuilder");

	Params::WeaponSynthePart_WindowWeaponStatusPerkSlot_C_SetupRebuilder Parms{};

	Parms.WeaponData = std::move(WeaponData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_WindowWeaponStatusPerkSlot.WeaponSynthePart_WindowWeaponStatusPerkSlot_C.SetupRemove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     WeaponData                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWeaponSynthePart_WindowWeaponStatusPerkSlot_C::SetupRemove(const struct FOwnItemInfo& WeaponData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_WindowWeaponStatusPerkSlot_C", "SetupRemove");

	Params::WeaponSynthePart_WindowWeaponStatusPerkSlot_C_SetupRemove Parms{};

	Parms.WeaponData = std::move(WeaponData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_WindowWeaponStatusPerkSlot.WeaponSynthePart_WindowWeaponStatusPerkSlot_C.SetupExtender
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     WeaponData                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWeaponSynthePart_WindowWeaponStatusPerkSlot_C::SetupExtender(const struct FOwnItemInfo& WeaponData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_WindowWeaponStatusPerkSlot_C", "SetupExtender");

	Params::WeaponSynthePart_WindowWeaponStatusPerkSlot_C_SetupExtender Parms{};

	Parms.WeaponData = std::move(WeaponData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_WindowWeaponStatusPerkSlot.WeaponSynthePart_WindowWeaponStatusPerkSlot_C.GetPerkSlotBox
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWeaponSynthePart_PerkSlotBox_C*  Param_PerkSlotBox                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_WindowWeaponStatusPerkSlot_C::GetPerkSlotBox(class UWeaponSynthePart_PerkSlotBox_C** Param_PerkSlotBox)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_WindowWeaponStatusPerkSlot_C", "GetPerkSlotBox");

	Params::WeaponSynthePart_WindowWeaponStatusPerkSlot_C_GetPerkSlotBox Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_PerkSlotBox != nullptr)
		*Param_PerkSlotBox = Parms.Param_PerkSlotBox;
}

}

