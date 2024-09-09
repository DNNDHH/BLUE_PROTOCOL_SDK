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
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.IsIgnoreReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterReward                             SBMasterReward                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	bool UResultRewardList_C::IsIgnoreReward(const struct FSBMasterReward& SBMasterReward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.IsIgnoreReward");
		
		UResultRewardList_C_IsIgnoreReward_Params params {};
		params.SBMasterReward = SBMasterReward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.IsGC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardItemType                                  InType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UResultRewardList_C::IsGC(ESBRewardItemType InType, int32_t InId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.IsGC");
		
		UResultRewardList_C_IsGC_Params params {};
		params.InType = InType;
		params.InId = InId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.GetTeamBonusPercentForRewardID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InRewardId                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Percent                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UResultRewardList_C::GetTeamBonusPercentForRewardID(const class FName& InRewardId, int32_t* Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.GetTeamBonusPercentForRewardID");
		
		UResultRewardList_C_GetTeamBonusPercentForRewardID_Params params {};
		params.InRewardId = InRewardId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Percent != nullptr)
			*Percent = params.Percent;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.GetTeamBonusPercentForItemID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InItemID                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Percent                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UResultRewardList_C::GetTeamBonusPercentForItemID(int32_t InItemID, int32_t* Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.GetTeamBonusPercentForItemID");
		
		UResultRewardList_C_GetTeamBonusPercentForItemID_Params params {};
		params.InItemID = InItemID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Percent != nullptr)
			*Percent = params.Percent;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.GetTeamBonusPercentForType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardItemType                                  InType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Percent                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UResultRewardList_C::GetTeamBonusPercentForType(ESBRewardItemType InType, int32_t* Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.GetTeamBonusPercentForType");
		
		UResultRewardList_C_GetTeamBonusPercentForType_Params params {};
		params.InType = InType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Percent != nullptr)
			*Percent = params.Percent;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.GetTeamBonus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBMasterGuildBonus>                 TeamBonus                                                  (Parm, OutParm)
	 */
	void UResultRewardList_C::GetTeamBonus(TArray<struct FSBMasterGuildBonus>* TeamBonus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.GetTeamBonus");
		
		UResultRewardList_C_GetTeamBonus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TeamBonus != nullptr)
			*TeamBonus = params.TeamBonus;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.SetTeamBonus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBMasterGuildBonus>                 InTeamBonus                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UResultRewardList_C::SetTeamBonus(TArray<struct FSBMasterGuildBonus>* InTeamBonus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.SetTeamBonus");
		
		UResultRewardList_C_SetTeamBonus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InTeamBonus != nullptr)
			*InTeamBonus = params.InTeamBonus;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.IsBuffBonusToken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UResultRewardList_C::IsBuffBonusToken(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.IsBuffBonusToken");
		
		UResultRewardList_C_IsBuffBonusToken_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.IsBuffBonusGC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UResultRewardList_C::IsBuffBonusGC(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.IsBuffBonusGC");
		
		UResultRewardList_C_IsBuffBonusGC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.IsBuffBonusEXP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UResultRewardList_C::IsBuffBonusEXP(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.IsBuffBonusEXP");
		
		UResultRewardList_C_IsBuffBonusEXP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.IsBuffBonusLuno
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UResultRewardList_C::IsBuffBonusLuno(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.IsBuffBonusLuno");
		
		UResultRewardList_C_IsBuffBonusLuno_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.SetBuffBonus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsBuffItemBonusLuno                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InIsBuffItemBonusEXP                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InIsBuffItemBonusGC                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<int32_t>                                    InIsBuffTokenIDList                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UResultRewardList_C::SetBuffBonus(bool InIsBuffItemBonusLuno, bool InIsBuffItemBonusEXP, bool InIsBuffItemBonusGC, TArray<int32_t>* InIsBuffTokenIDList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.SetBuffBonus");
		
		UResultRewardList_C_SetBuffBonus_Params params {};
		params.InIsBuffItemBonusLuno = InIsBuffItemBonusLuno;
		params.InIsBuffItemBonusEXP = InIsBuffItemBonusEXP;
		params.InIsBuffItemBonusGC = InIsBuffItemBonusGC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InIsBuffTokenIDList != nullptr)
			*InIsBuffTokenIDList = params.InIsBuffTokenIDList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.IsRewardControlMaterialRate
	 * 		Flags  -> ()
	 */
	bool UResultRewardList_C::IsRewardControlMaterialRate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.IsRewardControlMaterialRate");
		
		UResultRewardList_C_IsRewardControlMaterialRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.IsRewardControlMaterialAmountAdd
	 * 		Flags  -> ()
	 */
	bool UResultRewardList_C::IsRewardControlMaterialAmountAdd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.IsRewardControlMaterialAmountAdd");
		
		UResultRewardList_C_IsRewardControlMaterialAmountAdd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.IsRewardControlMaterialAmountMulti
	 * 		Flags  -> ()
	 */
	bool UResultRewardList_C::IsRewardControlMaterialAmountMulti()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.IsRewardControlMaterialAmountMulti");
		
		UResultRewardList_C_IsRewardControlMaterialAmountMulti_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.IsRewardControlEXPMulti
	 * 		Flags  -> ()
	 */
	bool UResultRewardList_C::IsRewardControlEXPMulti()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.IsRewardControlEXPMulti");
		
		UResultRewardList_C_IsRewardControlEXPMulti_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.IsRewardControlLunoMulti
	 * 		Flags  -> ()
	 */
	bool UResultRewardList_C::IsRewardControlLunoMulti()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.IsRewardControlLunoMulti");
		
		UResultRewardList_C_IsRewardControlLunoMulti_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.GetRewardControl
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterRewardControl                      RewardControl                                              (Parm, OutParm, NoDestructor)
	 */
	void UResultRewardList_C::GetRewardControl(struct FSBMasterRewardControl* RewardControl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.GetRewardControl");
		
		UResultRewardList_C_GetRewardControl_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RewardControl != nullptr)
			*RewardControl = params.RewardControl;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.SetRewardControl
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterRewardControl                      InRewardControl                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UResultRewardList_C::SetRewardControl(const struct FSBMasterRewardControl& InRewardControl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.SetRewardControl");
		
		UResultRewardList_C_SetRewardControl_Params params {};
		params.InRewardControl = InRewardControl;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.IsShowDetailWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UResultRewardList_C::IsShowDetailWindow(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.IsShowDetailWindow");
		
		UResultRewardList_C_IsShowDetailWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.FindOwnItemInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InUniqueId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FOwnItemInfo                                ItemInfo                                                   (Parm, OutParm)
	 */
	void UResultRewardList_C::FindOwnItemInfo(const class FString& InUniqueId, bool* Result, struct FOwnItemInfo* ItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.FindOwnItemInfo");
		
		UResultRewardList_C_FindOwnItemInfo_Params params {};
		params.InUniqueId = InUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		if (ItemInfo != nullptr)
			*ItemInfo = params.ItemInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.GetOwnItemInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FOwnItemInfo>                        OwnItemInfo                                                (Parm, OutParm)
	 */
	void UResultRewardList_C::GetOwnItemInfo(TArray<struct FOwnItemInfo>* OwnItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.GetOwnItemInfo");
		
		UResultRewardList_C_GetOwnItemInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OwnItemInfo != nullptr)
			*OwnItemInfo = params.OwnItemInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.SetOwnItemInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FOwnItemInfo>                        OwnItemInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UResultRewardList_C::SetOwnItemInfo(TArray<struct FOwnItemInfo>* OwnItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.SetOwnItemInfo");
		
		UResultRewardList_C_SetOwnItemInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OwnItemInfo != nullptr)
			*OwnItemInfo = params.OwnItemInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.Build
	 * 		Flags  -> ()
	 */
	void UResultRewardList_C::Build()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.Build");
		
		UResultRewardList_C_Build_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.SetOverLimit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBOverLimit                                SBOverLimit                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UResultRewardList_C::SetOverLimit(const struct FSBOverLimit& SBOverLimit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.SetOverLimit");
		
		UResultRewardList_C_SetOverLimit_Params params {};
		params.SBOverLimit = SBOverLimit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.SetMedal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    InId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UResultRewardList_C::SetMedal(TArray<int32_t>* InId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.SetMedal");
		
		UResultRewardList_C_SetMedal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InId != nullptr)
			*InId = params.InId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.SetTokens
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBRewardToken>                      InTokenInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UResultRewardList_C::SetTokens(TArray<struct FSBRewardToken>* InTokenInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.SetTokens");
		
		UResultRewardList_C_SetTokens_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InTokenInfo != nullptr)
			*InTokenInfo = params.InTokenInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.SetToken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InAmount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UResultRewardList_C::SetToken(int32_t InId, int32_t InAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.SetToken");
		
		UResultRewardList_C_SetToken_Params params {};
		params.InId = InId;
		params.InAmount = InAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.SetRoseOrb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InAmount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UResultRewardList_C::SetRoseOrb(int32_t InAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.SetRoseOrb");
		
		UResultRewardList_C_SetRoseOrb_Params params {};
		params.InAmount = InAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.Debug Dump Lottery Groups Rewards
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        RewardId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FSBMasterRewardLotteryGroupsRewards> Rewards                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UResultRewardList_C::DebugDumpLotteryGroupsRewards(const class FName& RewardId, TArray<struct FSBMasterRewardLotteryGroupsRewards>* Rewards)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.Debug Dump Lottery Groups Rewards");
		
		UResultRewardList_C_DebugDumpLotteryGroupsRewards_Params params {};
		params.RewardId = RewardId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Rewards != nullptr)
			*Rewards = params.Rewards;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.Debug Dump Integer Array
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    inArray                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UResultRewardList_C::DebugDumpIntegerArray(TArray<int32_t>* inArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.Debug Dump Integer Array");
		
		UResultRewardList_C_DebugDumpIntegerArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (inArray != nullptr)
			*inArray = params.inArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.Debug Dump Own Item Info
	 * 		Flags  -> ()
	 */
	void UResultRewardList_C::DebugDumpOwnItemInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.Debug Dump Own Item Info");
		
		UResultRewardList_C_DebugDumpOwnItemInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.SetVisibleIconBG
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UResultRewardList_C::SetVisibleIconBG(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.SetVisibleIconBG");
		
		UResultRewardList_C_SetVisibleIconBG_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.SetAmountColorType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ColorName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UResultRewardList_C::SetAmountColorType(const class FString& ColorName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.SetAmountColorType");
		
		UResultRewardList_C_SetAmountColorType_Params params {};
		params.ColorName = ColorName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.SetAlertIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsYellow                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UResultRewardList_C::SetAlertIcon(bool IsYellow, bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.SetAlertIcon");
		
		UResultRewardList_C_SetAlertIcon_Params params {};
		params.IsYellow = IsYellow;
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.GetIconNum
	 * 		Flags  -> ()
	 */
	int32_t UResultRewardList_C::GetIconNum()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.GetIconNum");
		
		UResultRewardList_C_GetIconNum_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.DeleteIcon
	 * 		Flags  -> ()
	 */
	void UResultRewardList_C::DeleteIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.DeleteIcon");
		
		UResultRewardList_C_DeleteIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.SetSkill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBSkillParam>                       InSkillParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UResultRewardList_C::SetSkill(TArray<struct FSBSkillParam>* InSkillParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.SetSkill");
		
		UResultRewardList_C_SetSkill_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InSkillParam != nullptr)
			*InSkillParam = params.InSkillParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.CreateIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsClickToShowDetail                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UQuestRewardIcon_C*                          OutIcon                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UResultRewardList_C::CreateIcon(bool bIsClickToShowDetail, class UQuestRewardIcon_C** OutIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.CreateIcon");
		
		UResultRewardList_C_CreateIcon_Params params {};
		params.bIsClickToShowDetail = bIsClickToShowDetail;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIcon != nullptr)
			*OutIcon = params.OutIcon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.IsBonus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FQuestRewardIconInfo                        InInfo                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UResultRewardList_C::IsBonus(const struct FQuestRewardIconInfo& InInfo, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.IsBonus");
		
		UResultRewardList_C_IsBonus_Params params {};
		params.InInfo = InInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.AddIcon
	 * 		Flags  -> ()
	 */
	void UResultRewardList_C::AddIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.AddIcon");
		
		UResultRewardList_C_AddIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.IsMargeType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardItemType                                  Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UResultRewardList_C::IsMargeType(ESBRewardItemType Type, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.IsMargeType");
		
		UResultRewardList_C_IsMargeType_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.ClearInfo
	 * 		Flags  -> ()
	 */
	void UResultRewardList_C::ClearInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.ClearInfo");
		
		UResultRewardList_C_ClearInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.AddInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InUniqueId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            InAmount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InStorageNumber                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBRewardItemType                                  InType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            IsTeamBonusPercent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UResultRewardList_C::AddInfo(const class FString& InUniqueId, int32_t InAmount, int32_t InId, int32_t InStorageNumber, ESBRewardItemType InType, int32_t IsTeamBonusPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.AddInfo");
		
		UResultRewardList_C_AddInfo_Params params {};
		params.InUniqueId = InUniqueId;
		params.InAmount = InAmount;
		params.InId = InId;
		params.InStorageNumber = InStorageNumber;
		params.InType = InType;
		params.IsTeamBonusPercent = IsTeamBonusPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.SetReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                InReawrdIDList                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UResultRewardList_C::SetReward(TArray<class FName>* InReawrdIDList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.SetReward");
		
		UResultRewardList_C_SetReward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InReawrdIDList != nullptr)
			*InReawrdIDList = params.InReawrdIDList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.SetSkyCoin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InAmount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UResultRewardList_C::SetSkyCoin(int32_t InAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.SetSkyCoin");
		
		UResultRewardList_C_SetSkyCoin_Params params {};
		params.InAmount = InAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.SetItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FOwnItemInfo>                        InOwnItems                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UResultRewardList_C::SetItem(TArray<struct FOwnItemInfo>* InOwnItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.SetItem");
		
		UResultRewardList_C_SetItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InOwnItems != nullptr)
			*InOwnItems = params.InOwnItems;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.SetGC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InAmount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UResultRewardList_C::SetGC(int32_t InAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.SetGC");
		
		UResultRewardList_C_SetGC_Params params {};
		params.InAmount = InAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.SetExp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InAmount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UResultRewardList_C::SetExp(int32_t InAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.SetExp");
		
		UResultRewardList_C_SetExp_Params params {};
		params.InAmount = InAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.SetMoney
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InAmount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UResultRewardList_C::SetMoney(int32_t InAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.SetMoney");
		
		UResultRewardList_C_SetMoney_Params params {};
		params.InAmount = InAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.Clear
	 * 		Flags  -> ()
	 */
	void UResultRewardList_C::Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.Clear");
		
		UResultRewardList_C_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.Construct
	 * 		Flags  -> ()
	 */
	void UResultRewardList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.Construct");
		
		UResultRewardList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultRewardList.ResultRewardList_C.ExecuteUbergraph_ResultRewardList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UResultRewardList_C::ExecuteUbergraph_ResultRewardList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultRewardList.ResultRewardList_C.ExecuteUbergraph_ResultRewardList");
		
		UResultRewardList_C_ExecuteUbergraph_ResultRewardList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UResultRewardList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UResultRewardList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ResultRewardList.ResultRewardList_C");
		return ptr;
	}

}


