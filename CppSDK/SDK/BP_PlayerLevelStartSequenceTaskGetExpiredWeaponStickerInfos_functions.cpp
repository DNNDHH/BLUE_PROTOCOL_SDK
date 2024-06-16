#pragma once

 

// Package: BP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos

#include "Basic.hpp"

#include "BP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_classes.hpp"
#include "BP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_parameters.hpp"


namespace SDK
{

// Function BP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos.BP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C::ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C", "ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos");

	Params::BP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos.BP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C.EndSystemMessage
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C::EndSystemMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C", "EndSystemMessage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos.BP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C.EndTask
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C::EndTask()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C", "EndTask");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos.BP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C.Start
// (Event, Public, BlueprintEvent)

void UBP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C::Start()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C", "Start");

	UObject::ProcessEvent(Func, nullptr);
}

}

