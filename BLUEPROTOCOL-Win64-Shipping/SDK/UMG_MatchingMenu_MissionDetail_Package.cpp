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
	 * 		Name   -> Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.CheckNeedPlayers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBEntryConditionPartyState                        PartyState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NeedPlayers                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Passed                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_MatchingMenu_MissionDetail_C::CheckNeedPlayers(ESBEntryConditionPartyState PartyState, int32_t NeedPlayers, bool* Valid, bool* Passed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.CheckNeedPlayers");
		
		UUMG_MatchingMenu_MissionDetail_C_CheckNeedPlayers_Params params {};
		params.PartyState = PartyState;
		params.NeedPlayers = NeedPlayers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Valid != nullptr)
			*Valid = params.Valid;
		if (Passed != nullptr)
			*Passed = params.Passed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.Get Reward Search Name
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ModeId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        SearchName                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_MissionDetail_C::GetRewardSearchName(int32_t ModeId, class FName* SearchName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.Get Reward Search Name");
		
		UUMG_MatchingMenu_MissionDetail_C_GetRewardSearchName_Params params {};
		params.ModeId = ModeId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SearchName != nullptr)
			*SearchName = params.SearchName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.ClearRewardList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsHelpMode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_MatchingMenu_MissionDetail_C::ClearRewardList(bool IsHelpMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.ClearRewardList");
		
		UUMG_MatchingMenu_MissionDetail_C_ClearRewardList_Params params {};
		params.IsHelpMode = IsHelpMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.Get Ex Rank by Class Lv
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Lv                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Rank                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_MissionDetail_C::GetExRankbyClassLv(int32_t Lv, int32_t* Rank)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.Get Ex Rank by Class Lv");
		
		UUMG_MatchingMenu_MissionDetail_C_GetExRankbyClassLv_Params params {};
		params.Lv = Lv;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Rank != nullptr)
			*Rank = params.Rank;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.CheckEntryConditionScb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Lv                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Num                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_MatchingMenu_MissionDetail_C::CheckEntryConditionScb(int32_t Lv, int32_t Num, bool* Ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.CheckEntryConditionScb");
		
		UUMG_MatchingMenu_MissionDetail_C_CheckEntryConditionScb_Params params {};
		params.Lv = Lv;
		params.Num = Num;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ret != nullptr)
			*Ret = params.Ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.CheckEntryConditionQuest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                Quest                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               Passed                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_MatchingMenu_MissionDetail_C::CheckEntryConditionQuest(TArray<class FName>* Quest, bool* Passed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.CheckEntryConditionQuest");
		
		UUMG_MatchingMenu_MissionDetail_C_CheckEntryConditionQuest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Quest != nullptr)
			*Quest = params.Quest;
		if (Passed != nullptr)
			*Passed = params.Passed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.CheckEntryConditionClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<ESBClassType>                               Class                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               Passed                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_MatchingMenu_MissionDetail_C::CheckEntryConditionClass(TArray<ESBClassType>* Class, bool* Passed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.CheckEntryConditionClass");
		
		UUMG_MatchingMenu_MissionDetail_C_CheckEntryConditionClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Class != nullptr)
			*Class = params.Class;
		if (Passed != nullptr)
			*Passed = params.Passed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetStackB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBStackBEnableType                                StackB                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_MissionDetail_C::SetStackB(ESBStackBEnableType StackB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetStackB");
		
		UUMG_MatchingMenu_MissionDetail_C_SetStackB_Params params {};
		params.StackB = StackB;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList_DropTreasure
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TreasureId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_MissionDetail_C::SetRewardList_DropTreasure(int32_t TreasureId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList_DropTreasure");
		
		UUMG_MatchingMenu_MissionDetail_C_SetRewardList_DropTreasure_Params params {};
		params.TreasureId = TreasureId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList_HelpBonus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      GameMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FName                                        DungeonId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        RewardId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBRewardBoostMissionMasterData             RewardBoostData                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		bool                                               RewardBoostIsValid                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_MatchingMenu_MissionDetail_C::SetRewardList_HelpBonus(const class FString& GameMode, const class FName& DungeonId, const class FName& RewardId, const struct FSBRewardBoostMissionMasterData& RewardBoostData, bool RewardBoostIsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList_HelpBonus");
		
		UUMG_MatchingMenu_MissionDetail_C_SetRewardList_HelpBonus_Params params {};
		params.GameMode = GameMode;
		params.DungeonId = DungeonId;
		params.RewardId = RewardId;
		params.RewardBoostData = RewardBoostData;
		params.RewardBoostIsValid = RewardBoostIsValid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList_Plus2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      GameMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FName                                        DungeonId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        RewardId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_MissionDetail_C::SetRewardList_Plus2(const class FString& GameMode, const class FName& DungeonId, const class FName& RewardId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList_Plus2");
		
		UUMG_MatchingMenu_MissionDetail_C_SetRewardList_Plus2_Params params {};
		params.GameMode = GameMode;
		params.DungeonId = DungeonId;
		params.RewardId = RewardId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList_Plus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      GameMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FName                                        DungeonId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        RewardId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_MissionDetail_C::SetRewardList_Plus(const class FString& GameMode, const class FName& DungeonId, const class FName& RewardId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList_Plus");
		
		UUMG_MatchingMenu_MissionDetail_C_SetRewardList_Plus_Params params {};
		params.GameMode = GameMode;
		params.DungeonId = DungeonId;
		params.RewardId = RewardId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList_LimitTermFirst
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      GameMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FName                                        DungeonId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        RewardId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBRewardBoostMissionMasterData             RewardBoostData                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		bool                                               RewardBoostIsValid                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_MatchingMenu_MissionDetail_C::SetRewardList_LimitTermFirst(const class FString& GameMode, const class FName& DungeonId, const class FName& RewardId, const struct FSBRewardBoostMissionMasterData& RewardBoostData, bool RewardBoostIsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList_LimitTermFirst");
		
		UUMG_MatchingMenu_MissionDetail_C_SetRewardList_LimitTermFirst_Params params {};
		params.GameMode = GameMode;
		params.DungeonId = DungeonId;
		params.RewardId = RewardId;
		params.RewardBoostData = RewardBoostData;
		params.RewardBoostIsValid = RewardBoostIsValid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList_FirstNormal2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      GameMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FName                                        DungeonId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        RewardId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBRewardBoostMissionMasterData             RewardBoostData                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		bool                                               RewardBoostIsValid                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_MatchingMenu_MissionDetail_C::SetRewardList_FirstNormal2(const class FString& GameMode, const class FName& DungeonId, const class FName& RewardId, const struct FSBRewardBoostMissionMasterData& RewardBoostData, bool RewardBoostIsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList_FirstNormal2");
		
		UUMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstNormal2_Params params {};
		params.GameMode = GameMode;
		params.DungeonId = DungeonId;
		params.RewardId = RewardId;
		params.RewardBoostData = RewardBoostData;
		params.RewardBoostIsValid = RewardBoostIsValid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList_FirstNormal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      GameMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FName                                        DungeonId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        RewardId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBRewardBoostMissionMasterData             RewardBoostData                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		bool                                               RewardBoostIsValid                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_MatchingMenu_MissionDetail_C::SetRewardList_FirstNormal(const class FString& GameMode, const class FName& DungeonId, const class FName& RewardId, const struct FSBRewardBoostMissionMasterData& RewardBoostData, bool RewardBoostIsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList_FirstNormal");
		
		UUMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstNormal_Params params {};
		params.GameMode = GameMode;
		params.DungeonId = DungeonId;
		params.RewardId = RewardId;
		params.RewardBoostData = RewardBoostData;
		params.RewardBoostIsValid = RewardBoostIsValid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList_NormalRanked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      GameMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FName                                        DungeonId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBRewardBoostMissionMasterData             RewardBoostData                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		bool                                               RewardBoostIsValid                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_MatchingMenu_MissionDetail_C::SetRewardList_NormalRanked(const class FString& GameMode, const class FName& DungeonId, const struct FSBRewardBoostMissionMasterData& RewardBoostData, bool RewardBoostIsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList_NormalRanked");
		
		UUMG_MatchingMenu_MissionDetail_C_SetRewardList_NormalRanked_Params params {};
		params.GameMode = GameMode;
		params.DungeonId = DungeonId;
		params.RewardBoostData = RewardBoostData;
		params.RewardBoostIsValid = RewardBoostIsValid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList_FirstRanked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      GameMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FName                                        DungeonId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBRewardBoostMissionMasterData             RewardBoostData                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		bool                                               RewardBoostIsValid                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_MatchingMenu_MissionDetail_C::SetRewardList_FirstRanked(const class FString& GameMode, const class FName& DungeonId, const struct FSBRewardBoostMissionMasterData& RewardBoostData, bool RewardBoostIsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList_FirstRanked");
		
		UUMG_MatchingMenu_MissionDetail_C_SetRewardList_FirstRanked_Params params {};
		params.GameMode = GameMode;
		params.DungeonId = DungeonId;
		params.RewardBoostData = RewardBoostData;
		params.RewardBoostIsValid = RewardBoostIsValid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        DungeonId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        DungeonRewardId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      DungeonGameMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_MissionDetail_C::SetRewardList2(const class FName& DungeonId, const class FName& DungeonRewardId, const class FString& DungeonGameMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList2");
		
		UUMG_MatchingMenu_MissionDetail_C_SetRewardList2_Params params {};
		params.DungeonId = DungeonId;
		params.DungeonRewardId = DungeonRewardId;
		params.DungeonGameMode = DungeonGameMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        DungeonId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        DungeonRewardId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      DungeonGameMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            DropTreasureID                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_MissionDetail_C::SetRewardList(const class FName& DungeonId, const class FName& DungeonRewardId, const class FString& DungeonGameMode, int32_t DropTreasureID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetRewardList");
		
		UUMG_MatchingMenu_MissionDetail_C_SetRewardList_Params params {};
		params.DungeonId = DungeonId;
		params.DungeonRewardId = DungeonRewardId;
		params.DungeonGameMode = DungeonGameMode;
		params.DropTreasureID = DropTreasureID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetWebButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InSiteUrl                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_MissionDetail_C::SetWebButton(const class FString& InSiteUrl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetWebButton");
		
		UUMG_MatchingMenu_MissionDetail_C_SetWebButton_Params params {};
		params.InSiteUrl = InSiteUrl;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetEntryCondition2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RequiredBattleScore                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            RequiredClassLevel                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_MissionDetail_C::SetEntryCondition2(int32_t RequiredBattleScore, int32_t RequiredClassLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetEntryCondition2");
		
		UUMG_MatchingMenu_MissionDetail_C_SetEntryCondition2_Params params {};
		params.RequiredBattleScore = RequiredBattleScore;
		params.RequiredClassLevel = RequiredClassLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetEntryCondition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RequiredBattleScore                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            LevelSync                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            RequiredAdventurerRank                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            EntryConditionId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBEntryConditionPartyState                        RequiredPartyState                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            RequiredClassLevel                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FName>                                EntryConditionQuest                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<ESBClassType>                               EntryConditionClass                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            NeedPlayers                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            EntryConditionSubClassLv                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            EntryConditionScbNum                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_MissionDetail_C::SetEntryCondition(int32_t RequiredBattleScore, int32_t LevelSync, int32_t RequiredAdventurerRank, int32_t EntryConditionId, ESBEntryConditionPartyState RequiredPartyState, int32_t RequiredClassLevel, TArray<class FName>* EntryConditionQuest, TArray<ESBClassType>* EntryConditionClass, int32_t NeedPlayers, int32_t EntryConditionSubClassLv, int32_t EntryConditionScbNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetEntryCondition");
		
		UUMG_MatchingMenu_MissionDetail_C_SetEntryCondition_Params params {};
		params.RequiredBattleScore = RequiredBattleScore;
		params.LevelSync = LevelSync;
		params.RequiredAdventurerRank = RequiredAdventurerRank;
		params.EntryConditionId = EntryConditionId;
		params.RequiredPartyState = RequiredPartyState;
		params.RequiredClassLevel = RequiredClassLevel;
		params.NeedPlayers = NeedPlayers;
		params.EntryConditionSubClassLv = EntryConditionSubClassLv;
		params.EntryConditionScbNum = EntryConditionScbNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EntryConditionQuest != nullptr)
			*EntryConditionQuest = params.EntryConditionQuest;
		if (EntryConditionClass != nullptr)
			*EntryConditionClass = params.EntryConditionClass;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetTimeLimit2
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_MissionDetail_C::SetTimeLimit2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetTimeLimit2");
		
		UUMG_MatchingMenu_MissionDetail_C_SetTimeLimit2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetTimeLimit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TimeLimit                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_MissionDetail_C::SetTimeLimit(int32_t TimeLimit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetTimeLimit");
		
		UUMG_MatchingMenu_MissionDetail_C_SetTimeLimit_Params params {};
		params.TimeLimit = TimeLimit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetDungeonInfo2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMapInfo                                  DungeonMapInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUMG_MatchingMenu_MissionDetail_C::SetDungeonInfo2(const struct FSBMapInfo& DungeonMapInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetDungeonInfo2");
		
		UUMG_MatchingMenu_MissionDetail_C_SetDungeonInfo2_Params params {};
		params.DungeonMapInfo = DungeonMapInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetDungeonInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMapInfo                                  DungeonMapInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUMG_MatchingMenu_MissionDetail_C::SetDungeonInfo(const struct FSBMapInfo& DungeonMapInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.SetDungeonInfo");
		
		UUMG_MatchingMenu_MissionDetail_C_SetDungeonInfo_Params params {};
		params.DungeonMapInfo = DungeonMapInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.Construct
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_MissionDetail_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.Construct");
		
		UUMG_MatchingMenu_MissionDetail_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.OnClickRewardIconEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UQuestRewardIcon_C*                          Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_MissionDetail_C::OnClickRewardIconEvent(class UQuestRewardIcon_C* Sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.OnClickRewardIconEvent");
		
		UUMG_MatchingMenu_MissionDetail_C_OnClickRewardIconEvent_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.BndEvt__UMG_MatchingMenu_MissionDetail_ButtonWeb_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_MissionDetail_C::BndEvt__UMG_MatchingMenu_MissionDetail_ButtonWeb_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.BndEvt__UMG_MatchingMenu_MissionDetail_ButtonWeb_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_MatchingMenu_MissionDetail_C_BndEvt__UMG_MatchingMenu_MissionDetail_ButtonWeb_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_1_OnPressedButton__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EntryConditionType                                 EntryConditionType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   Position                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_MissionDetail_C::BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_1_OnPressedButton__DelegateSignature(EntryConditionType EntryConditionType, int32_t Value, const struct FVector2D& Position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_1_OnPressedButton__DelegateSignature");
		
		UUMG_MatchingMenu_MissionDetail_C_BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_1_OnPressedButton__DelegateSignature_Params params {};
		params.EntryConditionType = EntryConditionType;
		params.Value = Value;
		params.Position = Position;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.OnCloseEntryCondition
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_MissionDetail_C::OnCloseEntryCondition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.OnCloseEntryCondition");
		
		UUMG_MatchingMenu_MissionDetail_C_OnCloseEntryCondition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_SupplyList_K2Node_ComponentBoundEvent_2_OnClickIcon__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBDungeonSupply                            DungeonSupply                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUMG_MatchingMenu_MissionDetail_C::BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_SupplyList_K2Node_ComponentBoundEvent_2_OnClickIcon__DelegateSignature(const struct FSBDungeonSupply& DungeonSupply)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_SupplyList_K2Node_ComponentBoundEvent_2_OnClickIcon__DelegateSignature");
		
		UUMG_MatchingMenu_MissionDetail_C_BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_SupplyList_K2Node_ComponentBoundEvent_2_OnClickIcon__DelegateSignature_Params params {};
		params.DungeonSupply = DungeonSupply;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.BndEvt__UMG_MatchingMenu_MissionDetail_ButtonWeb_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_MissionDetail_C::BndEvt__UMG_MatchingMenu_MissionDetail_ButtonWeb_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.BndEvt__UMG_MatchingMenu_MissionDetail_ButtonWeb_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UUMG_MatchingMenu_MissionDetail_C_BndEvt__UMG_MatchingMenu_MissionDetail_ButtonWeb_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.BndEvt__UMG_MatchingMenu_MissionDetail_ButtonWeb_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_MissionDetail_C::BndEvt__UMG_MatchingMenu_MissionDetail_ButtonWeb_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.BndEvt__UMG_MatchingMenu_MissionDetail_ButtonWeb_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");
		
		UUMG_MatchingMenu_MissionDetail_C_BndEvt__UMG_MatchingMenu_MissionDetail_ButtonWeb_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_5_OnPressedButtonClass__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Position                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_MissionDetail_C::BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_5_OnPressedButtonClass__DelegateSignature(const struct FVector2D& Position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_5_OnPressedButtonClass__DelegateSignature");
		
		UUMG_MatchingMenu_MissionDetail_C_BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_5_OnPressedButtonClass__DelegateSignature_Params params {};
		params.Position = Position;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_6_OnPressedButtonQuest__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Position                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_MissionDetail_C::BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_6_OnPressedButtonQuest__DelegateSignature(const struct FVector2D& Position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_6_OnPressedButtonQuest__DelegateSignature");
		
		UUMG_MatchingMenu_MissionDetail_C_BndEvt__UMG_MatchingMenu_MissionDetail_UMG_MatchingMenu_EntryConditionList_K2Node_ComponentBoundEvent_6_OnPressedButtonQuest__DelegateSignature_Params params {};
		params.Position = Position;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.OnClose_Quest
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_MissionDetail_C::OnClose_Quest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.OnClose_Quest");
		
		UUMG_MatchingMenu_MissionDetail_C_OnClose_Quest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.OnClose_Class
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_MissionDetail_C::OnClose_Class()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.OnClose_Class");
		
		UUMG_MatchingMenu_MissionDetail_C_OnClose_Class_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.ExecuteUbergraph_UMG_MatchingMenu_MissionDetail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_MissionDetail_C::ExecuteUbergraph_UMG_MatchingMenu_MissionDetail(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.ExecuteUbergraph_UMG_MatchingMenu_MissionDetail");
		
		UUMG_MatchingMenu_MissionDetail_C_ExecuteUbergraph_UMG_MatchingMenu_MissionDetail_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.OnClickSupplyIcon__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBDungeonSupply                            DungeonSupply                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUMG_MatchingMenu_MissionDetail_C::OnClickSupplyIcon__DelegateSignature(const struct FSBDungeonSupply& DungeonSupply)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.OnClickSupplyIcon__DelegateSignature");
		
		UUMG_MatchingMenu_MissionDetail_C_OnClickSupplyIcon__DelegateSignature_Params params {};
		params.DungeonSupply = DungeonSupply;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.OnClickRewardIcon__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UQuestRewardIcon_C*                          Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_MissionDetail_C::OnClickRewardIcon__DelegateSignature(class UQuestRewardIcon_C* Sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.OnClickRewardIcon__DelegateSignature");
		
		UUMG_MatchingMenu_MissionDetail_C_OnClickRewardIcon__DelegateSignature_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.OnCloseButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_MissionDetail_C::OnCloseButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C.OnCloseButtonClicked__DelegateSignature");
		
		UUMG_MatchingMenu_MissionDetail_C_OnCloseButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_MatchingMenu_MissionDetail_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_MatchingMenu_MissionDetail_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_MatchingMenu_MissionDetail.UMG_MatchingMenu_MissionDetail_C");
		return ptr;
	}

}


