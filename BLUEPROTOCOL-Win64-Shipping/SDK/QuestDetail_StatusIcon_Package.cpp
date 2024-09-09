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
	 * 		Name   -> Function QuestDetail_StatusIcon.QuestDetail_StatusIcon_C.SetStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EQuestStatus                                       InStatus                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestDetail_StatusIcon_C::SetStatus(EQuestStatus InStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail_StatusIcon.QuestDetail_StatusIcon_C.SetStatus");
		
		UQuestDetail_StatusIcon_C_SetStatus_Params params {};
		params.InStatus = InStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuestDetail_StatusIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuestDetail_StatusIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuestDetail_StatusIcon.QuestDetail_StatusIcon_C");
		return ptr;
	}

}


