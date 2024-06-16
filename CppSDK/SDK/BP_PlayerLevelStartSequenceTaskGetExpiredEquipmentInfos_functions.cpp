#pragma once

 

// Package: BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos

#include "Basic.hpp"

#include "BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_classes.hpp"
#include "BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_parameters.hpp"


namespace SDK
{

// Function BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos.BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C::ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C", "ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos");

	Params::BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos.BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C.PreStart
// (Event, Public, BlueprintEvent)

void UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C::PreStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C", "PreStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos.BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C.SetTimeOut
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C::SetTimeOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C", "SetTimeOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos.BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C.OnTimeOut
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C::OnTimeOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C", "OnTimeOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos.BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C.OnGetExpiredEquipmentDataEvent
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBExpiredEquipmentData          InExpiredEquipmentData                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C::OnGetExpiredEquipmentDataEvent(const struct FSBExpiredEquipmentData& InExpiredEquipmentData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C", "OnGetExpiredEquipmentDataEvent");

	Params::BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C_OnGetExpiredEquipmentDataEvent Parms{};

	Parms.InExpiredEquipmentData = std::move(InExpiredEquipmentData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos.BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C.EndTask
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C::EndTask()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C", "EndTask");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos.BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C.Start
// (Event, Public, BlueprintEvent)

void UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C::Start()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C", "Start");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos.BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C.NotifyDecayedWeaponsToLogAndMessage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBDecayedWeaponData>     InDecayedWeaponDatas                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    OutIsMessageShowed                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C::NotifyDecayedWeaponsToLogAndMessage(TArray<struct FSBDecayedWeaponData>& InDecayedWeaponDatas, bool* OutIsMessageShowed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C", "NotifyDecayedWeaponsToLogAndMessage");

	Params::BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C_NotifyDecayedWeaponsToLogAndMessage Parms{};

	Parms.InDecayedWeaponDatas = std::move(InDecayedWeaponDatas);

	UObject::ProcessEvent(Func, &Parms);

	InDecayedWeaponDatas = std::move(Parms.InDecayedWeaponDatas);

	if (OutIsMessageShowed != nullptr)
		*OutIsMessageShowed = Parms.OutIsMessageShowed;
}


// Function BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos.BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C.NotifyDeletedCostumesToLogAndMessage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBDeletedCostumeData>    InDeletedCostumeDatas                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    OutIsMessageShowed                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C::NotifyDeletedCostumesToLogAndMessage(TArray<struct FSBDeletedCostumeData>& InDeletedCostumeDatas, bool* OutIsMessageShowed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C", "NotifyDeletedCostumesToLogAndMessage");

	Params::BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C_NotifyDeletedCostumesToLogAndMessage Parms{};

	Parms.InDeletedCostumeDatas = std::move(InDeletedCostumeDatas);

	UObject::ProcessEvent(Func, &Parms);

	InDeletedCostumeDatas = std::move(Parms.InDeletedCostumeDatas);

	if (OutIsMessageShowed != nullptr)
		*OutIsMessageShowed = Parms.OutIsMessageShowed;
}


// Function BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos.BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C.NotifyDeletedImaginesToLogAndMessage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBDeletedImagineData>    InDeletedImagineDatas                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    OutIsMessageShowed                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C::NotifyDeletedImaginesToLogAndMessage(TArray<struct FSBDeletedImagineData>& InDeletedImagineDatas, bool* OutIsMessageShowed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C", "NotifyDeletedImaginesToLogAndMessage");

	Params::BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C_NotifyDeletedImaginesToLogAndMessage Parms{};

	Parms.InDeletedImagineDatas = std::move(InDeletedImagineDatas);

	UObject::ProcessEvent(Func, &Parms);

	InDeletedImagineDatas = std::move(Parms.InDeletedImagineDatas);

	if (OutIsMessageShowed != nullptr)
		*OutIsMessageShowed = Parms.OutIsMessageShowed;
}


// Function BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos.BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C.NotifyDeletedMountsToLogAndMessage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBDeletedMountData>      InDeletedMountDatas                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    OutIsMessageShowed                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C::NotifyDeletedMountsToLogAndMessage(TArray<struct FSBDeletedMountData>& InDeletedMountDatas, bool* OutIsMessageShowed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C", "NotifyDeletedMountsToLogAndMessage");

	Params::BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C_NotifyDeletedMountsToLogAndMessage Parms{};

	Parms.InDeletedMountDatas = std::move(InDeletedMountDatas);

	UObject::ProcessEvent(Func, &Parms);

	InDeletedMountDatas = std::move(Parms.InDeletedMountDatas);

	if (OutIsMessageShowed != nullptr)
		*OutIsMessageShowed = Parms.OutIsMessageShowed;
}

}

