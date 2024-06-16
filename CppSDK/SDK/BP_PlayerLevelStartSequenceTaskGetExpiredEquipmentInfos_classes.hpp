#pragma once

 

// Package: BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos.BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C
// 0x0150 (0x0180 - 0x0030)
class UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C final : public USBPlayerLevelStartSequenceTaskBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0030(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBPlayerStorageComponent*              PlayerStorageComp;                                 // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsSystemMessageShowed;                            // 0x0040(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9173[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBExpiredEquipmentData                TempExpiredEquipmentData;                          // 0x0048(0x0130)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bGetExpiredEquipmentDataEvent;                     // 0x0178(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos(int32 EntryPoint);
	void PreStart();
	void SetTimeOut();
	void OnTimeOut();
	void OnGetExpiredEquipmentDataEvent(const struct FSBExpiredEquipmentData& InExpiredEquipmentData);
	void EndTask();
	void Start();
	void NotifyDecayedWeaponsToLogAndMessage(TArray<struct FSBDecayedWeaponData>& InDecayedWeaponDatas, bool* OutIsMessageShowed);
	void NotifyDeletedCostumesToLogAndMessage(TArray<struct FSBDeletedCostumeData>& InDeletedCostumeDatas, bool* OutIsMessageShowed);
	void NotifyDeletedImaginesToLogAndMessage(TArray<struct FSBDeletedImagineData>& InDeletedImagineDatas, bool* OutIsMessageShowed);
	void NotifyDeletedMountsToLogAndMessage(TArray<struct FSBDeletedMountData>& InDeletedMountDatas, bool* OutIsMessageShowed);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C">();
	}
	static class UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C>();
	}
};
static_assert(alignof(UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C) == 0x000008, "Wrong alignment on UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C");
static_assert(sizeof(UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C) == 0x000180, "Wrong size on UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C, UberGraphFrame) == 0x000030, "Member 'UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C, PlayerStorageComp) == 0x000038, "Member 'UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C::PlayerStorageComp' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C, bIsSystemMessageShowed) == 0x000040, "Member 'UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C::bIsSystemMessageShowed' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C, TempExpiredEquipmentData) == 0x000048, "Member 'UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C::TempExpiredEquipmentData' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C, bGetExpiredEquipmentDataEvent) == 0x000178, "Member 'UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C::bGetExpiredEquipmentDataEvent' has a wrong offset!");

}

