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
	 * 		Name   -> Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.SetRewardContentByRewardId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FRewardInfo>                         RewardInfoList                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UQuestDetail_RewardItem_C::SetRewardContentByRewardId(TArray<struct FRewardInfo>* RewardInfoList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.SetRewardContentByRewardId");
		
		UQuestDetail_RewardItem_C_SetRewardContentByRewardId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RewardInfoList != nullptr)
			*RewardInfoList = params.RewardInfoList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.SetCoomonRewardLabelString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InLabelString                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UQuestDetail_RewardItem_C::SetCoomonRewardLabelString(const class FString& InLabelString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.SetCoomonRewardLabelString");
		
		UQuestDetail_RewardItem_C_SetCoomonRewardLabelString_Params params {};
		params.InLabelString = InLabelString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.GetSpcifiedAdditionalReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InQuestIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InClearCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FRewardInfo>                         OutRewardInfos                                             (Parm, OutParm)
	 * 		int32_t                                            OutNextClearCount                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestDetail_RewardItem_C::GetSpcifiedAdditionalReward(int32_t InQuestIndex, int32_t InClearCount, TArray<struct FRewardInfo>* OutRewardInfos, int32_t* OutNextClearCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.GetSpcifiedAdditionalReward");
		
		UQuestDetail_RewardItem_C_GetSpcifiedAdditionalReward_Params params {};
		params.InQuestIndex = InQuestIndex;
		params.InClearCount = InClearCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutRewardInfos != nullptr)
			*OutRewardInfos = params.OutRewardInfos;
		if (OutNextClearCount != nullptr)
			*OutNextClearCount = params.OutNextClearCount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.IsExistAdditionalReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InQuestIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuestDetail_RewardItem_C::IsExistAdditionalReward(int32_t InQuestIndex, bool* Ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.IsExistAdditionalReward");
		
		UQuestDetail_RewardItem_C_IsExistAdditionalReward_Params params {};
		params.InQuestIndex = InQuestIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ret != nullptr)
			*Ret = params.Ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.DebugDumpRewardInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FRewardInfo>                         InRewardInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UQuestDetail_RewardItem_C::DebugDumpRewardInfo(TArray<struct FRewardInfo>* InRewardInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.DebugDumpRewardInfo");
		
		UQuestDetail_RewardItem_C_DebugDumpRewardInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InRewardInfo != nullptr)
			*InRewardInfo = params.InRewardInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.IsEmptyList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsEmpty                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuestDetail_RewardItem_C::IsEmptyList(bool* bIsEmpty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.IsEmptyList");
		
		UQuestDetail_RewardItem_C_IsEmptyList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsEmpty != nullptr)
			*bIsEmpty = params.bIsEmpty;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.ShouldAddCommonRewardList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRewardInfo                                 InRewardInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	bool UQuestDetail_RewardItem_C::ShouldAddCommonRewardList(struct FRewardInfo* InRewardInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.ShouldAddCommonRewardList");
		
		UQuestDetail_RewardItem_C_ShouldAddCommonRewardList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InRewardInfo != nullptr)
			*InRewardInfo = params.InRewardInfo;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.SetRewardContent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FQuestMasterData                            InQuestMasterData                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bInChoiceRewardSelectable                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bEnableHiddenReward                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuestDetail_RewardItem_C::SetRewardContent(struct FQuestMasterData* InQuestMasterData, bool bInChoiceRewardSelectable, bool bEnableHiddenReward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.SetRewardContent");
		
		UQuestDetail_RewardItem_C_SetRewardContent_Params params {};
		params.bInChoiceRewardSelectable = bInChoiceRewardSelectable;
		params.bEnableHiddenReward = bEnableHiddenReward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InQuestMasterData != nullptr)
			*InQuestMasterData = params.InQuestMasterData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.SetTitle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InTitleText                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestDetail_RewardItem_C::SetTitle(int32_t InTitleText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.SetTitle");
		
		UQuestDetail_RewardItem_C_SetTitle_Params params {};
		params.InTitleText = InTitleText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuestDetail_RewardItem_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.PreConstruct");
		
		UQuestDetail_RewardItem_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.OnToggleChecked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UQuestRewardIcon_C*                          CheckedItem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestDetail_RewardItem_C::OnToggleChecked(bool IsChecked, class UQuestRewardIcon_C* CheckedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.OnToggleChecked");
		
		UQuestDetail_RewardItem_C_OnToggleChecked_Params params {};
		params.IsChecked = IsChecked;
		params.CheckedItem = CheckedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.ExecuteUbergraph_QuestDetail_RewardItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestDetail_RewardItem_C::ExecuteUbergraph_QuestDetail_RewardItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.ExecuteUbergraph_QuestDetail_RewardItem");
		
		UQuestDetail_RewardItem_C_ExecuteUbergraph_QuestDetail_RewardItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.OnToggleCheck_Deligate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Property                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UQuestRewardIcon_C*                          ClickedObject                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestDetail_RewardItem_C::OnToggleCheck_Deligate__DelegateSignature(bool Property, class UQuestRewardIcon_C* ClickedObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail_RewardItem.QuestDetail_RewardItem_C.OnToggleCheck_Deligate__DelegateSignature");
		
		UQuestDetail_RewardItem_C_OnToggleCheck_Deligate__DelegateSignature_Params params {};
		params.Property = Property;
		params.ClickedObject = ClickedObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuestDetail_RewardItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuestDetail_RewardItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuestDetail_RewardItem.QuestDetail_RewardItem_C");
		return ptr;
	}

}


