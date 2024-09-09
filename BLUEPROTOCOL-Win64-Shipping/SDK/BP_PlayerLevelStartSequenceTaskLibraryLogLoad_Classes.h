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
	 * BlueprintGeneratedClass BP_PlayerLevelStartSequenceTaskLibraryLogLoad.BP_PlayerLevelStartSequenceTaskLibraryLogLoad_C
	 * Size -> 0x002C (FullSize[0x005C] - InheritedSize[0x0030])
	 */
	class UBP_PlayerLevelStartSequenceTaskLibraryLogLoad_C : public USBPlayerLevelStartSequenceTaskBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0030(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ASBPlayerController*                                 Controller;                                              // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USBCharactersLogComponent*                           LogComponent;                                            // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USBPlayerAchievementComponent*                       AchievementComponent;                                    // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USBTheaterComponent*                                 TheaterComponent;                                        // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    PictureBookAPICount;                                     // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateDemoList();
		void Start(class USBPlayerLevelStartSequenceComponent* Owner);
		void EnemyLogLoaded(bool Result);
		void OnLoadAchivementDelegate_event(bool Result, TArray<struct FSBAchievementInfo> AchievementList);
		void CustomEvent_1(bool Result, int32_t RetCode, TArray<class FName> DemoList);
		void OnLoadAchievementDataDelegate_Event(bool Result, int32_t RetCode);
		void GetIdListCallback(bool WasSuccessful, int32_t RetCode, ESBLibraryPictureBookType Type);
		void ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLibraryLogLoad(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
