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
	 * 		Name   -> Function UMG_MatchingMenu_Treasure.UMG_MatchingMenu_Treasure_C.GetTreasureList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TreasureId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FSBMasterReward>                     TreasureList                                               (Parm, OutParm)
	 * 		TArray<int32_t>                                    LotIdList                                                  (Parm, OutParm)
	 */
	void UUMG_MatchingMenu_Treasure_C::GetTreasureList(int32_t TreasureId, TArray<struct FSBMasterReward>* TreasureList, TArray<int32_t>* LotIdList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Treasure.UMG_MatchingMenu_Treasure_C.GetTreasureList");
		
		UUMG_MatchingMenu_Treasure_C_GetTreasureList_Params params {};
		params.TreasureId = TreasureId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TreasureList != nullptr)
			*TreasureList = params.TreasureList;
		if (LotIdList != nullptr)
			*LotIdList = params.LotIdList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Treasure.UMG_MatchingMenu_Treasure_C.Clear
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_Treasure_C::Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Treasure.UMG_MatchingMenu_Treasure_C.Clear");
		
		UUMG_MatchingMenu_Treasure_C_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Treasure.UMG_MatchingMenu_Treasure_C.SetCaption
	 * 		Flags  -> ()
	 */
	void UUMG_MatchingMenu_Treasure_C::SetCaption()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Treasure.UMG_MatchingMenu_Treasure_C.SetCaption");
		
		UUMG_MatchingMenu_Treasure_C_SetCaption_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Treasure.UMG_MatchingMenu_Treasure_C.Set Reward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TreasureId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_Treasure_C::SetReward(int32_t TreasureId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Treasure.UMG_MatchingMenu_Treasure_C.Set Reward");
		
		UUMG_MatchingMenu_Treasure_C_SetReward_Params params {};
		params.TreasureId = TreasureId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Treasure.UMG_MatchingMenu_Treasure_C.OnClickIconEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UQuestRewardIcon_C*                          Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_Treasure_C::OnClickIconEvent(class UQuestRewardIcon_C* Sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Treasure.UMG_MatchingMenu_Treasure_C.OnClickIconEvent");
		
		UUMG_MatchingMenu_Treasure_C_OnClickIconEvent_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Treasure.UMG_MatchingMenu_Treasure_C.ExecuteUbergraph_UMG_MatchingMenu_Treasure
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_Treasure_C::ExecuteUbergraph_UMG_MatchingMenu_Treasure(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Treasure.UMG_MatchingMenu_Treasure_C.ExecuteUbergraph_UMG_MatchingMenu_Treasure");
		
		UUMG_MatchingMenu_Treasure_C_ExecuteUbergraph_UMG_MatchingMenu_Treasure_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_MatchingMenu_Treasure.UMG_MatchingMenu_Treasure_C.OnClickIcon__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UQuestRewardIcon_C*                          Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingMenu_Treasure_C::OnClickIcon__DelegateSignature(class UQuestRewardIcon_C* Sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingMenu_Treasure.UMG_MatchingMenu_Treasure_C.OnClickIcon__DelegateSignature");
		
		UUMG_MatchingMenu_Treasure_C_OnClickIcon__DelegateSignature_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_MatchingMenu_Treasure_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_MatchingMenu_Treasure_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_MatchingMenu_Treasure.UMG_MatchingMenu_Treasure_C");
		return ptr;
	}

}


