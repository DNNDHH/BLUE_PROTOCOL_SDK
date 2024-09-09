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
	 * 		Name   -> Function QuestDetail_RewardList.QuestDetail_RewardList_C.SetRewardTypeName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InLabelString                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UQuestDetail_RewardList_C::SetRewardTypeName(const class FString& InLabelString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail_RewardList.QuestDetail_RewardList_C.SetRewardTypeName");
		
		UQuestDetail_RewardList_C_SetRewardTypeName_Params params {};
		params.InLabelString = InLabelString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail_RewardList.QuestDetail_RewardList_C.SetAdditionalRewardNotice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InClearCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestDetail_RewardList_C::SetAdditionalRewardNotice(int32_t InClearCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail_RewardList.QuestDetail_RewardList_C.SetAdditionalRewardNotice");
		
		UQuestDetail_RewardList_C_SetAdditionalRewardNotice_Params params {};
		params.InClearCount = InClearCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail_RewardList.QuestDetail_RewardList_C.SetAdditionalRewardCompleted
	 * 		Flags  -> ()
	 */
	void UQuestDetail_RewardList_C::SetAdditionalRewardCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail_RewardList.QuestDetail_RewardList_C.SetAdditionalRewardCompleted");
		
		UQuestDetail_RewardList_C_SetAdditionalRewardCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail_RewardList.QuestDetail_RewardList_C.SetQuestIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InQuestIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestDetail_RewardList_C::SetQuestIndex(int32_t InQuestIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail_RewardList.QuestDetail_RewardList_C.SetQuestIndex");
		
		UQuestDetail_RewardList_C_SetQuestIndex_Params params {};
		params.InQuestIndex = InQuestIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail_RewardList.QuestDetail_RewardList_C.SetEnableAdditionalButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Flag                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuestDetail_RewardList_C::SetEnableAdditionalButton(bool Flag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail_RewardList.QuestDetail_RewardList_C.SetEnableAdditionalButton");
		
		UQuestDetail_RewardList_C_SetEnableAdditionalButton_Params params {};
		params.Flag = Flag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail_RewardList.QuestDetail_RewardList_C.GetRewardNum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Num                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestDetail_RewardList_C::GetRewardNum(int32_t* Num)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail_RewardList.QuestDetail_RewardList_C.GetRewardNum");
		
		UQuestDetail_RewardList_C_GetRewardNum_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Num != nullptr)
			*Num = params.Num;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail_RewardList.QuestDetail_RewardList_C.ClearReward
	 * 		Flags  -> ()
	 */
	void UQuestDetail_RewardList_C::ClearReward()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail_RewardList.QuestDetail_RewardList_C.ClearReward");
		
		UQuestDetail_RewardList_C_ClearReward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail_RewardList.QuestDetail_RewardList_C.AddReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRewardInfo                                 InRewardInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		bool                                               bInSelectRewardSelectable                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bEnableHiddenReward                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UUserWidget*                                 OutWidget                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestDetail_RewardList_C::AddReward(struct FRewardInfo* InRewardInfo, bool bInSelectRewardSelectable, bool bEnableHiddenReward, class UUserWidget** OutWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail_RewardList.QuestDetail_RewardList_C.AddReward");
		
		UQuestDetail_RewardList_C_AddReward_Params params {};
		params.bInSelectRewardSelectable = bInSelectRewardSelectable;
		params.bEnableHiddenReward = bEnableHiddenReward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InRewardInfo != nullptr)
			*InRewardInfo = params.InRewardInfo;
		if (OutWidget != nullptr)
			*OutWidget = params.OutWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail_RewardList.QuestDetail_RewardList_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuestDetail_RewardList_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail_RewardList.QuestDetail_RewardList_C.PreConstruct");
		
		UQuestDetail_RewardList_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail_RewardList.QuestDetail_RewardList_C.BndEvt__QuestDetail_RewardList_AdditionalRewardBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UQuestDetail_RewardList_C::BndEvt__QuestDetail_RewardList_AdditionalRewardBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail_RewardList.QuestDetail_RewardList_C.BndEvt__QuestDetail_RewardList_AdditionalRewardBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UQuestDetail_RewardList_C_BndEvt__QuestDetail_RewardList_AdditionalRewardBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail_RewardList.QuestDetail_RewardList_C.OnClosedAdditionalRewards
	 * 		Flags  -> ()
	 */
	void UQuestDetail_RewardList_C::OnClosedAdditionalRewards()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail_RewardList.QuestDetail_RewardList_C.OnClosedAdditionalRewards");
		
		UQuestDetail_RewardList_C_OnClosedAdditionalRewards_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail_RewardList.QuestDetail_RewardList_C.ExecuteUbergraph_QuestDetail_RewardList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestDetail_RewardList_C::ExecuteUbergraph_QuestDetail_RewardList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail_RewardList.QuestDetail_RewardList_C.ExecuteUbergraph_QuestDetail_RewardList");
		
		UQuestDetail_RewardList_C_ExecuteUbergraph_QuestDetail_RewardList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuestDetail_RewardList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuestDetail_RewardList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuestDetail_RewardList.QuestDetail_RewardList_C");
		return ptr;
	}

}


