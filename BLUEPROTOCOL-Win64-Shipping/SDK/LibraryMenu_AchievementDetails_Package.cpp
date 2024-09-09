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
	 * 		Name   -> Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.CheckAchievementReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBMailData>                         OutMailDatas                                               (Parm, OutParm)
	 */
	void ULibraryMenu_AchievementDetails_C::CheckAchievementReward(TArray<struct FSBMailData>* OutMailDatas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.CheckAchievementReward");
		
		ULibraryMenu_AchievementDetails_C_CheckAchievementReward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMailDatas != nullptr)
			*OutMailDatas = params.OutMailDatas;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.SetRewardIconAlpha
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InAlpha                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_AchievementDetails_C::SetRewardIconAlpha(float InAlpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.SetRewardIconAlpha");
		
		ULibraryMenu_AchievementDetails_C_SetRewardIconAlpha_Params params {};
		params.InAlpha = InAlpha;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.SetRank
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRankId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_AchievementDetails_C::SetRank(int32_t InRankId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.SetRank");
		
		ULibraryMenu_AchievementDetails_C_SetRank_Params params {};
		params.InRankId = InRankId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.GetAchievementReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBMailData>                         OutMailData                                                (Parm, OutParm)
	 */
	void ULibraryMenu_AchievementDetails_C::GetAchievementReward(TArray<struct FSBMailData>* OutMailData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.GetAchievementReward");
		
		ULibraryMenu_AchievementDetails_C_GetAchievementReward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMailData != nullptr)
			*OutMailData = params.OutMailData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.SetLimitedTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      TeamID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FDateTime                                   InLoadDateTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_AchievementDetails_C::SetLimitedTime(const class FString& TeamID, const struct FDateTime& InLoadDateTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.SetLimitedTime");
		
		ULibraryMenu_AchievementDetails_C_SetLimitedTime_Params params {};
		params.TeamID = TeamID;
		params.InLoadDateTime = InLoadDateTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.SetReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEneble                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class FString>                              RewardIdList                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               IsRecieved                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_AchievementDetails_C::SetReward(bool IsEneble, TArray<class FString>* RewardIdList, bool IsRecieved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.SetReward");
		
		ULibraryMenu_AchievementDetails_C_SetReward_Params params {};
		params.IsEneble = IsEneble;
		params.IsRecieved = IsRecieved;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RewardIdList != nullptr)
			*RewardIdList = params.RewardIdList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.Set Achievement Id
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAchievementMasterData                      AchievementMasterData                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FSBCharacterAchievementDataInfo             CharacterAchievementData                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FDateTime                                   InLoadDateTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_AchievementDetails_C::SetAchievementId(const struct FAchievementMasterData& AchievementMasterData, const struct FSBCharacterAchievementDataInfo& CharacterAchievementData, const struct FDateTime& InLoadDateTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.Set Achievement Id");
		
		ULibraryMenu_AchievementDetails_C_SetAchievementId_Params params {};
		params.AchievementMasterData = AchievementMasterData;
		params.CharacterAchievementData = CharacterAchievementData;
		params.InLoadDateTime = InLoadDateTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.SetDetailsVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_AchievementDetails_C::SetDetailsVisibility(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.SetDetailsVisibility");
		
		ULibraryMenu_AchievementDetails_C_SetDetailsVisibility_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.Construct
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_AchievementDetails_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.Construct");
		
		ULibraryMenu_AchievementDetails_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.BndEvt__LibraryMenu_AchievementDetails_LibraryMenu_Achievement_SwitchOnOff_K2Node_ComponentBoundEvent_2_OnSwitchOnPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               outIsSetAchievement                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_AchievementDetails_C::BndEvt__LibraryMenu_AchievementDetails_LibraryMenu_Achievement_SwitchOnOff_K2Node_ComponentBoundEvent_2_OnSwitchOnPressed__DelegateSignature(bool outIsSetAchievement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.BndEvt__LibraryMenu_AchievementDetails_LibraryMenu_Achievement_SwitchOnOff_K2Node_ComponentBoundEvent_2_OnSwitchOnPressed__DelegateSignature");
		
		ULibraryMenu_AchievementDetails_C_BndEvt__LibraryMenu_AchievementDetails_LibraryMenu_Achievement_SwitchOnOff_K2Node_ComponentBoundEvent_2_OnSwitchOnPressed__DelegateSignature_Params params {};
		params.outIsSetAchievement = outIsSetAchievement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.SaveAchievementSelectEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_AchievementDetails_C::SaveAchievementSelectEvent(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.SaveAchievementSelectEvent");
		
		ULibraryMenu_AchievementDetails_C_SaveAchievementSelectEvent_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.BndEvt__LibraryMenu_AchievementDetails_GetRewardBtn_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_AchievementDetails_C::BndEvt__LibraryMenu_AchievementDetails_GetRewardBtn_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.BndEvt__LibraryMenu_AchievementDetails_GetRewardBtn_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");
		
		ULibraryMenu_AchievementDetails_C_BndEvt__LibraryMenu_AchievementDetails_GetRewardBtn_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.RewardIconClick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UQuestRewardIcon_C*                          Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_AchievementDetails_C::RewardIconClick(class UQuestRewardIcon_C* Sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.RewardIconClick");
		
		ULibraryMenu_AchievementDetails_C_RewardIconClick_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.ExecuteUbergraph_LibraryMenu_AchievementDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_AchievementDetails_C::ExecuteUbergraph_LibraryMenu_AchievementDetails(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.ExecuteUbergraph_LibraryMenu_AchievementDetails");
		
		ULibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.OnClicked_AchievementRewardsBtn__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBMailData>                         outRewardsData                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    outRewardsIds                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ULibraryMenu_AchievementDetails_C::OnClicked_AchievementRewardsBtn__DelegateSignature(TArray<struct FSBMailData>* outRewardsData, TArray<int32_t>* outRewardsIds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.OnClicked_AchievementRewardsBtn__DelegateSignature");
		
		ULibraryMenu_AchievementDetails_C_OnClicked_AchievementRewardsBtn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outRewardsData != nullptr)
			*outRewardsData = params.outRewardsData;
		if (outRewardsIds != nullptr)
			*outRewardsIds = params.outRewardsIds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.OnClickRewardIcon__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterReward                             InMasterReward                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void ULibraryMenu_AchievementDetails_C::OnClickRewardIcon__DelegateSignature(const struct FSBMasterReward& InMasterReward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.OnClickRewardIcon__DelegateSignature");
		
		ULibraryMenu_AchievementDetails_C_OnClickRewardIcon__DelegateSignature_Params params {};
		params.InMasterReward = InMasterReward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.OnSetAchievement__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_AchievementDetails_C::OnSetAchievement__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.OnSetAchievement__DelegateSignature");
		
		ULibraryMenu_AchievementDetails_C_OnSetAchievement__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.OnGetRewardItem__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_AchievementDetails_C::OnGetRewardItem__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.OnGetRewardItem__DelegateSignature");
		
		ULibraryMenu_AchievementDetails_C_OnGetRewardItem__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULibraryMenu_AchievementDetails_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULibraryMenu_AchievementDetails_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C");
		return ptr;
	}

}


