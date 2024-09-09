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
	 * 		Name   -> Function RankingPartyMenu_List.RankingPartyMenu_List_C.IsMyRank
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CharacterId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FRankingData                                RankingData                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               MyRank                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URankingPartyMenu_List_C::IsMyRank(const class FString& CharacterId, const struct FRankingData& RankingData, bool* MyRank)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingPartyMenu_List.RankingPartyMenu_List_C.IsMyRank");
		
		URankingPartyMenu_List_C_IsMyRank_Params params {};
		params.CharacterId = CharacterId;
		params.RankingData = RankingData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MyRank != nullptr)
			*MyRank = params.MyRank;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingPartyMenu_List.RankingPartyMenu_List_C.Set Party Ranking List
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FRankingData>                        inRankingList                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               InIsTimeAttack                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Active                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URankingPartyMenu_List_C::SetPartyRankingList(TArray<struct FRankingData>* inRankingList, bool InIsTimeAttack, bool* Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingPartyMenu_List.RankingPartyMenu_List_C.Set Party Ranking List");
		
		URankingPartyMenu_List_C_SetPartyRankingList_Params params {};
		params.InIsTimeAttack = InIsTimeAttack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (inRankingList != nullptr)
			*inRankingList = params.inRankingList;
		if (Active != nullptr)
			*Active = params.Active;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URankingPartyMenu_List_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URankingPartyMenu_List_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RankingPartyMenu_List.RankingPartyMenu_List_C");
		return ptr;
	}

}


