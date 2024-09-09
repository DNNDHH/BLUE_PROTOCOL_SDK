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
	 * 		Name   -> Function UMG_NPCFacilityMark_Icon.UMG_NPCFacilityMark_Icon_C.SetIconType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBFacilityType                                    IconType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_NPCFacilityMark_Icon_C::SetIconType(ESBFacilityType IconType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_NPCFacilityMark_Icon.UMG_NPCFacilityMark_Icon_C.SetIconType");
		
		UUMG_NPCFacilityMark_Icon_C_SetIconType_Params params {};
		params.IconType = IconType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_NPCFacilityMark_Icon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_NPCFacilityMark_Icon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_NPCFacilityMark_Icon.UMG_NPCFacilityMark_Icon_C");
		return ptr;
	}

}


