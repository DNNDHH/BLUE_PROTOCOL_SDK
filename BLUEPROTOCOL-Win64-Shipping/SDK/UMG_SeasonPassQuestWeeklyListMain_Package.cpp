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
	 * 		Name   -> Function UMG_SeasonPassQuestWeeklyListMain.UMG_SeasonPassQuestWeeklyListMain_C.SearchUpdateQuestItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBSeasonPassQuestItemData                  ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUMG_SeasonPassQuestWeeklyListMain_C::SearchUpdateQuestItem(const struct FSBSeasonPassQuestItemData& ItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestWeeklyListMain.UMG_SeasonPassQuestWeeklyListMain_C.SearchUpdateQuestItem");
		
		UUMG_SeasonPassQuestWeeklyListMain_C_SearchUpdateQuestItem_Params params {};
		params.ItemData = ItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestWeeklyListMain.UMG_SeasonPassQuestWeeklyListMain_C.UpdateQuestList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBSeasonPassQuestListData                  ItemList                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUMG_SeasonPassQuestWeeklyListMain_C::UpdateQuestList(const struct FSBSeasonPassQuestListData& ItemList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestWeeklyListMain.UMG_SeasonPassQuestWeeklyListMain_C.UpdateQuestList");
		
		UUMG_SeasonPassQuestWeeklyListMain_C_UpdateQuestList_Params params {};
		params.ItemList = ItemList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestWeeklyListMain.UMG_SeasonPassQuestWeeklyListMain_C.SetDataFunc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBSeasonPassQuestMenuListData*              Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUMG_SeasonPassQuestMenu_C*                  OwnerMenu                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBSeasonPassQuestFilterType                       FilterType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestWeeklyListMain_C::SetDataFunc(class USBSeasonPassQuestMenuListData* Data, class UUMG_SeasonPassQuestMenu_C* OwnerMenu, ESBSeasonPassQuestFilterType FilterType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestWeeklyListMain.UMG_SeasonPassQuestWeeklyListMain_C.SetDataFunc");
		
		UUMG_SeasonPassQuestWeeklyListMain_C_SetDataFunc_Params params {};
		params.Data = Data;
		params.OwnerMenu = OwnerMenu;
		params.FilterType = FilterType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestWeeklyListMain.UMG_SeasonPassQuestWeeklyListMain_C.ForceClearUpdate
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestWeeklyListMain_C::ForceClearUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestWeeklyListMain.UMG_SeasonPassQuestWeeklyListMain_C.ForceClearUpdate");
		
		UUMG_SeasonPassQuestWeeklyListMain_C_ForceClearUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestWeeklyListMain.UMG_SeasonPassQuestWeeklyListMain_C.TryGetItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUMG_SeasonPassQuestWeeklyListItem_C*        AsUMGSeasonPassQuestBonusListItem                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestWeeklyListMain_C::TryGetItem(class UUMG_SeasonPassQuestWeeklyListItem_C** AsUMGSeasonPassQuestBonusListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestWeeklyListMain.UMG_SeasonPassQuestWeeklyListMain_C.TryGetItem");
		
		UUMG_SeasonPassQuestWeeklyListMain_C_TryGetItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsUMGSeasonPassQuestBonusListItem != nullptr)
			*AsUMGSeasonPassQuestBonusListItem = params.AsUMGSeasonPassQuestBonusListItem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestWeeklyListMain.UMG_SeasonPassQuestWeeklyListMain_C.ListInitialize
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestWeeklyListMain_C::ListInitialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestWeeklyListMain.UMG_SeasonPassQuestWeeklyListMain_C.ListInitialize");
		
		UUMG_SeasonPassQuestWeeklyListMain_C_ListInitialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestWeeklyListMain.UMG_SeasonPassQuestWeeklyListMain_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_SeasonPassQuestWeeklyListMain_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestWeeklyListMain.UMG_SeasonPassQuestWeeklyListMain_C.PreConstruct");
		
		UUMG_SeasonPassQuestWeeklyListMain_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestWeeklyListMain.UMG_SeasonPassQuestWeeklyListMain_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBSeasonPassQuestMenuListData*              Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUMG_SeasonPassQuestMenu_C*                  OwnerMenu                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBSeasonPassQuestFilterType                       FilterType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestWeeklyListMain_C::SetData(class USBSeasonPassQuestMenuListData* Data, class UUMG_SeasonPassQuestMenu_C* OwnerMenu, ESBSeasonPassQuestFilterType FilterType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestWeeklyListMain.UMG_SeasonPassQuestWeeklyListMain_C.SetData");
		
		UUMG_SeasonPassQuestWeeklyListMain_C_SetData_Params params {};
		params.Data = Data;
		params.OwnerMenu = OwnerMenu;
		params.FilterType = FilterType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestWeeklyListMain.UMG_SeasonPassQuestWeeklyListMain_C.ExecuteUbergraph_UMG_SeasonPassQuestWeeklyListMain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestWeeklyListMain_C::ExecuteUbergraph_UMG_SeasonPassQuestWeeklyListMain(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestWeeklyListMain.UMG_SeasonPassQuestWeeklyListMain_C.ExecuteUbergraph_UMG_SeasonPassQuestWeeklyListMain");
		
		UUMG_SeasonPassQuestWeeklyListMain_C_ExecuteUbergraph_UMG_SeasonPassQuestWeeklyListMain_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_SeasonPassQuestWeeklyListMain_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_SeasonPassQuestWeeklyListMain_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_SeasonPassQuestWeeklyListMain.UMG_SeasonPassQuestWeeklyListMain_C");
		return ptr;
	}

}


