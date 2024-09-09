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
	 * 		Name   -> Function UMG_SeasonPassQuestEventListMain.UMG_SeasonPassQuestEventListMain_C.GetEventTokenName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OutTokenName                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestEventListMain_C::GetEventTokenName(class FString* OutTokenName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestEventListMain.UMG_SeasonPassQuestEventListMain_C.GetEventTokenName");
		
		UUMG_SeasonPassQuestEventListMain_C_GetEventTokenName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTokenName != nullptr)
			*OutTokenName = params.OutTokenName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestEventListMain.UMG_SeasonPassQuestEventListMain_C.UpdateSubMenuExclamationIcon
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestEventListMain_C::UpdateSubMenuExclamationIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestEventListMain.UMG_SeasonPassQuestEventListMain_C.UpdateSubMenuExclamationIcon");
		
		UUMG_SeasonPassQuestEventListMain_C_UpdateSubMenuExclamationIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestEventListMain.UMG_SeasonPassQuestEventListMain_C.CheckReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutAchieved                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_SeasonPassQuestEventListMain_C::CheckReward(bool* OutAchieved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestEventListMain.UMG_SeasonPassQuestEventListMain_C.CheckReward");
		
		UUMG_SeasonPassQuestEventListMain_C_CheckReward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAchieved != nullptr)
			*OutAchieved = params.OutAchieved;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestEventListMain.UMG_SeasonPassQuestEventListMain_C.CreateQuestList
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestEventListMain_C::CreateQuestList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestEventListMain.UMG_SeasonPassQuestEventListMain_C.CreateQuestList");
		
		UUMG_SeasonPassQuestEventListMain_C_CreateQuestList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestEventListMain.UMG_SeasonPassQuestEventListMain_C.SetEndDate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBNaEventData*                              EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestEventListMain_C::SetEndDate(class USBNaEventData* EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestEventListMain.UMG_SeasonPassQuestEventListMain_C.SetEndDate");
		
		UUMG_SeasonPassQuestEventListMain_C_SetEndDate_Params params {};
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestEventListMain.UMG_SeasonPassQuestEventListMain_C.SearchUpdateQuestItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBSeasonPassQuestItemData                  ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUMG_SeasonPassQuestEventListMain_C::SearchUpdateQuestItem(const struct FSBSeasonPassQuestItemData& ItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestEventListMain.UMG_SeasonPassQuestEventListMain_C.SearchUpdateQuestItem");
		
		UUMG_SeasonPassQuestEventListMain_C_SearchUpdateQuestItem_Params params {};
		params.ItemData = ItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestEventListMain.UMG_SeasonPassQuestEventListMain_C.UpdateQuestItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBSeasonPassQuestListData                  ItemList                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUMG_SeasonPassQuestEventListMain_C::UpdateQuestItem(const struct FSBSeasonPassQuestListData& ItemList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestEventListMain.UMG_SeasonPassQuestEventListMain_C.UpdateQuestItem");
		
		UUMG_SeasonPassQuestEventListMain_C_UpdateQuestItem_Params params {};
		params.ItemList = ItemList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestEventListMain.UMG_SeasonPassQuestEventListMain_C.TryGetItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUMG_SeasonPassQuestEventListItem_C*         AsUMGSeasonPassQuestEventListItem                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestEventListMain_C::TryGetItem(class UUMG_SeasonPassQuestEventListItem_C** AsUMGSeasonPassQuestEventListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestEventListMain.UMG_SeasonPassQuestEventListMain_C.TryGetItem");
		
		UUMG_SeasonPassQuestEventListMain_C_TryGetItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsUMGSeasonPassQuestEventListItem != nullptr)
			*AsUMGSeasonPassQuestEventListItem = params.AsUMGSeasonPassQuestEventListItem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestEventListMain.UMG_SeasonPassQuestEventListMain_C.ListInitialize
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestEventListMain_C::ListInitialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestEventListMain.UMG_SeasonPassQuestEventListMain_C.ListInitialize");
		
		UUMG_SeasonPassQuestEventListMain_C_ListInitialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestEventListMain.UMG_SeasonPassQuestEventListMain_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_SeasonPassQuestEventListMain_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestEventListMain.UMG_SeasonPassQuestEventListMain_C.PreConstruct");
		
		UUMG_SeasonPassQuestEventListMain_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestEventListMain.UMG_SeasonPassQuestEventListMain_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBNaEventData*                              EventData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestEventListMain_C::SetData(class USBNaEventData* EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestEventListMain.UMG_SeasonPassQuestEventListMain_C.SetData");
		
		UUMG_SeasonPassQuestEventListMain_C_SetData_Params params {};
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestEventListMain.UMG_SeasonPassQuestEventListMain_C.CustomEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ReturnCode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestEventListMain_C::CustomEvent_1(int32_t ReturnCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestEventListMain.UMG_SeasonPassQuestEventListMain_C.CustomEvent_1");
		
		UUMG_SeasonPassQuestEventListMain_C_CustomEvent_1_Params params {};
		params.ReturnCode = ReturnCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestEventListMain.UMG_SeasonPassQuestEventListMain_C.QuestDataLoad
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestEventListMain_C::QuestDataLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestEventListMain.UMG_SeasonPassQuestEventListMain_C.QuestDataLoad");
		
		UUMG_SeasonPassQuestEventListMain_C_QuestDataLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestEventListMain.UMG_SeasonPassQuestEventListMain_C.Request_QuestDataLoad
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestEventListMain_C::Request_QuestDataLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestEventListMain.UMG_SeasonPassQuestEventListMain_C.Request_QuestDataLoad");
		
		UUMG_SeasonPassQuestEventListMain_C_Request_QuestDataLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestEventListMain.UMG_SeasonPassQuestEventListMain_C.Request_QuestComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InEventId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestEventListMain_C::Request_QuestComplete(int32_t InEventId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestEventListMain.UMG_SeasonPassQuestEventListMain_C.Request_QuestComplete");
		
		UUMG_SeasonPassQuestEventListMain_C_Request_QuestComplete_Params params {};
		params.InEventId = InEventId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestEventListMain.UMG_SeasonPassQuestEventListMain_C.OnCompleteAutoDeliveryEventQuestDataDelegete_イベント_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBSeasonPassQuestListData                  InQuestList                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ESBAutoDeliveryRewardStatus                        RewardStatus                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ReturnCode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestEventListMain_C::OnCompleteAutoDeliveryEventQuestDataDelegete__1(const struct FSBSeasonPassQuestListData& InQuestList, ESBAutoDeliveryRewardStatus RewardStatus, int32_t ReturnCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestEventListMain.UMG_SeasonPassQuestEventListMain_C.OnCompleteAutoDeliveryEventQuestDataDelegete_イベント_1");
		
		UUMG_SeasonPassQuestEventListMain_C_OnCompleteAutoDeliveryEventQuestDataDelegete__1_Params params {};
		params.InQuestList = InQuestList;
		params.RewardStatus = RewardStatus;
		params.ReturnCode = ReturnCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestEventListMain.UMG_SeasonPassQuestEventListMain_C.ExecuteUbergraph_UMG_SeasonPassQuestEventListMain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestEventListMain_C::ExecuteUbergraph_UMG_SeasonPassQuestEventListMain(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestEventListMain.UMG_SeasonPassQuestEventListMain_C.ExecuteUbergraph_UMG_SeasonPassQuestEventListMain");
		
		UUMG_SeasonPassQuestEventListMain_C_ExecuteUbergraph_UMG_SeasonPassQuestEventListMain_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_SeasonPassQuestEventListMain_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_SeasonPassQuestEventListMain_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_SeasonPassQuestEventListMain.UMG_SeasonPassQuestEventListMain_C");
		return ptr;
	}

}


