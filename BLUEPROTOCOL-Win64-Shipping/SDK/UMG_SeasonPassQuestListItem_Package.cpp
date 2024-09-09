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
	 * 		Name   -> Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.UpdateReloadBtn
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestListItem_C::UpdateReloadBtn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.UpdateReloadBtn");
		
		UUMG_SeasonPassQuestListItem_C_UpdateReloadBtn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.GetProgressStatusText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OutStatusText                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestListItem_C::GetProgressStatusText(class FString* OutStatusText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.GetProgressStatusText");
		
		UUMG_SeasonPassQuestListItem_C_GetProgressStatusText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutStatusText != nullptr)
			*OutStatusText = params.OutStatusText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.ProgressSelect
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestListItem_C::ProgressSelect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.ProgressSelect");
		
		UUMG_SeasonPassQuestListItem_C_ProgressSelect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.GetTokenName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InTokenId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      OutTokenName                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestListItem_C::GetTokenName(int32_t InTokenId, class FString* OutTokenName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.GetTokenName");
		
		UUMG_SeasonPassQuestListItem_C_GetTokenName_Params params {};
		params.InTokenId = InTokenId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTokenName != nullptr)
			*OutTokenName = params.OutTokenName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.GetRloadTokenPossession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutTokenCount                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestListItem_C::GetRloadTokenPossession(int32_t* OutTokenCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.GetRloadTokenPossession");
		
		UUMG_SeasonPassQuestListItem_C_GetRloadTokenPossession_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTokenCount != nullptr)
			*OutTokenCount = params.OutTokenCount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.GetForceAchievedTokenPossession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutTokenCount                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestListItem_C::GetForceAchievedTokenPossession(int32_t* OutTokenCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.GetForceAchievedTokenPossession");
		
		UUMG_SeasonPassQuestListItem_C_GetForceAchievedTokenPossession_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTokenCount != nullptr)
			*OutTokenCount = params.OutTokenCount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.GetTokenReloadMsg
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InTokenId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InTokenCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      OutMassage                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               OutGetTokenData                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_SeasonPassQuestListItem_C::GetTokenReloadMsg(int32_t InTokenId, int32_t InTokenCount, class FString* OutMassage, bool* OutGetTokenData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.GetTokenReloadMsg");
		
		UUMG_SeasonPassQuestListItem_C_GetTokenReloadMsg_Params params {};
		params.InTokenId = InTokenId;
		params.InTokenCount = InTokenCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMassage != nullptr)
			*OutMassage = params.OutMassage;
		if (OutGetTokenData != nullptr)
			*OutGetTokenData = params.OutGetTokenData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.GetForceAchievedMsg
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InTokenId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InTokenCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      OutMassage                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               OutSuccess                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_SeasonPassQuestListItem_C::GetForceAchievedMsg(int32_t InTokenId, int32_t InTokenCount, class FString* OutMassage, bool* OutSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.GetForceAchievedMsg");
		
		UUMG_SeasonPassQuestListItem_C_GetForceAchievedMsg_Params params {};
		params.InTokenId = InTokenId;
		params.InTokenCount = InTokenCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMassage != nullptr)
			*OutMassage = params.OutMassage;
		if (OutSuccess != nullptr)
			*OutSuccess = params.OutSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.GetWeekCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutWeekCount                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestListItem_C::GetWeekCount(int32_t* OutWeekCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.GetWeekCount");
		
		UUMG_SeasonPassQuestListItem_C_GetWeekCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutWeekCount != nullptr)
			*OutWeekCount = params.OutWeekCount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.IsSubscribed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutIsSubscribed                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_SeasonPassQuestListItem_C::IsSubscribed(bool* OutIsSubscribed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.IsSubscribed");
		
		UUMG_SeasonPassQuestListItem_C_IsSubscribed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsSubscribed != nullptr)
			*OutIsSubscribed = params.OutIsSubscribed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.UpdateItemData
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestListItem_C::UpdateItemData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.UpdateItemData");
		
		UUMG_SeasonPassQuestListItem_C_UpdateItemData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.RewardItemSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBSeasonPassQuestItemData                  InItemData                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUMG_SeasonPassQuestListItem_C::RewardItemSet(const struct FSBSeasonPassQuestItemData& InItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.RewardItemSet");
		
		UUMG_SeasonPassQuestListItem_C_RewardItemSet_Params params {};
		params.InItemData = InItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.InitRewardIcon
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestListItem_C::InitRewardIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.InitRewardIcon");
		
		UUMG_SeasonPassQuestListItem_C_InitRewardIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.SetQuestDitailTextGuide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InQuestRank                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestListItem_C::SetQuestDitailTextGuide(int32_t InQuestRank)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.SetQuestDitailTextGuide");
		
		UUMG_SeasonPassQuestListItem_C_SetQuestDitailTextGuide_Params params {};
		params.InQuestRank = InQuestRank;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.Reload
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestListItem_C::Reload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.Reload");
		
		UUMG_SeasonPassQuestListItem_C_Reload_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.Clear
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestListItem_C::Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.Clear");
		
		UUMG_SeasonPassQuestListItem_C_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.RewardPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBSeasonPassQuestItemData                  InItemListData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUMG_SeasonPassQuestListItem_C::RewardPoint(const struct FSBSeasonPassQuestItemData& InItemListData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.RewardPoint");
		
		UUMG_SeasonPassQuestListItem_C_RewardPoint_Params params {};
		params.InItemListData = InItemListData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.UpdateReceiveButton
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestListItem_C::UpdateReceiveButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.UpdateReceiveButton");
		
		UUMG_SeasonPassQuestListItem_C_UpdateReceiveButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.Set Quest Type UI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBSeasonPassQuestCycleType                        InQuestType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestListItem_C::SetQuestTypeUI(ESBSeasonPassQuestCycleType InQuestType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.Set Quest Type UI");
		
		UUMG_SeasonPassQuestListItem_C_SetQuestTypeUI_Params params {};
		params.InQuestType = InQuestType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.Set Quest Dital Text Bonus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBSeasonPassQuestType                             IsQuestType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDateTime                                   InDateTime                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestListItem_C::SetQuestDitalTextBonus(ESBSeasonPassQuestType IsQuestType, const struct FDateTime& InDateTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.Set Quest Dital Text Bonus");
		
		UUMG_SeasonPassQuestListItem_C_SetQuestDitalTextBonus_Params params {};
		params.IsQuestType = IsQuestType;
		params.InDateTime = InDateTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.SetQuestDitailText_Normal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBSeasonPassQuestPlanState                        InPlamType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBSeasonPassQuestCycleType                        ICycleType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestListItem_C::SetQuestDitailText_Normal(ESBSeasonPassQuestPlanState InPlamType, ESBSeasonPassQuestCycleType ICycleType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.SetQuestDitailText_Normal");
		
		UUMG_SeasonPassQuestListItem_C_SetQuestDitailText_Normal_Params params {};
		params.InPlamType = InPlamType;
		params.ICycleType = ICycleType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.IsShowReloadButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutReloadUse                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_SeasonPassQuestListItem_C::IsShowReloadButton(bool* OutReloadUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.IsShowReloadButton");
		
		UUMG_SeasonPassQuestListItem_C_IsShowReloadButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutReloadUse != nullptr)
			*OutReloadUse = params.OutReloadUse;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.IsAchieved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutAchieved                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_SeasonPassQuestListItem_C::IsAchieved(bool* OutAchieved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.IsAchieved");
		
		UUMG_SeasonPassQuestListItem_C_IsAchieved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAchieved != nullptr)
			*OutAchieved = params.OutAchieved;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestListItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.Construct");
		
		UUMG_SeasonPassQuestListItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBSeasonPassQuestItemData                  InData                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class USBSeasonPassQuestMenuListData*              InOwner                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     InOwnerMenu                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBSeasonPassQuestCycleType                        InCycleType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsNowWeek                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_SeasonPassQuestListItem_C::SetData(const struct FSBSeasonPassQuestItemData& InData, class USBSeasonPassQuestMenuListData* InOwner, class UObject* InOwnerMenu, ESBSeasonPassQuestCycleType InCycleType, bool InIsNowWeek)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.SetData");
		
		UUMG_SeasonPassQuestListItem_C_SetData_Params params {};
		params.InData = InData;
		params.InOwner = InOwner;
		params.InOwnerMenu = InOwnerMenu;
		params.InCycleType = InCycleType;
		params.InIsNowWeek = InIsNowWeek;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.BndEvt__SBButton_Reload_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestListItem_C::BndEvt__SBButton_Reload_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.BndEvt__SBButton_Reload_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_SeasonPassQuestListItem_C_BndEvt__SBButton_Reload_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.BndEvt__SBButton_Receive_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestListItem_C::BndEvt__SBButton_Receive_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.BndEvt__SBButton_Receive_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_SeasonPassQuestListItem_C_BndEvt__SBButton_Receive_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.ReloadSelect
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestListItem_C::ReloadSelect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.ReloadSelect");
		
		UUMG_SeasonPassQuestListItem_C_ReloadSelect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.Reload_PointUse
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestListItem_C::Reload_PointUse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.Reload_PointUse");
		
		UUMG_SeasonPassQuestListItem_C_Reload_PointUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.Reload_PointUse_Select
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EYesNoDialogResult                                 Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestListItem_C::Reload_PointUse_Select(EYesNoDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.Reload_PointUse_Select");
		
		UUMG_SeasonPassQuestListItem_C_Reload_PointUse_Select_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestListItem_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.Destruct");
		
		UUMG_SeasonPassQuestListItem_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.OnReloadSeasonPassQuestDelegete_イベント_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBSeasonPassQuestItemData                  QuestData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ESBAutoDeliveryQuestReloadType                     Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ReturnCode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestListItem_C::OnReloadSeasonPassQuestDelegete__1(const struct FSBSeasonPassQuestItemData& QuestData, ESBAutoDeliveryQuestReloadType Type, bool Success, int32_t ReturnCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.OnReloadSeasonPassQuestDelegete_イベント_1");
		
		UUMG_SeasonPassQuestListItem_C_OnReloadSeasonPassQuestDelegete__1_Params params {};
		params.QuestData = QuestData;
		params.Type = Type;
		params.Success = Success;
		params.ReturnCode = ReturnCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.CompleteQuest
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestListItem_C::CompleteQuest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.CompleteQuest");
		
		UUMG_SeasonPassQuestListItem_C_CompleteQuest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.CompleteQuestRet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBSeasonPassQuestListManager               InQuestManager                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ESBAutoDeliveryRewardStatus                        RewardStatus                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ReturnCode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestListItem_C::CompleteQuestRet(const struct FSBSeasonPassQuestListManager& InQuestManager, ESBAutoDeliveryRewardStatus RewardStatus, int32_t ReturnCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.CompleteQuestRet");
		
		UUMG_SeasonPassQuestListItem_C_CompleteQuestRet_Params params {};
		params.InQuestManager = InQuestManager;
		params.RewardStatus = RewardStatus;
		params.ReturnCode = ReturnCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.ForceAchieved
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestListItem_C::ForceAchieved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.ForceAchieved");
		
		UUMG_SeasonPassQuestListItem_C_ForceAchieved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.ForceAchieved_exect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBSeasonPassQuestListManager               InQuestManager                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ESBAutoDeliveryRewardStatus                        RewardStatus                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ReturnCode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestListItem_C::ForceAchieved_exect(const struct FSBSeasonPassQuestListManager& InQuestManager, ESBAutoDeliveryRewardStatus RewardStatus, int32_t ReturnCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.ForceAchieved_exect");
		
		UUMG_SeasonPassQuestListItem_C_ForceAchieved_exect_Params params {};
		params.InQuestManager = InQuestManager;
		params.RewardStatus = RewardStatus;
		params.ReturnCode = ReturnCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.ForceAchieved_select
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EYesNoDialogResult                                 Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestListItem_C::ForceAchieved_select(EYesNoDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.ForceAchieved_select");
		
		UUMG_SeasonPassQuestListItem_C_ForceAchieved_select_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.BndEvt__UMG_SeasonPassQuestListItem_SBButton_Clear_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestListItem_C::BndEvt__UMG_SeasonPassQuestListItem_SBButton_Clear_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.BndEvt__UMG_SeasonPassQuestListItem_SBButton_Clear_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_SeasonPassQuestListItem_C_BndEvt__UMG_SeasonPassQuestListItem_SBButton_Clear_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.BndEvt__UMG_SeasonPassQuestListItem_SBButton_Clear_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestListItem_C::BndEvt__UMG_SeasonPassQuestListItem_SBButton_Clear_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.BndEvt__UMG_SeasonPassQuestListItem_SBButton_Clear_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UUMG_SeasonPassQuestListItem_C_BndEvt__UMG_SeasonPassQuestListItem_SBButton_Clear_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.BndEvt__UMG_SeasonPassQuestListItem_SBButton_Clear_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestListItem_C::BndEvt__UMG_SeasonPassQuestListItem_SBButton_Clear_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.BndEvt__UMG_SeasonPassQuestListItem_SBButton_Clear_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");
		
		UUMG_SeasonPassQuestListItem_C_BndEvt__UMG_SeasonPassQuestListItem_SBButton_Clear_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.ExecuteUbergraph_UMG_SeasonPassQuestListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestListItem_C::ExecuteUbergraph_UMG_SeasonPassQuestListItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C.ExecuteUbergraph_UMG_SeasonPassQuestListItem");
		
		UUMG_SeasonPassQuestListItem_C_ExecuteUbergraph_UMG_SeasonPassQuestListItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_SeasonPassQuestListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_SeasonPassQuestListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_SeasonPassQuestListItem.UMG_SeasonPassQuestListItem_C");
		return ptr;
	}

}


