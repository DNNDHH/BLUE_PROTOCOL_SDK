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
	 * BlueprintGeneratedClass BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos.BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C
	 * Size -> 0x0149 (FullSize[0x0179] - InheritedSize[0x0030])
	 */
	class UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C : public USBPlayerLevelStartSequenceTaskBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0030(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USBPlayerStorageComponent*                           PlayerStorageComp;                                       // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsSystemMessageShowed;                                  // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C2JC[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSBExpiredEquipmentData                             TempExpiredEquipmentData;                                // 0x0048(0x0130) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bGetExpiredEquipmentDataEvent;                           // 0x0178(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void NotifyDeletedMountsToLogAndMessage(TArray<struct FSBDeletedMountData>* InDeletedMountDatas, bool* OutIsMessageShowed);
		void NotifyDeletedImaginesToLogAndMessage(TArray<struct FSBDeletedImagineData>* InDeletedImagineDatas, bool* OutIsMessageShowed);
		void NotifyDeletedCostumesToLogAndMessage(TArray<struct FSBDeletedCostumeData>* InDeletedCostumeDatas, bool* OutIsMessageShowed);
		void NotifyDecayedWeaponsToLogAndMessage(TArray<struct FSBDecayedWeaponData>* InDecayedWeaponDatas, bool* OutIsMessageShowed);
		void Start(class USBPlayerLevelStartSequenceComponent* Owner);
		void EndTask();
		void OnGetExpiredEquipmentDataEvent(const struct FSBExpiredEquipmentData& InExpiredEquipmentData);
		void OnTimeOut();
		void SetTimeOut();
		void PreStart();
		void ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
