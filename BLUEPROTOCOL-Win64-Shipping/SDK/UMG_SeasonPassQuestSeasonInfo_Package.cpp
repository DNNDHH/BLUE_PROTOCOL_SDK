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
	 * 		Name   -> Function UMG_SeasonPassQuestSeasonInfo.UMG_SeasonPassQuestSeasonInfo_C.SetData
	 * 		Flags  -> ()
	 */
	void UUMG_SeasonPassQuestSeasonInfo_C::SetData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestSeasonInfo.UMG_SeasonPassQuestSeasonInfo_C.SetData");
		
		UUMG_SeasonPassQuestSeasonInfo_C_SetData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_SeasonPassQuestSeasonInfo.UMG_SeasonPassQuestSeasonInfo_C.ExecuteUbergraph_UMG_SeasonPassQuestSeasonInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_SeasonPassQuestSeasonInfo_C::ExecuteUbergraph_UMG_SeasonPassQuestSeasonInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_SeasonPassQuestSeasonInfo.UMG_SeasonPassQuestSeasonInfo_C.ExecuteUbergraph_UMG_SeasonPassQuestSeasonInfo");
		
		UUMG_SeasonPassQuestSeasonInfo_C_ExecuteUbergraph_UMG_SeasonPassQuestSeasonInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_SeasonPassQuestSeasonInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_SeasonPassQuestSeasonInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_SeasonPassQuestSeasonInfo.UMG_SeasonPassQuestSeasonInfo_C");
		return ptr;
	}

}


