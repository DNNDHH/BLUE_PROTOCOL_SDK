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
	 * 		Name   -> Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.SetTerm
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        RewardId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_Reward_C::SetTerm(const class FName& RewardId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.SetTerm");
		
		UUMG_MatchingMenu_Reward_C_SetTerm_Params params {};
		params.RewardId = RewardId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.ShouldRankedRewardBeAdded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardSetType                                   RewardSetType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBMasterDungeonRankedReward                MasterDungeonRankedReward                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		bool                                               ShouldBeAdded                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_MatchingMenu_Reward_C::ShouldRankedRewardBeAdded(ESBRewardSetType RewardSetType, const struct FSBMasterDungeonRankedReward& MasterDungeonRankedReward, bool* ShouldBeAdded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.ShouldRankedRewardBeAdded");
		
		UUMG_MatchingMenu_Reward_C_ShouldRankedRewardBeAdded_Params params {};
		params.RewardSetType = RewardSetType;
		params.MasterDungeonRankedReward = MasterDungeonRankedReward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldBeAdded != nullptr)
			*ShouldBeAdded = params.ShouldBeAdded;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.ShouldTheFirstRewardBeRemoved_Individually
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ClearLine                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ShouldBeRemoved                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_MatchingMenu_Reward_C::ShouldTheFirstRewardBeRemoved_Individually(int32_t ClearLine, bool* ShouldBeRemoved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.ShouldTheFirstRewardBeRemoved_Individually");
		
		UUMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_Individually_Params params {};
		params.ClearLine = ClearLine;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldBeRemoved != nullptr)
			*ShouldBeRemoved = params.ShouldBeRemoved;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.ShouldTheFirstRewardBeRemoved_All
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShouldBeRemoved                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_MatchingMenu_Reward_C::ShouldTheFirstRewardBeRemoved_All(bool* ShouldBeRemoved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.ShouldTheFirstRewardBeRemoved_All");
		
		UUMG_MatchingMenu_Reward_C_ShouldTheFirstRewardBeRemoved_All_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldBeRemoved != nullptr)
			*ShouldBeRemoved = params.ShouldBeRemoved;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.GetRewardList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        RewardInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FSBMasterRewardWithAmountRange>      OutRewardList                                              (Parm, OutParm)
	 */
	void UUMG_MatchingMenu_Reward_C::GetRewardList(const class FName& RewardInfo, TArray<struct FSBMasterRewardWithAmountRange>* OutRewardList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.GetRewardList");
		
		UUMG_MatchingMenu_Reward_C_GetRewardList_Params params {};
		params.RewardInfo = RewardInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutRewardList != nullptr)
			*OutRewardList = params.OutRewardList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.GetRewardAmountByLiquidMemory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterRewardWithAmountRange              MasterRewardWithAmountRange                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AmountFixed                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AmountLottery                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               AmountChanged                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_MatchingMenu_Reward_C::GetRewardAmountByLiquidMemory(const struct FSBMasterRewardWithAmountRange& MasterRewardWithAmountRange, int32_t* AmountFixed, int32_t* AmountLottery, bool* AmountChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.GetRewardAmountByLiquidMemory");
		
		UUMG_MatchingMenu_Reward_C_GetRewardAmountByLiquidMemory_Params params {};
		params.MasterRewardWithAmountRange = MasterRewardWithAmountRange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AmountFixed != nullptr)
			*AmountFixed = params.AmountFixed;
		if (AmountLottery != nullptr)
			*AmountLottery = params.AmountLottery;
		if (AmountChanged != nullptr)
			*AmountChanged = params.AmountChanged;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.GetRewardAmountByNetworkCafe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterRewardWithAmountRange              MasterRewardWithAmountRange                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AmountFixed                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AmountLottery                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               AmountChanged                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_MatchingMenu_Reward_C::GetRewardAmountByNetworkCafe(const struct FSBMasterRewardWithAmountRange& MasterRewardWithAmountRange, int32_t* AmountFixed, int32_t* AmountLottery, bool* AmountChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.GetRewardAmountByNetworkCafe");
		
		UUMG_MatchingMenu_Reward_C_GetRewardAmountByNetworkCafe_Params params {};
		params.MasterRewardWithAmountRange = MasterRewardWithAmountRange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AmountFixed != nullptr)
			*AmountFixed = params.AmountFixed;
		if (AmountLottery != nullptr)
			*AmountLottery = params.AmountLottery;
		if (AmountChanged != nullptr)
			*AmountChanged = params.AmountChanged;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.GetRewardAmountByItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterRewardWithAmountRange              MasterRewardWithAmountRange                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AmountFixed                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AmountLottery                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               AmountChanged                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_MatchingMenu_Reward_C::GetRewardAmountByItem(const struct FSBMasterRewardWithAmountRange& MasterRewardWithAmountRange, int32_t* AmountFixed, int32_t* AmountLottery, bool* AmountChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.GetRewardAmountByItem");
		
		UUMG_MatchingMenu_Reward_C_GetRewardAmountByItem_Params params {};
		params.MasterRewardWithAmountRange = MasterRewardWithAmountRange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AmountFixed != nullptr)
			*AmountFixed = params.AmountFixed;
		if (AmountLottery != nullptr)
			*AmountLottery = params.AmountLottery;
		if (AmountChanged != nullptr)
			*AmountChanged = params.AmountChanged;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.GetAmountByRewardBoost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterRewardWithAmountRange              MasterRewardWithAmountRange                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBRewardBoostMissionMasterData             RewardBoostData                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		bool                                               RewardBoostIsValid                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            AmountFixed                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AmountLottery                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               AmountChanged                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_MatchingMenu_Reward_C::GetAmountByRewardBoost(const struct FSBMasterRewardWithAmountRange& MasterRewardWithAmountRange, const struct FSBRewardBoostMissionMasterData& RewardBoostData, bool RewardBoostIsValid, int32_t* AmountFixed, int32_t* AmountLottery, bool* AmountChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.GetAmountByRewardBoost");
		
		UUMG_MatchingMenu_Reward_C_GetAmountByRewardBoost_Params params {};
		params.MasterRewardWithAmountRange = MasterRewardWithAmountRange;
		params.RewardBoostData = RewardBoostData;
		params.RewardBoostIsValid = RewardBoostIsValid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AmountFixed != nullptr)
			*AmountFixed = params.AmountFixed;
		if (AmountLottery != nullptr)
			*AmountLottery = params.AmountLottery;
		if (AmountChanged != nullptr)
			*AmountChanged = params.AmountChanged;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.GetRewardAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterRewardWithAmountRange              MasterRewardWithAmountRange                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBRewardBoostMissionMasterData             RewardBoostData                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		bool                                               RewardBoostIsValid                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            AmountFixed                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AmountLottery                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               AmountChanged                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_MatchingMenu_Reward_C::GetRewardAmount(const struct FSBMasterRewardWithAmountRange& MasterRewardWithAmountRange, const struct FSBRewardBoostMissionMasterData& RewardBoostData, bool RewardBoostIsValid, int32_t* AmountFixed, int32_t* AmountLottery, bool* AmountChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.GetRewardAmount");
		
		UUMG_MatchingMenu_Reward_C_GetRewardAmount_Params params {};
		params.MasterRewardWithAmountRange = MasterRewardWithAmountRange;
		params.RewardBoostData = RewardBoostData;
		params.RewardBoostIsValid = RewardBoostIsValid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AmountFixed != nullptr)
			*AmountFixed = params.AmountFixed;
		if (AmountLottery != nullptr)
			*AmountLottery = params.AmountLottery;
		if (AmountChanged != nullptr)
			*AmountChanged = params.AmountChanged;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.ConvertMaximumValueToTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MaximumValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UUMG_MatchingMenu_Reward_C::ConvertMaximumValueToTime(int32_t MaximumValue, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.ConvertMaximumValueToTime");
		
		UUMG_MatchingMenu_Reward_C_ConvertMaximumValueToTime_Params params {};
		params.MaximumValue = MaximumValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.GetMasterDataDungeonRankedReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bExist                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSBMasterDungeonRankedReward                MasterDataDungeonRankedReward                              (Parm, OutParm, NoDestructor)
	 */
	void UUMG_MatchingMenu_Reward_C::GetMasterDataDungeonRankedReward(bool* bExist, struct FSBMasterDungeonRankedReward* MasterDataDungeonRankedReward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.GetMasterDataDungeonRankedReward");
		
		UUMG_MatchingMenu_Reward_C_GetMasterDataDungeonRankedReward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bExist != nullptr)
			*bExist = params.bExist;
		if (MasterDataDungeonRankedReward != nullptr)
			*MasterDataDungeonRankedReward = params.MasterDataDungeonRankedReward;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.Clear
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_Reward_C::Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.Clear");
		
		UUMG_MatchingMenu_Reward_C_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.SetClearLineScore
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_Reward_C::SetClearLineScore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.SetClearLineScore");
		
		UUMG_MatchingMenu_Reward_C_SetClearLineScore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.SetClearLineTime
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_Reward_C::SetClearLineTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.SetClearLineTime");
		
		UUMG_MatchingMenu_Reward_C_SetClearLineTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.SetCaption
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_Reward_C::SetCaption()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.SetCaption");
		
		UUMG_MatchingMenu_Reward_C_SetCaption_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.SetRewardTower
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBRewardBoostMissionMasterData             RewardBoostData                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		bool                                               RewardBoostIsValid                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_MatchingMenu_Reward_C::SetRewardTower(const struct FSBRewardBoostMissionMasterData& RewardBoostData, bool RewardBoostIsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.SetRewardTower");
		
		UUMG_MatchingMenu_Reward_C_SetRewardTower_Params params {};
		params.RewardBoostData = RewardBoostData;
		params.RewardBoostIsValid = RewardBoostIsValid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.SetRewardRanked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardSetType                                   RewardSetType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBRewardBoostMissionMasterData             RewardBoostData                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		bool                                               RewardBoostIsValid                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_MatchingMenu_Reward_C::SetRewardRanked(ESBRewardSetType RewardSetType, const struct FSBRewardBoostMissionMasterData& RewardBoostData, bool RewardBoostIsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.SetRewardRanked");
		
		UUMG_MatchingMenu_Reward_C_SetRewardRanked_Params params {};
		params.RewardSetType = RewardSetType;
		params.RewardBoostData = RewardBoostData;
		params.RewardBoostIsValid = RewardBoostIsValid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.SetReward2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        RewardInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            FloorNum                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            FloorMax                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBRewardBoostMissionMasterData             RewardBoostData                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		bool                                               RewardBoostIsValid                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_MatchingMenu_Reward_C::SetReward2(const class FName& RewardInfo, int32_t FloorNum, int32_t FloorMax, const struct FSBRewardBoostMissionMasterData& RewardBoostData, bool RewardBoostIsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.SetReward2");
		
		UUMG_MatchingMenu_Reward_C_SetReward2_Params params {};
		params.RewardInfo = RewardInfo;
		params.FloorNum = FloorNum;
		params.FloorMax = FloorMax;
		params.RewardBoostData = RewardBoostData;
		params.RewardBoostIsValid = RewardBoostIsValid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.SetReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        RewardInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            FloorNum                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            FloorMax                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBRewardBoostMissionMasterData             RewardBoostData                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		bool                                               RewardBoostIsValid                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_MatchingMenu_Reward_C::SetReward(const class FName& RewardInfo, int32_t FloorNum, int32_t FloorMax, const struct FSBRewardBoostMissionMasterData& RewardBoostData, bool RewardBoostIsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.SetReward");
		
		UUMG_MatchingMenu_Reward_C_SetReward_Params params {};
		params.RewardInfo = RewardInfo;
		params.FloorNum = FloorNum;
		params.FloorMax = FloorMax;
		params.RewardBoostData = RewardBoostData;
		params.RewardBoostIsValid = RewardBoostIsValid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      GameMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FName                                        MapId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_Reward_C::Setup(const class FString& GameMode, const class FName& MapId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.Setup");
		
		UUMG_MatchingMenu_Reward_C_Setup_Params params {};
		params.GameMode = GameMode;
		params.MapId = MapId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.OnClickIconEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UQuestRewardIcon_C*                          Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_Reward_C::OnClickIconEvent(class UQuestRewardIcon_C* Sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.OnClickIconEvent");
		
		UUMG_MatchingMenu_Reward_C_OnClickIconEvent_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.ExecuteUbergraph_UMG_MatchingMenu_Reward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_Reward_C::ExecuteUbergraph_UMG_MatchingMenu_Reward(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.ExecuteUbergraph_UMG_MatchingMenu_Reward");
		
		UUMG_MatchingMenu_Reward_C_ExecuteUbergraph_UMG_MatchingMenu_Reward_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.OnClickIcon__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UQuestRewardIcon_C*                          Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_Reward_C::OnClickIcon__DelegateSignature(class UQuestRewardIcon_C* Sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C.OnClickIcon__DelegateSignature");
		
		UUMG_MatchingMenu_Reward_C_OnClickIcon__DelegateSignature_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_MatchingMenu_Reward_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_MatchingMenu_Reward_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_MatchingMenu_Reward.UMG_MatchingMenu_Reward_C");
		return ptr;
	}

}


