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
	 * 		Name   -> Function QuestList_RepeatCountIcon.QuestList_RepeatCountIcon_C.SetRepeatCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CountNum                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestList_RepeatCountIcon_C::SetRepeatCount(int32_t CountNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestList_RepeatCountIcon.QuestList_RepeatCountIcon_C.SetRepeatCount");
		
		UQuestList_RepeatCountIcon_C_SetRepeatCount_Params params {};
		params.CountNum = CountNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuestList_RepeatCountIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuestList_RepeatCountIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuestList_RepeatCountIcon.QuestList_RepeatCountIcon_C");
		return ptr;
	}

}


