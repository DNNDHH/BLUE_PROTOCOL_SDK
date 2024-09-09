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
	 * 		Name   -> Function UMG_MatchingImage_RecommendedBattleScore.UMG_MatchingImage_RecommendedBattleScore_C.SetRecommendedBattleScore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RecommendedBattleScore                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_MatchingImage_RecommendedBattleScore_C::SetRecommendedBattleScore(int32_t RecommendedBattleScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_MatchingImage_RecommendedBattleScore.UMG_MatchingImage_RecommendedBattleScore_C.SetRecommendedBattleScore");
		
		UUMG_MatchingImage_RecommendedBattleScore_C_SetRecommendedBattleScore_Params params {};
		params.RecommendedBattleScore = RecommendedBattleScore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_MatchingImage_RecommendedBattleScore_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_MatchingImage_RecommendedBattleScore_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_MatchingImage_RecommendedBattleScore.UMG_MatchingImage_RecommendedBattleScore_C");
		return ptr;
	}

}


