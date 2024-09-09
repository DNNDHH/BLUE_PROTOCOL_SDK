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
	 * 		Name   -> Function AdventurerRank_BenefitList.AdventurerRank_BenefitList_C.ResetBenefitList 
	 * 		Flags  -> ()
	 */
	void UAdventurerRank_BenefitList_C::ResetBenefitList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventurerRank_BenefitList.AdventurerRank_BenefitList_C.ResetBenefitList ");
		
		UAdventurerRank_BenefitList_C_ResetBenefitList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventurerRank_BenefitList.AdventurerRank_BenefitList_C.AddTextBenefitList 
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UAdventurerRank_BenefitList_C::AddTextBenefitList(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventurerRank_BenefitList.AdventurerRank_BenefitList_C.AddTextBenefitList ");
		
		UAdventurerRank_BenefitList_C_AddTextBenefitList_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdventurerRank_BenefitList.AdventurerRank_BenefitList_C.SetTxtRankUpBenefits
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRank                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsRankup                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAdventurerRank_BenefitList_C::SetTxtRankUpBenefits(int32_t InRank, bool IsRankup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdventurerRank_BenefitList.AdventurerRank_BenefitList_C.SetTxtRankUpBenefits");
		
		UAdventurerRank_BenefitList_C_SetTxtRankUpBenefits_Params params {};
		params.InRank = InRank;
		params.IsRankup = IsRankup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAdventurerRank_BenefitList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAdventurerRank_BenefitList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AdventurerRank_BenefitList.AdventurerRank_BenefitList_C");
		return ptr;
	}

}


