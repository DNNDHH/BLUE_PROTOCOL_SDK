#pragma once

 

// Package: AppearanceWeaponStickerDescColumn2

#include "Basic.hpp"

#include "AppearanceWeaponStickerDescColumn2_classes.hpp"
#include "AppearanceWeaponStickerDescColumn2_parameters.hpp"


namespace SDK
{

// Function AppearanceWeaponStickerDescColumn2.AppearanceWeaponStickerDescColumn2_C.ExecuteUbergraph_AppearanceWeaponStickerDescColumn2
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAppearanceWeaponStickerDescColumn2_C::ExecuteUbergraph_AppearanceWeaponStickerDescColumn2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerDescColumn2_C", "ExecuteUbergraph_AppearanceWeaponStickerDescColumn2");

	Params::AppearanceWeaponStickerDescColumn2_C_ExecuteUbergraph_AppearanceWeaponStickerDescColumn2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AppearanceWeaponStickerDescColumn2.AppearanceWeaponStickerDescColumn2_C.BndEvt__AppearanceWeaponStickerDescColumn2_WeaponStickerRemoveBtn_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UAppearanceWeaponStickerDescColumn2_C::BndEvt__AppearanceWeaponStickerDescColumn2_WeaponStickerRemoveBtn_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerDescColumn2_C", "BndEvt__AppearanceWeaponStickerDescColumn2_WeaponStickerRemoveBtn_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AppearanceWeaponStickerDescColumn2.AppearanceWeaponStickerDescColumn2_C.BndEvt__AppearanceWeaponStickerDescColumn2_WeaponStickerInUseBtn_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UAppearanceWeaponStickerDescColumn2_C::BndEvt__AppearanceWeaponStickerDescColumn2_WeaponStickerInUseBtn_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerDescColumn2_C", "BndEvt__AppearanceWeaponStickerDescColumn2_WeaponStickerInUseBtn_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AppearanceWeaponStickerDescColumn2.AppearanceWeaponStickerDescColumn2_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAppearanceWeaponStickerDescColumn2_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerDescColumn2_C", "PreConstruct");

	Params::AppearanceWeaponStickerDescColumn2_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AppearanceWeaponStickerDescColumn2.AppearanceWeaponStickerDescColumn2_C.SetWeaponStickerDesc
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBWeaponItemData                InWeaponData                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UAppearanceWeaponStickerDescColumn2_C::SetWeaponStickerDesc(const struct FSBWeaponItemData& InWeaponData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerDescColumn2_C", "SetWeaponStickerDesc");

	Params::AppearanceWeaponStickerDescColumn2_C_SetWeaponStickerDesc Parms{};

	Parms.InWeaponData = std::move(InWeaponData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AppearanceWeaponStickerDescColumn2.AppearanceWeaponStickerDescColumn2_C.SetIsStickerIndefinite
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsIndefinite                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAppearanceWeaponStickerDescColumn2_C::SetIsStickerIndefinite(bool InIsIndefinite)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerDescColumn2_C", "SetIsStickerIndefinite");

	Params::AppearanceWeaponStickerDescColumn2_C_SetIsStickerIndefinite Parms{};

	Parms.InIsIndefinite = InIsIndefinite;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AppearanceWeaponStickerDescColumn2.AppearanceWeaponStickerDescColumn2_C.SetStickerBtn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bOn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAppearanceWeaponStickerDescColumn2_C::SetStickerBtn(bool bOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerDescColumn2_C", "SetStickerBtn");

	Params::AppearanceWeaponStickerDescColumn2_C_SetStickerBtn Parms{};

	Parms.bOn = bOn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AppearanceWeaponStickerDescColumn2.AppearanceWeaponStickerDescColumn2_C.GetStickerUse
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    OutIsStickerUse                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAppearanceWeaponStickerDescColumn2_C::GetStickerUse(bool* OutIsStickerUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerDescColumn2_C", "GetStickerUse");

	Params::AppearanceWeaponStickerDescColumn2_C_GetStickerUse Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsStickerUse != nullptr)
		*OutIsStickerUse = Parms.OutIsStickerUse;
}

}

