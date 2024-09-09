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
	 * BlueprintGeneratedClass BP_PlayerLevelStartSequenceTaskRankingRewardResult.BP_PlayerLevelStartSequenceTaskRankingRewardResult_C
	 * Size -> 0x002D (FullSize[0x005D] - InheritedSize[0x0030])
	 */
	class UBP_PlayerLevelStartSequenceTaskRankingRewardResult_C : public USBPlayerLevelStartSequenceTaskBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0030(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<struct FSBRankingRewardData>                        RankingRewardDataList_;                                  // 0x0038(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FSBRankingRewardData>                        RankingRewardDataList_Debug;                             // 0x0048(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    TmpRetCode;                                              // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bOnCompletedRankingRewardDataList;                       // 0x005C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnLoaded_581557924E9E2085AFE4E7A014C633C1(class UClass* Loaded);
		void Start(class USBPlayerLevelStartSequenceComponent* Owner);
		void CustomEvent_3();
		void CustomEvent_1(int32_t InRetCode, TArray<struct FSBRankingRewardData> RankingRewardDataList);
		void PreStart();
		void ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
