#pragma once

 

// Package: BP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos.BP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C
// 0x0140 (0x0170 - 0x0030)
class UBP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C final : public USBPlayerLevelStartSequenceTaskBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0030(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBPlayerWeaponComponent*               PlayerWeaponComp;                                  // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         ExpiredStickerWeaponUniqueIds;                     // 0x0040(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                         ExpiredStickerWeaponNames;                         // 0x0050(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 CharacterCurrEquippedWeaponUniqueId;               // 0x0060(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 CharacterCurrEquippedWeaponName;                   // 0x0070(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bIsCurrEquippedWeaponsStickerExpired;              // 0x0080(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88BA[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                EquipmentBag;                                      // 0x0088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CharacterStorage;                                  // 0x0090(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMasterDataManager*                   MasterDataManager;                                 // 0x0098(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 TmpWeaponUniqueId;                                 // 0x00A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 TmpWeaponName;                                     // 0x00B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSBWeaponMasterData                    TmpWeaponMasterData;                               // 0x00C0(0x00B0)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos(int32 EntryPoint);
	void EndSystemMessage();
	void EndTask();
	void Start();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C">();
	}
	static class UBP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C>();
	}
};
static_assert(alignof(UBP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C) == 0x000008, "Wrong alignment on UBP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C");
static_assert(sizeof(UBP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C) == 0x000170, "Wrong size on UBP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C, UberGraphFrame) == 0x000030, "Member 'UBP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C, PlayerWeaponComp) == 0x000038, "Member 'UBP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C::PlayerWeaponComp' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C, ExpiredStickerWeaponUniqueIds) == 0x000040, "Member 'UBP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C::ExpiredStickerWeaponUniqueIds' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C, ExpiredStickerWeaponNames) == 0x000050, "Member 'UBP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C::ExpiredStickerWeaponNames' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C, CharacterCurrEquippedWeaponUniqueId) == 0x000060, "Member 'UBP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C::CharacterCurrEquippedWeaponUniqueId' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C, CharacterCurrEquippedWeaponName) == 0x000070, "Member 'UBP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C::CharacterCurrEquippedWeaponName' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C, bIsCurrEquippedWeaponsStickerExpired) == 0x000080, "Member 'UBP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C::bIsCurrEquippedWeaponsStickerExpired' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C, EquipmentBag) == 0x000088, "Member 'UBP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C::EquipmentBag' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C, CharacterStorage) == 0x000090, "Member 'UBP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C::CharacterStorage' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C, MasterDataManager) == 0x000098, "Member 'UBP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C::MasterDataManager' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C, TmpWeaponUniqueId) == 0x0000A0, "Member 'UBP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C::TmpWeaponUniqueId' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C, TmpWeaponName) == 0x0000B0, "Member 'UBP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C::TmpWeaponName' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C, TmpWeaponMasterData) == 0x0000C0, "Member 'UBP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C::TmpWeaponMasterData' has a wrong offset!");

}

