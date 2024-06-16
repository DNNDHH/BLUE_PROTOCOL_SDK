#pragma once

 

// Package: EquipmentStatusDescForBattleSet

#include "Basic.hpp"

#include "EquipmentStatusDescForBattleSet_classes.hpp"
#include "EquipmentStatusDescForBattleSet_parameters.hpp"


namespace SDK
{

// Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.OnRequestWeaponModelLoad__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItemData               InWeaponInventoryItemData                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UEquipmentStatusDescForBattleSet_C::OnRequestWeaponModelLoad__DelegateSignature(const struct FInventoryItemData& InWeaponInventoryItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescForBattleSet_C", "OnRequestWeaponModelLoad__DelegateSignature");

	Params::EquipmentStatusDescForBattleSet_C_OnRequestWeaponModelLoad__DelegateSignature Parms{};

	Parms.InWeaponInventoryItemData = std::move(InWeaponInventoryItemData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.OnRequestBattleImagineModelLoad__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItemData               InBattleImagineInventoryItemData                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UEquipmentStatusDescForBattleSet_C::OnRequestBattleImagineModelLoad__DelegateSignature(const struct FInventoryItemData& InBattleImagineInventoryItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescForBattleSet_C", "OnRequestBattleImagineModelLoad__DelegateSignature");

	Params::EquipmentStatusDescForBattleSet_C_OnRequestBattleImagineModelLoad__DelegateSignature Parms{};

	Parms.InBattleImagineInventoryItemData = std::move(InBattleImagineInventoryItemData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.OnImagineRemoveBtnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UEquipmentStatusDescForBattleSet_C::OnImagineRemoveBtnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescForBattleSet_C", "OnImagineRemoveBtnPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.ExecuteUbergraph_EquipmentStatusDescForBattleSet
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentStatusDescForBattleSet_C::ExecuteUbergraph_EquipmentStatusDescForBattleSet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescForBattleSet_C", "ExecuteUbergraph_EquipmentStatusDescForBattleSet");

	Params::EquipmentStatusDescForBattleSet_C_ExecuteUbergraph_EquipmentStatusDescForBattleSet Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.BndEvt__EquipmentStatusDescForBattleSet_ImagineRemoveBtn_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UEquipmentStatusDescForBattleSet_C::BndEvt__EquipmentStatusDescForBattleSet_ImagineRemoveBtn_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescForBattleSet_C", "BndEvt__EquipmentStatusDescForBattleSet_ImagineRemoveBtn_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEquipmentStatusDescForBattleSet_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescForBattleSet_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentStatusDescForBattleSet_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescForBattleSet_C", "PreConstruct");

	Params::EquipmentStatusDescForBattleSet_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.UpdateDesc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InEquipmentUniqueId                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEquipmentStatusDescForBattleSet_C::UpdateDesc(const class FString& InEquipmentUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescForBattleSet_C", "UpdateDesc");

	Params::EquipmentStatusDescForBattleSet_C_UpdateDesc Parms{};

	Parms.InEquipmentUniqueId = std::move(InEquipmentUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.UpdateWeaponDesc
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InWeaponUniqueId                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEquipmentStatusDescForBattleSet_C::UpdateWeaponDesc(const class FString& InWeaponUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescForBattleSet_C", "UpdateWeaponDesc");

	Params::EquipmentStatusDescForBattleSet_C_UpdateWeaponDesc Parms{};

	Parms.InWeaponUniqueId = std::move(InWeaponUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.UpdateImagineDesc
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InImagineUniqueId                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEquipmentStatusDescForBattleSet_C::UpdateImagineDesc(const class FString& InImagineUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescForBattleSet_C", "UpdateImagineDesc");

	Params::EquipmentStatusDescForBattleSet_C_UpdateImagineDesc Parms{};

	Parms.InImagineUniqueId = std::move(InImagineUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.SwitchStatusType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InStatusTypeId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentStatusDescForBattleSet_C::SwitchStatusType(int32 InStatusTypeId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescForBattleSet_C", "SwitchStatusType");

	Params::EquipmentStatusDescForBattleSet_C_SwitchStatusType Parms{};

	Parms.InStatusTypeId = InStatusTypeId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.SetUsingEquipmentImage2Dor3D
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InUse3D                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentStatusDescForBattleSet_C::SetUsingEquipmentImage2Dor3D(bool InUse3D)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescForBattleSet_C", "SetUsingEquipmentImage2Dor3D");

	Params::EquipmentStatusDescForBattleSet_C_SetUsingEquipmentImage2Dor3D Parms{};

	Parms.InUse3D = InUse3D;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.SwitchDescType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsDescDefault                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentStatusDescForBattleSet_C::SwitchDescType(bool InIsDescDefault)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescForBattleSet_C", "SwitchDescType");

	Params::EquipmentStatusDescForBattleSet_C_SwitchDescType Parms{};

	Parms.InIsDescDefault = InIsDescDefault;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.SetInfoType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BattleSetInfoType                     InInfoType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentStatusDescForBattleSet_C::SetInfoType(E_BattleSetInfoType InInfoType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescForBattleSet_C", "SetInfoType");

	Params::EquipmentStatusDescForBattleSet_C_SetInfoType Parms{};

	Parms.InInfoType = InInfoType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.SetStorageMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsForStorage                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentStatusDescForBattleSet_C::SetStorageMode(bool InIsForStorage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescForBattleSet_C", "SetStorageMode");

	Params::EquipmentStatusDescForBattleSet_C_SetStorageMode Parms{};

	Parms.InIsForStorage = InIsForStorage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.SetEquipmentModelCaptureImageVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentStatusDescForBattleSet_C::SetEquipmentModelCaptureImageVisibility(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescForBattleSet_C", "SetEquipmentModelCaptureImageVisibility");

	Params::EquipmentStatusDescForBattleSet_C_SetEquipmentModelCaptureImageVisibility Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.SetDescToDefault
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsDescDefault                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentStatusDescForBattleSet_C::SetDescToDefault(bool InIsDescDefault)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescForBattleSet_C", "SetDescToDefault");

	Params::EquipmentStatusDescForBattleSet_C_SetDescToDefault Parms{};

	Parms.InIsDescDefault = InIsDescDefault;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.SwitchBaseBgType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsNormalType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentStatusDescForBattleSet_C::SwitchBaseBgType(bool InIsNormalType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescForBattleSet_C", "SwitchBaseBgType");

	Params::EquipmentStatusDescForBattleSet_C_SwitchBaseBgType Parms{};

	Parms.InIsNormalType = InIsNormalType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.SetImagineRemoveBtnVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEquipmentStatusDescForBattleSet_C::SetImagineRemoveBtnVisibility(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescForBattleSet_C", "SetImagineRemoveBtnVisibility");

	Params::EquipmentStatusDescForBattleSet_C_SetImagineRemoveBtnVisibility Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C.SetEquipType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBCharaEquipType                       InEquipType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipmentStatusDescForBattleSet_C::SetEquipType(ESBCharaEquipType InEquipType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipmentStatusDescForBattleSet_C", "SetEquipType");

	Params::EquipmentStatusDescForBattleSet_C_SetEquipType Parms{};

	Parms.InEquipType = InEquipType;

	UObject::ProcessEvent(Func, &Parms);
}

}

