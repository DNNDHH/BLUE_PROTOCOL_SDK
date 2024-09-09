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
	 * 		Name   -> Function UMG_SeasonPassQuestEventListItem.UMG_SeasonPassQuestEventListItem_C.Debug_SetQuestId
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestEventListItem_C::Debug_SetQuestId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestEventListItem.UMG_SeasonPassQuestEventListItem_C.Debug_SetQuestId");
		
		UUMG_SeasonPassQuestEventListItem_C_Debug_SetQuestId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestEventListItem.UMG_SeasonPassQuestEventListItem_C.GetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UQuestRewardIcon_C*>                  OutIconList                                                (Parm, OutParm, ContainsInstancedReference)
	 */
	void UUMG_SeasonPassQuestEventListItem_C::GetData(TArray<class UQuestRewardIcon_C*>* OutIconList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestEventListItem.UMG_SeasonPassQuestEventListItem_C.GetData");
		
		UUMG_SeasonPassQuestEventListItem_C_GetData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIconList != nullptr)
			*OutIconList = params.OutIconList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestEventListItem.UMG_SeasonPassQuestEventListItem_C.SetReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsReceived                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_SeasonPassQuestEventListItem_C::SetReceived(bool IsReceived)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestEventListItem.UMG_SeasonPassQuestEventListItem_C.SetReceived");
		
		UUMG_SeasonPassQuestEventListItem_C_SetReceived_Params params {};
		params.IsReceived = IsReceived;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestEventListItem.UMG_SeasonPassQuestEventListItem_C.GetRewarCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutCount                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestEventListItem_C::GetRewarCount(int32_t* OutCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestEventListItem.UMG_SeasonPassQuestEventListItem_C.GetRewarCount");
		
		UUMG_SeasonPassQuestEventListItem_C_GetRewarCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutCount != nullptr)
			*OutCount = params.OutCount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestEventListItem.UMG_SeasonPassQuestEventListItem_C.UpdateParam
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestEventListItem_C::UpdateParam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestEventListItem.UMG_SeasonPassQuestEventListItem_C.UpdateParam");
		
		UUMG_SeasonPassQuestEventListItem_C_UpdateParam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestEventListItem.UMG_SeasonPassQuestEventListItem_C.SetParam
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestEventListItem_C::SetParam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestEventListItem.UMG_SeasonPassQuestEventListItem_C.SetParam");
		
		UUMG_SeasonPassQuestEventListItem_C_SetParam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestEventListItem.UMG_SeasonPassQuestEventListItem_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBSeasonPassQuestItemData                  InData                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUMG_SeasonPassQuestEventListItem_C::SetData(const struct FSBSeasonPassQuestItemData& InData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestEventListItem.UMG_SeasonPassQuestEventListItem_C.SetData");
		
		UUMG_SeasonPassQuestEventListItem_C_SetData_Params params {};
		params.InData = InData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestEventListItem.UMG_SeasonPassQuestEventListItem_C.ExecuteUbergraph_UMG_SeasonPassQuestEventListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestEventListItem_C::ExecuteUbergraph_UMG_SeasonPassQuestEventListItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestEventListItem.UMG_SeasonPassQuestEventListItem_C.ExecuteUbergraph_UMG_SeasonPassQuestEventListItem");
		
		UUMG_SeasonPassQuestEventListItem_C_ExecuteUbergraph_UMG_SeasonPassQuestEventListItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_SeasonPassQuestEventListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_SeasonPassQuestEventListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_SeasonPassQuestEventListItem.UMG_SeasonPassQuestEventListItem_C");
		return ptr;
	}

}


