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
	 * 		Name   -> Function UMG_SeasonPassQuestSeasonListItem.UMG_SeasonPassQuestSeasonListItem_C.Debug_SetQuestId
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestSeasonListItem_C::Debug_SetQuestId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestSeasonListItem.UMG_SeasonPassQuestSeasonListItem_C.Debug_SetQuestId");
		
		UUMG_SeasonPassQuestSeasonListItem_C_Debug_SetQuestId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestSeasonListItem.UMG_SeasonPassQuestSeasonListItem_C.SetParam
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestSeasonListItem_C::SetParam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestSeasonListItem.UMG_SeasonPassQuestSeasonListItem_C.SetParam");
		
		UUMG_SeasonPassQuestSeasonListItem_C_SetParam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestSeasonListItem.UMG_SeasonPassQuestSeasonListItem_C.UpdateParam
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestSeasonListItem_C::UpdateParam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestSeasonListItem.UMG_SeasonPassQuestSeasonListItem_C.UpdateParam");
		
		UUMG_SeasonPassQuestSeasonListItem_C_UpdateParam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestSeasonListItem.UMG_SeasonPassQuestSeasonListItem_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBSeasonPassQuestItemData                  InData                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UUMG_SeasonPassQuestMenu_C*                  InOwnerMenu                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestSeasonListItem_C::SetData(const struct FSBSeasonPassQuestItemData& InData, class UUMG_SeasonPassQuestMenu_C* InOwnerMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestSeasonListItem.UMG_SeasonPassQuestSeasonListItem_C.SetData");
		
		UUMG_SeasonPassQuestSeasonListItem_C_SetData_Params params {};
		params.InData = InData;
		params.InOwnerMenu = InOwnerMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestSeasonListItem.UMG_SeasonPassQuestSeasonListItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestSeasonListItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestSeasonListItem.UMG_SeasonPassQuestSeasonListItem_C.Construct");
		
		UUMG_SeasonPassQuestSeasonListItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestSeasonListItem.UMG_SeasonPassQuestSeasonListItem_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestSeasonListItem_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestSeasonListItem.UMG_SeasonPassQuestSeasonListItem_C.Destruct");
		
		UUMG_SeasonPassQuestSeasonListItem_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestSeasonListItem.UMG_SeasonPassQuestSeasonListItem_C.GetReward_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      QuestID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      GroupId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestSeasonListItem_C::GetReward_Event(const class FString& QuestID, const class FString& GroupId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestSeasonListItem.UMG_SeasonPassQuestSeasonListItem_C.GetReward_Event");
		
		UUMG_SeasonPassQuestSeasonListItem_C_GetReward_Event_Params params {};
		params.QuestID = QuestID;
		params.GroupId = GroupId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestSeasonListItem.UMG_SeasonPassQuestSeasonListItem_C.Comprite_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBSeasonPassQuestListManager               InQuestManager                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ESBAutoDeliveryRewardStatus                        RewardStatus                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ReturnCode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestSeasonListItem_C::Comprite_Event(const struct FSBSeasonPassQuestListManager& InQuestManager, ESBAutoDeliveryRewardStatus RewardStatus, int32_t ReturnCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestSeasonListItem.UMG_SeasonPassQuestSeasonListItem_C.Comprite_Event");
		
		UUMG_SeasonPassQuestSeasonListItem_C_Comprite_Event_Params params {};
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
	 * 		Name   -> Function UMG_SeasonPassQuestSeasonListItem.UMG_SeasonPassQuestSeasonListItem_C.ExecuteUbergraph_UMG_SeasonPassQuestSeasonListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestSeasonListItem_C::ExecuteUbergraph_UMG_SeasonPassQuestSeasonListItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestSeasonListItem.UMG_SeasonPassQuestSeasonListItem_C.ExecuteUbergraph_UMG_SeasonPassQuestSeasonListItem");
		
		UUMG_SeasonPassQuestSeasonListItem_C_ExecuteUbergraph_UMG_SeasonPassQuestSeasonListItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_SeasonPassQuestSeasonListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_SeasonPassQuestSeasonListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_SeasonPassQuestSeasonListItem.UMG_SeasonPassQuestSeasonListItem_C");
		return ptr;
	}

}


