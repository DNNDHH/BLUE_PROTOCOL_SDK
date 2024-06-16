#pragma once

 

// Package: BP_PlayerLevelStartSequenceTaskRankingRewardResult

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerLevelStartSequenceTaskRankingRewardResult.BP_PlayerLevelStartSequenceTaskRankingRewardResult_C
// 0x0030 (0x0060 - 0x0030)
class UBP_PlayerLevelStartSequenceTaskRankingRewardResult_C final : public USBPlayerLevelStartSequenceTaskBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0030(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FSBRankingRewardData>           Ranking_Reward_Data_List_;                         // 0x0038(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FSBRankingRewardData>           Ranking_Reward_Data_List_Debug;                    // 0x0048(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         TmpRetCode;                                        // 0x0058(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bOnCompletedRankingRewardDataList;                 // 0x005C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult(int32 EntryPoint);
	void PreStart();
	void CustomEvent_0(const int32 InRetCode, const TArray<struct FSBRankingRewardData>& RankingRewardDataList);
	void CustomEvent_2();
	void Start();
	void OnLoaded_581557924E9E2085AFE4E7A014C633C1(TSubclassOf<class UObject> Loaded);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerLevelStartSequenceTaskRankingRewardResult_C">();
	}
	static class UBP_PlayerLevelStartSequenceTaskRankingRewardResult_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayerLevelStartSequenceTaskRankingRewardResult_C>();
	}
};
static_assert(alignof(UBP_PlayerLevelStartSequenceTaskRankingRewardResult_C) == 0x000008, "Wrong alignment on UBP_PlayerLevelStartSequenceTaskRankingRewardResult_C");
static_assert(sizeof(UBP_PlayerLevelStartSequenceTaskRankingRewardResult_C) == 0x000060, "Wrong size on UBP_PlayerLevelStartSequenceTaskRankingRewardResult_C");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskRankingRewardResult_C, UberGraphFrame) == 0x000030, "Member 'UBP_PlayerLevelStartSequenceTaskRankingRewardResult_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskRankingRewardResult_C, Ranking_Reward_Data_List_) == 0x000038, "Member 'UBP_PlayerLevelStartSequenceTaskRankingRewardResult_C::Ranking_Reward_Data_List_' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskRankingRewardResult_C, Ranking_Reward_Data_List_Debug) == 0x000048, "Member 'UBP_PlayerLevelStartSequenceTaskRankingRewardResult_C::Ranking_Reward_Data_List_Debug' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskRankingRewardResult_C, TmpRetCode) == 0x000058, "Member 'UBP_PlayerLevelStartSequenceTaskRankingRewardResult_C::TmpRetCode' has a wrong offset!");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskRankingRewardResult_C, bOnCompletedRankingRewardDataList) == 0x00005C, "Member 'UBP_PlayerLevelStartSequenceTaskRankingRewardResult_C::bOnCompletedRankingRewardDataList' has a wrong offset!");

}

