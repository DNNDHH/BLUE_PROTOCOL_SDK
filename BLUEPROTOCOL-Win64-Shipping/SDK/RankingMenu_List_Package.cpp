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
	 * 		Name   -> Function RankingMenu_List.RankingMenu_List_C.ChangePageSoloRankingList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TopIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MaxNum                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBClassType                                       ClassType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URankingMenu_List_C::ChangePageSoloRankingList(int32_t TopIndex, int32_t MaxNum, ESBClassType ClassType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu_List.RankingMenu_List_C.ChangePageSoloRankingList");
		
		URankingMenu_List_C_ChangePageSoloRankingList_Params params {};
		params.TopIndex = TopIndex;
		params.MaxNum = MaxNum;
		params.ClassType = ClassType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RankingMenu_List.RankingMenu_List_C.Set Solo Ranking List
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FRankingData>                        inRankingList                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ESBClassType                                       InClassType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InLastIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsTimeAttack                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Active                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URankingMenu_List_C::SetSoloRankingList(TArray<struct FRankingData>* inRankingList, ESBClassType InClassType, int32_t InLastIndex, bool InIsTimeAttack, bool* Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankingMenu_List.RankingMenu_List_C.Set Solo Ranking List");
		
		URankingMenu_List_C_SetSoloRankingList_Params params {};
		params.InClassType = InClassType;
		params.InLastIndex = InLastIndex;
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
	 * 		Name   -> PredefinedFunction URankingMenu_List_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URankingMenu_List_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RankingMenu_List.RankingMenu_List_C");
		return ptr;
	}

}


