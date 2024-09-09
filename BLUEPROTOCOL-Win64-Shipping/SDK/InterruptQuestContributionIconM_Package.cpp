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
	 * 		Name   -> Function InterruptQuestContributionIconM.InterruptQuestContributionIconM_C.SetRank
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EQuestContributionRank                             InRank                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInterruptQuestContributionIconM_C::SetRank(EQuestContributionRank InRank)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InterruptQuestContributionIconM.InterruptQuestContributionIconM_C.SetRank");
		
		UInterruptQuestContributionIconM_C_SetRank_Params params {};
		params.InRank = InRank;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInterruptQuestContributionIconM_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInterruptQuestContributionIconM_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InterruptQuestContributionIconM.InterruptQuestContributionIconM_C");
		return ptr;
	}

}


