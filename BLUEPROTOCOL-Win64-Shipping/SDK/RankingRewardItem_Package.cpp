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
	 * 		Name   -> Function RankingRewardItem.RankingRewardItem_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRankingRewardData                          RankingRewardData                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               TotallingEnd                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Trophy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URankingRewardItem_C::SetData(const struct FRankingRewardData& RankingRewardData, bool TotallingEnd, bool Trophy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingRewardItem.RankingRewardItem_C.SetData");
		
		URankingRewardItem_C_SetData_Params params {};
		params.RankingRewardData = RankingRewardData;
		params.TotallingEnd = TotallingEnd;
		params.Trophy = Trophy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URankingRewardItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URankingRewardItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RankingRewardItem.RankingRewardItem_C");
		return ptr;
	}

}


