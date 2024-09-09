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
	 * 		Name   -> Function RankingMenu_Player.RankingMenu_Player_C.GetShotID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ShortId                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void URankingMenu_Player_C::GetShotID(class FString* ShortId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu_Player.RankingMenu_Player_C.GetShotID");
		
		URankingMenu_Player_C_GetShotID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShortId != nullptr)
			*ShortId = params.ShortId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu_Player.RankingMenu_Player_C.SetEmptyMyRank
	 * 		Flags  -> ()
	 */
	void URankingMenu_Player_C::SetEmptyMyRank()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu_Player.RankingMenu_Player_C.SetEmptyMyRank");
		
		URankingMenu_Player_C_SetEmptyMyRank_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu_Player.RankingMenu_Player_C.Set My Rank Data
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CategoryRank                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRankingData                                RankingData                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               IsTimeAttack                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsOutOfRank                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsRankingAggregation                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URankingMenu_Player_C::SetMyRankData(int32_t CategoryRank, const struct FRankingData& RankingData, bool IsTimeAttack, bool IsOutOfRank, bool IsRankingAggregation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu_Player.RankingMenu_Player_C.Set My Rank Data");
		
		URankingMenu_Player_C_SetMyRankData_Params params {};
		params.CategoryRank = CategoryRank;
		params.RankingData = RankingData;
		params.IsTimeAttack = IsTimeAttack;
		params.IsOutOfRank = IsOutOfRank;
		params.IsRankingAggregation = IsRankingAggregation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu_Player.RankingMenu_Player_C.SetRankingData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CategoryRank                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRankingData                                RankingData                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               IsTimeAttack                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URankingMenu_Player_C::SetRankingData(int32_t CategoryRank, const struct FRankingData& RankingData, bool IsTimeAttack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu_Player.RankingMenu_Player_C.SetRankingData");
		
		URankingMenu_Player_C_SetRankingData_Params params {};
		params.CategoryRank = CategoryRank;
		params.RankingData = RankingData;
		params.IsTimeAttack = IsTimeAttack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu_Player.RankingMenu_Player_C.DownLoadFaceImage_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URL                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void URankingMenu_Player_C::DownLoadFaceImage_Event(const class FString& URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu_Player.RankingMenu_Player_C.DownLoadFaceImage_Event");
		
		URankingMenu_Player_C_DownLoadFaceImage_Event_Params params {};
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu_Player.RankingMenu_Player_C.BndEvt__SBButton_C_59_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URankingMenu_Player_C::BndEvt__SBButton_C_59_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu_Player.RankingMenu_Player_C.BndEvt__SBButton_C_59_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		URankingMenu_Player_C_BndEvt__SBButton_C_59_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu_Player.RankingMenu_Player_C.OnClose_Event
	 * 		Flags  -> ()
	 */
	void URankingMenu_Player_C::OnClose_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu_Player.RankingMenu_Player_C.OnClose_Event");
		
		URankingMenu_Player_C_OnClose_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu_Player.RankingMenu_Player_C.OnIsGetPlayerProfileDetailMenuDataDelegate_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FPlayerProfileMenuDetailData                PlayerProfileDetailMenuData                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URankingMenu_Player_C::OnIsGetPlayerProfileDetailMenuDataDelegate_Event(bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu_Player.RankingMenu_Player_C.OnIsGetPlayerProfileDetailMenuDataDelegate_Event");
		
		URankingMenu_Player_C_OnIsGetPlayerProfileDetailMenuDataDelegate_Event_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		params.PlayerProfileDetailMenuData = PlayerProfileDetailMenuData;
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu_Player.RankingMenu_Player_C.ExecuteUbergraph_RankingMenu_Player
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URankingMenu_Player_C::ExecuteUbergraph_RankingMenu_Player(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu_Player.RankingMenu_Player_C.ExecuteUbergraph_RankingMenu_Player");
		
		URankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URankingMenu_Player_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URankingMenu_Player_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RankingMenu_Player.RankingMenu_Player_C");
		return ptr;
	}

}


