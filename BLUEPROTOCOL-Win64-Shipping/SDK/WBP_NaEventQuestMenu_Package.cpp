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
	 * 		Name   -> Function WBP_NaEventQuestMenu.WBP_NaEventQuestMenu_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBNaEventData*                              InEventData                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_NaEventQuestMenu_C::SetData(class USBNaEventData* InEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventQuestMenu.WBP_NaEventQuestMenu_C.SetData");
		
		UWBP_NaEventQuestMenu_C_SetData_Params params {};
		params.InEventData = InEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_NaEventQuestMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_NaEventQuestMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_NaEventQuestMenu.WBP_NaEventQuestMenu_C");
		return ptr;
	}

}


