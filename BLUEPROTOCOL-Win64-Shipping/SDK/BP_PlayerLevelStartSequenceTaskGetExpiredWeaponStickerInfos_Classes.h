#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos.BP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C
	 * Size -> 0x0158 (FullSize[0x0188] - InheritedSize[0x0030])
	 */
	class UBP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C : public USBPlayerLevelStartSequenceTaskBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0030(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USBPlayerWeaponComponent*                            PlayerWeaponComp;                                        // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FString>                                      ExpiredStickerWeaponUniqueIds;                           // 0x0040(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      ExpiredStickerWeaponNames;                               // 0x0050(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              CharacterCurrEquippedWeaponUniqueId;                     // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              CharacterCurrEquippedWeaponName;                         // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       bIsCurrEquippedWeaponsStickerExpired;                    // 0x0080(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1RRQ[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USBOwnItemListContainer*                             EquipmentBag;                                            // 0x0088(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USBOwnItemListContainer*                             CharacterStorage;                                        // 0x0090(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USBMasterDataManager*                                MasterDataManager;                                       // 0x0098(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              TmpWeaponUniqueId;                                       // 0x00A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              TmpWeaponName;                                           // 0x00B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		struct FSBWeaponMasterData                                 TmpWeaponMasterData;                                     // 0x00C0(0x00C8) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void Start(class USBPlayerLevelStartSequenceComponent* Owner);
		void EndTask();
		void EndSystemMessage();
		void ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
