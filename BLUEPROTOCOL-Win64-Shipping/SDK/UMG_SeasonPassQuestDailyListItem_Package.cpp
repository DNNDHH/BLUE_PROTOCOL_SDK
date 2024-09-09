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
	 * 		Name   -> Function UMG_SeasonPassQuestDailyListItem.UMG_SeasonPassQuestDailyListItem_C.IsRewardItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutIsReawrdItem                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_SeasonPassQuestDailyListItem_C::IsRewardItem(bool* OutIsReawrdItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestDailyListItem.UMG_SeasonPassQuestDailyListItem_C.IsRewardItem");
		
		UUMG_SeasonPassQuestDailyListItem_C_IsRewardItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsReawrdItem != nullptr)
			*OutIsReawrdItem = params.OutIsReawrdItem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestDailyListItem.UMG_SeasonPassQuestDailyListItem_C.Debug_SetQuestId
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestDailyListItem_C::Debug_SetQuestId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestDailyListItem.UMG_SeasonPassQuestDailyListItem_C.Debug_SetQuestId");
		
		UUMG_SeasonPassQuestDailyListItem_C_Debug_SetQuestId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestDailyListItem.UMG_SeasonPassQuestDailyListItem_C.UpdateParam
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestDailyListItem_C::UpdateParam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestDailyListItem.UMG_SeasonPassQuestDailyListItem_C.UpdateParam");
		
		UUMG_SeasonPassQuestDailyListItem_C_UpdateParam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestDailyListItem.UMG_SeasonPassQuestDailyListItem_C.SetParam
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestDailyListItem_C::SetParam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestDailyListItem.UMG_SeasonPassQuestDailyListItem_C.SetParam");
		
		UUMG_SeasonPassQuestDailyListItem_C_SetParam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestDailyListItem.UMG_SeasonPassQuestDailyListItem_C.UpdateForceClearBtn
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestDailyListItem_C::UpdateForceClearBtn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestDailyListItem.UMG_SeasonPassQuestDailyListItem_C.UpdateForceClearBtn");
		
		UUMG_SeasonPassQuestDailyListItem_C_UpdateForceClearBtn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestDailyListItem.UMG_SeasonPassQuestDailyListItem_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBSeasonPassQuestItemData                  InData                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UUMG_SeasonPassQuestMenu_C*                  OwnerMenu                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestDailyListItem_C::SetData(const struct FSBSeasonPassQuestItemData& InData, class UUMG_SeasonPassQuestMenu_C* OwnerMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestDailyListItem.UMG_SeasonPassQuestDailyListItem_C.SetData");
		
		UUMG_SeasonPassQuestDailyListItem_C_SetData_Params params {};
		params.InData = InData;
		params.OwnerMenu = OwnerMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestDailyListItem.UMG_SeasonPassQuestDailyListItem_C.BndEvt__UMG_SeasonPassQuestDailyListItem_SBButton_Clear_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestDailyListItem_C::BndEvt__UMG_SeasonPassQuestDailyListItem_SBButton_Clear_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestDailyListItem.UMG_SeasonPassQuestDailyListItem_C.BndEvt__UMG_SeasonPassQuestDailyListItem_SBButton_Clear_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_SeasonPassQuestDailyListItem_C_BndEvt__UMG_SeasonPassQuestDailyListItem_SBButton_Clear_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestDailyListItem.UMG_SeasonPassQuestDailyListItem_C.ForceClear_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EYesNoDialogResult                                 Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestDailyListItem_C::ForceClear_Event(EYesNoDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestDailyListItem.UMG_SeasonPassQuestDailyListItem_C.ForceClear_Event");
		
		UUMG_SeasonPassQuestDailyListItem_C_ForceClear_Event_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestDailyListItem.UMG_SeasonPassQuestDailyListItem_C.OnCompleteAutoDeliveryQuestDataDelegete_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBSeasonPassQuestListManager               InQuestManager                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ESBAutoDeliveryRewardStatus                        RewardStatus                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ReturnCode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestDailyListItem_C::OnCompleteAutoDeliveryQuestDataDelegete_Event(const struct FSBSeasonPassQuestListManager& InQuestManager, ESBAutoDeliveryRewardStatus RewardStatus, int32_t ReturnCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestDailyListItem.UMG_SeasonPassQuestDailyListItem_C.OnCompleteAutoDeliveryQuestDataDelegete_Event");
		
		UUMG_SeasonPassQuestDailyListItem_C_OnCompleteAutoDeliveryQuestDataDelegete_Event_Params params {};
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
	 * 		Name   -> Function UMG_SeasonPassQuestDailyListItem.UMG_SeasonPassQuestDailyListItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestDailyListItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestDailyListItem.UMG_SeasonPassQuestDailyListItem_C.Construct");
		
		UUMG_SeasonPassQuestDailyListItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestDailyListItem.UMG_SeasonPassQuestDailyListItem_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestDailyListItem_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestDailyListItem.UMG_SeasonPassQuestDailyListItem_C.Destruct");
		
		UUMG_SeasonPassQuestDailyListItem_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestDailyListItem.UMG_SeasonPassQuestDailyListItem_C.GetReward_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      QuestID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      GroupId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestDailyListItem_C::GetReward_Event(const class FString& QuestID, const class FString& GroupId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestDailyListItem.UMG_SeasonPassQuestDailyListItem_C.GetReward_Event");
		
		UUMG_SeasonPassQuestDailyListItem_C_GetReward_Event_Params params {};
		params.QuestID = QuestID;
		params.GroupId = GroupId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestDailyListItem.UMG_SeasonPassQuestDailyListItem_C.Comprite_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBSeasonPassQuestListManager               InQuestManager                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ESBAutoDeliveryRewardStatus                        RewardStatus                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ReturnCode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestDailyListItem_C::Comprite_Event(const struct FSBSeasonPassQuestListManager& InQuestManager, ESBAutoDeliveryRewardStatus RewardStatus, int32_t ReturnCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestDailyListItem.UMG_SeasonPassQuestDailyListItem_C.Comprite_Event");
		
		UUMG_SeasonPassQuestDailyListItem_C_Comprite_Event_Params params {};
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
	 * 		Name   -> Function UMG_SeasonPassQuestDailyListItem.UMG_SeasonPassQuestDailyListItem_C.ExecuteUbergraph_UMG_SeasonPassQuestDailyListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestDailyListItem_C::ExecuteUbergraph_UMG_SeasonPassQuestDailyListItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestDailyListItem.UMG_SeasonPassQuestDailyListItem_C.ExecuteUbergraph_UMG_SeasonPassQuestDailyListItem");
		
		UUMG_SeasonPassQuestDailyListItem_C_ExecuteUbergraph_UMG_SeasonPassQuestDailyListItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_SeasonPassQuestDailyListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_SeasonPassQuestDailyListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_SeasonPassQuestDailyListItem.UMG_SeasonPassQuestDailyListItem_C");
		return ptr;
	}

}


