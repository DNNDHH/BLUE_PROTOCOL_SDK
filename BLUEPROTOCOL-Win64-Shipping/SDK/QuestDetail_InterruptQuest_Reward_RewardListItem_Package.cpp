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
	 * 		Name   -> Function QuestDetail_InterruptQuest_Reward_RewardListItem.QuestDetail_InterruptQuest_Reward_RewardListItem_C.SetPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRewardInfo                                 Reward                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		int32_t                                            InPoint                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestDetail_InterruptQuest_Reward_RewardListItem_C::SetPoint(const struct FRewardInfo& Reward, int32_t InPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail_InterruptQuest_Reward_RewardListItem.QuestDetail_InterruptQuest_Reward_RewardListItem_C.SetPoint");
		
		UQuestDetail_InterruptQuest_Reward_RewardListItem_C_SetPoint_Params params {};
		params.Reward = Reward;
		params.InPoint = InPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail_InterruptQuest_Reward_RewardListItem.QuestDetail_InterruptQuest_Reward_RewardListItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UQuestDetail_InterruptQuest_Reward_RewardListItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail_InterruptQuest_Reward_RewardListItem.QuestDetail_InterruptQuest_Reward_RewardListItem_C.Construct");
		
		UQuestDetail_InterruptQuest_Reward_RewardListItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail_InterruptQuest_Reward_RewardListItem.QuestDetail_InterruptQuest_Reward_RewardListItem_C.ExecuteUbergraph_QuestDetail_InterruptQuest_Reward_RewardListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestDetail_InterruptQuest_Reward_RewardListItem_C::ExecuteUbergraph_QuestDetail_InterruptQuest_Reward_RewardListItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail_InterruptQuest_Reward_RewardListItem.QuestDetail_InterruptQuest_Reward_RewardListItem_C.ExecuteUbergraph_QuestDetail_InterruptQuest_Reward_RewardListItem");
		
		UQuestDetail_InterruptQuest_Reward_RewardListItem_C_ExecuteUbergraph_QuestDetail_InterruptQuest_Reward_RewardListItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuestDetail_InterruptQuest_Reward_RewardListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuestDetail_InterruptQuest_Reward_RewardListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuestDetail_InterruptQuest_Reward_RewardListItem.QuestDetail_InterruptQuest_Reward_RewardListItem_C");
		return ptr;
	}

}


