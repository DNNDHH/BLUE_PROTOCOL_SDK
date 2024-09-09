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
	 * 		Name   -> Function UMG_SeasonPassQuestBonusListMain.UMG_SeasonPassQuestBonusListMain_C.SearchUpdateQuestItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBSeasonPassQuestItemData                  ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUMG_SeasonPassQuestBonusListMain_C::SearchUpdateQuestItem(const struct FSBSeasonPassQuestItemData& ItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestBonusListMain.UMG_SeasonPassQuestBonusListMain_C.SearchUpdateQuestItem");
		
		UUMG_SeasonPassQuestBonusListMain_C_SearchUpdateQuestItem_Params params {};
		params.ItemData = ItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestBonusListMain.UMG_SeasonPassQuestBonusListMain_C.UpdateQuestItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBSeasonPassQuestListData                  ItemList                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUMG_SeasonPassQuestBonusListMain_C::UpdateQuestItem(const struct FSBSeasonPassQuestListData& ItemList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestBonusListMain.UMG_SeasonPassQuestBonusListMain_C.UpdateQuestItem");
		
		UUMG_SeasonPassQuestBonusListMain_C_UpdateQuestItem_Params params {};
		params.ItemList = ItemList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestBonusListMain.UMG_SeasonPassQuestBonusListMain_C.SetDataFunc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBSeasonPassQuestMenuListData*              Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUMG_SeasonPassBonusQuestMenu_C*             OwnerMenu                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestBonusListMain_C::SetDataFunc(class USBSeasonPassQuestMenuListData* Data, class UUMG_SeasonPassBonusQuestMenu_C* OwnerMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestBonusListMain.UMG_SeasonPassQuestBonusListMain_C.SetDataFunc");
		
		UUMG_SeasonPassQuestBonusListMain_C_SetDataFunc_Params params {};
		params.Data = Data;
		params.OwnerMenu = OwnerMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestBonusListMain.UMG_SeasonPassQuestBonusListMain_C.TryGetItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUMG_SeasonPassQuestBonusListItem_C*         AsUMGSeasonPassQuestBonusListItem                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestBonusListMain_C::TryGetItem(class UUMG_SeasonPassQuestBonusListItem_C** AsUMGSeasonPassQuestBonusListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestBonusListMain.UMG_SeasonPassQuestBonusListMain_C.TryGetItem");
		
		UUMG_SeasonPassQuestBonusListMain_C_TryGetItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsUMGSeasonPassQuestBonusListItem != nullptr)
			*AsUMGSeasonPassQuestBonusListItem = params.AsUMGSeasonPassQuestBonusListItem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestBonusListMain.UMG_SeasonPassQuestBonusListMain_C.ListInitialize
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestBonusListMain_C::ListInitialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestBonusListMain.UMG_SeasonPassQuestBonusListMain_C.ListInitialize");
		
		UUMG_SeasonPassQuestBonusListMain_C_ListInitialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestBonusListMain.UMG_SeasonPassQuestBonusListMain_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_SeasonPassQuestBonusListMain_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestBonusListMain.UMG_SeasonPassQuestBonusListMain_C.PreConstruct");
		
		UUMG_SeasonPassQuestBonusListMain_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestBonusListMain.UMG_SeasonPassQuestBonusListMain_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBSeasonPassQuestMenuListData*              Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUMG_SeasonPassBonusQuestMenu_C*             OwnerMenu                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestBonusListMain_C::SetData(class USBSeasonPassQuestMenuListData* Data, class UUMG_SeasonPassBonusQuestMenu_C* OwnerMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestBonusListMain.UMG_SeasonPassQuestBonusListMain_C.SetData");
		
		UUMG_SeasonPassQuestBonusListMain_C_SetData_Params params {};
		params.Data = Data;
		params.OwnerMenu = OwnerMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestBonusListMain.UMG_SeasonPassQuestBonusListMain_C.ExecuteUbergraph_UMG_SeasonPassQuestBonusListMain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestBonusListMain_C::ExecuteUbergraph_UMG_SeasonPassQuestBonusListMain(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestBonusListMain.UMG_SeasonPassQuestBonusListMain_C.ExecuteUbergraph_UMG_SeasonPassQuestBonusListMain");
		
		UUMG_SeasonPassQuestBonusListMain_C_ExecuteUbergraph_UMG_SeasonPassQuestBonusListMain_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_SeasonPassQuestBonusListMain_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_SeasonPassQuestBonusListMain_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_SeasonPassQuestBonusListMain.UMG_SeasonPassQuestBonusListMain_C");
		return ptr;
	}

}


