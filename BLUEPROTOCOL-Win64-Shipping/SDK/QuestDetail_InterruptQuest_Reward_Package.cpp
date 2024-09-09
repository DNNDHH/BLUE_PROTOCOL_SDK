/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail_InterruptQuest_Reward.QuestDetail_InterruptQuest_Reward_C.SetReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UQuestDetail_InterruptQuest_Reward_RewardListItem_C* OutRewardList                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FRewardInfo>                         Rewards                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		EQuestContributionRank                             Rank                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestDetail_InterruptQuest_Reward_C::SetReward(class UQuestDetail_InterruptQuest_Reward_RewardListItem_C* OutRewardList, TArray<struct FRewardInfo>* Rewards, EQuestContributionRank Rank)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail_InterruptQuest_Reward.QuestDetail_InterruptQuest_Reward_C.SetReward");
		
		UQuestDetail_InterruptQuest_Reward_C_SetReward_Params params {};
		params.OutRewardList = OutRewardList;
		params.Rank = Rank;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Rewards != nullptr)
			*Rewards = params.Rewards;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail_InterruptQuest_Reward.QuestDetail_InterruptQuest_Reward_C.SetQuestInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FQuestMasterData                            QuestMasterData                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UQuestDetail_InterruptQuest_Reward_C::SetQuestInfo(struct FQuestMasterData* QuestMasterData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail_InterruptQuest_Reward.QuestDetail_InterruptQuest_Reward_C.SetQuestInfo");
		
		UQuestDetail_InterruptQuest_Reward_C_SetQuestInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (QuestMasterData != nullptr)
			*QuestMasterData = params.QuestMasterData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuestDetail_InterruptQuest_Reward_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuestDetail_InterruptQuest_Reward_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuestDetail_InterruptQuest_Reward.QuestDetail_InterruptQuest_Reward_C");
		return ptr;
	}

}


