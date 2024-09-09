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
	 * BlueprintGeneratedClass BP_PlayerLevelStartSequenceTaskNotificationMenu.BP_PlayerLevelStartSequenceTaskNotificationMenu_C
	 * Size -> 0x0021 (FullSize[0x0051] - InheritedSize[0x0030])
	 */
	class UBP_PlayerLevelStartSequenceTaskNotificationMenu_C : public USBPlayerLevelStartSequenceTaskBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0030(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USBNotificationMenu*                                 NotificationWindow;                                      // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASBPlayerController*                                 PlayerController;                                        // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USBPlayerCharacterCommonComponent*                   CommonComponent;                                         // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsDebug;                                                 // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnLoaded_955FE1A0452B9F2013DC63A7677EFD85(class UClass* Loaded);
		void Start(class USBPlayerLevelStartSequenceComponent* Owner);
		void FinishTaskEvent();
		void OnFinishEvent();
		void NotificationLoaded(bool Result);
		void ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotificationMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
