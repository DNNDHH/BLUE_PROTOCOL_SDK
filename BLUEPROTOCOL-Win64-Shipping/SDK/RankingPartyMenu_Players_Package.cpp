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
	 * 		Name   -> Function RankingPartyMenu_Players.RankingPartyMenu_Players_C.SetRankingData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CategoryRank                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRankingData                                RankingData                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               IsTimeAttack                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsOutOfRank                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URankingPartyMenu_Players_C::SetRankingData(int32_t CategoryRank, const struct FRankingData& RankingData, bool IsTimeAttack, bool IsOutOfRank)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingPartyMenu_Players.RankingPartyMenu_Players_C.SetRankingData");
		
		URankingPartyMenu_Players_C_SetRankingData_Params params {};
		params.CategoryRank = CategoryRank;
		params.RankingData = RankingData;
		params.IsTimeAttack = IsTimeAttack;
		params.IsOutOfRank = IsOutOfRank;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingPartyMenu_Players.RankingPartyMenu_Players_C.SetEmptyMyRank
	 * 		Flags  -> ()
	 */
	void URankingPartyMenu_Players_C::SetEmptyMyRank()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingPartyMenu_Players.RankingPartyMenu_Players_C.SetEmptyMyRank");
		
		URankingPartyMenu_Players_C_SetEmptyMyRank_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URankingPartyMenu_Players_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URankingPartyMenu_Players_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RankingPartyMenu_Players.RankingPartyMenu_Players_C");
		return ptr;
	}

}


