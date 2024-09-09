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
	 * 		Name   -> Function UMG_SeasonPassQuestSeasonListIMain.UMG_SeasonPassQuestSeasonListIMain_C.SerachUpdateQuestItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBSeasonPassQuestItemData                  ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUMG_SeasonPassQuestSeasonListIMain_C::SerachUpdateQuestItem(const struct FSBSeasonPassQuestItemData& ItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestSeasonListIMain.UMG_SeasonPassQuestSeasonListIMain_C.SerachUpdateQuestItem");
		
		UUMG_SeasonPassQuestSeasonListIMain_C_SerachUpdateQuestItem_Params params {};
		params.ItemData = ItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestSeasonListIMain.UMG_SeasonPassQuestSeasonListIMain_C.UpdateQuestList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBSeasonPassQuestListData                  ItemList                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUMG_SeasonPassQuestSeasonListIMain_C::UpdateQuestList(const struct FSBSeasonPassQuestListData& ItemList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestSeasonListIMain.UMG_SeasonPassQuestSeasonListIMain_C.UpdateQuestList");
		
		UUMG_SeasonPassQuestSeasonListIMain_C_UpdateQuestList_Params params {};
		params.ItemList = ItemList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestSeasonListIMain.UMG_SeasonPassQuestSeasonListIMain_C.SetDataFunc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBSeasonPassQuestMenuListData*              Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUMG_SeasonPassQuestMenu_C*                  OwnerMenu                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestSeasonListIMain_C::SetDataFunc(class USBSeasonPassQuestMenuListData* Data, class UUMG_SeasonPassQuestMenu_C* OwnerMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestSeasonListIMain.UMG_SeasonPassQuestSeasonListIMain_C.SetDataFunc");
		
		UUMG_SeasonPassQuestSeasonListIMain_C_SetDataFunc_Params params {};
		params.Data = Data;
		params.OwnerMenu = OwnerMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestSeasonListIMain.UMG_SeasonPassQuestSeasonListIMain_C.TryGetItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUMG_SeasonPassQuestSeasonListItem_C*        AsUMGSeasonPassQuestSeasonListItem                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestSeasonListIMain_C::TryGetItem(class UUMG_SeasonPassQuestSeasonListItem_C** AsUMGSeasonPassQuestSeasonListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestSeasonListIMain.UMG_SeasonPassQuestSeasonListIMain_C.TryGetItem");
		
		UUMG_SeasonPassQuestSeasonListIMain_C_TryGetItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsUMGSeasonPassQuestSeasonListItem != nullptr)
			*AsUMGSeasonPassQuestSeasonListItem = params.AsUMGSeasonPassQuestSeasonListItem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestSeasonListIMain.UMG_SeasonPassQuestSeasonListIMain_C.ListInitialize
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestSeasonListIMain_C::ListInitialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestSeasonListIMain.UMG_SeasonPassQuestSeasonListIMain_C.ListInitialize");
		
		UUMG_SeasonPassQuestSeasonListIMain_C_ListInitialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestSeasonListIMain.UMG_SeasonPassQuestSeasonListIMain_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBSeasonPassQuestMenuListData*              Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUMG_SeasonPassQuestMenu_C*                  OwnerMenu                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestSeasonListIMain_C::SetData(class USBSeasonPassQuestMenuListData* Data, class UUMG_SeasonPassQuestMenu_C* OwnerMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestSeasonListIMain.UMG_SeasonPassQuestSeasonListIMain_C.SetData");
		
		UUMG_SeasonPassQuestSeasonListIMain_C_SetData_Params params {};
		params.Data = Data;
		params.OwnerMenu = OwnerMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestSeasonListIMain.UMG_SeasonPassQuestSeasonListIMain_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_SeasonPassQuestSeasonListIMain_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestSeasonListIMain.UMG_SeasonPassQuestSeasonListIMain_C.PreConstruct");
		
		UUMG_SeasonPassQuestSeasonListIMain_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestSeasonListIMain.UMG_SeasonPassQuestSeasonListIMain_C.ExecuteUbergraph_UMG_SeasonPassQuestSeasonListIMain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestSeasonListIMain_C::ExecuteUbergraph_UMG_SeasonPassQuestSeasonListIMain(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestSeasonListIMain.UMG_SeasonPassQuestSeasonListIMain_C.ExecuteUbergraph_UMG_SeasonPassQuestSeasonListIMain");
		
		UUMG_SeasonPassQuestSeasonListIMain_C_ExecuteUbergraph_UMG_SeasonPassQuestSeasonListIMain_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_SeasonPassQuestSeasonListIMain_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_SeasonPassQuestSeasonListIMain_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_SeasonPassQuestSeasonListIMain.UMG_SeasonPassQuestSeasonListIMain_C");
		return ptr;
	}

}


