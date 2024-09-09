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
	 * 		Name   -> Function UMG_SeasonPassQuestDailyListMain.UMG_SeasonPassQuestDailyListMain_C.SearchUpdateQuestItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBSeasonPassQuestItemData                  InQuestItem                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUMG_SeasonPassQuestDailyListMain_C::SearchUpdateQuestItem(const struct FSBSeasonPassQuestItemData& InQuestItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestDailyListMain.UMG_SeasonPassQuestDailyListMain_C.SearchUpdateQuestItem");
		
		UUMG_SeasonPassQuestDailyListMain_C_SearchUpdateQuestItem_Params params {};
		params.InQuestItem = InQuestItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestDailyListMain.UMG_SeasonPassQuestDailyListMain_C.UpdateQuestItemList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBSeasonPassQuestListData                  ItemList                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUMG_SeasonPassQuestDailyListMain_C::UpdateQuestItemList(const struct FSBSeasonPassQuestListData& ItemList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestDailyListMain.UMG_SeasonPassQuestDailyListMain_C.UpdateQuestItemList");
		
		UUMG_SeasonPassQuestDailyListMain_C_UpdateQuestItemList_Params params {};
		params.ItemList = ItemList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestDailyListMain.UMG_SeasonPassQuestDailyListMain_C.SetDataFunc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBSeasonPassQuestMenuListData*              Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUMG_SeasonPassQuestMenu_C*                  OwnerMenu                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestDailyListMain_C::SetDataFunc(class USBSeasonPassQuestMenuListData* Data, class UUMG_SeasonPassQuestMenu_C* OwnerMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestDailyListMain.UMG_SeasonPassQuestDailyListMain_C.SetDataFunc");
		
		UUMG_SeasonPassQuestDailyListMain_C_SetDataFunc_Params params {};
		params.Data = Data;
		params.OwnerMenu = OwnerMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestDailyListMain.UMG_SeasonPassQuestDailyListMain_C.UpdateQuest
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestDailyListMain_C::UpdateQuest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestDailyListMain.UMG_SeasonPassQuestDailyListMain_C.UpdateQuest");
		
		UUMG_SeasonPassQuestDailyListMain_C_UpdateQuest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestDailyListMain.UMG_SeasonPassQuestDailyListMain_C.ForceClearUpdate
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestDailyListMain_C::ForceClearUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestDailyListMain.UMG_SeasonPassQuestDailyListMain_C.ForceClearUpdate");
		
		UUMG_SeasonPassQuestDailyListMain_C_ForceClearUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestDailyListMain.UMG_SeasonPassQuestDailyListMain_C.TryGetItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUMG_SeasonPassQuestDailyListItem_C*         AsUMGSeasonPassQuestBonusListItem                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestDailyListMain_C::TryGetItem(class UUMG_SeasonPassQuestDailyListItem_C** AsUMGSeasonPassQuestBonusListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestDailyListMain.UMG_SeasonPassQuestDailyListMain_C.TryGetItem");
		
		UUMG_SeasonPassQuestDailyListMain_C_TryGetItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsUMGSeasonPassQuestBonusListItem != nullptr)
			*AsUMGSeasonPassQuestBonusListItem = params.AsUMGSeasonPassQuestBonusListItem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestDailyListMain.UMG_SeasonPassQuestDailyListMain_C.ListInitialize
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestDailyListMain_C::ListInitialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestDailyListMain.UMG_SeasonPassQuestDailyListMain_C.ListInitialize");
		
		UUMG_SeasonPassQuestDailyListMain_C_ListInitialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestDailyListMain.UMG_SeasonPassQuestDailyListMain_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_SeasonPassQuestDailyListMain_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestDailyListMain.UMG_SeasonPassQuestDailyListMain_C.PreConstruct");
		
		UUMG_SeasonPassQuestDailyListMain_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestDailyListMain.UMG_SeasonPassQuestDailyListMain_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBSeasonPassQuestMenuListData*              Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUMG_SeasonPassQuestMenu_C*                  OwnerMenu                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestDailyListMain_C::SetData(class USBSeasonPassQuestMenuListData* Data, class UUMG_SeasonPassQuestMenu_C* OwnerMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestDailyListMain.UMG_SeasonPassQuestDailyListMain_C.SetData");
		
		UUMG_SeasonPassQuestDailyListMain_C_SetData_Params params {};
		params.Data = Data;
		params.OwnerMenu = OwnerMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestDailyListMain.UMG_SeasonPassQuestDailyListMain_C.ExecuteUbergraph_UMG_SeasonPassQuestDailyListMain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestDailyListMain_C::ExecuteUbergraph_UMG_SeasonPassQuestDailyListMain(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestDailyListMain.UMG_SeasonPassQuestDailyListMain_C.ExecuteUbergraph_UMG_SeasonPassQuestDailyListMain");
		
		UUMG_SeasonPassQuestDailyListMain_C_ExecuteUbergraph_UMG_SeasonPassQuestDailyListMain_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_SeasonPassQuestDailyListMain_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_SeasonPassQuestDailyListMain_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_SeasonPassQuestDailyListMain.UMG_SeasonPassQuestDailyListMain_C");
		return ptr;
	}

}


