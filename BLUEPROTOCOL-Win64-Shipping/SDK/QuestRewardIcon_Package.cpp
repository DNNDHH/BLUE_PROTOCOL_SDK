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
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.SetPerkPickId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LotId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestRewardIcon_C::SetPerkPickId(int32_t LotId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.SetPerkPickId");
		
		UQuestRewardIcon_C_SetPerkPickId_Params params {};
		params.LotId = LotId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.SetOrnament
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InAmount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestRewardIcon_C::SetOrnament(int32_t InIndex, int32_t InAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.SetOrnament");
		
		UQuestRewardIcon_C_SetOrnament_Params params {};
		params.InIndex = InIndex;
		params.InAmount = InAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.StopAnimTeamBonus
	 * 		Flags  -> ()
	 */
	void UQuestRewardIcon_C::StopAnimTeamBonus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.StopAnimTeamBonus");
		
		UQuestRewardIcon_C_StopAnimTeamBonus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.PlayAnimTeamBonus
	 * 		Flags  -> ()
	 */
	void UQuestRewardIcon_C::PlayAnimTeamBonus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.PlayAnimTeamBonus");
		
		UQuestRewardIcon_C_PlayAnimTeamBonus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.DeleteDetail
	 * 		Flags  -> ()
	 */
	void UQuestRewardIcon_C::DeleteDetail()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.DeleteDetail");
		
		UQuestRewardIcon_C_DeleteDetail_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.CreateDetail
	 * 		Flags  -> ()
	 */
	void UQuestRewardIcon_C::CreateDetail()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.CreateDetail");
		
		UQuestRewardIcon_C_CreateDetail_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.SetTacticalAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SkillId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SkillLV                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsClickToShowDetail                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuestRewardIcon_C::SetTacticalAbility(int32_t SkillId, int32_t SkillLV, bool bIsClickToShowDetail)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.SetTacticalAbility");
		
		UQuestRewardIcon_C_SetTacticalAbility_Params params {};
		params.SkillId = SkillId;
		params.SkillLV = SkillLV;
		params.bIsClickToShowDetail = bIsClickToShowDetail;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.isDetailWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuestRewardIcon_C::isDetailWindow(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.isDetailWindow");
		
		UQuestRewardIcon_C_isDetailWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.SetUnidentifiedIcon
	 * 		Flags  -> ()
	 */
	void UQuestRewardIcon_C::SetUnidentifiedIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.SetUnidentifiedIcon");
		
		UQuestRewardIcon_C_SetUnidentifiedIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.SetUnknown
	 * 		Flags  -> ()
	 */
	void UQuestRewardIcon_C::SetUnknown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.SetUnknown");
		
		UQuestRewardIcon_C_SetUnknown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.SetLiquidMemory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InAmount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestRewardIcon_C::SetLiquidMemory(int32_t InIndex, int32_t InAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.SetLiquidMemory");
		
		UQuestRewardIcon_C_SetLiquidMemory_Params params {};
		params.InIndex = InIndex;
		params.InAmount = InAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.SetAchivement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InIdex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InAmount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestRewardIcon_C::SetAchivement(int32_t InIdex, int32_t InAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.SetAchivement");
		
		UQuestRewardIcon_C_SetAchivement_Params params {};
		params.InIdex = InIdex;
		params.InAmount = InAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.SetRecipeSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InIdex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InAmount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestRewardIcon_C::SetRecipeSet(int32_t InIdex, int32_t InAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.SetRecipeSet");
		
		UQuestRewardIcon_C_SetRecipeSet_Params params {};
		params.InIdex = InIdex;
		params.InAmount = InAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.SetRecipe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardItemType                                  InType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InAmount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestRewardIcon_C::SetRecipe(ESBRewardItemType InType, int32_t InIndex, int32_t InAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.SetRecipe");
		
		UQuestRewardIcon_C_SetRecipe_Params params {};
		params.InType = InType;
		params.InIndex = InIndex;
		params.InAmount = InAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.GetAmountColorOrange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestRewardIcon_C::GetAmountColorOrange(struct FLinearColor* Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.GetAmountColorOrange");
		
		UQuestRewardIcon_C_GetAmountColorOrange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Color != nullptr)
			*Color = params.Color;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.GetAmountColorYellow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestRewardIcon_C::GetAmountColorYellow(struct FLinearColor* Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.GetAmountColorYellow");
		
		UQuestRewardIcon_C_GetAmountColorYellow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Color != nullptr)
			*Color = params.Color;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.GetAmountColorWhite
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestRewardIcon_C::GetAmountColorWhite(struct FLinearColor* Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.GetAmountColorWhite");
		
		UQuestRewardIcon_C_GetAmountColorWhite_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Color != nullptr)
			*Color = params.Color;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.SetAmountColorBonus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsBonus                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuestRewardIcon_C::SetAmountColorBonus(bool IsBonus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.SetAmountColorBonus");
		
		UQuestRewardIcon_C_SetAmountColorBonus_Params params {};
		params.IsBonus = IsBonus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.GetMasterReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterReward                             MasterReward                                               (Parm, OutParm, NoDestructor)
	 */
	void UQuestRewardIcon_C::GetMasterReward(struct FSBMasterReward* MasterReward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.GetMasterReward");
		
		UQuestRewardIcon_C_GetMasterReward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MasterReward != nullptr)
			*MasterReward = params.MasterReward;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.GetRewardId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RewardId                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestRewardIcon_C::GetRewardId(int32_t* RewardId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.GetRewardId");
		
		UQuestRewardIcon_C_GetRewardId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RewardId != nullptr)
			*RewardId = params.RewardId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.SetRewardMasterOnly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterReward                             InMasterReward                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		bool                                               bUseRewardLottery                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuestRewardIcon_C::SetRewardMasterOnly(struct FSBMasterReward* InMasterReward, bool bUseRewardLottery)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.SetRewardMasterOnly");
		
		UQuestRewardIcon_C_SetRewardMasterOnly_Params params {};
		params.bUseRewardLottery = bUseRewardLottery;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InMasterReward != nullptr)
			*InMasterReward = params.InMasterReward;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.SetReceivedStyle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsReceived                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuestRewardIcon_C::SetReceivedStyle(bool IsReceived)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.SetReceivedStyle");
		
		UQuestRewardIcon_C_SetReceivedStyle_Params params {};
		params.IsReceived = IsReceived;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.SetClickToShowDetail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsClickToShowDetail                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuestRewardIcon_C::SetClickToShowDetail(bool bIsClickToShowDetail)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.SetClickToShowDetail");
		
		UQuestRewardIcon_C_SetClickToShowDetail_Params params {};
		params.bIsClickToShowDetail = bIsClickToShowDetail;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.SetIconType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsTacticalAbility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuestRewardIcon_C::SetIconType(bool IsTacticalAbility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.SetIconType");
		
		UQuestRewardIcon_C_SetIconType_Params params {};
		params.IsTacticalAbility = IsTacticalAbility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.SetStamp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InAmount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestRewardIcon_C::SetStamp(int32_t InIndex, int32_t InAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.SetStamp");
		
		UQuestRewardIcon_C_SetStamp_Params params {};
		params.InIndex = InIndex;
		params.InAmount = InAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.SetItemSimpleAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InAmount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsUnIdentified                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuestRewardIcon_C::SetItemSimpleAmount(int32_t InIndex, int32_t InAmount, bool bIsUnIdentified)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.SetItemSimpleAmount");
		
		UQuestRewardIcon_C_SetItemSimpleAmount_Params params {};
		params.InIndex = InIndex;
		params.InAmount = InAmount;
		params.bIsUnIdentified = bIsUnIdentified;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.SetItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsUnidentified                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            AmountMin                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AmountMax                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestRewardIcon_C::SetItem(int32_t ItemIndex, int32_t Amount, bool IsUnidentified, int32_t AmountMin, int32_t AmountMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.SetItem");
		
		UQuestRewardIcon_C_SetItem_Params params {};
		params.ItemIndex = ItemIndex;
		params.Amount = Amount;
		params.IsUnidentified = IsUnidentified;
		params.AmountMin = AmountMin;
		params.AmountMax = AmountMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.SetWeaponDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InAmount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InItemUniqueId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            InStorageNumber                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBWeaponItemData                           InWeaponData                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UQuestRewardIcon_C::SetWeaponDetails(int32_t Index, int32_t InAmount, const class FString& InItemUniqueId, int32_t InStorageNumber, const struct FSBWeaponItemData& InWeaponData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.SetWeaponDetails");
		
		UQuestRewardIcon_C_SetWeaponDetails_Params params {};
		params.Index = Index;
		params.InAmount = InAmount;
		params.InItemUniqueId = InItemUniqueId;
		params.InStorageNumber = InStorageNumber;
		params.InWeaponData = InWeaponData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.SetWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsAlwaysCategoryIcon                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuestRewardIcon_C::SetWeapon(int32_t Index, int32_t Amount, bool bIsAlwaysCategoryIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.SetWeapon");
		
		UQuestRewardIcon_C_SetWeapon_Params params {};
		params.Index = Index;
		params.Amount = Amount;
		params.bIsAlwaysCategoryIcon = bIsAlwaysCategoryIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.SetCostume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestRewardIcon_C::SetCostume(int32_t ItemIndex, int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.SetCostume");
		
		UQuestRewardIcon_C_SetCostume_Params params {};
		params.ItemIndex = ItemIndex;
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.SetMountImagine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestRewardIcon_C::SetMountImagine(int32_t Index, int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.SetMountImagine");
		
		UQuestRewardIcon_C_SetMountImagine_Params params {};
		params.Index = Index;
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.SetImagine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsAlwaysCategoryIcon                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuestRewardIcon_C::SetImagine(int32_t Index, int32_t Amount, bool bIsAlwaysCategoryIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.SetImagine");
		
		UQuestRewardIcon_C_SetImagine_Params params {};
		params.Index = Index;
		params.Amount = Amount;
		params.bIsAlwaysCategoryIcon = bIsAlwaysCategoryIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.SetSkyCoin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestRewardIcon_C::SetSkyCoin(int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.SetSkyCoin");
		
		UQuestRewardIcon_C_SetSkyCoin_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.SetGC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestRewardIcon_C::SetGC(int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.SetGC");
		
		UQuestRewardIcon_C_SetGC_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.SetCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInCheck                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuestRewardIcon_C::SetCheck(bool bInCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.SetCheck");
		
		UQuestRewardIcon_C_SetCheck_Params params {};
		params.bInCheck = bInCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.SetAlertIconType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsYellow                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuestRewardIcon_C::SetAlertIconType(bool IsYellow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.SetAlertIconType");
		
		UQuestRewardIcon_C_SetAlertIconType_Params params {};
		params.IsYellow = IsYellow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.SetAlertIconVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuestRewardIcon_C::SetAlertIconVisible(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.SetAlertIconVisible");
		
		UQuestRewardIcon_C_SetAlertIconVisible_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.SetAmountColorType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ColorName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UQuestRewardIcon_C::SetAmountColorType(const class FString& ColorName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.SetAmountColorType");
		
		UQuestRewardIcon_C_SetAmountColorType_Params params {};
		params.ColorName = ColorName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.SetAmountColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestRewardIcon_C::SetAmountColor(const struct FLinearColor& InColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.SetAmountColor");
		
		UQuestRewardIcon_C_SetAmountColor_Params params {};
		params.InColor = InColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.SetAmountVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIconAmountVisibility                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UnderIconAmountVisibility                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuestRewardIcon_C::SetAmountVisibility(bool InIconAmountVisibility, bool UnderIconAmountVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.SetAmountVisibility");
		
		UQuestRewardIcon_C_SetAmountVisibility_Params params {};
		params.InIconAmountVisibility = InIconAmountVisibility;
		params.UnderIconAmountVisibility = UnderIconAmountVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.SetFlagVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuestRewardIcon_C::SetFlagVisible(bool Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.SetFlagVisible");
		
		UQuestRewardIcon_C_SetFlagVisible_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.SetFloorNumberVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuestRewardIcon_C::SetFloorNumberVisible(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.SetFloorNumberVisible");
		
		UQuestRewardIcon_C_SetFloorNumberVisible_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.SetBGVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuestRewardIcon_C::SetBGVisible(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.SetBGVisible");
		
		UQuestRewardIcon_C_SetBGVisible_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.SetTeamBonus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InTeamBonusPercent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestRewardIcon_C::SetTeamBonus(int32_t InTeamBonusPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.SetTeamBonus");
		
		UQuestRewardIcon_C_SetTeamBonus_Params params {};
		params.InTeamBonusPercent = InTeamBonusPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.SetBonus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bBonus                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuestRewardIcon_C::SetBonus(bool bBonus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.SetBonus");
		
		UQuestRewardIcon_C_SetBonus_Params params {};
		params.bBonus = bBonus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.SetLuminous
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsDraw                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuestRewardIcon_C::SetLuminous(bool InIsDraw)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.SetLuminous");
		
		UQuestRewardIcon_C_SetLuminous_Params params {};
		params.InIsDraw = InIsDraw;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.SetOption
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsLuminous                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsBonus                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            InTeamBonusPercent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestRewardIcon_C::SetOption(bool IsLuminous, bool IsBonus, int32_t InTeamBonusPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.SetOption");
		
		UQuestRewardIcon_C_SetOption_Params params {};
		params.IsLuminous = IsLuminous;
		params.IsBonus = IsBonus;
		params.InTeamBonusPercent = InTeamBonusPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.Setup
	 * 		Flags  -> ()
	 */
	void UQuestRewardIcon_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.Setup");
		
		UQuestRewardIcon_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.SetMoney
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Num                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestRewardIcon_C::SetMoney(int32_t Num)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.SetMoney");
		
		UQuestRewardIcon_C_SetMoney_Params params {};
		params.Num = Num;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.SetClassExp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Exp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestRewardIcon_C::SetClassExp(int32_t Exp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.SetClassExp");
		
		UQuestRewardIcon_C_SetClassExp_Params params {};
		params.Exp = Exp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.SetRewardIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCommonIcon_C*                               self2                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBRewardItemType                                  InRewardType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InAmount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bUseRewardLottery                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            AmountRangeMin                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AmountRangeMax                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestRewardIcon_C::SetRewardIcon(class UCommonIcon_C* self2, ESBRewardItemType InRewardType, int32_t InId, int32_t InAmount, bool bUseRewardLottery, int32_t AmountRangeMin, int32_t AmountRangeMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.SetRewardIcon");
		
		UQuestRewardIcon_C_SetRewardIcon_Params params {};
		params.self2 = self2;
		params.InRewardType = InRewardType;
		params.InId = InId;
		params.InAmount = InAmount;
		params.bUseRewardLottery = bUseRewardLottery;
		params.AmountRangeMin = AmountRangeMin;
		params.AmountRangeMax = AmountRangeMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.SetupIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardItemType                                  RewardType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      UniqueId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               IsUnidentified                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsUseRewardLottery                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            AmountMin                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AmountMax                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestRewardIcon_C::SetupIcon(ESBRewardItemType RewardType, int32_t ID, int32_t Value, const class FString& UniqueId, bool IsUnidentified, bool IsUseRewardLottery, int32_t AmountMin, int32_t AmountMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.SetupIcon");
		
		UQuestRewardIcon_C_SetupIcon_Params params {};
		params.RewardType = RewardType;
		params.ID = ID;
		params.Value = Value;
		params.UniqueId = UniqueId;
		params.IsUnidentified = IsUnidentified;
		params.IsUseRewardLottery = IsUseRewardLottery;
		params.AmountMin = AmountMin;
		params.AmountMax = AmountMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.SetRewardMaster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterReward                             InMasterReward                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		bool                                               IsUnidentified                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               OverwriteAmount                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            NewAmount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AmountMin                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AmountMax                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsTreasure                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuestRewardIcon_C::SetRewardMaster(const struct FSBMasterReward& InMasterReward, bool IsUnidentified, bool OverwriteAmount, int32_t NewAmount, int32_t AmountMin, int32_t AmountMax, bool IsTreasure)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.SetRewardMaster");
		
		UQuestRewardIcon_C_SetRewardMaster_Params params {};
		params.InMasterReward = InMasterReward;
		params.IsUnidentified = IsUnidentified;
		params.OverwriteAmount = OverwriteAmount;
		params.NewAmount = NewAmount;
		params.AmountMin = AmountMin;
		params.AmountMax = AmountMax;
		params.IsTreasure = IsTreasure;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.CustomEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUMG_ProductDetailMenu_C*                    Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestRewardIcon_C::CustomEvent(class UUMG_ProductDetailMenu_C* Sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.CustomEvent");
		
		UQuestRewardIcon_C_CustomEvent_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.BindDetail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUMG_ProductDetailMenu_C*                    DetailWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestRewardIcon_C::BindDetail(class UUMG_ProductDetailMenu_C* DetailWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.BindDetail");
		
		UQuestRewardIcon_C_BindDetail_Params params {};
		params.DetailWidget = DetailWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.UnbindDetail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUMG_ProductDetailMenu_C*                    DetailWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestRewardIcon_C::UnbindDetail(class UUMG_ProductDetailMenu_C* DetailWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.UnbindDetail");
		
		UQuestRewardIcon_C_UnbindDetail_Params params {};
		params.DetailWidget = DetailWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.Construct
	 * 		Flags  -> ()
	 */
	void UQuestRewardIcon_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.Construct");
		
		UQuestRewardIcon_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.BndEvt__QuestRewardIcon_Icon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCommonIcon_C*                               Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestRewardIcon_C::BndEvt__QuestRewardIcon_Icon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(class UCommonIcon_C* Sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.BndEvt__QuestRewardIcon_Icon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");
		
		UQuestRewardIcon_C_BndEvt__QuestRewardIcon_Icon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuestRewardIcon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.PreConstruct");
		
		UQuestRewardIcon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.BndEvt__QuestRewardIcon_IconTacticalAbility_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UQuestRewardIcon_C::BndEvt__QuestRewardIcon_IconTacticalAbility_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.BndEvt__QuestRewardIcon_IconTacticalAbility_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UQuestRewardIcon_C_BndEvt__QuestRewardIcon_IconTacticalAbility_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.Destruct
	 * 		Flags  -> ()
	 */
	void UQuestRewardIcon_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.Destruct");
		
		UQuestRewardIcon_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.ExecuteUbergraph_QuestRewardIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestRewardIcon_C::ExecuteUbergraph_QuestRewardIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.ExecuteUbergraph_QuestRewardIcon");
		
		UQuestRewardIcon_C_ExecuteUbergraph_QuestRewardIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.OnClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UQuestRewardIcon_C*                          Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestRewardIcon_C::OnClick__DelegateSignature(class UQuestRewardIcon_C* Sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.OnClick__DelegateSignature");
		
		UQuestRewardIcon_C_OnClick__DelegateSignature_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestRewardIcon.QuestRewardIcon_C.OnToggleCheck__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsCheck                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UQuestRewardIcon_C*                          Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestRewardIcon_C::OnToggleCheck__DelegateSignature(bool IsCheck, class UQuestRewardIcon_C* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestRewardIcon.QuestRewardIcon_C.OnToggleCheck__DelegateSignature");
		
		UQuestRewardIcon_C_OnToggleCheck__DelegateSignature_Params params {};
		params.IsCheck = IsCheck;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuestRewardIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuestRewardIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuestRewardIcon.QuestRewardIcon_C");
		return ptr;
	}

}


