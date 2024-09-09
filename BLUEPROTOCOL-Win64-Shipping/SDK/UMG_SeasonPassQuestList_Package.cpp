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
	 * 		Name   -> Function UMG_SeasonPassQuestList.UMG_SeasonPassQuestList_C.SetNoQuestText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsEnableBlankText                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_SeasonPassQuestList_C::SetNoQuestText(bool bIsEnableBlankText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestList.UMG_SeasonPassQuestList_C.SetNoQuestText");
		
		UUMG_SeasonPassQuestList_C_SetNoQuestText_Params params {};
		params.bIsEnableBlankText = bIsEnableBlankText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestList.UMG_SeasonPassQuestList_C.ChangeQuestListActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBSeasonPassQuestType                             InQuestType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsActive                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_SeasonPassQuestList_C::ChangeQuestListActive(ESBSeasonPassQuestType InQuestType, bool InIsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestList.UMG_SeasonPassQuestList_C.ChangeQuestListActive");
		
		UUMG_SeasonPassQuestList_C_ChangeQuestListActive_Params params {};
		params.InQuestType = InQuestType;
		params.InIsActive = InIsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestList.UMG_SeasonPassQuestList_C.SetListYSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InYsize                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestList_C::SetListYSize(float InYsize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestList.UMG_SeasonPassQuestList_C.SetListYSize");
		
		UUMG_SeasonPassQuestList_C_SetListYSize_Params params {};
		params.InYsize = InYsize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestList.UMG_SeasonPassQuestList_C.ChangeWeeklyListActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InWeekCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsActive                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_SeasonPassQuestList_C::ChangeWeeklyListActive(int32_t InWeekCount, bool InIsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestList.UMG_SeasonPassQuestList_C.ChangeWeeklyListActive");
		
		UUMG_SeasonPassQuestList_C_ChangeWeeklyListActive_Params params {};
		params.InWeekCount = InWeekCount;
		params.InIsActive = InIsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestList.UMG_SeasonPassQuestList_C.ClearListItem
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestList_C::ClearListItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestList.UMG_SeasonPassQuestList_C.ClearListItem");
		
		UUMG_SeasonPassQuestList_C_ClearListItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestList.UMG_SeasonPassQuestList_C.CreateFilterList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    InTextIdList                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class FString>                              OutStringList                                              (Parm, OutParm)
	 */
	void UUMG_SeasonPassQuestList_C::CreateFilterList(TArray<int32_t>* InTextIdList, TArray<class FString>* OutStringList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestList.UMG_SeasonPassQuestList_C.CreateFilterList");
		
		UUMG_SeasonPassQuestList_C_CreateFilterList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InTextIdList != nullptr)
			*InTextIdList = params.InTextIdList;
		if (OutStringList != nullptr)
			*OutStringList = params.OutStringList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestList.UMG_SeasonPassQuestList_C.GetFilterList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBSeasonPassQuestCycleType                        InCycle                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<ESBSeasonPassQuestFilterType>               OutStringList                                              (Parm, OutParm)
	 */
	void UUMG_SeasonPassQuestList_C::GetFilterList(ESBSeasonPassQuestCycleType InCycle, TArray<ESBSeasonPassQuestFilterType>* OutStringList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestList.UMG_SeasonPassQuestList_C.GetFilterList");
		
		UUMG_SeasonPassQuestList_C_GetFilterList_Params params {};
		params.InCycle = InCycle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutStringList != nullptr)
			*OutStringList = params.OutStringList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestList.UMG_SeasonPassQuestList_C.Set Owner Menu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     InOwnerMenu                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestList_C::SetOwnerMenu(class UObject* InOwnerMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestList.UMG_SeasonPassQuestList_C.Set Owner Menu");
		
		UUMG_SeasonPassQuestList_C_SetOwnerMenu_Params params {};
		params.InOwnerMenu = InOwnerMenu;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestList.UMG_SeasonPassQuestList_C.CreateWeeklyListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBSeasonPassQuestMenuListData*              Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBSeasonPassQuestFilterType                       InFilterType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestList_C::CreateWeeklyListItem(class USBSeasonPassQuestMenuListData* Data, ESBSeasonPassQuestFilterType InFilterType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestList.UMG_SeasonPassQuestList_C.CreateWeeklyListItem");
		
		UUMG_SeasonPassQuestList_C_CreateWeeklyListItem_Params params {};
		params.Data = Data;
		params.InFilterType = InFilterType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestList.UMG_SeasonPassQuestList_C.CreateDailyHeader
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBSeasonPassQuestType                             QuestType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestList_C::CreateDailyHeader(ESBSeasonPassQuestType QuestType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestList.UMG_SeasonPassQuestList_C.CreateDailyHeader");
		
		UUMG_SeasonPassQuestList_C_CreateDailyHeader_Params params {};
		params.QuestType = QuestType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestList.UMG_SeasonPassQuestList_C.Create List Item
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBSeasonPassQuestMenuListData*              InOwner                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FSBSeasonPassQuestItemData>          InDataList                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ESBSeasonPassQuestCycleType                        InCycleType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsNowWeek                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_SeasonPassQuestList_C::CreateListItem(class USBSeasonPassQuestMenuListData* InOwner, TArray<struct FSBSeasonPassQuestItemData>* InDataList, ESBSeasonPassQuestCycleType InCycleType, bool InIsNowWeek)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestList.UMG_SeasonPassQuestList_C.Create List Item");
		
		UUMG_SeasonPassQuestList_C_CreateListItem_Params params {};
		params.InOwner = InOwner;
		params.InCycleType = InCycleType;
		params.InIsNowWeek = InIsNowWeek;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InDataList != nullptr)
			*InDataList = params.InDataList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestList.UMG_SeasonPassQuestList_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBSeasonPassQuestMenuListData*              Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBSeasonPassQuestFilterType                       InFilterType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestList_C::SetData(class USBSeasonPassQuestMenuListData* Data, ESBSeasonPassQuestFilterType InFilterType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestList.UMG_SeasonPassQuestList_C.SetData");
		
		UUMG_SeasonPassQuestList_C_SetData_Params params {};
		params.Data = Data;
		params.InFilterType = InFilterType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestList.UMG_SeasonPassQuestList_C.ExecuteUbergraph_UMG_SeasonPassQuestList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestList_C::ExecuteUbergraph_UMG_SeasonPassQuestList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestList.UMG_SeasonPassQuestList_C.ExecuteUbergraph_UMG_SeasonPassQuestList");
		
		UUMG_SeasonPassQuestList_C_ExecuteUbergraph_UMG_SeasonPassQuestList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_SeasonPassQuestList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_SeasonPassQuestList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_SeasonPassQuestList.UMG_SeasonPassQuestList_C");
		return ptr;
	}

}


