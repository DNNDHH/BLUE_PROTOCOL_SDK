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
	 * 		Name   -> Function QuestDetail_ReceiveConditionItem.QuestDetail_ReceiveConditionItem_C.SetCondition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InCondition                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               bIsSatisfied                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuestDetail_ReceiveConditionItem_C::SetCondition(const class FText& InCondition, bool bIsSatisfied)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail_ReceiveConditionItem.QuestDetail_ReceiveConditionItem_C.SetCondition");
		
		UQuestDetail_ReceiveConditionItem_C_SetCondition_Params params {};
		params.InCondition = InCondition;
		params.bIsSatisfied = bIsSatisfied;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuestDetail_ReceiveConditionItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuestDetail_ReceiveConditionItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuestDetail_ReceiveConditionItem.QuestDetail_ReceiveConditionItem_C");
		return ptr;
	}

}


