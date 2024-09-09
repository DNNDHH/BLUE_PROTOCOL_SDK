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
	 * 		Name   -> Function QuestDetail_ProgressListItem.QuestDetail_ProgressListItem_C.SetInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ConditionText                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      ProgressText                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               bClear                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuestDetail_ProgressListItem_C::SetInfo(const class FString& ConditionText, const class FString& ProgressText, bool bClear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail_ProgressListItem.QuestDetail_ProgressListItem_C.SetInfo");
		
		UQuestDetail_ProgressListItem_C_SetInfo_Params params {};
		params.ConditionText = ConditionText;
		params.ProgressText = ProgressText;
		params.bClear = bClear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuestDetail_ProgressListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuestDetail_ProgressListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuestDetail_ProgressListItem.QuestDetail_ProgressListItem_C");
		return ptr;
	}

}


