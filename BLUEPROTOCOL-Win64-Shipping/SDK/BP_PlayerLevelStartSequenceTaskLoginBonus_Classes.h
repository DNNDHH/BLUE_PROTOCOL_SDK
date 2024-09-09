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
	 * BlueprintGeneratedClass BP_PlayerLevelStartSequenceTaskLoginBonus.BP_PlayerLevelStartSequenceTaskLoginBonus_C
	 * Size -> 0x002B (FullSize[0x005B] - InheritedSize[0x0030])
	 */
	class UBP_PlayerLevelStartSequenceTaskLoginBonus_C : public USBPlayerLevelStartSequenceTaskBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0030(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USBLoginBonusWindow*                                 LoginBonusWidget;                                        // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USBPlayerLoginBonusComponent*                        LoginBonusComponent;                                     // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FString>                                      ActiveIdList;                                            // 0x0048(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsActiveCheckTask;                                       // 0x0058(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       OpenLoginBonusWindow;                                    // 0x0059(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       LockLoadingScreen;                                       // 0x005A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void LockLoadingScreen(bool Lock);
		void OnLoaded_9C8A3A574D92EE195DA83A82A8920833(class UClass* Loaded);
		void ActiveCompletefunc(bool bWasSuccessful, int32_t ErrorCode);
		void GetDetailWork(bool bWasSuccessful, int32_t ErrorCode);
		void ActiveCheckRequest(bool IsFinish);
		void OnFinishEvent();
		void CheckCompleteFunc(bool bWasSuccessful, int32_t ErrorCode);
		void Start(class USBPlayerLevelStartSequenceComponent* Owner);
		void Finish();
		void ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
