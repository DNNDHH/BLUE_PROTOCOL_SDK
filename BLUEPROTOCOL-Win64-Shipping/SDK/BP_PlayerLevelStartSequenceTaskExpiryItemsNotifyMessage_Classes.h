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
	 * BlueprintGeneratedClass BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage.BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UBP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C : public USBPlayerLevelStartSequenceTaskBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0030(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<struct FSBActiveItemData>                           Items;                                                   // 0x0038(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class AHUD*                                                HUD;                                                     // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USBPlayerStorageComponent*                           StorageComponent;                                        // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Start(class USBPlayerLevelStartSequenceComponent* Owner);
		void ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
